/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00322ab0; name: FUN_00322ab0
 */


long FUN_00322ab0(long param_1,long param_2,ulong param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [48];
  
  uVar5 = param_3 & 0xffffffff;
  if ((*param_4 & 1) == 0) {
    param_4[0] = 0;
    param_4[1] = 0;
  }
  else {
    **(undefined1 **)(param_4 + 0x10) = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  iVar4 = (int)param_3;
  if ((long)iVar4 <= (lVar2 - param_2) + (long)*(int *)(param_1 + 0x1c)) {
    if ((*param_4 & 1) == 0) {
      uVar3 = (ulong)(*param_4 >> 1);
    }
    else {
      uVar3 = *(ulong *)(param_4 + 8);
    }
    if (49999999 < iVar4) {
      iVar4 = 50000000;
    }
    FUN_0030ff7c(param_4,uVar3 + (long)iVar4);
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar4 = ((int)lVar2 - (int)param_2) + 0x10;
  do {
    if ((int)uVar5 <= iVar4) {
      FUN_0030f640(auStack_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/parse_context.h"
                   ,0x12a);
                    /* try { // try from 00322b7c to 00322b8b has its CatchHandler @ 00322c2c */
      uVar1 = FUN_0030f3ac(auStack_80,"CHECK failed: size > chunk_size: ");
                    /* try { // try from 00322b8c to 00322b93 has its CatchHandler @ 00322c28 */
      FUN_0030f41c(auStack_88,uVar1);
      FUN_0030f658(auStack_80);
    }
    lVar2 = (long)iVar4;
    FUN_002e4094(param_4,param_2,lVar2);
    if (*(int *)(param_1 + 0x1c) == 0x10) {
      return 0;
    }
    auVar6 = FUN_00322600(param_1,param_2 + lVar2,0xffffffff);
    param_2 = auVar6._0_8_;
    if ((auVar6._8_8_ & 1) != 0) {
      return 0;
    }
    uVar5 = (int)uVar5 - lVar2;
    iVar4 = (*(int *)(param_1 + 8) - auVar6._0_4_) + 0x10;
  } while (iVar4 < (int)uVar5);
  FUN_002e4094(param_4,param_2,uVar5);
  return param_2 + uVar5;
}


