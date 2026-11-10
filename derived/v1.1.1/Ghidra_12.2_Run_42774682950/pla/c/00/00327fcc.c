/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00327fcc; name: FUN_00327fcc
 */


void FUN_00327fcc(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00328020 to 00328033 has its CatchHandler @ 003280d0 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00328034 to 0032803b has its CatchHandler @ 003280cc */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    iVar1 = *(int *)(param_1 + 4);
    lVar6 = *(long *)(param_1 + 8);
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 0032806c to 0032807f has its CatchHandler @ 003280c8 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00328080 to 00328087 has its CatchHandler @ 003280c4 */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    lVar4 = lVar6;
  }
  uVar5 = -((param_3 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  uVar2 = *(undefined4 *)(lVar6 + (long)param_2 * 4);
  *(undefined4 *)(lVar6 + (long)param_2 * 4) = *(undefined4 *)(lVar4 + uVar5);
  *(undefined4 *)(lVar4 + uVar5) = uVar2;
  return;
}


