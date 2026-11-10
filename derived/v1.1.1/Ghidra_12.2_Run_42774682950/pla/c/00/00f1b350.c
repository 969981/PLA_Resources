/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1b350; name: FUN_00f1b350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1b350(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
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
  ulong uVar18;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b44a0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b44a0), iVar11 != 0)) {
    DAT_043b4470 = 0x16;
    DAT_043b4480 = 0;
    DAT_043b4471._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b4478 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b4488 = 0x2a;
    _DAT_043b447c = 0;
    DAT_043b4498._7_1_ = 0;
    DAT_043b4498._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b4498._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b4498._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b4498._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b4498._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b4491 = s__anonymous_namespace__039071f8[8];
    DAT_043b4491_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b4491_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b4491_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b4491_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b4496 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b4498._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b4489._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b4489._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b4498._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b4470,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b44a0);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar16 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_038c1057._88_8_;
  _DAT_043b4450 = 0x81;
  DAT_043b4458 = 0x70;
  DAT_043b4460 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_038c1057._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c1057._104_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_038c1057._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038c1057._64_8_;
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_038c1057._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c1057._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_038c1057._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar6;
  *(undefined8 *)(pcVar12 + 0x40) = uVar7;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_038c1057._40_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038c1057._32_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c1057._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_038c1057._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar6;
  *(undefined8 *)(pcVar12 + 0x20) = uVar7;
  *(undefined8 *)(pcVar12 + 0x28) = uVar8;
  uVar7 = s_std__string_sol__detail__ctti_ge_038c1057._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038c1057._0_8_;
  pcVar12[0x70] = '\0';
  *(undefined8 *)pcVar12 = uVar6;
  *(undefined8 *)(pcVar12 + 8) = uVar7;
  std::string::find('P',0x5b);
  uVar13 = std::string::find('P',0x3d);
  uVar14 = std::string::rfind('P',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043b4450 & 1) == 0) {
      uVar14 = (ulong)(DAT_043b4450 >> 1);
    }
    else {
      uVar14 = DAT_043b4458;
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
    if ((_DAT_043b4450 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b4450 >> 1);
    }
    else {
      uVar13 = DAT_043b4458;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b4450,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043b4450);
  FUN_00f1b8bc(&DAT_043b4450);
  _DAT_043b4450 = local_78;
  DAT_043b4458 = uStack_70;
  DAT_043b4460 = local_68;
  lVar15 = FUN_00f1b794(&DAT_043b4450);
  if (lVar15 != -1) {
    std::string::erase(0x43b4450,lVar15 - 2);
  }
  uVar14 = (ulong)(DAT_043b4450 >> 1);
  uVar13 = DAT_043b4458;
  pbVar4 = DAT_043b4460;
  uVar17 = uVar14;
  if ((_DAT_043b4450 & 1) != 0) {
    uVar17 = DAT_043b4458;
  }
  while( true ) {
    bVar5 = DAT_043b4450 & 1;
    uVar18 = _DAT_043b4450 & 0xff;
    DAT_043b4458 = uVar13;
    DAT_043b4460 = pbVar4;
    if (uVar17 == 0) break;
    bVar3 = DAT_043b4450 & 1;
    pbVar1 = &DAT_043b4451;
    if (bVar5 != 0) {
      pbVar1 = pbVar4;
    }
    iVar11 = isblank((uint)*pbVar1);
    if (iVar11 == 0) break;
    pbVar2 = &DAT_043b4451;
    if (bVar3 != 0) {
      pbVar2 = pbVar4;
    }
    std::string::erase(0x43b4450,(long)pbVar2 - (long)pbVar1);
    uVar14 = (ulong)(DAT_043b4450 >> 1);
    uVar13 = DAT_043b4458;
    pbVar4 = DAT_043b4460;
    uVar17 = uVar14;
    if ((_DAT_043b4450 & 1) != 0) {
      uVar17 = DAT_043b4458;
    }
  }
  bVar10 = bVar5 == 0;
  uVar17 = uVar13;
  if (bVar5 == 0) {
    uVar17 = uVar14;
  }
  while (uVar17 != 0) {
    while( true ) {
      uVar14 = uVar18 >> 1;
      pbVar4 = &DAT_043b4451;
      if (!bVar10) {
        uVar14 = uVar13;
        pbVar4 = DAT_043b4460;
      }
      iVar11 = isblank((uint)pbVar4[uVar14 - 1]);
      if (iVar11 == 0) goto LAB_00f1b5a0;
      FUN_00f1b7b0(&DAT_043b4450);
      uVar18 = _DAT_043b4450 & 0xff;
      bVar10 = (_DAT_043b4450 & 1) == 0;
      uVar13 = DAT_043b4458;
      uVar17 = DAT_043b4458;
      if ((_DAT_043b4450 & 1) != 0) break;
      if (DAT_043b4450 >> 1 == 0) goto LAB_00f1b5a0;
    }
  }
LAB_00f1b5a0:
  uVar14 = FUN_00f1b7f0(&DAT_043b4450,&DAT_043b4470);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4450,uVar14);
      uVar14 = FUN_00f1b7f0(&DAT_043b4450,&DAT_043b4470);
    } while (uVar14 != 0xffffffffffffffff);
  }
  uVar14 = FUN_00f1b7f0(&DAT_043b4450,&DAT_043b4488);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4450,uVar14);
      uVar14 = FUN_00f1b7f0(&DAT_043b4450,&DAT_043b4488);
    } while (uVar14 != 0xffffffffffffffff);
  }
  return;
}


