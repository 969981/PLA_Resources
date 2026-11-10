/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003126b4; name: FUN_003126b4
 */


/* WARNING: Type propagation algorithm not settling */

undefined ***
FUN_003126b4(undefined8 param_1,undefined ***param_2,long *param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  long *plVar11;
  uint uVar12;
  void *pvVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  undefined ***pppuVar18;
  long lVar19;
  void *pvVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined **local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined **local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a8;
  long *plStack_a0;
  void *local_98;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  if (param_6 == 0) {
    uVar9 = FUN_00380d6c(param_5,param_1);
    puVar10 = (uint *)FUN_0030e020(param_4,uVar9,param_2,param_3);
    return (undefined ***)puVar10;
  }
  puVar8 = *(ulong **)(param_6 + 0x30);
  uVar12 = (uint)param_4 & 7;
  if ((puVar8 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_04373a98, local_78 = param_6, *puVar8 != 0xffffffffffffffff)) {
    local_a8 = &puStack_70;
    plStack_a0 = &local_78;
    local_68 = &local_a8;
    std::__call_once(puVar8,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  uVar15 = *(uint *)(param_6 + 0x38);
  if (uVar12 != *(uint *)(PTR_DAT_04373aa8 + (ulong)uVar15 * 4)) {
    if (*(int *)(param_6 + 0x3c) != 3) {
LAB_0031293c:
      uVar9 = FUN_00380d6c(param_5,param_1);
      puVar10 = (uint *)FUN_0030e020(param_4,uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    }
    puVar8 = *(ulong **)(param_6 + 0x30);
    if (puVar8 != (ulong *)0x0) {
      puStack_70 = PTR_LAB_04373a98;
      local_78 = param_6;
      if (*puVar8 != 0xffffffffffffffff) {
        local_a8 = &puStack_70;
        plStack_a0 = &local_78;
        local_68 = &local_a8;
        std::__call_once(puVar8,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar15 = *(uint *)(param_6 + 0x38);
    }
    if ((uVar12 != 2) || (uVar15 - 9 < 4)) goto LAB_0031293c;
    puVar8 = *(ulong **)(param_6 + 0x30);
    if (puVar8 != (ulong *)0x0) {
      puStack_70 = PTR_LAB_04373a98;
      local_78 = param_6;
      if (*puVar8 != 0xffffffffffffffff) {
        local_a8 = &puStack_70;
        plStack_a0 = &local_78;
        local_68 = &local_a8;
        std::__call_once(puVar8,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar15 = *(uint *)(param_6 + 0x38);
    }
    switch(uVar15) {
    case 1:
      uVar9 = FUN_0038e548(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323a60(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 2:
      uVar9 = FUN_0038e524(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323990(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 3:
      uVar9 = FUN_0038e4b8(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_003235f0(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 4:
      uVar9 = FUN_0038e500(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323600(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 5:
      uVar9 = FUN_0038e494(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_003235d0(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 6:
      uVar9 = FUN_0038e500(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_003237f0(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 7:
      uVar9 = FUN_0038e4dc(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323650(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 8:
      uVar9 = FUN_0038e56c(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323640(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      FUN_0030f640(&local_a8,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                   ,0x372);
                    /* try { // try from 00312910 to 00312923 has its CatchHandler @ 003134a4 */
      uVar9 = FUN_0030f3ac(&local_a8,"Can\'t reach");
                    /* try { // try from 00312924 to 0031292b has its CatchHandler @ 003134a0 */
      FUN_0030f41c(&local_68,uVar9);
      FUN_0030f658(&local_a8);
      return (undefined ***)(uint *)0x0;
    case 0xd:
      uVar9 = FUN_0038e4dc(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_003235e0(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 0xe:
      goto switchD_003128f4_caseD_e;
    case 0xf:
      uVar9 = FUN_0038e494(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323720(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 0x10:
      uVar9 = FUN_0038e4b8(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_003238c0(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 0x11:
      uVar9 = FUN_0038e494(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323610(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    case 0x12:
      uVar9 = FUN_0038e4b8(param_5,param_1,param_6);
      puVar10 = (uint *)FUN_00323620(uVar9,param_2,param_3);
      return (undefined ***)puVar10;
    default:
      break;
    }
  }
  puVar8 = *(ulong **)(param_6 + 0x30);
  if (puVar8 != (ulong *)0x0) {
    puStack_70 = PTR_LAB_04373a98;
    local_78 = param_6;
    if (*puVar8 != 0xffffffffffffffff) {
      local_a8 = &puStack_70;
      plStack_a0 = &local_78;
      local_68 = &local_a8;
      std::__call_once(puVar8,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar15 = *(uint *)(param_6 + 0x38);
  }
  bVar5 = false;
  bVar6 = false;
  switch(uVar15) {
  case 1:
    pppuVar18 = param_2 + 1;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_0038a258();
    }
    else {
      FUN_00389eec(*param_2,param_5,param_1,param_6);
    }
    break;
  case 2:
    pppuVar18 = (undefined ***)((long)param_2 + 4);
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_00389ac0();
    }
    else {
      FUN_00389754(*(uint *)param_2,param_5,param_1,param_6);
    }
    break;
  case 3:
    bVar2 = *(byte *)param_2;
    if ((char)bVar2 < '\0') {
      iVar7 = (uint)bVar2 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar24 = FUN_003230f0(param_2,iVar7);
        if (auVar24._0_8_ == 0) {
          return (undefined ***)(uint *)0x0;
        }
      }
      else {
        auVar24._8_4_ = iVar7;
        auVar24._0_8_ = (long)param_2 + 2;
        auVar24._12_4_ = 0;
      }
    }
    else {
      auVar24[8] = bVar2;
      auVar24._0_8_ = (long)param_2 + 1;
      auVar24._9_7_ = 0;
    }
    goto LAB_00312eec;
  case 4:
    bVar2 = *(byte *)param_2;
    if ((char)bVar2 < '\0') {
      iVar7 = (uint)bVar2 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar25 = FUN_003230f0(param_2,iVar7);
        if (auVar25._0_8_ == 0) {
          return (undefined ***)(uint *)0x0;
        }
      }
      else {
        auVar25._8_4_ = iVar7;
        auVar25._0_8_ = (long)param_2 + 2;
        auVar25._12_4_ = 0;
      }
    }
    else {
      auVar25[8] = bVar2;
      auVar25._0_8_ = (long)param_2 + 1;
      auVar25._9_7_ = 0;
    }
    goto LAB_00312b14;
  case 5:
    bVar2 = *(byte *)param_2;
    auVar22[8] = bVar2;
    auVar22._0_8_ = (byte *)((long)param_2 + 1);
    auVar22._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar3 = *(byte *)((long)param_2 + 1);
      iVar7 = (uint)bVar2 + (uint)bVar3 * 0x80 + -0x80;
      if ((char)bVar3 < '\0') {
        auVar22 = FUN_00322fe0(param_2,iVar7);
        if (auVar22._0_8_ == 0) {
          return (undefined ***)(uint *)0x0;
        }
      }
      else {
        auVar22._8_4_ = iVar7;
        auVar22._0_8_ = (long)param_2 + 2;
        auVar22._12_4_ = 0;
      }
    }
    pppuVar18 = auVar22._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) goto LAB_003129d4;
    goto LAB_00312e20;
  case 6:
    auVar25._8_8_ = *param_2;
    auVar25._0_8_ = param_2 + 1;
LAB_00312b14:
    pppuVar18 = auVar25._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_00389328();
    }
    else {
      FUN_00388fbc(param_5,param_1,param_6,auVar25._8_8_);
    }
    break;
  case 7:
    auVar23._8_4_ = *(uint *)param_2;
    auVar23._0_8_ = (uint *)((long)param_2 + 4);
    auVar23._12_4_ = 0;
    iVar7 = *(int *)(param_6 + 0x3c);
    goto joined_r0x00312e54;
  case 8:
    bVar2 = *(byte *)param_2;
    if ((char)bVar2 < '\0') {
      iVar7 = (uint)bVar2 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar26 = FUN_003230f0(param_2);
        if (auVar26._0_8_ == 0) {
          return (undefined ***)(uint *)0x0;
        }
        iVar7 = *(int *)(param_6 + 0x3c);
        auVar4 = auVar26;
      }
      else {
        auVar4._8_4_ = iVar7;
        auVar4._0_8_ = (long)param_2 + 2;
        auVar4._12_4_ = 0;
        auVar26._8_4_ = iVar7;
        auVar26._0_8_ = (long)param_2 + 2;
        auVar26._12_4_ = 0;
        iVar7 = *(int *)(param_6 + 0x3c);
      }
    }
    else {
      auVar26[8] = bVar2;
      auVar26._0_8_ = (long)param_2 + 1;
      auVar26._9_7_ = 0;
      iVar7 = *(int *)(param_6 + 0x3c);
      auVar4 = auVar26;
    }
    if (iVar7 == 3) {
      pppuVar18 = auVar4._0_8_;
      FUN_0038aa00(param_5,param_1,param_6,auVar4._8_8_ != 0);
    }
    else {
      pppuVar18 = auVar26._0_8_;
      FUN_0038a684(param_5,param_1,param_6,auVar26._8_8_ != 0);
    }
    break;
  case 9:
    bVar6 = true;
    bVar5 = *(int *)(*(long *)(param_6 + 0x28) + 0x3c) == 3;
  case 0xc:
    if (*(char *)param_2 < '\0') {
      auVar21 = FUN_003232c0(param_2);
      if (auVar21._0_8_ == 0) {
        return (undefined ***)(uint *)0x0;
      }
    }
    else {
      auVar21[8] = *(char *)param_2;
      auVar21._0_8_ = (long)param_2 + 1;
      auVar21._9_3_ = 0;
    }
    lVar17 = auVar21._0_8_;
    plStack_a0 = (long *)0x0;
    local_98 = (void *)0x0;
    lVar19 = (long)auVar21._8_4_;
    local_a8 = (undefined **)0x0;
    if ((param_3[1] - lVar17) + 0x10 < lVar19) {
                    /* try { // try from 00312bec to 00312c67 has its CatchHandler @ 003134b8 */
      pppuVar18 = (undefined ***)FUN_00322ab0(param_3,lVar17,auVar21._8_4_,&local_a8);
    }
    else {
      FUN_00291910(&local_a8,lVar17,lVar19);
      pppuVar18 = (undefined ***)(lVar17 + lVar19);
    }
    if (pppuVar18 != (undefined ***)0x0) {
      if (bVar6) {
        bVar6 = ((ulong)local_a8 & 1) != 0;
        pbVar16 = *(byte **)(param_6 + 8);
        pvVar13 = (void *)((ulong)&local_a8 | 1);
        if (bVar6) {
          pvVar13 = local_98;
        }
        uVar12 = (uint)((byte)local_a8 >> 1);
        if (bVar6) {
          uVar12 = (uint)plStack_a0;
        }
        if ((*pbVar16 & 1) == 0) {
          pbVar16 = pbVar16 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar16 + 0x10);
        }
        if (bVar5) {
          uVar14 = FUN_0033b628(pvVar13,uVar12,0,pbVar16);
          if ((uVar14 & 1) == 0) {
            pppuVar18 = (undefined ***)0x0;
            goto joined_r0x00313284;
          }
        }
        else {
                    /* try { // try from 00312d74 to 00312d7b has its CatchHandler @ 003134b8 */
          FUN_0033b628(pvVar13,uVar12,0,pbVar16);
        }
      }
      pvVar13 = local_98;
      plVar11 = plStack_a0;
      if (*(int *)(param_6 + 0x3c) == 3) {
        uStack_b8 = 0;
        local_b0 = (void *)0x0;
        local_c0 = (undefined **)0x0;
        if (((ulong)local_a8 & 1) == 0) {
          local_b0 = local_98;
          uStack_b8 = (ulong)plStack_a0;
          local_c0 = local_a8;
        }
        else {
          if (0xffffffffffffffef < plStack_a0) {
                    /* try { // try from 00313438 to 00313447 has its CatchHandler @ 003134b8 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (plStack_a0 < 0x17) {
            local_c0 = (undefined **)(ulong)(byte)((int)plStack_a0 << 1);
            pvVar20 = (void *)((ulong)&local_c0 | 1);
            if (plStack_a0 != (long *)0x0) goto LAB_003131e0;
          }
          else {
            uVar14 = (long)plStack_a0 + 0x10U & 0xfffffffffffffff0;
            pvVar20 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
            local_c0 = (undefined **)(uVar14 | 1);
            uStack_b8 = (ulong)plVar11;
            local_b0 = pvVar20;
LAB_003131e0:
            memcpy(pvVar20,pvVar13,(size_t)plVar11);
          }
          *(undefined1 *)((long)pvVar20 + (long)plVar11) = 0;
        }
                    /* try { // try from 003131f4 to 00313207 has its CatchHandler @ 00313464 */
        FUN_0038b32c(param_5,param_1,param_6,&local_c0);
        if (((ulong)local_c0 & 1) == 0) goto joined_r0x00313284;
        pvVar13 = local_b0;
      }
      else {
        uStack_d8 = 0;
        local_d0 = (void *)0x0;
        local_e0 = (undefined **)0x0;
        if (((ulong)local_a8 & 1) == 0) {
          local_d0 = local_98;
          uStack_d8 = (ulong)plStack_a0;
          local_e0 = local_a8;
        }
        else {
          if (0xffffffffffffffef < plStack_a0) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (plStack_a0 < 0x17) {
            local_e0 = (undefined **)(ulong)(byte)((int)plStack_a0 << 1);
            pvVar20 = (void *)((ulong)&local_e0 | 1);
            if (plStack_a0 != (long *)0x0) goto LAB_00313240;
          }
          else {
            uVar14 = (long)plStack_a0 + 0x10U & 0xfffffffffffffff0;
            pvVar20 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
            local_e0 = (undefined **)(uVar14 | 1);
            uStack_d8 = (ulong)plVar11;
            local_d0 = pvVar20;
LAB_00313240:
            memcpy(pvVar20,pvVar13,(size_t)plVar11);
          }
          *(undefined1 *)((long)pvVar20 + (long)plVar11) = 0;
        }
                    /* try { // try from 00313254 to 00313267 has its CatchHandler @ 00313450 */
        FUN_00385d54(param_5,param_1,param_6,&local_e0);
        if (((ulong)local_e0 & 1) == 0) goto joined_r0x00313284;
        pvVar13 = local_d0;
      }
      FUN_002e2ea0(PTR_LAB_04373088,pvVar13);
    }
joined_r0x00313284:
    if (((ulong)local_a8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_98);
    }
    break;
  case 10:
    if (*(int *)(param_6 + 0x3c) == 3) {
      plVar11 = (long *)FUN_0038d598();
      iVar7 = (int)param_3[0xb];
      *(int *)(param_3 + 0xb) = iVar7 + -1;
    }
    else {
      plVar11 = (long *)FUN_0038c3b8(param_5,param_1,param_6,param_3[0xd]);
      iVar7 = (int)param_3[0xb];
      *(int *)(param_3 + 0xb) = iVar7 + -1;
    }
    if (0 < iVar7) {
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      puVar10 = (uint *)(**(code **)(*plVar11 + 0x58))(plVar11,param_2,param_3);
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + -1;
      uVar12 = *(uint *)(param_3 + 10);
      *(undefined4 *)(param_3 + 10) = 0;
      if (uVar12 == (uint)param_4) {
        return (undefined ***)puVar10;
      }
    }
  default:
switchD_003127bc_default:
    pppuVar18 = (undefined ***)0x0;
    break;
  case 0xb:
    if (*(int *)(param_6 + 0x3c) == 3) {
      uVar9 = FUN_0038d598();
    }
    else {
      uVar9 = FUN_0038c3b8(param_5,param_1,param_6,param_3[0xd]);
    }
    puVar10 = (uint *)FUN_00322fdc(param_3,uVar9,param_2);
    return (undefined ***)puVar10;
  case 0xd:
    bVar2 = *(byte *)param_2;
    auVar23[8] = bVar2;
    auVar23._0_8_ = (byte *)((long)param_2 + 1);
    auVar23._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar3 = *(byte *)((long)param_2 + 1);
      iVar7 = (uint)bVar2 + (uint)bVar3 * 0x80 + -0x80;
      if ((char)bVar3 < '\0') {
        auVar23 = FUN_00322fe0(param_2,iVar7);
        if (auVar23._0_8_ == 0) {
          return (undefined ***)(uint *)0x0;
        }
      }
      else {
        auVar23._8_4_ = iVar7;
        auVar23._0_8_ = (long)param_2 + 2;
        auVar23._12_4_ = 0;
      }
    }
    iVar7 = *(int *)(param_6 + 0x3c);
joined_r0x00312e54:
    pppuVar18 = auVar23._0_8_;
    if (iVar7 == 3) {
      FUN_00388b90();
    }
    else {
      FUN_00388824(param_5,param_1,param_6,auVar23._8_8_);
    }
    break;
  case 0xe:
    bVar2 = *(byte *)param_2;
    auVar28[8] = bVar2;
    auVar28._0_8_ = (byte *)((long)param_2 + 1);
    auVar28._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar3 = *(byte *)((long)param_2 + 1);
      iVar7 = (uint)bVar2 + (uint)bVar3 * 0x80 + -0x80;
      if ((char)bVar3 < '\0') {
        auVar28 = FUN_00322fe0(param_2,iVar7);
        if (auVar28._0_8_ == 0) {
          return (undefined ***)(uint *)0x0;
        }
      }
      else {
        auVar28._8_4_ = iVar7;
        auVar28._0_8_ = (long)param_2 + 2;
        auVar28._12_4_ = 0;
      }
    }
    pppuVar18 = auVar28._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_0038bff0();
    }
    else {
      FUN_0038bb40(param_5,param_1,param_6,auVar28._8_8_);
    }
    break;
  case 0xf:
    pppuVar18 = (undefined ***)((long)param_2 + 4);
    uVar14 = (ulong)*(uint *)param_2;
    goto LAB_003129bc;
  case 0x10:
    auVar24._8_8_ = *param_2;
    auVar24._0_8_ = param_2 + 1;
    goto LAB_00312eec;
  case 0x11:
    pppuVar18 = (undefined ***)((long)param_2 + 1);
    bVar2 = *(byte *)param_2;
    uVar12 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar12 = ((uint)bVar2 + (uint)*(byte *)pppuVar18 * 0x80) - 0x80;
      if ((char)*(byte *)pppuVar18 < '\0') {
        auVar21 = FUN_003230f0(param_2);
        pppuVar18 = auVar21._0_8_;
        if (pppuVar18 == (undefined ***)0x0) {
          return (undefined ***)(uint *)0x0;
        }
        uVar14 = (ulong)(-(auVar21._8_4_ & 1) ^ auVar21._8_4_ >> 1);
        goto LAB_003129bc;
      }
      pppuVar18 = (undefined ***)((long)param_2 + 2);
    }
    uVar14 = (ulong)(-(uVar12 & 1) ^ uVar12 >> 1);
LAB_003129bc:
    auVar22._8_8_ = uVar14;
    auVar22._0_8_ = pppuVar18;
    if (*(int *)(param_6 + 0x3c) == 3) {
LAB_003129d4:
      pppuVar18 = auVar22._0_8_;
      FUN_00387c60(param_5,param_1,param_6,auVar22._8_8_);
    }
    else {
LAB_00312e20:
      FUN_003878f4();
    }
    break;
  case 0x12:
    bVar2 = *(byte *)param_2;
    if ((char)bVar2 < '\0') {
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar27 = FUN_003230f0(param_2);
        if (auVar27._0_8_ == 0) {
          return (undefined ***)(uint *)0x0;
        }
      }
      else {
        auVar27._8_4_ = (uint)bVar2 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
        auVar27._0_8_ = (long)param_2 + 2;
        auVar27._12_4_ = 0;
      }
    }
    else {
      auVar27[8] = bVar2;
      auVar27._0_8_ = (long)param_2 + 1;
      auVar27._9_7_ = 0;
    }
    auVar24._8_8_ = -(auVar27._8_8_ & 1) ^ auVar27._8_8_ >> 1;
    auVar24._0_8_ = auVar27._0_8_;
LAB_00312eec:
    pppuVar18 = auVar24._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_003883f8();
    }
    else {
      FUN_0038808c(param_5,param_1,param_6,auVar24._8_8_);
    }
  }
  return pppuVar18;
switchD_003128f4_caseD_e:
  puVar10 = (uint *)FUN_0038e494(param_5,param_1,param_6);
  if (*(int *)(*(long *)(param_6 + 0x28) + 0x3c) == 3) {
    puVar10 = (uint *)FUN_00323630(puVar10,param_2,param_3);
    return (undefined ***)puVar10;
  }
  if (*(char *)param_2 < '\0') {
    local_68 = param_2;
    auVar29 = FUN_003232c0(param_2,*(char *)param_2);
    local_68 = auVar29._0_8_;
    if (local_68 == (undefined ***)0x0) goto switchD_003127bc_default;
    iVar7 = FUN_0031e1b4(param_3,local_68,auVar29._8_8_);
  }
  else {
    local_68 = (undefined ***)((long)param_2 + 1);
    iVar7 = FUN_0031e1b4(param_3,local_68);
  }
  if (-1 < iVar7) {
    uVar14 = FUN_0030c7bc(param_3,&local_68,0xffffffff);
    if ((uVar14 & 1) == 0) {
      uVar14 = (ulong)*(byte *)local_68;
      if (-1 < (char)*(byte *)local_68) goto LAB_00313338;
      while( true ) {
        uVar14 = (ulong)(((int)uVar14 + (uint)*(byte *)((long)local_68 + 1) * 0x80) - 0x80);
        if (-1 < (char)*(byte *)((long)local_68 + 1)) {
          lVar17 = 2;
          goto LAB_00313354;
        }
        auVar29 = FUN_003230f0(local_68,uVar14);
        if (auVar29._0_8_ == 0) break;
        while( true ) {
          local_68 = auVar29._0_8_;
          uVar9 = FUN_00346ae8(param_6);
          lVar17 = FUN_00343194(uVar9,auVar29._8_8_ & 0xffffffff);
          if (lVar17 == 0) {
            uVar1 = *(undefined4 *)(param_6 + 0x44);
            uVar9 = FUN_00380d6c(param_5,param_1);
            FUN_0030d5b0(uVar9,uVar1,auVar29._8_8_);
          }
          else {
            uVar12 = *puVar10;
            uVar15 = puVar10[1];
            if (uVar12 == uVar15) {
              FUN_003265e4(puVar10,uVar12 + 1);
              uVar15 = puVar10[1];
            }
            if ((int)uVar15 < 1) {
              FUN_0030f640(&local_a8,3,
                           "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                           ,0x161);
                    /* try { // try from 003133e0 to 003133ef has its CatchHandler @ 0031344c */
              uVar9 = FUN_0030f3ac(&local_a8,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 003133f0 to 003133f7 has its CatchHandler @ 00313448 */
              FUN_0030f41c(&puStack_70,uVar9);
              FUN_0030f658(&local_a8);
            }
            *(int *)(*(long *)(puVar10 + 2) + (ulong)uVar12 * 4) = auVar29._8_4_;
            *puVar10 = uVar12 + 1;
          }
          uVar14 = FUN_0030c7bc(param_3,&local_68,0xffffffff);
          if ((uVar14 & 1) != 0) goto LAB_00313404;
          uVar14 = (ulong)*(byte *)local_68;
          if ((char)*(byte *)local_68 < '\0') break;
LAB_00313338:
          lVar17 = 1;
LAB_00313354:
          auVar29._8_8_ = uVar14;
          auVar29._0_8_ = (byte *)((long)local_68 + lVar17);
        }
      }
    }
    else {
LAB_00313404:
      if ((int)param_3[10] == 0) {
        uVar12 = *(int *)((long)param_3 + 0x1c) + iVar7;
        *(uint *)((long)param_3 + 0x1c) = uVar12;
        *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
        return local_68;
      }
    }
  }
  goto switchD_003127bc_default;
}


