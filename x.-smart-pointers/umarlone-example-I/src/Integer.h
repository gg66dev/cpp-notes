#pragma once

class Integer
{
private:
	int value;
public:
	Integer();
	Integer(int value);
	~Integer();
	void SetValue(int value);
	int GetValue();
};
