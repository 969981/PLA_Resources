/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00324e58; name: FUN_00324e58
 */


void FUN_00324e58(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar4 = (uint *)*param_1;
  uVar1 = *puVar4;
  uVar3 = puVar4[1];
  if (uVar1 == uVar3) {
    FUN_00325870(puVar4,uVar1 + 1);
    uVar3 = puVar4[1];
  }
  if ((int)uVar3 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00324eac to 00324ebf has its CatchHandler @ 00324ef4 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00324ec0 to 00324ec7 has its CatchHandler @ 00324ef0 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  *(bool *)(*(long *)(puVar4 + 2) + (ulong)uVar1) = param_2 != 0;
  *puVar4 = uVar1 + 1;
  return;
}


