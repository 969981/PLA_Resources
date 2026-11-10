/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1bf40; name: FUN_00f1bf40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1bf40(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte bVar6;
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
  ulong uVar19;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b4590 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043b4590), iVar12 != 0)) {
    DAT_043b4560 = 0x16;
    DAT_043b4570 = 0;
    DAT_043b4561._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b4568 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b4578 = 0x2a;
    _DAT_043b456c = 0;
    DAT_043b4588._7_1_ = 0;
    DAT_043b4588._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b4588._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b4588._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b4588._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b4588._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b4581 = s__anonymous_namespace__039071f8[8];
    DAT_043b4581_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b4581_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b4581_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b4581_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b4586 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b4588._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b4579._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b4579._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b4588._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b4560,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4590);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar17 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar17 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_0396081b._88_8_;
  _DAT_043b4540 = 0x71;
  DAT_043b4548 = 0x6e;
  DAT_043b4550 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x50) = s_std__string_sol__detail__ctti_ge_0396081b._80_8_;
  *(undefined8 *)(pcVar13 + 0x58) = uVar5;
  uVar5 = CONCAT62(s_std__string_sol__detail__ctti_ge_0396081b._104_6_,
                   s_std__string_sol__detail__ctti_ge_0396081b._102_2_);
  *(ulong *)(pcVar13 + 0x60) =
       CONCAT26(s_std__string_sol__detail__ctti_ge_0396081b._102_2_,
                s_std__string_sol__detail__ctti_ge_0396081b._96_6_);
  uVar9 = s_std__string_sol__detail__ctti_ge_0396081b._72_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396081b._64_8_;
  *(undefined8 *)(pcVar13 + 0x66) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396081b._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0396081b._48_8_;
  *(undefined8 *)(pcVar13 + 0x40) = uVar8;
  *(undefined8 *)(pcVar13 + 0x48) = uVar9;
  *(undefined8 *)(pcVar13 + 0x30) = uVar5;
  *(undefined8 *)(pcVar13 + 0x38) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396081b._40_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396081b._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0396081b._24_8_;
  *(undefined8 *)(pcVar13 + 0x10) = s_std__string_sol__detail__ctti_ge_0396081b._16_8_;
  *(undefined8 *)(pcVar13 + 0x18) = uVar5;
  *(undefined8 *)(pcVar13 + 0x20) = uVar7;
  *(undefined8 *)(pcVar13 + 0x28) = uVar8;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396081b._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0396081b._0_8_;
  pcVar13[0x6e] = '\0';
  *(undefined8 *)pcVar13 = uVar5;
  *(undefined8 *)(pcVar13 + 8) = uVar7;
  std::string::find('@',0x5b);
  uVar14 = std::string::find('@',0x3d);
  uVar15 = std::string::rfind('@',0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043b4540 & 1) == 0) {
      uVar15 = (ulong)(DAT_043b4540 >> 1);
    }
    else {
      uVar15 = DAT_043b4548;
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
    if ((_DAT_043b4540 & 1) == 0) {
      uVar14 = (ulong)(DAT_043b4540 >> 1);
    }
    else {
      uVar14 = DAT_043b4548;
    }
  }
  if (uVar18 < uVar14 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b4540,uVar18,uVar15 - uVar18,
                      (allocator *)&DAT_043b4540);
  FUN_00f1b8bc(&DAT_043b4540);
  _DAT_043b4540 = local_78;
  DAT_043b4548 = uStack_70;
  DAT_043b4550 = local_68;
  lVar16 = FUN_00f1b794(&DAT_043b4540);
  if (lVar16 != -1) {
    std::string::erase(0x43b4540,lVar16 - 2);
  }
  uVar15 = (ulong)(DAT_043b4540 >> 1);
  uVar14 = DAT_043b4548;
  pbVar4 = DAT_043b4550;
  uVar18 = uVar15;
  if ((_DAT_043b4540 & 1) != 0) {
    uVar18 = DAT_043b4548;
  }
  while( true ) {
    bVar6 = DAT_043b4540 & 1;
    uVar19 = _DAT_043b4540 & 0xff;
    DAT_043b4548 = uVar14;
    DAT_043b4550 = pbVar4;
    if (uVar18 == 0) break;
    bVar3 = DAT_043b4540 & 1;
    pbVar1 = &DAT_043b4541;
    if (bVar6 != 0) {
      pbVar1 = pbVar4;
    }
    iVar12 = isblank((uint)*pbVar1);
    if (iVar12 == 0) break;
    pbVar2 = &DAT_043b4541;
    if (bVar3 != 0) {
      pbVar2 = pbVar4;
    }
    std::string::erase(0x43b4540,(long)pbVar2 - (long)pbVar1);
    uVar15 = (ulong)(DAT_043b4540 >> 1);
    uVar14 = DAT_043b4548;
    pbVar4 = DAT_043b4550;
    uVar18 = uVar15;
    if ((_DAT_043b4540 & 1) != 0) {
      uVar18 = DAT_043b4548;
    }
  }
  bVar11 = bVar6 == 0;
  uVar18 = uVar14;
  if (bVar6 == 0) {
    uVar18 = uVar15;
  }
  while (uVar18 != 0) {
    while( true ) {
      uVar15 = uVar19 >> 1;
      pbVar4 = &DAT_043b4541;
      if (!bVar11) {
        uVar15 = uVar14;
        pbVar4 = DAT_043b4550;
      }
      iVar12 = isblank((uint)pbVar4[uVar15 - 1]);
      if (iVar12 == 0) goto LAB_00f1c198;
      FUN_00f1b7b0(&DAT_043b4540);
      uVar19 = _DAT_043b4540 & 0xff;
      bVar11 = (_DAT_043b4540 & 1) == 0;
      uVar14 = DAT_043b4548;
      uVar18 = DAT_043b4548;
      if ((_DAT_043b4540 & 1) != 0) break;
      if (DAT_043b4540 >> 1 == 0) goto LAB_00f1c198;
    }
  }
LAB_00f1c198:
  uVar15 = FUN_00f1b7f0(&DAT_043b4540,&DAT_043b4560);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4540,uVar15);
      uVar15 = FUN_00f1b7f0(&DAT_043b4540,&DAT_043b4560);
    } while (uVar15 != 0xffffffffffffffff);
  }
  uVar15 = FUN_00f1b7f0(&DAT_043b4540,&DAT_043b4578);
  if (uVar15 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4540,uVar15);
      uVar15 = FUN_00f1b7f0(&DAT_043b4540,&DAT_043b4578);
    } while (uVar15 != 0xffffffffffffffff);
  }
  return;
}


