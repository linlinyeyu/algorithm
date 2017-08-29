#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct score {
	string name;
	int avg;
	int comment_score;
	int paper_count;
	char is_cadre;
	char is_west;
	int sum = 0;
};

//计算总奖金
void getMax(score *stud,int length) {
	int total = 0;
	for (int i = 0; i < length; i++) {
		score per = stud[i];
		if (per.avg > 80 && per.paper_count > 0){
			stud[i].sum += 8000;
		}
		if (per.avg > 85 && per.comment_score > 80){
			stud[i].sum += 4000;
		}
		if (per.avg > 90){
			stud[i].sum += 2000;
		}
		if (per.avg > 85 && per.is_west == 'Y'){
			stud[i].sum += 1000;
		}
		if (per.comment_score > 80 && per.is_cadre == 'Y')
		{
			stud[i].sum += 850;
		}
		total += stud[i].sum;
	}

	score max = stud[0];
	for (int i = 0; i < length; i++)
	{
		if (stud[i].sum > max.sum) {
			max = stud[i];
		}
	}

	cout << max.name<<endl;
	cout << max.sum<<endl;
	cout << total << endl;
}

//得到结果
void result() {
	//学生总数
	int number = 0;
	string name;
	int avg, com, count;
	char is_mo, is_west;
	cin >> number;
	score *stud = new score[number];
	for (int i = 0; i < number; i++)
	{
		cin >> stud[i].name >> stud[i].avg >> stud[i].comment_score >> stud[i].is_cadre >> stud[i].is_west >> stud[i].paper_count;
	}

	getMax(stud, number);
}