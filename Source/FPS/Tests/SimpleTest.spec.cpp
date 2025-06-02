// Copyright Epic Games, Inc. All Rights Reserved.

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

// DEFINE_SPEC(FTestClassName, "Category.TestName", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter |
// EAutomationTestFlags::HighPriority)

BEGIN_DEFINE_SPEC(FSimpleTest, "FPSGame.SimpleTests",
    EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)
END_DEFINE_SPEC(FSimpleTest)

BEGIN_DEFINE_SPEC(FSimpleTest2, "FPSGame.SimpleTests",
    EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)
END_DEFINE_SPEC(FSimpleTest2)

void FSimpleTest::Define() 
{
    Describe("Simple test cases",
        [this]()
        {
            BeforeEach(
                [this]()
                {
                });

            It("SimpleTest",
                [this]()
                {
                    TestTrueExpr(1+1==2);
                });

            AfterEach([this]() {});
        });
}

void FSimpleTest2::Define() 
{
    Describe("Simple test cases",
        [this]()
        {
            BeforeEach(
                [this]()
                {
                });

            It("SimpleTest2",
                [this]()
                {
                    TestTrueExpr(2+1==3);
                });

            AfterEach([this]() {});
        });
}

#endif
