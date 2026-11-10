/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00322c40; name: FUN_00322c40
 */


long FUN_00322c40(long param_1,long param_2,ulong param_3,byte *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [48];
  
  lVar3 = *(long *)(param_1 + 8);
  uVar5 = param_3 & 0xffffffff;
  iVar2 = (int)param_3;
  if ((long)iVar2 <= (lVar3 - param_2) + (long)*(int *)(param_1 + 0x1c)) {
    if ((*param_4 & 1) == 0) {
      uVar4 = (ulong)(*param_4 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_4 + 8);
    }
    if (49999999 < iVar2) {
      iVar2 = 50000000;
    }
    FUN_0030ff7c(param_4,uVar4 + (long)iVar2);
    lVar3 = *(long *)(param_1 + 8);
  }
  iVar2 = ((int)lVar3 - (int)param_2) + 0x10;
  do {
    if ((int)uVar5 <= iVar2) {
      FUN_0030f640(auStack_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/parse_context.h"
                   ,0x12a);
                    /* try { // try from 00322cf0 to 00322cff has its CatchHandler @ 00322da0 */
      uVar1 = FUN_0030f3ac(auStack_80,"CHECK failed: size > chunk_size: ");
                    /* try { // try from 00322d00 to 00322d07 has its CatchHandler @ 00322d9c */
      FUN_0030f41c(auStack_88,uVar1);
      FUN_0030f658(auStack_80);
    }
    lVar3 = (long)iVar2;
    FUN_002e4094(param_4,param_2,lVar3);
    if (*(int *)(param_1 + 0x1c) == 0x10) {
      return 0;
    }
    auVar6 = FUN_00322600(param_1,param_2 + lVar3,0xffffffff);
    param_2 = auVar6._0_8_;
    if ((auVar6._8_8_ & 1) != 0) {
      return 0;
    }
    uVar5 = (int)uVar5 - lVar3;
    iVar2 = (*(int *)(param_1 + 8) - auVar6._0_4_) + 0x10;
  } while (iVar2 < (int)uVar5);
  FUN_002e4094(param_4,param_2,uVar5);
  return param_2 + uVar5;
}


