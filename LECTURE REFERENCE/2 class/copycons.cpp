#include <iostream>
#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
	private:
		string studentName;
		double *testScores;
		int numTestScores;
		void createTestScoresArray(int size)
		{
			numTestScores =size;
			testScores = new double[size];
			for (int i = 0; i < size; ++i)
			{
				testScores[i] = DEFAULT_SCORE;
			}
		}
	public:
		StudentTestScores(string name, int numScores)
		{
			studentName = name;
			createTestScoresArray(numScores);
		}
		/*
		StudentTestSCores(const StudentTestScores &obj) //using const
		{
			studentName = obj.studentName;
			numTestScores = obj.numTestScores;
			testScores = new double[numTestScores];
			for (int i = 0; i < numTestScores; ++i)
			{
				testScores[i]=obj.testScores[i];
			}
		}
		*/
		~StudentTestScores()
		{
			delete [] testScores;
		}
		void setTestScore(double score,int index)
		{
			testScores[index]= score;
		}
		void setStudentName(string name)
		{
			studentName =name;
		}
		string getStudentName() const
		{
			return studentName;
		}
		int getStudentScores() const
		{
			return numTestScores;
		}
		double getTestScore(int index) const
		{
			return testScores[index];
		}
};


int main()
{
	StudentTestScores student1("Ram Nepal", 8);
	StudentTestScores student2 = student1;
	
	cout<<"name of student "<<student1.getStudentName()<<endl
		<<"Student Score "<<student1.getStudentScores()<<endl;
	int size = 8;
	cout<<"Test Scores are for student1 are";
	for(int index =0; index<size;index++){
			cout<<student1.getTestScore(index)<<endl;
	}
	
	cout<<"name of student "<<student2.getStudentName()<<endl
		<<"Student Score "<<student2.getStudentScores()<<endl;
	size = 8;
	cout<<"Test Scores are for student1 are";
	for(int index =0; index<size;index++){
			cout<<student2.getTestScore(index)<<endl;
	}
	return 0;
}
