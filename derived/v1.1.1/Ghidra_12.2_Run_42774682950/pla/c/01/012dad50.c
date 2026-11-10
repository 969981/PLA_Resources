/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012dad50; name: FUN_012dad50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012dad50(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043c1ae8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043c1ae8), iVar11 != 0)) {
    DAT_043c1ab8 = 0x16;
    DAT_043c1ac8 = 0;
    DAT_043c1ab9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043c1ac0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043c1ad0 = 0x2a;
    _DAT_043c1ac4 = 0;
    DAT_043c1ae0._7_1_ = 0;
    DAT_043c1ae0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043c1ae0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043c1ae0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043c1ae0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043c1ae0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043c1ad9 = s__anonymous_namespace__039071f8[8];
    DAT_043c1ad9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043c1ad9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043c1ad9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043c1ad9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043c1ade = s__anonymous_namespace__039071f8._13_2_;
    DAT_043c1ae0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043c1ad1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043c1ad1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043c1ae0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043c1ab8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1ae8);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar16 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_038c2259._88_8_;
  _DAT_043c1a98 = 0x81;
  DAT_043c1aa0 = 0x78;
  DAT_043c1aa8 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_038c2259._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_038c2259._104_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c2259._96_8_;
  *(undefined8 *)(pcVar12 + 0x70) = s_std__string_sol__detail__ctti_ge_038c2259._112_8_;
  *(undefined8 *)(pcVar12 + 0x60) = uVar6;
  *(undefined8 *)(pcVar12 + 0x68) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_038c2259._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038c2259._64_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c2259._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_038c2259._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar6;
  *(undefined8 *)(pcVar12 + 0x40) = uVar7;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_038c2259._40_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038c2259._32_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c2259._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_038c2259._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar6;
  *(undefined8 *)(pcVar12 + 0x20) = uVar7;
  *(undefined8 *)(pcVar12 + 0x28) = uVar8;
  uVar7 = s_std__string_sol__detail__ctti_ge_038c2259._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c2259._0_8_;
  pcVar12[0x78] = '\0';
  *(undefined8 *)pcVar12 = uVar6;
  *(undefined8 *)(pcVar12 + 8) = uVar7;
  std::string::find(-0x68,0x5b);
  uVar13 = std::string::find(-0x68,0x3d);
  uVar14 = std::string::rfind(-0x68,0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043c1a98 & 1) == 0) {
      uVar14 = (ulong)(DAT_043c1a98 >> 1);
    }
    else {
      uVar14 = DAT_043c1aa0;
    }
    uVar17 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar17 = uVar13;
    }
    uVar13 = uVar14;
  }
  else {
    uVar17 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar17 = uVar13;
    }
    if ((_DAT_043c1a98 & 1) == 0) {
      uVar13 = (ulong)(DAT_043c1a98 >> 1);
    }
    else {
      uVar13 = DAT_043c1aa0;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043c1a98,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043c1a98);
  FUN_012d9150(&DAT_043c1a98);
  _DAT_043c1a98 = local_78;
  DAT_043c1aa0 = uStack_70;
  DAT_043c1aa8 = local_68;
  lVar15 = FUN_012d9028(&DAT_043c1a98);
  if (lVar15 != -1) {
    std::string::erase(0x43c1a98,lVar15 - 2);
  }
  bVar10 = (_DAT_043c1a98 & 1) == 0;
  uVar13 = (ulong)(DAT_043c1a98 >> 1);
  uVar17 = _DAT_043c1a98;
  uVar5 = DAT_043c1aa0;
  pbVar3 = DAT_043c1aa8;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = DAT_043c1aa0;
  }
  while( true ) {
    bVar4 = DAT_043c1a98 & 1;
    _DAT_043c1a98 = uVar17;
    DAT_043c1aa0 = uVar5;
    DAT_043c1aa8 = pbVar3;
    if (uVar14 == 0) break;
    pbVar1 = &DAT_043c1a99;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar11 = isblank((uint)*pbVar1);
    if (iVar11 == 0) break;
    pbVar2 = &DAT_043c1a99;
    if (!bVar10) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43c1a98,(long)pbVar2 - (long)pbVar1);
    bVar10 = (_DAT_043c1a98 & 1) == 0;
    uVar13 = (ulong)(DAT_043c1a98 >> 1);
    uVar17 = _DAT_043c1a98;
    uVar5 = DAT_043c1aa0;
    pbVar3 = DAT_043c1aa8;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043c1aa0;
    }
  }
  bVar10 = bVar4 == 0;
  if (!bVar10) {
    uVar13 = uVar5;
  }
  while (uVar13 != 0) {
    uVar14 = (uVar17 & 0xff) >> 1;
    pbVar3 = &DAT_043c1a99;
    if (!bVar10) {
      uVar14 = uVar5;
      pbVar3 = DAT_043c1aa8;
    }
    iVar11 = isblank((uint)pbVar3[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_012d9044(&DAT_043c1a98);
    bVar10 = (_DAT_043c1a98 & 1) == 0;
    uVar5 = DAT_043c1aa0;
    uVar13 = _DAT_043c1a98 >> 1 & 0x7f;
    uVar17 = _DAT_043c1a98;
    if (!bVar10) {
      uVar13 = DAT_043c1aa0;
    }
  }
  uVar14 = FUN_012d9084(&DAT_043c1a98,&DAT_043c1ab8);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c1a98,uVar14);
      uVar14 = FUN_012d9084(&DAT_043c1a98,&DAT_043c1ab8);
    } while (uVar14 != 0xffffffffffffffff);
  }
  uVar14 = FUN_012d9084(&DAT_043c1a98,&DAT_043c1ad0);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c1a98,uVar14);
      uVar14 = FUN_012d9084(&DAT_043c1a98,&DAT_043c1ad0);
    } while (uVar14 != 0xffffffffffffffff);
  }
  return;
}


