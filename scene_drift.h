#pragma once
#include "scene_base.h"

class DriftPoint : public SceneBase//定点漂移
{
public:
	DriftPoint();
	void showScene();//显示
	bool planning_process() override;//整个过程

public:
	unique_ptr<Cone> cone;//锥桶
	int lap = 0;//绕桩圈数
};

class DriftParking : public SceneBase//漂移泊车
{
public:
	DriftParking();
	void showScene();//显示
	bool planning_process() override;//整个过程

public:
	unique_ptr<CarObsStatic> ob1;
	unique_ptr<CarObsStatic> ob2;
	double park_length = 0.0;//库的长度
};