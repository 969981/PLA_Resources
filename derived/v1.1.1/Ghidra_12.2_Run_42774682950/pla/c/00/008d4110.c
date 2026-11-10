/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d4110; name: FUN_008d4110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d4110(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043a7928 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043a7928), iVar9 != 0)) {
    DAT_043a78f8 = 0x16;
    DAT_043a7908 = 0;
    DAT_043a78f9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043a7900 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043a7910 = 0x2a;
    _DAT_043a7904 = 0;
    DAT_043a7920._7_1_ = 0;
    DAT_043a7920._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043a7920._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043a7920._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043a7920._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043a7920._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043a7919 = s__anonymous_namespace__039071f8[8];
    DAT_043a7919_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043a7919_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043a7919_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043a7919_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043a791e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043a7920._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043a7911._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043a7911._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043a7920._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043a78f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a7928);
  }
  pcVar10 = operator_new(0x70);
  DAT_043a78e8 = (byte *)pcVar10;
  pcVar10[0x6b] = '\0';
  uVar6 = s_std__string_sol__detail__ctti_ge_0395f8dd._40_8_;
  _DAT_043a78d8 = 0x71;
  DAT_043a78e0 = 0x6b;
  *(undefined8 *)(pcVar10 + 0x20) = s_std__string_sol__detail__ctti_ge_0395f8dd._32_8_;
  *(undefined8 *)(pcVar10 + 0x28) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395f8dd._24_8_;
  *(undefined8 *)(pcVar10 + 0x10) = s_std__string_sol__detail__ctti_ge_0395f8dd._16_8_;
  *(undefined8 *)(pcVar10 + 0x18) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395f8dd._8_8_;
  *(undefined8 *)pcVar10 = s_std__string_sol__detail__ctti_ge_0395f8dd._0_8_;
  *(undefined8 *)(pcVar10 + 8) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395f8dd._72_8_;
  *(undefined8 *)(pcVar10 + 0x40) = s_std__string_sol__detail__ctti_ge_0395f8dd._64_8_;
  *(undefined8 *)(pcVar10 + 0x48) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395f8dd._56_8_;
  *(undefined8 *)(pcVar10 + 0x30) = s_std__string_sol__detail__ctti_ge_0395f8dd._48_8_;
  *(undefined8 *)(pcVar10 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0395f8dd._96_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395f8dd._80_8_;
  *(undefined8 *)(pcVar10 + 0x58) = s_std__string_sol__detail__ctti_ge_0395f8dd._88_8_;
  *(undefined8 *)(pcVar10 + 0x60) = uVar7;
  *(undefined8 *)(pcVar10 + 0x50) = uVar6;
  pcVar10[0x67] = 'i';
  pcVar10[0x68] = 'n';
  pcVar10[0x69] = 't';
  pcVar10[0x6a] = ']';
  std::string::find(-0x28,0x5b);
  uVar11 = std::string::find(-0x28,0x3d);
  uVar12 = std::string::rfind(-0x28,0x5d);
  if (uVar12 == 0xffffffffffffffff) {
    if ((_DAT_043a78d8 & 1) == 0) {
      uVar12 = (ulong)(DAT_043a78d8 >> 1);
    }
    else {
      uVar12 = DAT_043a78e0;
    }
    uVar14 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar14 = uVar11;
    }
    uVar11 = uVar12;
  }
  else {
    uVar14 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar14 = uVar11;
    }
    if ((_DAT_043a78d8 & 1) == 0) {
      uVar11 = (ulong)(DAT_043a78d8 >> 1);
    }
    else {
      uVar11 = DAT_043a78e0;
    }
  }
  if (uVar14 < uVar11 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043a78d8,uVar14,uVar12 - uVar14,
                      (allocator *)&DAT_043a78d8);
  FUN_008d39d4(&DAT_043a78d8);
  _DAT_043a78d8 = local_78;
  DAT_043a78e0 = uStack_70;
  DAT_043a78e8 = local_68;
  lVar13 = FUN_008d38ac(&DAT_043a78d8);
  if (lVar13 != -1) {
    std::string::erase(0x43a78d8,lVar13 - 2);
  }
  bVar8 = (_DAT_043a78d8 & 1) == 0;
  uVar11 = (ulong)(DAT_043a78d8 >> 1);
  uVar14 = _DAT_043a78d8;
  uVar5 = DAT_043a78e0;
  pbVar3 = DAT_043a78e8;
  uVar12 = uVar11;
  if (!bVar8) {
    uVar12 = DAT_043a78e0;
  }
  while( true ) {
    bVar4 = DAT_043a78d8 & 1;
    _DAT_043a78d8 = uVar14;
    DAT_043a78e0 = uVar5;
    DAT_043a78e8 = pbVar3;
    if (uVar12 == 0) break;
    pbVar1 = &DAT_043a78d9;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar9 = isblank((uint)*pbVar1);
    if (iVar9 == 0) break;
    pbVar2 = &DAT_043a78d9;
    if (!bVar8) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43a78d8,(long)pbVar2 - (long)pbVar1);
    bVar8 = (_DAT_043a78d8 & 1) == 0;
    uVar11 = (ulong)(DAT_043a78d8 >> 1);
    uVar14 = _DAT_043a78d8;
    uVar5 = DAT_043a78e0;
    pbVar3 = DAT_043a78e8;
    uVar12 = uVar11;
    if (!bVar8) {
      uVar12 = DAT_043a78e0;
    }
  }
  bVar8 = bVar4 == 0;
  if (!bVar8) {
    uVar11 = uVar5;
  }
  while (uVar11 != 0) {
    uVar12 = (uVar14 & 0xff) >> 1;
    pbVar3 = &DAT_043a78d9;
    if (!bVar8) {
      uVar12 = uVar5;
      pbVar3 = DAT_043a78e8;
    }
    iVar9 = isblank((uint)pbVar3[uVar12 - 1]);
    if (iVar9 == 0) break;
    FUN_008d38c8(&DAT_043a78d8);
    bVar8 = (_DAT_043a78d8 & 1) == 0;
    uVar5 = DAT_043a78e0;
    uVar11 = _DAT_043a78d8 >> 1 & 0x7f;
    uVar14 = _DAT_043a78d8;
    if (!bVar8) {
      uVar11 = DAT_043a78e0;
    }
  }
  uVar12 = FUN_008d3908(&DAT_043a78d8,&DAT_043a78f8);
  if (uVar12 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43a78d8,uVar12);
      uVar12 = FUN_008d3908(&DAT_043a78d8,&DAT_043a78f8);
    } while (uVar12 != 0xffffffffffffffff);
  }
  uVar12 = FUN_008d3908(&DAT_043a78d8,&DAT_043a7910);
  if (uVar12 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43a78d8,uVar12);
      uVar12 = FUN_008d3908(&DAT_043a78d8,&DAT_043a7910);
    } while (uVar12 != 0xffffffffffffffff);
  }
  return;
}


