/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021dbd10; name: FUN_021dbd10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021dbd10(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  if (((DAT_043dd638 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043dd638), iVar12 != 0)) {
    DAT_043dd608 = 0x16;
    DAT_043dd618 = 0;
    DAT_043dd609._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043dd610 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043dd620 = 0x2a;
    _DAT_043dd614 = 0;
    DAT_043dd630._7_1_ = 0;
    DAT_043dd630._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043dd630._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043dd630._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043dd630._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043dd630._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043dd629 = s__anonymous_namespace__039071f8[8];
    DAT_043dd629_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043dd629_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043dd629_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043dd629_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043dd62e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043dd630._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043dd621._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043dd621._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043dd630._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043dd608,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dd638);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar17 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar17 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_038f6668._72_8_;
  _DAT_043dd5e8 = 0x71;
  DAT_043dd5f0 = 0x60;
  DAT_043dd5f8 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_038f6668._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_038f6668._88_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_038f6668._56_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038f6668._48_8_;
  *(undefined8 *)(pcVar13 + 0x50) = s_std__string_sol__detail__ctti_ge_038f6668._80_8_;
  *(undefined8 *)(pcVar13 + 0x58) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_038f6668._40_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_038f6668._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar6;
  *(undefined8 *)(pcVar13 + 0x30) = uVar7;
  *(undefined8 *)(pcVar13 + 0x38) = uVar8;
  uVar9 = s_std__string_sol__detail__ctti_ge_038f6668._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_038f6668._16_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038f6668._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038f6668._0_8_;
  pcVar13[0x60] = '\0';
  *(undefined8 *)pcVar13 = uVar6;
  *(undefined8 *)(pcVar13 + 8) = uVar7;
  *(undefined8 *)(pcVar13 + 0x10) = uVar8;
  *(undefined8 *)(pcVar13 + 0x18) = uVar9;
  std::string::find(-0x18,0x5b);
  uVar14 = std::string::find(-0x18,0x3d);
  uVar15 = std::string::rfind(-0x18,0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043dd5e8 & 1) == 0) {
      uVar15 = (ulong)(DAT_043dd5e8 >> 1);
    }
    else {
      uVar15 = DAT_043dd5f0;
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
    if ((_DAT_043dd5e8 & 1) == 0) {
      uVar14 = (ulong)(DAT_043dd5e8 >> 1);
    }
    else {
      uVar14 = DAT_043dd5f0;
    }
  }
  if (uVar18 < uVar14 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043dd5e8,uVar18,uVar15 - uVar18,
                      (allocator *)&DAT_043dd5e8);
  FUN_021db680(&DAT_043dd5e8);
  _DAT_043dd5e8 = local_78;
  DAT_043dd5f0 = uStack_70;
  DAT_043dd5f8 = local_68;
  lVar16 = FUN_021db558(&DAT_043dd5e8);
  if (lVar16 != -1) {
    std::string::erase(0x43dd5e8,lVar16 - 2);
  }
  bVar11 = (_DAT_043dd5e8 & 1) == 0;
  uVar14 = (ulong)(DAT_043dd5e8 >> 1);
  uVar18 = _DAT_043dd5e8;
  uVar5 = DAT_043dd5f0;
  pbVar3 = DAT_043dd5f8;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = DAT_043dd5f0;
  }
  while( true ) {
    bVar4 = DAT_043dd5e8 & 1;
    _DAT_043dd5e8 = uVar18;
    DAT_043dd5f0 = uVar5;
    DAT_043dd5f8 = pbVar3;
    if (uVar15 == 0) break;
    pbVar1 = &DAT_043dd5e9;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar12 = isblank((uint)*pbVar1);
    if (iVar12 == 0) break;
    pbVar2 = &DAT_043dd5e9;
    if (!bVar11) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43dd5e8,(long)pbVar2 - (long)pbVar1);
    bVar11 = (_DAT_043dd5e8 & 1) == 0;
    uVar14 = (ulong)(DAT_043dd5e8 >> 1);
    uVar18 = _DAT_043dd5e8;
    uVar5 = DAT_043dd5f0;
    pbVar3 = DAT_043dd5f8;
    uVar15 = uVar14;
    if (!bVar11) {
      uVar15 = DAT_043dd5f0;
    }
  }
  bVar11 = bVar4 == 0;
  if (!bVar11) {
    uVar14 = uVar5;
  }
  while (uVar14 != 0) {
    uVar15 = (uVar18 & 0xff) >> 1;
    pbVar3 = &DAT_043dd5e9;
    if (!bVar11) {
      uVar15 = uVar5;
      pbVar3 = DAT_043dd5f8;
    }
    iVar12 = isblank((uint)pbVar3[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_021db574(&DAT_043dd5e8);
    bVar11 = (_DAT_043dd5e8 & 1) == 0;
    uVar18 = _DAT_043dd5e8;
    uVar5 = DAT_043dd5f0;
    uVar14 = _DAT_043dd5e8 >> 1 & 0x7f;
    if (!bVar11) {
      uVar14 = DAT_043dd5f0;
    }
  }
  uVar15 = FUN_021db5b4(&DAT_043dd5e8,&DAT_043dd608);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43dd5e8,uVar15);
      uVar15 = FUN_021db5b4(&DAT_043dd5e8,&DAT_043dd608);
    } while (uVar15 != 0xffffffffffffffff);
  }
  uVar15 = FUN_021db5b4(&DAT_043dd5e8,&DAT_043dd620);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43dd5e8,uVar15);
      uVar15 = FUN_021db5b4(&DAT_043dd5e8,&DAT_043dd620);
    } while (uVar15 != 0xffffffffffffffff);
  }
  return;
}


