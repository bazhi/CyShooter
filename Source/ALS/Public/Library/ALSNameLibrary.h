#pragma once

#include "CoreMinimal.h"
#define NAME_DEFINE(__Name__) static const FName __Name__ = TEXT(PREPROCESSOR_TO_STRING(__Name__))
#define NAME_DEFINE_V2(__Name__, __Value__) static const FName __Name__ = TEXT(PREPROCESSOR_TO_STRING(__Value__))
#define NAME_DEFINE_GROUP(__Group__, __Name__)	static const FName __Name__ = TEXT(PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(PREPROCESSOR_JOIN(__Group__, _), __Name__)))
#define INIT_PROP(Name) (Name=AnimAsset->Name)


namespace ALS
{
	namespace Input
	{
		NAME_DEFINE_V2(MoveFB, "MoveForward/Backwards");
		NAME_DEFINE_V2(MoveLR, "MoveRight/Left");
		NAME_DEFINE_V2(LookUD, "LookUp/Down");
		NAME_DEFINE_V2(LookLR, "LookLeft/Right");
		NAME_DEFINE(JumpAction);
		NAME_DEFINE(StanceAction);
		NAME_DEFINE(WalkAction);
		NAME_DEFINE(RagdollAction);
		NAME_DEFINE(SelectRotationMode_1);
		NAME_DEFINE(SelectRotationMode_2);
		NAME_DEFINE(SprintAction);
		NAME_DEFINE(AimAction);
		NAME_DEFINE(CameraAction);
	}
}
