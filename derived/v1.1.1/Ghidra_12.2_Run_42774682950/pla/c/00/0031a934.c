/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031a934; name: FUN_0031a934
 */


void FUN_0031a934(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  iVar3 = FUN_0031aab8(param_2);
  if (*(int *)(param_1 + 0x18) == iVar3) {
    switch(iVar3) {
    case 1:
    case 3:
switchD_0031a980_caseD_1:
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      return;
    case 2:
    case 4:
      goto switchD_0031a980_caseD_2;
    case 5:
    case 6:
    case 8:
    case 10:
      goto switchD_0031a980_caseD_5;
    case 7:
      goto switchD_0031a980_caseD_7;
    case 9:
      goto switchD_0031a980_caseD_9;
    default:
      goto switchD_0031a980_default;
    }
  }
  if ((*(int *)(param_1 + 0x18) == 9) && ((*param_1 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x18) = iVar3;
  switch(iVar3) {
  case 1:
  case 3:
    goto switchD_0031a980_caseD_1;
  case 2:
  case 4:
switchD_0031a980_caseD_2:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    return;
  case 5:
  case 6:
  case 8:
  case 10:
switchD_0031a980_caseD_5:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0xd4);
                    /* try { // try from 0031a9e4 to 0031a9f7 has its CatchHandler @ 0031aaa4 */
    uVar4 = FUN_0030f3ac(auStack_50,"Unsupported");
                    /* try { // try from 0031a9f8 to 0031a9ff has its CatchHandler @ 0031aaa0 */
    FUN_0030f41c(auStack_58,uVar4);
    FUN_0030f658(auStack_50);
    return;
  case 7:
switchD_0031a980_caseD_7:
    *param_1 = *param_2;
    return;
  case 9:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
switchD_0031a980_caseD_9:
    if (param_1 == param_2) {
      return;
    }
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    FUN_00291910(param_1,pbVar2,uVar1);
    return;
  default:
switchD_0031a980_default:
    return;
  }
}


