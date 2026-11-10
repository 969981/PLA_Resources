/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012d8c10; name: FUN_012d8c10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012d8c10(void)

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
  
  if (((DAT_043c1888 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c1888), iVar12 != 0)) {
    DAT_043c1858 = 0x16;
    DAT_043c1868 = 0;
    DAT_043c1859._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043c1860 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043c1870 = 0x2a;
    _DAT_043c1864 = 0;
    DAT_043c1880._7_1_ = 0;
    DAT_043c1880._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043c1880._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043c1880._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043c1880._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043c1880._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043c1879 = s__anonymous_namespace__039071f8[8];
    DAT_043c1879_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043c1879_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043c1879_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043c1879_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043c187e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043c1880._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043c1871._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043c1871._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043c1880._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043c1858,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1888);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar17 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar17 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_0391e4be._72_8_;
  _DAT_043c1838 = 0x71;
  DAT_043c1840 = 0x65;
  DAT_043c1848 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_0391e4be._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar4;
  uVar5 = CONCAT53(s_std__string_sol__detail__ctti_ge_0391e4be._96_5_,
                   s_std__string_sol__detail__ctti_ge_0391e4be._93_3_);
  uVar4 = CONCAT35(s_std__string_sol__detail__ctti_ge_0391e4be._93_3_,
                   s_std__string_sol__detail__ctti_ge_0391e4be._88_5_);
  *(undefined8 *)(pcVar13 + 0x50) = s_std__string_sol__detail__ctti_ge_0391e4be._80_8_;
  *(undefined8 *)(pcVar13 + 0x58) = uVar4;
  *(undefined8 *)(pcVar13 + 0x5d) = uVar5;
  uVar8 = s_std__string_sol__detail__ctti_ge_0391e4be._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0391e4be._48_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0391e4be._40_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_0391e4be._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar4;
  *(undefined8 *)(pcVar13 + 0x30) = uVar5;
  *(undefined8 *)(pcVar13 + 0x38) = uVar8;
  uVar9 = s_std__string_sol__detail__ctti_ge_0391e4be._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0391e4be._16_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0391e4be._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0391e4be._0_8_;
  pcVar13[0x65] = '\0';
  *(undefined8 *)pcVar13 = uVar4;
  *(undefined8 *)(pcVar13 + 8) = uVar5;
  *(undefined8 *)(pcVar13 + 0x10) = uVar8;
  *(undefined8 *)(pcVar13 + 0x18) = uVar9;
  std::string::find('8',0x5b);
  uVar14 = std::string::find('8',0x3d);
  uVar15 = std::string::rfind('8',0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043c1838 & 1) == 0) {
      uVar15 = (ulong)(DAT_043c1838 >> 1);
    }
    else {
      uVar15 = DAT_043c1840;
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
    if ((_DAT_043c1838 & 1) == 0) {
      uVar14 = (ulong)(DAT_043c1838 >> 1);
    }
    else {
      uVar14 = DAT_043c1840;
    }
  }
  if (uVar18 < uVar14 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043c1838,uVar18,uVar15 - uVar18,
                      (allocator *)&DAT_043c1838);
  FUN_012d9150(&DAT_043c1838);
  _DAT_043c1838 = local_78;
  DAT_043c1840 = uStack_70;
  DAT_043c1848 = local_68;
  lVar16 = FUN_012d9028(&DAT_043c1838);
  if (lVar16 != -1) {
    std::string::erase(0x43c1838,lVar16 - 2);
  }
  bVar11 = (_DAT_043c1838 & 1) == 0;
  uVar14 = (ulong)(DAT_043c1838 >> 1);
  uVar18 = _DAT_043c1838;
  uVar7 = DAT_043c1840;
  pbVar3 = DAT_043c1848;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = DAT_043c1840;
  }
  while( true ) {
    bVar6 = DAT_043c1838 & 1;
    _DAT_043c1838 = uVar18;
    DAT_043c1840 = uVar7;
    DAT_043c1848 = pbVar3;
    if (uVar15 == 0) break;
    pbVar1 = &DAT_043c1839;
    if (bVar6 != 0) {
      pbVar1 = pbVar3;
    }
    iVar12 = isblank((uint)*pbVar1);
    if (iVar12 == 0) break;
    pbVar2 = &DAT_043c1839;
    if (!bVar11) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43c1838,(long)pbVar2 - (long)pbVar1);
    bVar11 = (_DAT_043c1838 & 1) == 0;
    uVar14 = (ulong)(DAT_043c1838 >> 1);
    uVar18 = _DAT_043c1838;
    uVar7 = DAT_043c1840;
    pbVar3 = DAT_043c1848;
    uVar15 = uVar14;
    if (!bVar11) {
      uVar15 = DAT_043c1840;
    }
  }
  bVar11 = bVar6 == 0;
  if (!bVar11) {
    uVar14 = uVar7;
  }
  while (uVar14 != 0) {
    uVar15 = (uVar18 & 0xff) >> 1;
    pbVar3 = &DAT_043c1839;
    if (!bVar11) {
      uVar15 = uVar7;
      pbVar3 = DAT_043c1848;
    }
    iVar12 = isblank((uint)pbVar3[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_012d9044(&DAT_043c1838);
    bVar11 = (_DAT_043c1838 & 1) == 0;
    uVar18 = _DAT_043c1838;
    uVar7 = DAT_043c1840;
    uVar14 = _DAT_043c1838 >> 1 & 0x7f;
    if (!bVar11) {
      uVar14 = DAT_043c1840;
    }
  }
  uVar15 = FUN_012d9084(&DAT_043c1838,&DAT_043c1858);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c1838,uVar15);
      uVar15 = FUN_012d9084(&DAT_043c1838,&DAT_043c1858);
    } while (uVar15 != 0xffffffffffffffff);
  }
  uVar15 = FUN_012d9084(&DAT_043c1838,&DAT_043c1870);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c1838,uVar15);
      uVar15 = FUN_012d9084(&DAT_043c1838,&DAT_043c1870);
    } while (uVar15 != 0xffffffffffffffff);
  }
  return;
}


