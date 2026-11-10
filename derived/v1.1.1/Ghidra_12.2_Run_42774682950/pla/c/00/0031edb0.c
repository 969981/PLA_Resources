/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031edb0; name: FUN_0031edb0
 */


/* WARNING: Removing unreachable block (ram,0x0031eeac) */

undefined8 FUN_0031edb0(long *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte local_a0 [16];
  undefined8 local_90;
  byte *local_70;
  undefined8 uStack_68;
  undefined8 local_40;
  undefined2 local_38;
  byte local_36;
  undefined1 auStack_28 [8];
  
  if ((*param_2 & 1) == 0) {
    uVar7 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  if (uVar3 >> 0x1f != 0) {
    FUN_0030f640(&local_70,2,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message_lite.cc"
                 ,0x1c9);
                    /* try { // try from 0031ee18 to 0031ee23 has its CatchHandler @ 0031efb0 */
    (**(code **)(*param_1 + 0x10))(local_a0,param_1);
                    /* try { // try from 0031ee24 to 0031ee47 has its CatchHandler @ 0031efc4 */
    uVar4 = FUN_0030f3e8(&local_70,local_a0);
    uVar4 = FUN_0030f3ac(uVar4," exceeded maximum protobuf size of 2GB: ");
    uVar4 = FUN_0030f5e4(uVar4,uVar3);
                    /* try { // try from 0031ee48 to 0031ee4f has its CatchHandler @ 0031efa0 */
    FUN_0030f41c(auStack_28,uVar4);
    if ((local_a0[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    FUN_0030f658(&local_70);
    return 0;
  }
  bVar2 = *param_2;
  uVar1 = uVar3 + uVar7;
  if ((bVar2 & 1) == 0) {
    lVar6 = uVar1 - (bVar2 >> 1);
    if (bVar2 >> 1 <= uVar1 && lVar6 != 0) goto LAB_0031eebc;
LAB_0031ee90:
    if ((bVar2 & 1) != 0) {
      *(undefined1 *)(*(long *)(param_2 + 0x10) + uVar1) = 0;
      *(ulong *)(param_2 + 8) = uVar1;
      bVar2 = *param_2;
      goto joined_r0x0031eecc;
    }
    param_2[uVar1 + 1] = 0;
    *param_2 = (byte)((int)uVar1 << 1);
  }
  else {
    lVar6 = uVar1 - *(ulong *)(param_2 + 8);
    if (uVar1 < *(ulong *)(param_2 + 8) || lVar6 == 0) goto LAB_0031ee90;
LAB_0031eebc:
    FUN_002e6bd4(param_2,lVar6,0);
    bVar2 = *param_2;
joined_r0x0031eecc:
    if ((bVar2 & 1) != 0) {
      param_2 = *(byte **)(param_2 + 0x10);
      goto LAB_0031eef0;
    }
  }
  param_2 = param_2 + 1;
LAB_0031eef0:
  param_2 = param_2 + uVar7;
  local_38 = 0;
  uStack_68 = 0;
  local_36 = *PTR_DAT_04373a90 & 1;
  local_40 = 0;
  local_70 = param_2 + (int)uVar3;
  pbVar5 = (byte *)(**(code **)(*param_1 + 0x60))(param_1,param_2,&local_70);
  if (param_2 + (int)uVar3 != pbVar5) {
    FUN_0030f640(local_a0,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message_lite.cc"
                 ,0x168);
                    /* try { // try from 0031ef4c to 0031ef5f has its CatchHandler @ 0031ef8c */
    uVar4 = FUN_0030f3ac(local_a0,"CHECK failed: target + size == res: ");
                    /* try { // try from 0031ef60 to 0031ef67 has its CatchHandler @ 0031ef88 */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(local_a0);
  }
  return 1;
}


