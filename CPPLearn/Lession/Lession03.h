#pragma once
#include "string"
namespace L03
{
	void ArrayTestFun00();


	void CharTestFun00();

	void CharTestFun01();

	void CharTestFun03();

	void CharTestFun04();

	void CharTestFun04(int InNum);

	void StringTestFun00();

	void StringTestFun01();




	struct Interger {
		float MyFloat;

		int num;
		std::string AString;

	};
	struct BasketballTeam {



		char TeamName[10];
		float  Money;
		int TallNum[5];


	};


	void StructTestFun00();

	void StructTestFun01();

	BasketballTeam GetABasketballTeam();

	void DealtWithBasketballTeam(BasketballTeam InBasketballTeam);

	BasketballTeam DealtWithBasketballTeam_Ret(BasketballTeam InBasketballTeam);


	void StructTestFun02();

	void Math_Add(int InNumA, int InNumb);

	int Math_Add_Ret(int InNumA, int InNumb);


	void StructDeclare();

	void ArrayStruct();

	void BitTest();

	enum Color {
		red=1, orange=2, black=4, white=8,Max = 100

	};

	void EnumTestFun00();

	void PointTestFun01();

	void PointTestFun02();
	void PointTestFun03();



	void PointNewTestFun00();


	void PointNewAndDeleteTestFun00();

	void PointNewAndDeleteTestFun01();

	void PointNewAndDeleteTestFun02();

	void PointMath();


	void PointMath01();

	void PointAndArrayFun00();

	void PointAndArrayFun01();

	struct MyStruct9918
	{
		int c = 11;

		MyStruct9918();

		~MyStruct9918();
	};

	void PointAndStructFun00();

	void PointAndStructFun01();
	MyStruct9918* PointAndStructFun02();

	static double MyDouble = 100.520;

	void PointStrcutArrayFun00();

	void ArrayAndVectorFun00();


}
