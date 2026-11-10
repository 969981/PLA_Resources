/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003885d8; name: FUN_003885d8
 */


void FUN_003885d8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar3 = FUN_0038fe58(param_1 + 8,param_3);
  puVar1 = (uint *)(param_2 + (uVar3 & 0xffffffff));
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  if (uVar2 == uVar5) {
    FUN_003280e4(puVar1,uVar2 + 1);
    uVar5 = puVar1[1];
  }
  uVar6 = *param_4;
  if ((int)uVar5 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 0038863c to 0038864f has its CatchHandler @ 00388684 */
    uVar4 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00388650 to 00388657 has its CatchHandler @ 00388680 */
    FUN_0030f41c(auStack_58,uVar4);
    FUN_0030f658(auStack_50);
  }
  *(undefined8 *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8) = uVar6;
  *puVar1 = uVar2 + 1;
  return;
}


