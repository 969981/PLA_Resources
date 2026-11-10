/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0231b840; name: FUN_0231b840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0231b840(void)

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
  
  if (((DAT_043e1a68 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e1a68), iVar11 != 0)) {
    DAT_043e1a38 = 0x16;
    DAT_043e1a48 = 0;
    DAT_043e1a39._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e1a40 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e1a50 = 0x2a;
    _DAT_043e1a44 = 0;
    DAT_043e1a60._7_1_ = 0;
    DAT_043e1a60._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e1a60._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e1a60._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e1a60._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e1a60._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e1a59 = s__anonymous_namespace__039071f8[8];
    DAT_043e1a59_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e1a59_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e1a59_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e1a59_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e1a5e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e1a60._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e1a51._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e1a51._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e1a60._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e1a38,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1a68);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar16 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_03915151._88_8_;
  _DAT_043e1a18 = 0x81;
  DAT_043e1a20 = 0x75;
  DAT_043e1a28 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_03915151._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar4;
  uVar5 = CONCAT53(s_std__string_sol__detail__ctti_ge_03915151._112_5_,
                   s_std__string_sol__detail__ctti_ge_03915151._109_3_);
  uVar4 = CONCAT35(s_std__string_sol__detail__ctti_ge_03915151._109_3_,
                   s_std__string_sol__detail__ctti_ge_03915151._104_5_);
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_03915151._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar4;
  *(undefined8 *)(pcVar12 + 0x6d) = uVar5;
  uVar8 = s_std__string_sol__detail__ctti_ge_03915151._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03915151._64_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03915151._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_03915151._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar4;
  *(undefined8 *)(pcVar12 + 0x40) = uVar5;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_03915151._40_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03915151._32_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03915151._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_03915151._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar4;
  *(undefined8 *)(pcVar12 + 0x20) = uVar5;
  *(undefined8 *)(pcVar12 + 0x28) = uVar8;
  uVar5 = s_std__string_sol__detail__ctti_ge_03915151._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03915151._0_8_;
  pcVar12[0x75] = '\0';
  *(undefined8 *)pcVar12 = uVar4;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  std::string::find('\x18',0x5b);
  uVar13 = std::string::find('\x18',0x3d);
  uVar14 = std::string::rfind('\x18',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043e1a18 & 1) == 0) {
      uVar14 = (ulong)(DAT_043e1a18 >> 1);
    }
    else {
      uVar14 = DAT_043e1a20;
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
    if ((_DAT_043e1a18 & 1) == 0) {
      uVar13 = (ulong)(DAT_043e1a18 >> 1);
    }
    else {
      uVar13 = DAT_043e1a20;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e1a18,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043e1a18);
  FUN_02319a00(&DAT_043e1a18);
  _DAT_043e1a18 = local_78;
  DAT_043e1a20 = uStack_70;
  DAT_043e1a28 = local_68;
  lVar15 = FUN_023198d8(&DAT_043e1a18);
  if (lVar15 != -1) {
    std::string::erase(0x43e1a18,lVar15 - 2);
  }
  bVar10 = (_DAT_043e1a18 & 1) == 0;
  uVar13 = (ulong)(DAT_043e1a18 >> 1);
  uVar17 = _DAT_043e1a18;
  uVar7 = DAT_043e1a20;
  pbVar3 = DAT_043e1a28;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = DAT_043e1a20;
  }
  while( true ) {
    bVar6 = DAT_043e1a18 & 1;
    _DAT_043e1a18 = uVar17;
    DAT_043e1a20 = uVar7;
    DAT_043e1a28 = pbVar3;
    if (uVar14 == 0) break;
    pbVar1 = &DAT_043e1a19;
    if (bVar6 != 0) {
      pbVar1 = pbVar3;
    }
    iVar11 = isblank((uint)*pbVar1);
    if (iVar11 == 0) break;
    pbVar2 = &DAT_043e1a19;
    if (!bVar10) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43e1a18,(long)pbVar2 - (long)pbVar1);
    bVar10 = (_DAT_043e1a18 & 1) == 0;
    uVar13 = (ulong)(DAT_043e1a18 >> 1);
    uVar17 = _DAT_043e1a18;
    uVar7 = DAT_043e1a20;
    pbVar3 = DAT_043e1a28;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043e1a20;
    }
  }
  bVar10 = bVar6 == 0;
  if (!bVar10) {
    uVar13 = uVar7;
  }
  while (uVar13 != 0) {
    uVar14 = (uVar17 & 0xff) >> 1;
    pbVar3 = &DAT_043e1a19;
    if (!bVar10) {
      uVar14 = uVar7;
      pbVar3 = DAT_043e1a28;
    }
    iVar11 = isblank((uint)pbVar3[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_023198f4(&DAT_043e1a18);
    bVar10 = (_DAT_043e1a18 & 1) == 0;
    uVar7 = DAT_043e1a20;
    uVar13 = _DAT_043e1a18 >> 1 & 0x7f;
    uVar17 = _DAT_043e1a18;
    if (!bVar10) {
      uVar13 = DAT_043e1a20;
    }
  }
  uVar14 = FUN_02319934(&DAT_043e1a18,&DAT_043e1a38);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e1a18,uVar14);
      uVar14 = FUN_02319934(&DAT_043e1a18,&DAT_043e1a38);
    } while (uVar14 != 0xffffffffffffffff);
  }
  uVar14 = FUN_02319934(&DAT_043e1a18,&DAT_043e1a50);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e1a18,uVar14);
      uVar14 = FUN_02319934(&DAT_043e1a18,&DAT_043e1a50);
    } while (uVar14 != 0xffffffffffffffff);
  }
  return;
}


