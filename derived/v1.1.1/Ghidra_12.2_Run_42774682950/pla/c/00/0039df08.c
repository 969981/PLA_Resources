/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039df08; name: FUN_0039df08
 */


uint * FUN_0039df08(undefined8 param_1,int param_2,ulong param_3,byte *param_4,ulong *param_5,
                   uint *param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong *puStack_58;
  int local_50;
  undefined1 auStack_38 [8];
  
  if ((param_3 & 1) != 0) {
    switch(*param_4 - 1) {
    case 0:
      uVar6 = FUN_00332850(param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323a60(uVar6,param_6,param_7);
      return puVar7;
    case 1:
      uVar6 = FUN_00332850(param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323990(uVar6,param_6,param_7);
      return puVar7;
    case 2:
      uVar6 = FUN_00332850(param_1,param_2,3,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_003235f0(uVar6,param_6,param_7);
      return puVar7;
    case 3:
      uVar6 = FUN_00332850(param_1,param_2,4,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323600(uVar6,param_6,param_7);
      return puVar7;
    case 4:
      uVar6 = FUN_00332850(param_1,param_2,5,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_003235d0(uVar6,param_6,param_7);
      return puVar7;
    case 5:
      uVar6 = FUN_00332850(param_1,param_2,6,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_003237f0(uVar6,param_6,param_7);
      return puVar7;
    case 6:
      uVar6 = FUN_00332850(param_1,param_2,7,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323650(uVar6,param_6,param_7);
      return puVar7;
    case 7:
      uVar6 = FUN_00332850(param_1,param_2,8,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323640(uVar6,param_6,param_7);
      return puVar7;
    case 8:
    case 9:
    case 10:
    case 0xb:
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/extension_set_inl.h"
                   ,0x4f);
                    /* try { // try from 0039df78 to 0039df8b has its CatchHandler @ 0039eaa4 */
      uVar6 = FUN_0030f3ac(&local_70,"Non-primitive types can\'t be packed.");
                    /* try { // try from 0039df8c to 0039df93 has its CatchHandler @ 0039eaa0 */
      FUN_0030f41c(auStack_38,uVar6);
      FUN_0030f658(&local_70);
      return param_6;
    case 0xc:
      uVar6 = FUN_00332850(param_1,param_2,0xd,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_003235e0(uVar6,param_6,param_7);
      return puVar7;
    case 0xd:
      local_70 = FUN_00332850(param_1,param_2,0xe,param_4[2],*(undefined8 *)(param_4 + 0x18));
      uStack_68 = *(undefined8 *)(param_4 + 8);
      local_60 = *(undefined8 *)(param_4 + 0x10);
      puStack_58 = param_5;
      local_50 = param_2;
      puVar7 = (uint *)FUN_0039ef34(param_7,param_6,&local_70);
      return puVar7;
    case 0xe:
      uVar6 = FUN_00332850(param_1,param_2,0xf,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323720(uVar6,param_6,param_7);
      return puVar7;
    case 0xf:
      uVar6 = FUN_00332850(param_1,param_2,0x10,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_003238c0(uVar6,param_6,param_7);
      return puVar7;
    case 0x10:
      uVar6 = FUN_00332850(param_1,param_2,0x11,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323610(uVar6,param_6,param_7);
      return puVar7;
    case 0x11:
      uVar6 = FUN_00332850(param_1,param_2,0x12,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar7 = (uint *)FUN_00323620(uVar6,param_6,param_7);
      return puVar7;
    default:
      return param_6;
    }
  }
  puVar7 = param_6;
  switch(*param_4 - 1) {
  case 0:
    puVar7 = param_6 + 2;
    if (param_4[1] == 0) {
      FUN_00331708(*(undefined8 *)param_6,param_1,param_2,1,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      FUN_00331b54(param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 1:
    puVar7 = param_6 + 1;
    if (param_4[1] == 0) {
      FUN_00330d84(*param_6,param_1,param_2,2,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      FUN_003311d0(param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 2:
    bVar3 = (byte)*param_6;
    uVar11 = (ulong)bVar3;
    if ((char)bVar3 < '\0') {
      uVar11 = (ulong)(((uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80) - 0x80);
      if (-1 < (char)*(byte *)((long)param_6 + 1)) {
        lVar10 = (long)param_6 + 2;
        bVar3 = param_4[1];
        goto joined_r0x0039e6b8;
      }
      auVar18 = FUN_003230f0(param_6,uVar11);
      if (auVar18._0_8_ == 0) {
        return (uint *)0x0;
      }
      bVar3 = param_4[1];
    }
    else {
      lVar10 = (long)param_6 + 1;
      bVar3 = param_4[1];
joined_r0x0039e6b8:
      auVar18._8_8_ = uVar11;
      auVar18._0_8_ = lVar10;
    }
    if (bVar3 != 0) {
      FUN_0032f53c(param_1,param_2,3,param_4[2],auVar18._8_8_,*(undefined8 *)(param_4 + 0x18));
      return auVar18._0_8_;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 3;
    goto LAB_0039ea50;
  case 3:
    bVar3 = (byte)*param_6;
    uVar11 = (ulong)bVar3;
    if ((char)bVar3 < '\0') {
      uVar11 = (ulong)(((uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80) - 0x80);
      if (-1 < (char)*(byte *)((long)param_6 + 1)) {
        lVar10 = (long)param_6 + 2;
        bVar3 = param_4[1];
        goto joined_r0x0039e6e8;
      }
      auVar19 = FUN_003230f0(param_6,uVar11);
      if (auVar19._0_8_ == 0) {
        return (uint *)0x0;
      }
      bVar3 = param_4[1];
    }
    else {
      lVar10 = (long)param_6 + 1;
      bVar3 = param_4[1];
joined_r0x0039e6e8:
      auVar19._8_8_ = uVar11;
      auVar19._0_8_ = lVar10;
    }
    if (bVar3 != 0) {
      FUN_0033084c(param_1,param_2,4,param_4[2],auVar19._8_8_,*(undefined8 *)(param_4 + 0x18));
      return auVar19._0_8_;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 4;
    goto LAB_0039e7f8;
  case 4:
    bVar3 = (byte)*param_6;
    uVar11 = (ulong)bVar3;
    if ((char)bVar3 < '\0') {
      uVar11 = (ulong)(((uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80) - 0x80);
      if (-1 < (char)*(byte *)((long)param_6 + 1)) {
        lVar10 = (long)param_6 + 2;
        bVar3 = param_4[1];
        goto joined_r0x0039e638;
      }
      auVar16 = FUN_003230f0(param_6,uVar11);
      if (auVar16._0_8_ == 0) {
        return (uint *)0x0;
      }
      bVar3 = param_4[1];
    }
    else {
      lVar10 = (long)param_6 + 1;
      bVar3 = param_4[1];
joined_r0x0039e638:
      auVar16._8_8_ = uVar11;
      auVar16._0_8_ = lVar10;
    }
    puVar7 = auVar16._0_8_;
    if (bVar3 != 0) {
      FUN_0032ebb4(param_1,param_2,5,param_4[2],auVar16._8_8_,*(undefined8 *)(param_4 + 0x18));
      return puVar7;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 5;
    uVar11 = auVar16._8_8_ & 0xffffffff;
    goto LAB_0039e944;
  case 5:
    auVar19._8_8_ = *(undefined8 *)param_6;
    auVar19._0_8_ = param_6 + 2;
    if (param_4[1] != 0) {
      FUN_0033084c(param_1,param_2,6,param_4[2],*(undefined8 *)param_6,
                   *(undefined8 *)(param_4 + 0x18));
      return param_6 + 2;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 6;
LAB_0039e7f8:
    puVar7 = auVar19._0_8_;
    FUN_00330400(param_1,param_2,uVar6,auVar19._8_8_,uVar12);
    break;
  case 6:
    puVar7 = param_6 + 1;
    uVar11 = (ulong)*param_6;
    if (param_4[1] != 0) {
      FUN_0032fec4(param_1,param_2,7,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
      return puVar7;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 7;
    goto LAB_0039e81c;
  case 7:
    bVar3 = (byte)*param_6;
    if ((char)bVar3 < '\0') {
      iVar1 = (uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar20 = FUN_003230f0(param_6);
        if (auVar20._0_8_ == 0) {
          return (uint *)0x0;
        }
        bVar3 = param_4[1];
        auVar5 = auVar20;
      }
      else {
        auVar5._8_4_ = iVar1;
        auVar5._0_8_ = (long)param_6 + 2;
        auVar5._12_4_ = 0;
        auVar20._8_4_ = iVar1;
        auVar20._0_8_ = (long)param_6 + 2;
        auVar20._12_4_ = 0;
        bVar3 = param_4[1];
      }
    }
    else {
      auVar20[8] = bVar3;
      auVar20._0_8_ = (long)param_6 + 1;
      auVar20._9_7_ = 0;
      bVar3 = param_4[1];
      auVar5 = auVar20;
    }
    if (bVar3 == 0) {
      puVar7 = auVar20._0_8_;
      FUN_00332098(param_1,param_2,8,auVar20._8_8_ != 0,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      puVar7 = auVar5._0_8_;
      FUN_003324e8(param_1,param_2,8,param_4[2],auVar5._8_8_ != 0,*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 8:
  case 0xb:
    if (param_4[1] == 0) {
      uVar6 = FUN_00333650(param_1,param_2,9,*(undefined8 *)(param_4 + 0x18));
      cVar4 = (char)*param_6;
      if (cVar4 < '\0') goto LAB_0039e5b8;
LAB_0039dfe8:
      auVar14[8] = cVar4;
      auVar14._0_8_ = (long)param_6 + 1;
      auVar14._9_3_ = 0;
    }
    else {
      uVar6 = FUN_00333afc();
      cVar4 = (char)*param_6;
      if (-1 < cVar4) goto LAB_0039dfe8;
LAB_0039e5b8:
      auVar14 = FUN_003232c0(param_6);
      if (auVar14._0_8_ == 0) {
        return (uint *)0x0;
      }
    }
    lVar10 = auVar14._0_8_;
    lVar13 = (long)auVar14._8_4_;
    if ((*(long *)(param_7 + 8) - lVar10) + 0x10 < lVar13) {
      puVar7 = (uint *)FUN_00322ab0(param_7,lVar10,auVar14._8_4_,uVar6);
      return puVar7;
    }
    FUN_00291910(uVar6,lVar10,lVar13);
    puVar7 = (uint *)(lVar10 + lVar13);
    break;
  case 9:
    if (param_4[1] == 0) {
      plVar8 = (long *)FUN_00333e70(param_1,param_2,10,*(undefined8 *)(param_4 + 8),
                                    *(undefined8 *)(param_4 + 0x18));
      iVar1 = *(int *)(param_7 + 0x58);
      *(int *)(param_7 + 0x58) = iVar1 + -1;
    }
    else {
      plVar8 = (long *)FUN_003349b0();
      iVar1 = *(int *)(param_7 + 0x58);
      *(int *)(param_7 + 0x58) = iVar1 + -1;
    }
    if (0 < iVar1) {
      *(int *)(param_7 + 0x5c) = *(int *)(param_7 + 0x5c) + 1;
      puVar7 = (uint *)(**(code **)(*plVar8 + 0x58))(plVar8,param_6,param_7);
      *(int *)(param_7 + 0x58) = *(int *)(param_7 + 0x58) + 1;
      *(int *)(param_7 + 0x5c) = *(int *)(param_7 + 0x5c) + -1;
      uVar2 = *(uint *)(param_7 + 0x50);
      *(undefined4 *)(param_7 + 0x50) = 0;
      if (uVar2 == (param_2 << 3 | 3U)) {
        return puVar7;
      }
    }
    puVar7 = (uint *)0x0;
    break;
  case 10:
    if (param_4[1] == 0) {
      uVar6 = FUN_00333e70(param_1,param_2,0xb,*(undefined8 *)(param_4 + 8),
                           *(undefined8 *)(param_4 + 0x18));
    }
    else {
      uVar6 = FUN_003349b0();
    }
    puVar7 = (uint *)thunk_FUN_00322e9c(param_7,uVar6,param_6);
    return puVar7;
  case 0xc:
    bVar3 = (byte)*param_6;
    uVar11 = (ulong)bVar3;
    if ((char)bVar3 < '\0') {
      uVar11 = (ulong)(((uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80) - 0x80);
      if (-1 < (char)*(byte *)((long)param_6 + 1)) {
        lVar10 = (long)param_6 + 2;
        bVar3 = param_4[1];
        goto joined_r0x0039e66c;
      }
      auVar17 = FUN_003230f0(param_6,uVar11);
      if (auVar17._0_8_ == 0) {
        return (uint *)0x0;
      }
      bVar3 = param_4[1];
    }
    else {
      lVar10 = (long)param_6 + 1;
      bVar3 = param_4[1];
joined_r0x0039e66c:
      auVar17._8_8_ = uVar11;
      auVar17._0_8_ = lVar10;
    }
    puVar7 = auVar17._0_8_;
    if (bVar3 != 0) {
      FUN_0032fec4(param_1,param_2,0xd,param_4[2],auVar17._8_8_,*(undefined8 *)(param_4 + 0x18));
      return puVar7;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 0xd;
    uVar11 = auVar17._8_8_ & 0xffffffff;
LAB_0039e81c:
    FUN_0032fa78(param_1,param_2,uVar6,uVar11,uVar12);
    break;
  case 0xd:
    bVar3 = (byte)*param_6;
    uVar11 = (ulong)bVar3;
    if ((char)bVar3 < '\0') {
      uVar11 = (ulong)(((uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80) - 0x80);
      if (-1 < (char)*(byte *)((long)param_6 + 1)) {
        lVar10 = (long)param_6 + 2;
        uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar11);
        goto joined_r0x0039e740;
      }
      auVar21 = FUN_003230f0(param_6,uVar11);
      if (auVar21._0_8_ == 0) {
        return (uint *)0x0;
      }
      uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),auVar21._8_8_ & 0xffffffff)
      ;
    }
    else {
      lVar10 = (long)param_6 + 1;
      uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar11);
joined_r0x0039e740:
      auVar21._8_8_ = uVar11;
      auVar21._0_8_ = lVar10;
    }
    puVar7 = auVar21._0_8_;
    uVar11 = auVar21._8_8_;
    if ((uVar9 & 1) == 0) {
      if ((*param_5 & 1) == 0) {
        lVar10 = FUN_0030c8c0(param_5);
      }
      else {
        lVar10 = (*param_5 & 0xfffffffffffffffe) + 8;
      }
      FUN_0030d5b0(lVar10,param_2,uVar11);
    }
    else if (param_4[1] == 0) {
      FUN_00332cc8(param_1,param_2,0xe,uVar11 & 0xffffffff,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      FUN_00333114(param_1,param_2,0xe,param_4[2],uVar11 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 0xe:
    puVar7 = param_6 + 1;
    uVar11 = (ulong)*param_6;
    if (param_4[1] != 0) {
      FUN_0032ebb4(param_1,param_2,0xf,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
      return puVar7;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 0xf;
    goto LAB_0039e944;
  case 0xf:
    auVar18._8_8_ = *(undefined8 *)param_6;
    auVar18._0_8_ = param_6 + 2;
    if (param_4[1] != 0) {
      FUN_0032f53c(param_1,param_2,0x10,param_4[2],*(undefined8 *)param_6,
                   *(undefined8 *)(param_4 + 0x18));
      return param_6 + 2;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 0x10;
    goto LAB_0039ea50;
  case 0x10:
    bVar3 = (byte)*param_6;
    if ((char)bVar3 < '\0') {
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar15 = FUN_003230f0(param_6);
        if (auVar15._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar15._8_4_ = (uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
        auVar15._0_8_ = (long)param_6 + 2;
      }
    }
    else {
      auVar15[8] = bVar3;
      auVar15._0_8_ = (long)param_6 + 1;
      auVar15._9_3_ = 0;
    }
    puVar7 = auVar15._0_8_;
    uVar11 = (ulong)(-(auVar15._8_4_ & 1) ^ auVar15._8_4_ >> 1);
    if (param_4[1] != 0) {
      FUN_0032ebb4(param_1,param_2,0x11,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
      return puVar7;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 0x11;
LAB_0039e944:
    FUN_0032e738(param_1,param_2,uVar6,uVar11,uVar12);
    break;
  case 0x11:
    bVar3 = (byte)*param_6;
    if ((char)bVar3 < '\0') {
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar22 = FUN_003230f0(param_6);
        if (auVar22._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar22._8_4_ = (uint)bVar3 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
        auVar22._0_8_ = (long)param_6 + 2;
        auVar22._12_4_ = 0;
      }
    }
    else {
      auVar22[8] = bVar3;
      auVar22._0_8_ = (long)param_6 + 1;
      auVar22._9_7_ = 0;
    }
    uVar11 = -(auVar22._8_8_ & 1) ^ auVar22._8_8_ >> 1;
    auVar18._8_8_ = uVar11;
    auVar18._0_8_ = auVar22._0_8_;
    if (param_4[1] != 0) {
      FUN_0032f53c(param_1,param_2,0x12,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
      return auVar22._0_8_;
    }
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = 0x12;
LAB_0039ea50:
    puVar7 = auVar18._0_8_;
    FUN_0032f0f0(param_1,param_2,uVar6,auVar18._8_8_,uVar12);
  }
  return puVar7;
}


