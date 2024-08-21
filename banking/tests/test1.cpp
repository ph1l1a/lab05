#include "../Account.h"

#include <gtest/gtest.h>

TEST(AccountTests, UnlockedBalanceChange)
{
	bool caught_exception = false;
	try
	{
		Account acc(1, 100);
		acc.ChangeBalance(1000);

	}
	catch(...)
	{
		caught_exception = true;
	}
	
	EXPECT_EQ(caught_exception, true);
	
}
