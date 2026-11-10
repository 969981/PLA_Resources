/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0204d6f0; name: FUN_0204d6f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0204d6f0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043d7a40 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043d7a40), iVar12 != 0)) {
    DAT_043d7a10 = 0x16;
    DAT_043d7a20 = 0;
    DAT_043d7a11._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d7a18 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d7a28 = 0x2a;
    _DAT_043d7a1c = 0;
    DAT_043d7a38._7_1_ = 0;
    DAT_043d7a38._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d7a38._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d7a38._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d7a38._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d7a38._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d7a31 = s__anonymous_namespace__039071f8[8];
    DAT_043d7a31_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d7a31_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d7a31_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d7a31_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d7a36 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d7a38._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d7a29._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d7a29._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d7a38._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d7a10,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7a40);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar17 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar17 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_0393c986._72_8_;
  _DAT_043d79f0 = 0x71;
  DAT_043d79f8 = 0x66;
  DAT_043d7a00 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_0393c986._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar4;
  uVar5 = CONCAT62(s_std__string_sol__detail__ctti_ge_0393c986._96_6_,
                   s_std__string_sol__detail__ctti_ge_0393c986._94_2_);
  uVar4 = CONCAT26(s_std__string_sol__detail__ctti_ge_0393c986._94_2_,
                   s_std__string_sol__detail__ctti_ge_0393c986._88_6_);
  *(undefined8 *)(pcVar13 + 0x50) = s_std__string_sol__detail__ctti_ge_0393c986._80_8_;
  *(undefined8 *)(pcVar13 + 0x58) = uVar4;
  *(undefined8 *)(pcVar13 + 0x5e) = uVar5;
  uVar8 = s_std__string_sol__detail__ctti_ge_0393c986._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393c986._48_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393c986._40_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_0393c986._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar4;
  *(undefined8 *)(pcVar13 + 0x30) = uVar5;
  *(undefined8 *)(pcVar13 + 0x38) = uVar8;
  uVar9 = s_std__string_sol__detail__ctti_ge_0393c986._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0393c986._16_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393c986._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393c986._0_8_;
  pcVar13[0x66] = '\0';
  *(undefined8 *)pcVar13 = uVar4;
  *(undefined8 *)(pcVar13 + 8) = uVar5;
  *(undefined8 *)(pcVar13 + 0x10) = uVar8;
  *(undefined8 *)(pcVar13 + 0x18) = uVar9;
  std::string::find(-0x10,0x5b);
  uVar14 = std::string::find(-0x10,0x3d);
  uVar15 = std::string::rfind(-0x10,0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043d79f0 & 1) == 0) {
      uVar15 = (ulong)(DAT_043d79f0 >> 1);
    }
    else {
      uVar15 = DAT_043d79f8;
    }
    uVar18 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar18 = uVar14;
    }
    uVar14 = uVar15;
  }
  else {
    uVar18 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar18 = uVar14;
    }
    if ((_DAT_043d79f0 & 1) == 0) {
      uVar14 = (ulong)(DAT_043d79f0 >> 1);
    }
    else {
      uVar14 = DAT_043d79f8;
    }
  }
  if (uVar18 < uVar14 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043d79f0,uVar18,uVar15 - uVar18,
                      (allocator *)&DAT_043d79f0);
  FUN_0204d0a0(&DAT_043d79f0);
  _DAT_043d79f0 = local_78;
  DAT_043d79f8 = uStack_70;
  DAT_043d7a00 = local_68;
  lVar16 = FUN_0204cf78(&DAT_043d79f0);
  if (lVar16 != -1) {
    std::string::erase(0x43d79f0,lVar16 - 2);
  }
  bVar11 = (_DAT_043d79f0 & 1) == 0;
  uVar14 = (ulong)(DAT_043d79f0 >> 1);
  uVar18 = _DAT_043d79f0;
  uVar7 = DAT_043d79f8;
  pbVar3 = DAT_043d7a00;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = DAT_043d79f8;
  }
  while( true ) {
    bVar6 = DAT_043d79f0 & 1;
    _DAT_043d79f0 = uVar18;
    DAT_043d79f8 = uVar7;
    DAT_043d7a00 = pbVar3;
    if (uVar15 == 0) break;
    pbVar1 = &DAT_043d79f1;
    if (bVar6 != 0) {
      pbVar1 = pbVar3;
    }
    iVar12 = isblank((uint)*pbVar1);
    if (iVar12 == 0) break;
    pbVar2 = &DAT_043d79f1;
    if (!bVar11) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43d79f0,(long)pbVar2 - (long)pbVar1);
    bVar11 = (_DAT_043d79f0 & 1) == 0;
    uVar14 = (ulong)(DAT_043d79f0 >> 1);
    uVar18 = _DAT_043d79f0;
    uVar7 = DAT_043d79f8;
    pbVar3 = DAT_043d7a00;
    uVar15 = uVar14;
    if (!bVar11) {
      uVar15 = DAT_043d79f8;
    }
  }
  bVar11 = bVar6 == 0;
  if (!bVar11) {
    uVar14 = uVar7;
  }
  while (uVar14 != 0) {
    uVar15 = (uVar18 & 0xff) >> 1;
    pbVar3 = &DAT_043d79f1;
    if (!bVar11) {
      uVar15 = uVar7;
      pbVar3 = DAT_043d7a00;
    }
    iVar12 = isblank((uint)pbVar3[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_0204cf94(&DAT_043d79f0);
    bVar11 = (_DAT_043d79f0 & 1) == 0;
    uVar18 = _DAT_043d79f0;
    uVar7 = DAT_043d79f8;
    uVar14 = _DAT_043d79f0 >> 1 & 0x7f;
    if (!bVar11) {
      uVar14 = DAT_043d79f8;
    }
  }
  uVar15 = FUN_0204cfd4(&DAT_043d79f0,&DAT_043d7a10);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d79f0,uVar15);
      uVar15 = FUN_0204cfd4(&DAT_043d79f0,&DAT_043d7a10);
    } while (uVar15 != 0xffffffffffffffff);
  }
  uVar15 = FUN_0204cfd4(&DAT_043d79f0,&DAT_043d7a28);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d79f0,uVar15);
      uVar15 = FUN_0204cfd4(&DAT_043d79f0,&DAT_043d7a28);
    } while (uVar15 != 0xffffffffffffffff);
  }
  return;
}


