/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00329acc; name: FUN_00329acc
 */


void FUN_00329acc(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00329b20 to 00329b33 has its CatchHandler @ 00329bd0 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00329b34 to 00329b3b has its CatchHandler @ 00329bcc */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    iVar1 = *(int *)(param_1 + 4);
    lVar5 = *(long *)(param_1 + 8);
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00329b6c to 00329b7f has its CatchHandler @ 00329bc8 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00329b80 to 00329b87 has its CatchHandler @ 00329bc4 */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    lVar2 = *(long *)(param_1 + 8);
  }
  else {
    lVar2 = lVar5;
  }
  uVar4 = -((param_3 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3;
  uVar3 = *(undefined8 *)(lVar5 + (long)param_2 * 8);
  *(undefined8 *)(lVar5 + (long)param_2 * 8) = *(undefined8 *)(lVar2 + uVar4);
  *(undefined8 *)(lVar2 + uVar4) = uVar3;
  return;
}


