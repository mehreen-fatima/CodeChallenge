#include <iostream>
using namespace std;
class Question
{
    private:
    string questionText;
    string answer;
    public:
    /*Question(string Q, string A){
        questionText=Q;
        answer=A;
    }*/
    void setQuestionText(string Q)
    {
        questionText=Q;
    }
    void setAnswer(string A)
    {
        answer=A;
    }
    //getter
    string getQuestionText ()
    {
        return questionText;
    }
    string getAnswer()
    {
        return answer;
    }
};

int main()
{
    int score=0;
    Question question[6];
    question[0].setQuestionText("What is the national game of Pakistan?");
    question[0].setAnswer("Hockey");
    question[1].setQuestionText("which is the capital city of Pakistan?");
    question[1].setAnswer("Islamabad");
    question[2].setQuestionText("what is capital city of England?");
    question[2].setAnswer("London");
    question[3].setQuestionText("Which animal is man's best friend?");
    question[3].setAnswer("Dog");
    question[4].setQuestionText("who is the writer of Romeo and Juliet?");
    question[4].setAnswer("Shakespear");
    question[5].setQuestionText("what is capital city of India?");
    question[5].setAnswer("Mumbai");
    string answer;
    for(int i=0;i<6;i++)
    {
        cout<<question[i].getQuestionText();
        cin>>answer;
        if (question[i].getAnswer()==answer)
        {
            cout<<"yeah!!correct answer!"<<endl;
            score+=5;
        }else
        {
            cout<<"oooh!!Wrong answer"<<endl;
        }

    }
    cout<<"your score is "<<score<<endl;
}
