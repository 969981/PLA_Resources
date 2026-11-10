/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032cdac; name: FUN_0032cdac
 */


void FUN_0032cdac(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  lVar3 = param_1[2];
  *(long *)(lVar3 + 8) = (*(long *)(lVar3 + 0x10) - param_1[6]) + param_1[5];
  lVar3 = FUN_0032c5c8(*param_1,lVar3,param_2);
  param_1[2] = lVar3;
  uVar1 = *(ulong *)(lVar3 + 8);
  uVar4 = *(ulong *)(lVar3 + 0x10);
  if (uVar4 < uVar1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/arena_impl.h"
                 ,0x104);
                    /* try { // try from 0032ce14 to 0032ce27 has its CatchHandler @ 0032ce78 */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: n <= size_: ");
                    /* try { // try from 0032ce28 to 0032ce2f has its CatchHandler @ 0032ce74 */
    FUN_0030f41c(auStack_28,uVar2);
    FUN_0030f658(auStack_60);
    uVar4 = *(ulong *)(param_1[2] + 0x10);
    lVar5 = param_1[2];
  }
  else {
    lVar5 = lVar3;
  }
  param_1[5] = lVar3 + uVar1;
  param_1[6] = lVar5 + uVar4;
  FUN_0032c744(param_1,param_2);
  return;
}


