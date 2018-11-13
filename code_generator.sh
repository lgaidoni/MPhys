export DIRECTORY=`pwd`
cd Code

python Histogram_Book_Generation.py
python File_Searcher.py
python Chain_Writer.py

cd $DIRECTORY
