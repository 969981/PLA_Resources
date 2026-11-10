/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e1b4; name: FUN_0031e1b4
 */


int FUN_0031e1b4(long *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (0x7fffffef < param_3) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/parse_context.h"
                 ,0x80);
                    /* try { // try from 0031e1f0 to 0031e203 has its CatchHandler @ 0031e24c */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: limit >= 0 && limit <= INT_MAX - kSlopBytes: ");
                    /* try { // try from 0031e204 to 0031e20b has its CatchHandler @ 0031e248 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  param_3 = (param_2 - (int)param_1[1]) + param_3;
  iVar1 = *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = param_3;
  *param_1 = param_1[1] + (long)(int)(param_3 & (int)param_3 >> 0x1f);
  return iVar1 - param_3;
}


