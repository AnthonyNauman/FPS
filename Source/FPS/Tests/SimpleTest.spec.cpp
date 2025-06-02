// Copyright Epic Games, Inc. All Rights Reserved.

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

// DEFINE_SPEC(FTestClassName, "Category.TestName", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter |
// EAutomationTestFlags::HighPriority)

BEGIN_DEFINE_SPEC(FSimpleTest, "FPSGame.SimpleTests",
    EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)

END_DEFINE_SPEC(FSimpleTest)

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

#endif
