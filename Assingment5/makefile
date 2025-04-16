compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) -c $(flags)
link = $(compiler) $(flags)

style : SongRecording.h
	cpplint SongRecording.h

style1 : SongRecording.cc
	cpplint SongRecording.cc

style2 : StreamingTrack.h
	cpplint StreamingTrack.h

style3 : StreamingTrack.cc
	cpplint StreamingTrack.cc

SongRecording.o : SongRecording.cc SongRecording.h
	$(compile) $<

testTitle : testTitle.cc SongRecording.o
	$(link) $^
	./a.out

testTrackLength : testTrackLength.cc SongRecording.o
	$(link) $^
	./a.out

testArtist : testArtist.cc SongRecording.o
	$(link) $^
	./a.out

testSoundRecordingConstructors1 : testSoundRecordingConstructors1.cc SongRecording.o
	$(link) $^
	./a.out

testSoundRecordingCopyConstructor : testSoundRecordingCopyConstructor.cc SongRecording.o
	$(link) $^
	./a.out

testSoundRecordingAssignment : testSoundRecordingAssignment.cc SongRecording.o
	$(link) $^
	./a.out

StreamingTrack.o : StreamingTrack.cc StreamingTrack.h
	$(compile) $<

testStreams : testStreams.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

testAddGenre : testAddGenre.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

testRemoveAndAddGenre : testRemoveAndAddGenre.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

testIsGenre : testIsGenre.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

testStreamingTrackConstructors1 : testStreamingTrackConstructors1.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

testStreamingTrackCopyConstructor : testStreamingTrackCopyConstructor.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

testStreamingTrackAssignment : testStreamingTrackAssignment.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

testStreamingTrackBaseToDerivedConstructor : testStreamingTrackBaseToDerivedConstructor.cc StreamingTrack.o SongRecording.o
	$(link) $^
	./a.out

clean :
	rm *.o a.out
