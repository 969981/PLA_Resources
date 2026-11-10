/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038b32c; name: FUN_0038b32c
 */


void FUN_0038b32c(long *param_1,long param_2,long param_3,byte *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined **local_80;
  long *plStack_78;
  long local_50;
  undefined *puStack_48;
  undefined ***local_38;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"AddString","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"AddString",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar5 = PTR_LAB_04373a98;
  puVar6 = *(ulong **)(param_3 + 0x30);
  if (puVar6 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_04373a98;
    local_50 = param_3;
    if (*puVar6 != 0xffffffffffffffff) {
      local_80 = &puStack_48;
      plStack_78 = &local_50;
      local_38 = &local_80;
      std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 9) {
    FUN_003871e0(*param_1,param_3,"AddString",9);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    pbVar8 = (byte *)FUN_0038b5f4(param_1,param_2,param_3);
    if ((*pbVar8 & 1) == 0) {
      pbVar8[0] = 0;
      pbVar8[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar8 + 0x10) = 0;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      if ((*pbVar8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar8 + 0x10));
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8[4] = 0;
        pbVar8[5] = 0;
        pbVar8[6] = 0;
        pbVar8[7] = 0;
      }
    }
    uVar9 = *(undefined8 *)(param_4 + 8);
    uVar7 = *(undefined8 *)param_4;
    *(undefined8 *)(pbVar8 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(pbVar8 + 8) = uVar9;
    *(undefined8 *)pbVar8 = uVar7;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038b440 to 0038b453 has its CatchHandler @ 0038b5b8 */
      uVar7 = FUN_0030f3ac(&local_80,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038b454 to 0038b45b has its CatchHandler @ 0038b5b4 */
      FUN_0030f41c(&local_38,uVar7);
      FUN_0030f658(&local_80);
      uVar1 = *(uint *)(param_1 + 5);
    }
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    puVar6 = *(ulong **)(param_3 + 0x30);
    if (puVar6 != (ulong *)0x0) {
      puStack_48 = puVar5;
      local_50 = param_3;
      if (*puVar6 != 0xffffffffffffffff) {
        local_80 = &puStack_48;
        plStack_78 = &local_50;
        local_38 = &local_80;
        std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    bVar4 = *param_4;
    uVar9 = *(undefined8 *)(param_4 + 1);
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uVar7 = *(undefined8 *)(param_4 + 0x10);
    uStack_88 = (undefined7)((ulong)*(undefined8 *)(param_4 + 8) >> 8);
    local_89 = (undefined1)((ulong)uVar9 >> 0x38);
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
                    /* try { // try from 0038b4cc to 0038b4db has its CatchHandler @ 0038b5cc */
    pbVar8 = (byte *)FUN_00333afc(param_2 + (ulong)uVar1,uVar2,uVar3,param_3);
    if ((*pbVar8 & 1) == 0) {
      pbVar8[0] = 0;
      pbVar8[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar8 + 0x10) = 0;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      if ((*pbVar8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar8 + 0x10));
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8[4] = 0;
        pbVar8[5] = 0;
        pbVar8[6] = 0;
        pbVar8[7] = 0;
      }
    }
    *pbVar8 = bVar4;
    *(ulong *)(pbVar8 + 8) = CONCAT71(uStack_88,local_89);
    *(undefined8 *)(pbVar8 + 0x10) = uVar7;
    *(undefined8 *)(pbVar8 + 1) = uVar9;
  }
  return;
}


