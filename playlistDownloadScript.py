from pytube import Playlist
import os

playlist_url = 'https://youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&si=uX1xS03n6tLi70V1'
playlist = Playlist(playlist_url)

destination_dir = 'E:\DP Striver'  # Replace with your desired directory

os.makedirs(destination_dir, exist_ok=True)

for video in playlist.videos:
    print(f'Downloading: {video.title}')
    video_stream_720p = video.streams.filter(res='720p').first()
    
    if not video_stream_720p:
        # If 720p is not available, get the next best stream available with resolution greater than 720p
        video_stream = video.streams.filter(resolution="720p").order_by('resolution').desc().first()
        if video_stream:
            video_stream = video.streams.filter(resolution="720p").order_by('resolution').desc().first()
        else:
            video_stream = video.streams.order_by('resolution').desc().first()
    else:
        video_stream = video_stream_720p
    
    if video_stream:
        video_stream.download(output_path=destination_dir)
        print(f'Downloaded in {video_stream.resolution}.')
    else:
        print('No suitable streams available for download.')

print('Download completed!')