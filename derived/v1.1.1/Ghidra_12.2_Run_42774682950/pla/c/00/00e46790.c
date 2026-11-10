/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e46790; name: FUN_00e46790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e46790(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
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
  
  if (((DAT_043afe80 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043afe80), iVar11 != 0)) {
    DAT_043afe50 = 0x16;
    DAT_043afe60 = 0;
    DAT_043afe51._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043afe58 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043afe68 = 0x2a;
    _DAT_043afe5c = 0;
    DAT_043afe78._7_1_ = 0;
    DAT_043afe78._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043afe78._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043afe78._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043afe78._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043afe78._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043afe71 = s__anonymous_namespace__039071f8[8];
    DAT_043afe71_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043afe71_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043afe71_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043afe71_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043afe76 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043afe78._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043afe69._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043afe69._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043afe78._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043afe50,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043afe80);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar16 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_0388e6ce._88_8_;
  _DAT_043afe30 = 0x81;
  DAT_043afe38 = 0x75;
  DAT_043afe40 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_0388e6ce._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar4;
  uVar5 = CONCAT53(s_std__string_sol__detail__ctti_ge_0388e6ce._112_5_,
                   s_std__string_sol__detail__ctti_ge_0388e6ce._109_3_);
  uVar4 = CONCAT35(s_std__string_sol__detail__ctti_ge_0388e6ce._109_3_,
                   s_std__string_sol__detail__ctti_ge_0388e6ce._104_5_);
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_0388e6ce._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar4;
  *(undefined8 *)(pcVar12 + 0x6d) = uVar5;
  uVar8 = s_std__string_sol__detail__ctti_ge_0388e6ce._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0388e6ce._64_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0388e6ce._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_0388e6ce._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar4;
  *(undefined8 *)(pcVar12 + 0x40) = uVar5;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_0388e6ce._40_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0388e6ce._32_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0388e6ce._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_0388e6ce._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar4;
  *(undefined8 *)(pcVar12 + 0x20) = uVar5;
  *(undefined8 *)(pcVar12 + 0x28) = uVar8;
  uVar5 = s_std__string_sol__detail__ctti_ge_0388e6ce._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0388e6ce._0_8_;
  pcVar12[0x75] = '\0';
  *(undefined8 *)pcVar12 = uVar4;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  std::string::find('0',0x5b);
  uVar13 = std::string::find('0',0x3d);
  uVar14 = std::string::rfind('0',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043afe30 & 1) == 0) {
      uVar14 = (ulong)(DAT_043afe30 >> 1);
    }
    else {
      uVar14 = DAT_043afe38;
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
    if ((_DAT_043afe30 & 1) == 0) {
      uVar13 = (ulong)(DAT_043afe30 >> 1);
    }
    else {
      uVar13 = DAT_043afe38;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043afe30,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043afe30);
  FUN_00e44730(&DAT_043afe30);
  _DAT_043afe30 = local_78;
  DAT_043afe38 = uStack_70;
  DAT_043afe40 = local_68;
  lVar15 = FUN_00e44608(&DAT_043afe30);
  if (lVar15 != -1) {
    std::string::erase(0x43afe30,lVar15 - 2);
  }
  bVar10 = (_DAT_043afe30 & 1) == 0;
  uVar13 = (ulong)(DAT_043afe30 >> 1);
  uVar17 = _DAT_043afe30;
  uVar7 = DAT_043afe38;
  pbVar3 = DAT_043afe40;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = DAT_043afe38;
  }
  while( true ) {
    bVar6 = DAT_043afe30 & 1;
    _DAT_043afe30 = uVar17;
    DAT_043afe38 = uVar7;
    DAT_043afe40 = pbVar3;
    if (uVar14 == 0) break;
    pbVar1 = &DAT_043afe31;
    if (bVar6 != 0) {
      pbVar1 = pbVar3;
    }
    iVar11 = isblank((uint)*pbVar1);
    if (iVar11 == 0) break;
    pbVar2 = &DAT_043afe31;
    if (!bVar10) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43afe30,(long)pbVar2 - (long)pbVar1);
    bVar10 = (_DAT_043afe30 & 1) == 0;
    uVar13 = (ulong)(DAT_043afe30 >> 1);
    uVar17 = _DAT_043afe30;
    uVar7 = DAT_043afe38;
    pbVar3 = DAT_043afe40;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043afe38;
    }
  }
  bVar10 = bVar6 == 0;
  if (!bVar10) {
    uVar13 = uVar7;
  }
  while (uVar13 != 0) {
    uVar14 = (uVar17 & 0xff) >> 1;
    pbVar3 = &DAT_043afe31;
    if (!bVar10) {
      uVar14 = uVar7;
      pbVar3 = DAT_043afe40;
    }
    iVar11 = isblank((uint)pbVar3[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_00e44624(&DAT_043afe30);
    bVar10 = (_DAT_043afe30 & 1) == 0;
    uVar7 = DAT_043afe38;
    uVar13 = _DAT_043afe30 >> 1 & 0x7f;
    uVar17 = _DAT_043afe30;
    if (!bVar10) {
      uVar13 = DAT_043afe38;
    }
  }
  uVar14 = FUN_00e44664(&DAT_043afe30,&DAT_043afe50);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43afe30,uVar14);
      uVar14 = FUN_00e44664(&DAT_043afe30,&DAT_043afe50);
    } while (uVar14 != 0xffffffffffffffff);
  }
  uVar14 = FUN_00e44664(&DAT_043afe30,&DAT_043afe68);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43afe30,uVar14);
      uVar14 = FUN_00e44664(&DAT_043afe30,&DAT_043afe68);
    } while (uVar14 != 0xffffffffffffffff);
  }
  return;
}


