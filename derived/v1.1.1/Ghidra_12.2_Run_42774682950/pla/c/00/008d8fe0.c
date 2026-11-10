/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d8fe0; name: FUN_008d8fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d8fe0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043a7bb8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043a7bb8), iVar10 != 0)) {
    DAT_043a7b88 = 0x16;
    DAT_043a7b98 = 0;
    DAT_043a7b89._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043a7b90 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043a7ba0 = 0x2a;
    _DAT_043a7b94 = 0;
    DAT_043a7bb0._7_1_ = 0;
    DAT_043a7bb0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043a7bb0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043a7bb0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043a7bb0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043a7bb0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043a7ba9 = s__anonymous_namespace__039071f8[8];
    DAT_043a7ba9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043a7ba9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043a7ba9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043a7ba9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043a7bae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043a7bb0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043a7ba1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043a7ba1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043a7bb0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043a7b88,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a7bb8);
  }
  pcVar11 = operator_new(0x70);
  DAT_043a7b78 = (byte *)pcVar11;
  pcVar11[0x65] = '\0';
  uVar4 = s_std__string_sol__detail__ctti_ge_03912605._8_8_;
  _DAT_043a7b68 = 0x71;
  DAT_043a7b70 = 0x65;
  *(undefined8 *)pcVar11 = s_std__string_sol__detail__ctti_ge_03912605._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar4;
  uVar4 = s_std__string_sol__detail__ctti_ge_03912605._72_8_;
  *(undefined8 *)(pcVar11 + 0x40) = s_std__string_sol__detail__ctti_ge_03912605._64_8_;
  *(undefined8 *)(pcVar11 + 0x48) = uVar4;
  uVar4 = CONCAT35(s_std__string_sol__detail__ctti_ge_03912605._93_3_,
                   s_std__string_sol__detail__ctti_ge_03912605._88_5_);
  *(undefined8 *)(pcVar11 + 0x50) = s_std__string_sol__detail__ctti_ge_03912605._80_8_;
  *(undefined8 *)(pcVar11 + 0x58) = uVar4;
  *(ulong *)(pcVar11 + 0x5d) =
       CONCAT53(s_std__string_sol__detail__ctti_ge_03912605._96_5_,
                s_std__string_sol__detail__ctti_ge_03912605._93_3_);
  uVar4 = s_std__string_sol__detail__ctti_ge_03912605._40_8_;
  *(undefined8 *)(pcVar11 + 0x20) = s_std__string_sol__detail__ctti_ge_03912605._32_8_;
  *(undefined8 *)(pcVar11 + 0x28) = uVar4;
  uVar8 = s_std__string_sol__detail__ctti_ge_03912605._56_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_03912605._24_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03912605._16_8_;
  *(undefined8 *)(pcVar11 + 0x30) = s_std__string_sol__detail__ctti_ge_03912605._48_8_;
  *(undefined8 *)(pcVar11 + 0x38) = uVar8;
  *(undefined8 *)(pcVar11 + 0x10) = uVar4;
  *(undefined8 *)(pcVar11 + 0x18) = uVar7;
  std::string::find('h',0x5b);
  uVar12 = std::string::find('h',0x3d);
  uVar13 = std::string::rfind('h',0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043a7b68 & 1) == 0) {
      uVar13 = (ulong)(DAT_043a7b68 >> 1);
    }
    else {
      uVar13 = DAT_043a7b70;
    }
    uVar15 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar15 = uVar12;
    }
    uVar12 = uVar13;
  }
  else {
    uVar15 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar15 = uVar12;
    }
    if ((_DAT_043a7b68 & 1) == 0) {
      uVar12 = (ulong)(DAT_043a7b68 >> 1);
    }
    else {
      uVar12 = DAT_043a7b70;
    }
  }
  if (uVar15 < uVar12 - 1) {
    uVar15 = uVar15 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043a7b68,uVar15,uVar13 - uVar15,
                      (allocator *)&DAT_043a7b68);
  FUN_008d8b80(&DAT_043a7b68);
  _DAT_043a7b68 = local_78;
  DAT_043a7b70 = uStack_70;
  DAT_043a7b78 = local_68;
  lVar14 = FUN_008d8a58(&DAT_043a7b68);
  if (lVar14 != -1) {
    std::string::erase(0x43a7b68,lVar14 - 2);
  }
  bVar9 = (_DAT_043a7b68 & 1) == 0;
  uVar12 = (ulong)(DAT_043a7b68 >> 1);
  uVar15 = _DAT_043a7b68;
  uVar6 = DAT_043a7b70;
  pbVar3 = DAT_043a7b78;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = DAT_043a7b70;
  }
  while( true ) {
    bVar5 = DAT_043a7b68 & 1;
    _DAT_043a7b68 = uVar15;
    DAT_043a7b70 = uVar6;
    DAT_043a7b78 = pbVar3;
    if (uVar13 == 0) break;
    pbVar1 = &DAT_043a7b69;
    if (bVar5 != 0) {
      pbVar1 = pbVar3;
    }
    iVar10 = isblank((uint)*pbVar1);
    if (iVar10 == 0) break;
    pbVar2 = &DAT_043a7b69;
    if (!bVar9) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43a7b68,(long)pbVar2 - (long)pbVar1);
    bVar9 = (_DAT_043a7b68 & 1) == 0;
    uVar12 = (ulong)(DAT_043a7b68 >> 1);
    uVar15 = _DAT_043a7b68;
    uVar6 = DAT_043a7b70;
    pbVar3 = DAT_043a7b78;
    uVar13 = uVar12;
    if (!bVar9) {
      uVar13 = DAT_043a7b70;
    }
  }
  bVar9 = bVar5 == 0;
  if (!bVar9) {
    uVar12 = uVar6;
  }
  while (uVar12 != 0) {
    uVar13 = (uVar15 & 0xff) >> 1;
    pbVar3 = &DAT_043a7b69;
    if (!bVar9) {
      uVar13 = uVar6;
      pbVar3 = DAT_043a7b78;
    }
    iVar10 = isblank((uint)pbVar3[uVar13 - 1]);
    if (iVar10 == 0) break;
    FUN_008d8a74(&DAT_043a7b68);
    bVar9 = (_DAT_043a7b68 & 1) == 0;
    uVar6 = DAT_043a7b70;
    uVar12 = _DAT_043a7b68 >> 1 & 0x7f;
    uVar15 = _DAT_043a7b68;
    if (!bVar9) {
      uVar12 = DAT_043a7b70;
    }
  }
  uVar13 = FUN_008d8ab4(&DAT_043a7b68,&DAT_043a7b88);
  if (uVar13 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43a7b68,uVar13);
      uVar13 = FUN_008d8ab4(&DAT_043a7b68,&DAT_043a7b88);
    } while (uVar13 != 0xffffffffffffffff);
  }
  uVar13 = FUN_008d8ab4(&DAT_043a7b68,&DAT_043a7ba0);
  if (uVar13 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43a7b68,uVar13);
      uVar13 = FUN_008d8ab4(&DAT_043a7b68,&DAT_043a7ba0);
    } while (uVar13 != 0xffffffffffffffff);
  }
  return;
}


