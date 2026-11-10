/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00385d54; name: FUN_00385d54
 */


void FUN_00385d54(long *param_1,long param_2,long param_3,byte *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  uint uVar14;
  undefined1 local_91;
  undefined7 uStack_90;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *plStack_68;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"SetString","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"SetString",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar4 = PTR_LAB_04373a98;
  puVar5 = *(ulong **)(param_3 + 0x30);
  if ((puVar5 != (ulong *)0x0) &&
     (puStack_80 = PTR_LAB_04373a98, local_88 = param_3, *puVar5 != 0xffffffffffffffff)) {
    local_70 = &puStack_80;
    plStack_68 = &local_88;
    local_78 = &local_70;
    std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 9) {
    FUN_003871e0(*param_1,param_3,"SetString",9);
  }
  if (*(char *)(param_3 + 0x43) != '\0') {
    uVar14 = *(uint *)(param_1 + 5);
    if (uVar14 == 0xffffffff) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 00385e68 to 00385e7b has its CatchHandler @ 00386268 */
      uVar6 = FUN_0030f3ac(&local_70,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00385e7c to 00385e83 has its CatchHandler @ 00386264 */
      FUN_0030f41c(&local_78,uVar6);
      FUN_0030f658(&local_70);
      uVar14 = *(uint *)(param_1 + 5);
    }
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    puVar5 = *(ulong **)(param_3 + 0x30);
    if ((puVar5 != (ulong *)0x0) &&
       (puStack_80 = puVar4, local_88 = param_3, *puVar5 != 0xffffffffffffffff)) {
      local_70 = &puStack_80;
      plStack_68 = &local_88;
      local_78 = &local_70;
      std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    bVar3 = *param_4;
    uVar10 = *(undefined8 *)(param_4 + 1);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    uStack_90 = (undefined7)((ulong)*(undefined8 *)(param_4 + 8) >> 8);
    local_91 = (undefined1)((ulong)uVar10 >> 0x38);
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
                    /* try { // try from 00385ef4 to 00385f03 has its CatchHandler @ 0038627c */
    pbVar7 = (byte *)FUN_00333650(param_2 + (ulong)uVar14,uVar1,uVar2,param_3);
    if ((*pbVar7 & 1) == 0) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
      if ((*pbVar7 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar7 + 0x10));
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
      }
    }
    *pbVar7 = bVar3;
    *(ulong *)(pbVar7 + 8) = CONCAT71(uStack_90,local_91);
    *(undefined8 *)(pbVar7 + 0x10) = uVar6;
    *(undefined8 *)(pbVar7 + 1) = uVar10;
    return;
  }
  uVar8 = FUN_0038f118(param_1 + 1,param_3);
  if ((uVar8 & 1) != 0) {
    lVar11 = *(long *)(param_3 + 0x58);
    if ((lVar11 == 0) ||
       ((*(int *)(lVar11 + 0x18) == 1 && (*(char *)(**(long **)(lVar11 + 0x20) + 0x41) != '\0')))) {
      FUN_0038c860(param_1,param_2,param_3);
    }
    else {
      *(undefined4 *)
       (param_2 +
       (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                    (int)((ulong)(lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x30)) >> 4) *
                    -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
    }
    uVar8 = FUN_0038fe58(param_1 + 1,param_3);
    pbVar7 = (byte *)(param_2 + (uVar8 & 0xffffffff));
    if ((*pbVar7 & 1) == 0) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
      if ((*pbVar7 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar7 + 0x10));
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
      }
    }
    uVar10 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)param_4;
    *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(pbVar7 + 8) = uVar10;
    *(undefined8 *)pbVar7 = uVar6;
    goto LAB_0038623c;
  }
  lVar11 = param_1[1];
  if (*(char *)(param_3 + 0x43) == '\0') {
    plVar12 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
  }
  else if (*(long *)(param_3 + 0x60) == 0) {
    plVar12 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
  }
  else {
    plVar12 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
  }
  uVar14 = (int)((ulong)(param_3 - *plVar12) >> 3) * 0x286bca1b;
  uVar14 = *(uint *)(param_1[2] +
                    (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2));
  puVar5 = *(ulong **)(param_3 + 0x30);
  if ((puVar5 != (ulong *)0x0) &&
     (puStack_80 = puVar4, local_88 = param_3, *puVar5 != 0xffffffffffffffff)) {
    local_70 = &puStack_80;
    plStack_68 = &local_88;
    local_78 = &local_70;
    std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
    uVar14 = uVar14 & 0xfffffffe;
  }
  pbVar7 = *(byte **)(lVar11 + (ulong)uVar14);
  lVar11 = *(long *)(param_3 + 0x58);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) == 1) {
      if (*(char *)(**(long **)(lVar11 + 0x20) + 0x41) != '\0') goto LAB_0038619c;
      if (*(char *)(**(long **)(lVar11 + 0x20) + 0x41) != '\0') {
        FUN_0030f640(&local_70,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                     ,0x761);
                    /* try { // try from 00386124 to 00386137 has its CatchHandler @ 00386260 */
        uVar6 = FUN_0030f3ac(&local_70,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00386138 to 0038613f has its CatchHandler @ 0038625c */
        FUN_0030f41c(&local_78,uVar6);
        FUN_0030f658(&local_70);
      }
    }
    if (*(int *)(param_2 +
                (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                             (int)((ulong)(lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x30)) >> 4
                                  ) * -0x55555554)) != *(int *)(param_3 + 0x44)) {
      FUN_003862a4(param_1,param_2,*(undefined8 *)(param_3 + 0x58));
      puVar9 = (undefined8 *)FUN_0038ae60(param_1,param_2,param_3);
      *puVar9 = pbVar7;
    }
  }
LAB_0038619c:
  puVar9 = (undefined8 *)FUN_0038ae60(param_1,param_2,param_3);
  uVar8 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
  puVar5 = (ulong *)(uVar8 & 0xfffffffffffffffe);
  if ((uVar8 & 1) == 0) {
    pbVar13 = (byte *)*puVar9;
    if (pbVar13 == pbVar7) goto LAB_003861ec;
LAB_003861cc:
    if ((*pbVar13 & 1) != 0) goto LAB_00386204;
LAB_003861d4:
    pbVar13[0] = 0;
    pbVar13[1] = 0;
  }
  else {
    puVar5 = (ulong *)*puVar5;
    pbVar13 = (byte *)*puVar9;
    if (pbVar13 != pbVar7) goto LAB_003861cc;
LAB_003861ec:
    FUN_0029175c(puVar9,puVar5,pbVar7);
    pbVar13 = (byte *)*puVar9;
    if ((*pbVar13 & 1) == 0) goto LAB_003861d4;
LAB_00386204:
    **(undefined1 **)(pbVar13 + 0x10) = 0;
    pbVar13[8] = 0;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    if ((*pbVar13 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar13 + 0x10));
      pbVar13[0] = 0;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
    }
  }
  uVar10 = *(undefined8 *)(param_4 + 8);
  uVar6 = *(undefined8 *)param_4;
  *(undefined8 *)(pbVar13 + 0x10) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(pbVar13 + 8) = uVar10;
  *(undefined8 *)pbVar13 = uVar6;
LAB_0038623c:
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
  return;
}


