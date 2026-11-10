/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00389ca0; name: FUN_00389ca0
 */


void FUN_00389ca0(long param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar4 = FUN_0038fe58(param_1 + 8,param_3);
  puVar1 = (uint *)(param_2 + (uVar4 & 0xffffffff));
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  if (uVar2 == uVar6) {
    FUN_00329be4(puVar1,uVar2 + 1);
    uVar6 = puVar1[1];
  }
  uVar3 = *param_4;
  if ((int)uVar6 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00389d04 to 00389d17 has its CatchHandler @ 00389d4c */
    uVar5 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00389d18 to 00389d1f has its CatchHandler @ 00389d48 */
    FUN_0030f41c(auStack_58,uVar5);
    FUN_0030f658(auStack_50);
  }
  *(undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 4) = uVar3;
  *puVar1 = uVar2 + 1;
  return;
}


