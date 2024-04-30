#pragma once

class Vector {
public:
	virtual Vector normalized();
	virtual float length() { return NULL; };
};