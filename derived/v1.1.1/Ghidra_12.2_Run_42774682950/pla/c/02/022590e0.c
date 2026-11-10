/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022590e0; name: FUN_022590e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022590e0(void)

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
  
  if (((DAT_043df480 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043df480), iVar12 != 0)) {
    DAT_043df450 = 0x16;
    DAT_043df460 = 0;
    DAT_043df451._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043df458 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043df468 = 0x2a;
    _DAT_043df45c = 0;
    DAT_043df478._7_1_ = 0;
    DAT_043df478._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043df478._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043df478._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043df478._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043df478._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043df471 = s__anonymous_namespace__039071f8[8];
    DAT_043df471_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043df471_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043df471_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043df471_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043df476 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043df478._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043df469._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043df469._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043df478._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043df450,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df480);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar17 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar17 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_0396e6ad._8_8_;
  _DAT_043df430 = 0x81;
  DAT_043df438 = 0x73;
  DAT_043df440 = (byte *)pcVar13;
  *(undefined8 *)pcVar13 = s_std__string_sol__detail__ctti_ge_0396e6ad._0_8_;
  *(undefined8 *)(pcVar13 + 8) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396e6ad._40_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396e6ad._24_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0396e6ad._16_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_0396e6ad._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar8;
  *(undefined8 *)(pcVar13 + 0x10) = uVar6;
  *(undefined8 *)(pcVar13 + 0x18) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396e6ad._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396e6ad._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0396e6ad._48_8_;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_0396e6ad._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar8;
  *(undefined8 *)(pcVar13 + 0x30) = uVar6;
  *(undefined8 *)(pcVar13 + 0x38) = uVar7;
  uVar9 = s_std__string_sol__detail__ctti_ge_0396e6ad._104_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396e6ad._96_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396e6ad._88_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0396e6ad._80_8_;
  pcVar13[0x73] = '\0';
  *(undefined8 *)(pcVar13 + 0x60) = uVar8;
  *(undefined8 *)(pcVar13 + 0x68) = uVar9;
  *(undefined8 *)(pcVar13 + 0x50) = uVar6;
  *(undefined8 *)(pcVar13 + 0x58) = uVar7;
  pcVar13[0x6f] = 'i';
  pcVar13[0x70] = 'n';
  pcVar13[0x71] = 't';
  pcVar13[0x72] = ']';
  std::string::find('0',0x5b);
  uVar14 = std::string::find('0',0x3d);
  uVar15 = std::string::rfind('0',0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043df430 & 1) == 0) {
      uVar15 = (ulong)(DAT_043df430 >> 1);
    }
    else {
      uVar15 = DAT_043df438;
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
    if ((_DAT_043df430 & 1) == 0) {
      uVar14 = (ulong)(DAT_043df430 >> 1);
    }
    else {
      uVar14 = DAT_043df438;
    }
  }
  if (uVar18 < uVar14 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043df430,uVar18,uVar15 - uVar18,
                      (allocator *)&DAT_043df430);
  FUN_0225962c(&DAT_043df430);
  _DAT_043df430 = local_78;
  DAT_043df438 = uStack_70;
  DAT_043df440 = local_68;
  lVar16 = FUN_02259504(&DAT_043df430);
  if (lVar16 != -1) {
    std::string::erase(0x43df430,lVar16 - 2);
  }
  bVar11 = (_DAT_043df430 & 1) == 0;
  uVar14 = (ulong)(DAT_043df430 >> 1);
  uVar18 = _DAT_043df430;
  uVar5 = DAT_043df438;
  pbVar3 = DAT_043df440;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = DAT_043df438;
  }
  while( true ) {
    bVar4 = DAT_043df430 & 1;
    _DAT_043df430 = uVar18;
    DAT_043df438 = uVar5;
    DAT_043df440 = pbVar3;
    if (uVar15 == 0) break;
    pbVar1 = &DAT_043df431;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar12 = isblank((uint)*pbVar1);
    if (iVar12 == 0) break;
    pbVar2 = &DAT_043df431;
    if (!bVar11) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43df430,(long)pbVar2 - (long)pbVar1);
    bVar11 = (_DAT_043df430 & 1) == 0;
    uVar14 = (ulong)(DAT_043df430 >> 1);
    uVar18 = _DAT_043df430;
    uVar5 = DAT_043df438;
    pbVar3 = DAT_043df440;
    uVar15 = uVar14;
    if (!bVar11) {
      uVar15 = DAT_043df438;
    }
  }
  bVar11 = bVar4 == 0;
  if (!bVar11) {
    uVar14 = uVar5;
  }
  while (uVar14 != 0) {
    uVar15 = (uVar18 & 0xff) >> 1;
    pbVar3 = &DAT_043df431;
    if (!bVar11) {
      uVar15 = uVar5;
      pbVar3 = DAT_043df440;
    }
    iVar12 = isblank((uint)pbVar3[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_02259520(&DAT_043df430);
    bVar11 = (_DAT_043df430 & 1) == 0;
    uVar18 = _DAT_043df430;
    uVar5 = DAT_043df438;
    uVar14 = _DAT_043df430 >> 1 & 0x7f;
    if (!bVar11) {
      uVar14 = DAT_043df438;
    }
  }
  uVar15 = FUN_02259560(&DAT_043df430,&DAT_043df450);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43df430,uVar15);
      uVar15 = FUN_02259560(&DAT_043df430,&DAT_043df450);
    } while (uVar15 != 0xffffffffffffffff);
  }
  uVar15 = FUN_02259560(&DAT_043df430,&DAT_043df468);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43df430,uVar15);
      uVar15 = FUN_02259560(&DAT_043df430,&DAT_043df468);
    } while (uVar15 != 0xffffffffffffffff);
  }
  return;
}


