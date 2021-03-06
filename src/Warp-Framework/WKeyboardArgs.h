// � 2018 NIREX ALL RIGHTS RESERVED

#ifndef _W_KEYBOARD_ARGS_H_
#define _W_KEYBOARD_ARGS_H_

#include "WEventArgs.h"

typedef unsigned char WKey;

class WKeyboardArgs : public WEventArgs
{
public:
	WKeyboardArgs(WKey key);
	~WKeyboardArgs() = default;
	const WKey GetKey(void) const;

private:
	WKey m_Key;
};

#endif // !_W_KEYBOARD_ARGS_H_
