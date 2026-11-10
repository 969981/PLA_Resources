/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003229a8; name: FUN_003229a8
 */


long FUN_003229a8(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_80 [48];
  undefined1 auStack_48 [8];
  
  param_3 = param_3 & 0xffffffff;
  iVar2 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  do {
    if ((int)param_3 <= iVar2) {
      FUN_0030f640(auStack_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/parse_context.h"
                   ,0x12a);
                    /* try { // try from 00322a0c to 00322a1b has its CatchHandler @ 00322a9c */
      uVar1 = FUN_0030f3ac(auStack_80,"CHECK failed: size > chunk_size: ");
                    /* try { // try from 00322a1c to 00322a23 has its CatchHandler @ 00322a98 */
      FUN_0030f41c(auStack_48,uVar1);
      FUN_0030f658(auStack_80);
    }
    if (*(int *)(param_1 + 0x1c) == 0x10) {
      return 0;
    }
    auVar3 = FUN_00322600(param_1,param_2 + iVar2,0xffffffff);
    param_2 = auVar3._0_8_;
    if ((auVar3._8_8_ & 1) != 0) {
      return 0;
    }
    param_3 = (long)(int)param_3 - (long)iVar2;
    iVar2 = (*(int *)(param_1 + 8) - auVar3._0_4_) + 0x10;
  } while (iVar2 < (int)param_3);
  return param_2 + param_3;
}


