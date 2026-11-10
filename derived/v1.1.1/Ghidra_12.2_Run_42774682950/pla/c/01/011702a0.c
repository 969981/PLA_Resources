/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011702a0; name: FUN_011702a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011702a0(void)

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
  
  if (((DAT_043bab50 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043bab50), iVar12 != 0)) {
    DAT_043bab20 = 0x16;
    DAT_043bab30 = 0;
    DAT_043bab21._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043bab28 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043bab38 = 0x2a;
    _DAT_043bab2c = 0;
    DAT_043bab48._7_1_ = 0;
    DAT_043bab48._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043bab48._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043bab48._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043bab48._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043bab48._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043bab41 = s__anonymous_namespace__039071f8[8];
    DAT_043bab41_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043bab41_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043bab41_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043bab41_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043bab46 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043bab48._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043bab39._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043bab39._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043bab48._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043bab20,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043bab50);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar17 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar17 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_0393a645._72_8_;
  _DAT_043bab00 = 0x71;
  DAT_043bab08 = 0x66;
  DAT_043bab10 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_0393a645._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar4;
  uVar5 = CONCAT62(s_std__string_sol__detail__ctti_ge_0393a645._96_6_,
                   s_std__string_sol__detail__ctti_ge_0393a645._94_2_);
  uVar4 = CONCAT26(s_std__string_sol__detail__ctti_ge_0393a645._94_2_,
                   s_std__string_sol__detail__ctti_ge_0393a645._88_6_);
  *(undefined8 *)(pcVar13 + 0x50) = s_std__string_sol__detail__ctti_ge_0393a645._80_8_;
  *(undefined8 *)(pcVar13 + 0x58) = uVar4;
  *(undefined8 *)(pcVar13 + 0x5e) = uVar5;
  uVar8 = s_std__string_sol__detail__ctti_ge_0393a645._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393a645._48_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393a645._40_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_0393a645._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar4;
  *(undefined8 *)(pcVar13 + 0x30) = uVar5;
  *(undefined8 *)(pcVar13 + 0x38) = uVar8;
  uVar9 = s_std__string_sol__detail__ctti_ge_0393a645._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0393a645._16_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393a645._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393a645._0_8_;
  pcVar13[0x66] = '\0';
  *(undefined8 *)pcVar13 = uVar4;
  *(undefined8 *)(pcVar13 + 8) = uVar5;
  *(undefined8 *)(pcVar13 + 0x10) = uVar8;
  *(undefined8 *)(pcVar13 + 0x18) = uVar9;
  std::string::find('\0',0x5b);
  uVar14 = std::string::find('\0',0x3d);
  uVar15 = std::string::rfind('\0',0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043bab00 & 1) == 0) {
      uVar15 = (ulong)(DAT_043bab00 >> 1);
    }
    else {
      uVar15 = DAT_043bab08;
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
    if ((_DAT_043bab00 & 1) == 0) {
      uVar14 = (ulong)(DAT_043bab00 >> 1);
    }
    else {
      uVar14 = DAT_043bab08;
    }
  }
  if (uVar18 < uVar14 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043bab00,uVar18,uVar15 - uVar18,
                      (allocator *)&DAT_043bab00);
  FUN_011707e0(&DAT_043bab00);
  _DAT_043bab00 = local_78;
  DAT_043bab08 = uStack_70;
  DAT_043bab10 = local_68;
  lVar16 = FUN_011706b8(&DAT_043bab00);
  if (lVar16 != -1) {
    std::string::erase(0x43bab00,lVar16 - 2);
  }
  bVar11 = (_DAT_043bab00 & 1) == 0;
  uVar14 = (ulong)(DAT_043bab00 >> 1);
  uVar18 = _DAT_043bab00;
  uVar7 = DAT_043bab08;
  pbVar3 = DAT_043bab10;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = DAT_043bab08;
  }
  while( true ) {
    bVar6 = DAT_043bab00 & 1;
    _DAT_043bab00 = uVar18;
    DAT_043bab08 = uVar7;
    DAT_043bab10 = pbVar3;
    if (uVar15 == 0) break;
    pbVar1 = &DAT_043bab01;
    if (bVar6 != 0) {
      pbVar1 = pbVar3;
    }
    iVar12 = isblank((uint)*pbVar1);
    if (iVar12 == 0) break;
    pbVar2 = &DAT_043bab01;
    if (!bVar11) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43bab00,(long)pbVar2 - (long)pbVar1);
    bVar11 = (_DAT_043bab00 & 1) == 0;
    uVar14 = (ulong)(DAT_043bab00 >> 1);
    uVar18 = _DAT_043bab00;
    uVar7 = DAT_043bab08;
    pbVar3 = DAT_043bab10;
    uVar15 = uVar14;
    if (!bVar11) {
      uVar15 = DAT_043bab08;
    }
  }
  bVar11 = bVar6 == 0;
  if (!bVar11) {
    uVar14 = uVar7;
  }
  while (uVar14 != 0) {
    uVar15 = (uVar18 & 0xff) >> 1;
    pbVar3 = &DAT_043bab01;
    if (!bVar11) {
      uVar15 = uVar7;
      pbVar3 = DAT_043bab10;
    }
    iVar12 = isblank((uint)pbVar3[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_011706d4(&DAT_043bab00);
    bVar11 = (_DAT_043bab00 & 1) == 0;
    uVar18 = _DAT_043bab00;
    uVar7 = DAT_043bab08;
    uVar14 = _DAT_043bab00 >> 1 & 0x7f;
    if (!bVar11) {
      uVar14 = DAT_043bab08;
    }
  }
  uVar15 = FUN_01170714(&DAT_043bab00,&DAT_043bab20);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43bab00,uVar15);
      uVar15 = FUN_01170714(&DAT_043bab00,&DAT_043bab20);
    } while (uVar15 != 0xffffffffffffffff);
  }
  uVar15 = FUN_01170714(&DAT_043bab00,&DAT_043bab38);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43bab00,uVar15);
      uVar15 = FUN_01170714(&DAT_043bab00,&DAT_043bab38);
    } while (uVar15 != 0xffffffffffffffff);
  }
  return;
}


