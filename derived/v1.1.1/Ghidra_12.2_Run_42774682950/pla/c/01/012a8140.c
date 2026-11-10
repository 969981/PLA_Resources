/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012a8140; name: FUN_012a8140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012a8140(void)

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
  
  if (((DAT_043c0868 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043c0868), iVar11 != 0)) {
    DAT_043c0838 = 0x16;
    DAT_043c0848 = 0;
    DAT_043c0839._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043c0840 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043c0850 = 0x2a;
    _DAT_043c0844 = 0;
    DAT_043c0860._7_1_ = 0;
    DAT_043c0860._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043c0860._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043c0860._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043c0860._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043c0860._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043c0859 = s__anonymous_namespace__039071f8[8];
    DAT_043c0859_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043c0859_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043c0859_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043c0859_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043c085e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043c0860._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043c0851._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043c0851._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043c0860._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043c0838,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c0868);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar16 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_038d4b25._88_8_;
  _DAT_043c0818 = 0x81;
  DAT_043c0820 = 0x75;
  DAT_043c0828 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_038d4b25._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar4;
  uVar5 = CONCAT53(s_std__string_sol__detail__ctti_ge_038d4b25._112_5_,
                   s_std__string_sol__detail__ctti_ge_038d4b25._109_3_);
  uVar4 = CONCAT35(s_std__string_sol__detail__ctti_ge_038d4b25._109_3_,
                   s_std__string_sol__detail__ctti_ge_038d4b25._104_5_);
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_038d4b25._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar4;
  *(undefined8 *)(pcVar12 + 0x6d) = uVar5;
  uVar8 = s_std__string_sol__detail__ctti_ge_038d4b25._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038d4b25._64_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038d4b25._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_038d4b25._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar4;
  *(undefined8 *)(pcVar12 + 0x40) = uVar5;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_038d4b25._40_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038d4b25._32_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038d4b25._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_038d4b25._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar4;
  *(undefined8 *)(pcVar12 + 0x20) = uVar5;
  *(undefined8 *)(pcVar12 + 0x28) = uVar8;
  uVar5 = s_std__string_sol__detail__ctti_ge_038d4b25._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038d4b25._0_8_;
  pcVar12[0x75] = '\0';
  *(undefined8 *)pcVar12 = uVar4;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  std::string::find('\x18',0x5b);
  uVar13 = std::string::find('\x18',0x3d);
  uVar14 = std::string::rfind('\x18',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043c0818 & 1) == 0) {
      uVar14 = (ulong)(DAT_043c0818 >> 1);
    }
    else {
      uVar14 = DAT_043c0820;
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
    if ((_DAT_043c0818 & 1) == 0) {
      uVar13 = (ulong)(DAT_043c0818 >> 1);
    }
    else {
      uVar13 = DAT_043c0820;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043c0818,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043c0818);
  FUN_012a7af8(&DAT_043c0818);
  _DAT_043c0818 = local_78;
  DAT_043c0820 = uStack_70;
  DAT_043c0828 = local_68;
  lVar15 = FUN_012a79d0(&DAT_043c0818);
  if (lVar15 != -1) {
    std::string::erase(0x43c0818,lVar15 - 2);
  }
  bVar10 = (_DAT_043c0818 & 1) == 0;
  uVar13 = (ulong)(DAT_043c0818 >> 1);
  uVar17 = _DAT_043c0818;
  uVar7 = DAT_043c0820;
  pbVar3 = DAT_043c0828;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = DAT_043c0820;
  }
  while( true ) {
    bVar6 = DAT_043c0818 & 1;
    _DAT_043c0818 = uVar17;
    DAT_043c0820 = uVar7;
    DAT_043c0828 = pbVar3;
    if (uVar14 == 0) break;
    pbVar1 = &DAT_043c0819;
    if (bVar6 != 0) {
      pbVar1 = pbVar3;
    }
    iVar11 = isblank((uint)*pbVar1);
    if (iVar11 == 0) break;
    pbVar2 = &DAT_043c0819;
    if (!bVar10) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43c0818,(long)pbVar2 - (long)pbVar1);
    bVar10 = (_DAT_043c0818 & 1) == 0;
    uVar13 = (ulong)(DAT_043c0818 >> 1);
    uVar17 = _DAT_043c0818;
    uVar7 = DAT_043c0820;
    pbVar3 = DAT_043c0828;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043c0820;
    }
  }
  bVar10 = bVar6 == 0;
  if (!bVar10) {
    uVar13 = uVar7;
  }
  while (uVar13 != 0) {
    uVar14 = (uVar17 & 0xff) >> 1;
    pbVar3 = &DAT_043c0819;
    if (!bVar10) {
      uVar14 = uVar7;
      pbVar3 = DAT_043c0828;
    }
    iVar11 = isblank((uint)pbVar3[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_012a79ec(&DAT_043c0818);
    bVar10 = (_DAT_043c0818 & 1) == 0;
    uVar17 = _DAT_043c0818;
    uVar7 = DAT_043c0820;
    uVar13 = _DAT_043c0818 >> 1 & 0x7f;
    if (!bVar10) {
      uVar13 = DAT_043c0820;
    }
  }
  uVar14 = FUN_012a7a2c(&DAT_043c0818,&DAT_043c0838);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c0818,uVar14);
      uVar14 = FUN_012a7a2c(&DAT_043c0818,&DAT_043c0838);
    } while (uVar14 != 0xffffffffffffffff);
  }
  uVar14 = FUN_012a7a2c(&DAT_043c0818,&DAT_043c0850);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c0818,uVar14);
      uVar14 = FUN_012a7a2c(&DAT_043c0818,&DAT_043c0850);
    } while (uVar14 != 0xffffffffffffffff);
  }
  return;
}


