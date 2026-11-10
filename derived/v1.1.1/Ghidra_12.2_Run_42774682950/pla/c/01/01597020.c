/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01597020; name: FUN_01597020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01597020(void)

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
  
  if (((DAT_043c9b60 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043c9b60), iVar11 != 0)) {
    DAT_043c9b30 = 0x16;
    DAT_043c9b40 = 0;
    DAT_043c9b31._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043c9b38 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043c9b48 = 0x2a;
    _DAT_043c9b3c = 0;
    DAT_043c9b58._7_1_ = 0;
    DAT_043c9b58._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043c9b58._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043c9b58._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043c9b58._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043c9b58._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043c9b51 = s__anonymous_namespace__039071f8[8];
    DAT_043c9b51_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043c9b51_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043c9b51_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043c9b51_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043c9b56 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043c9b58._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043c9b49._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043c9b49._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043c9b58._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043c9b30,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c9b60);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar16 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_0389000e._88_8_;
  _DAT_043c9b10 = 0x81;
  DAT_043c9b18 = 0x77;
  DAT_043c9b20 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_0389000e._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar4;
  uVar5 = CONCAT71(s_std__string_sol__detail__ctti_ge_0389000e._112_7_,
                   s_std__string_sol__detail__ctti_ge_0389000e[0x6f]);
  uVar4 = CONCAT17(s_std__string_sol__detail__ctti_ge_0389000e[0x6f],
                   s_std__string_sol__detail__ctti_ge_0389000e._104_7_);
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_0389000e._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar4;
  *(undefined8 *)(pcVar12 + 0x6f) = uVar5;
  uVar8 = s_std__string_sol__detail__ctti_ge_0389000e._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389000e._64_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0389000e._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_0389000e._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar4;
  *(undefined8 *)(pcVar12 + 0x40) = uVar5;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_0389000e._40_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389000e._32_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0389000e._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_0389000e._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar4;
  *(undefined8 *)(pcVar12 + 0x20) = uVar5;
  *(undefined8 *)(pcVar12 + 0x28) = uVar8;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389000e._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0389000e._0_8_;
  pcVar12[0x77] = '\0';
  *(undefined8 *)pcVar12 = uVar4;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  std::string::find('\x10',0x5b);
  uVar13 = std::string::find('\x10',0x3d);
  uVar14 = std::string::rfind('\x10',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043c9b10 & 1) == 0) {
      uVar14 = (ulong)(DAT_043c9b10 >> 1);
    }
    else {
      uVar14 = DAT_043c9b18;
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
    if ((_DAT_043c9b10 & 1) == 0) {
      uVar13 = (ulong)(DAT_043c9b10 >> 1);
    }
    else {
      uVar13 = DAT_043c9b18;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043c9b10,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043c9b10);
  FUN_01596dc0(&DAT_043c9b10);
  _DAT_043c9b10 = local_78;
  DAT_043c9b18 = uStack_70;
  DAT_043c9b20 = local_68;
  lVar15 = FUN_01596c98(&DAT_043c9b10);
  if (lVar15 != -1) {
    std::string::erase(0x43c9b10,lVar15 - 2);
  }
  bVar10 = (_DAT_043c9b10 & 1) == 0;
  uVar13 = (ulong)(DAT_043c9b10 >> 1);
  uVar17 = _DAT_043c9b10;
  uVar7 = DAT_043c9b18;
  pbVar3 = DAT_043c9b20;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = DAT_043c9b18;
  }
  while( true ) {
    bVar6 = DAT_043c9b10 & 1;
    _DAT_043c9b10 = uVar17;
    DAT_043c9b18 = uVar7;
    DAT_043c9b20 = pbVar3;
    if (uVar14 == 0) break;
    pbVar1 = &DAT_043c9b11;
    if (bVar6 != 0) {
      pbVar1 = pbVar3;
    }
    iVar11 = isblank((uint)*pbVar1);
    if (iVar11 == 0) break;
    pbVar2 = &DAT_043c9b11;
    if (!bVar10) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43c9b10,(long)pbVar2 - (long)pbVar1);
    bVar10 = (_DAT_043c9b10 & 1) == 0;
    uVar13 = (ulong)(DAT_043c9b10 >> 1);
    uVar17 = _DAT_043c9b10;
    uVar7 = DAT_043c9b18;
    pbVar3 = DAT_043c9b20;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043c9b18;
    }
  }
  bVar10 = bVar6 == 0;
  if (!bVar10) {
    uVar13 = uVar7;
  }
  while (uVar13 != 0) {
    uVar14 = (uVar17 & 0xff) >> 1;
    pbVar3 = &DAT_043c9b11;
    if (!bVar10) {
      uVar14 = uVar7;
      pbVar3 = DAT_043c9b20;
    }
    iVar11 = isblank((uint)pbVar3[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_01596cb4(&DAT_043c9b10);
    bVar10 = (_DAT_043c9b10 & 1) == 0;
    uVar17 = _DAT_043c9b10;
    uVar7 = DAT_043c9b18;
    uVar13 = _DAT_043c9b10 >> 1 & 0x7f;
    if (!bVar10) {
      uVar13 = DAT_043c9b18;
    }
  }
  uVar14 = FUN_01596cf4(&DAT_043c9b10,&DAT_043c9b30);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c9b10,uVar14);
      uVar14 = FUN_01596cf4(&DAT_043c9b10,&DAT_043c9b30);
    } while (uVar14 != 0xffffffffffffffff);
  }
  uVar14 = FUN_01596cf4(&DAT_043c9b10,&DAT_043c9b48);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43c9b10,uVar14);
      uVar14 = FUN_01596cf4(&DAT_043c9b10,&DAT_043c9b48);
    } while (uVar14 != 0xffffffffffffffff);
  }
  return;
}


