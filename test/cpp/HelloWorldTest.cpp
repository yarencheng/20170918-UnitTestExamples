
#include "HelloWorld.hpp"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

using namespace ::std;
using namespace ::testing;

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::Invoke;
using ::testing::_;

namespace example { namespace HelloWorldTest {

class HelloWorldTest  : public Test {
protected:

	virtual void SetUp() {
	}

	virtual void TearDown() {
	}
};


TEST_F(HelloWorldTest, hello){


}



}}
