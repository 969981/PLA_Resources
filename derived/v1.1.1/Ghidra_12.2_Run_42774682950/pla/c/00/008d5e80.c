/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d5e80; name: FUN_008d5e80
 */


void FUN_008d5e80(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  string *psVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_04379a00 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04379a00);
    puVar3 = PTR_DAT_04379a08;
    if (iVar6 != 0) {
      *(undefined8 *)PTR_DAT_04379a08 = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      *puVar3 = 0x16;
      uVar2 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar3 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *(undefined8 *)(puVar3 + 1) = uVar2;
      puVar3[0x18] = 0x2a;
      uVar2 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar3[0xc] = 0;
      *(undefined8 *)(puVar3 + 0x20) = 0;
      *(undefined8 *)(puVar3 + 0x28) = 0;
      *(undefined8 *)(puVar3 + 0x26) = uVar2;
      uVar2 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar3 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar3 + 0x19) = uVar2;
      puVar3[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379a00);
    }
  }
  pcVar7 = operator_new(0x70);
  *(undefined8 *)param_1 = 0x71;
  pcVar7[0x65] = '\0';
  *(undefined8 *)(param_1 + 8) = 0x65;
  *(char **)(param_1 + 0x10) = pcVar7;
  uVar2 = s_std__string_sol__detail__ctti_ge_0391259f._72_8_;
  *(undefined8 *)(pcVar7 + 0x40) = s_std__string_sol__detail__ctti_ge_0391259f._64_8_;
  *(undefined8 *)(pcVar7 + 0x48) = uVar2;
  uVar2 = CONCAT35(s_std__string_sol__detail__ctti_ge_0391259f._93_3_,
                   s_std__string_sol__detail__ctti_ge_0391259f._88_5_);
  *(undefined8 *)(pcVar7 + 0x50) = s_std__string_sol__detail__ctti_ge_0391259f._80_8_;
  *(undefined8 *)(pcVar7 + 0x58) = uVar2;
  *(ulong *)(pcVar7 + 0x5d) =
       CONCAT53(s_std__string_sol__detail__ctti_ge_0391259f._96_5_,
                s_std__string_sol__detail__ctti_ge_0391259f._93_3_);
  uVar2 = s_std__string_sol__detail__ctti_ge_0391259f._40_8_;
  *(undefined8 *)(pcVar7 + 0x20) = s_std__string_sol__detail__ctti_ge_0391259f._32_8_;
  *(undefined8 *)(pcVar7 + 0x28) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_0391259f._56_8_;
  *(undefined8 *)(pcVar7 + 0x30) = s_std__string_sol__detail__ctti_ge_0391259f._48_8_;
  *(undefined8 *)(pcVar7 + 0x38) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_0391259f._8_8_;
  *(undefined8 *)pcVar7 = s_std__string_sol__detail__ctti_ge_0391259f._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_0391259f._24_8_;
  *(undefined8 *)(pcVar7 + 0x10) = s_std__string_sol__detail__ctti_ge_0391259f._16_8_;
  *(undefined8 *)(pcVar7 + 0x18) = uVar2;
  cVar5 = (char)param_1;
  std::string::find(cVar5,0x5b);
  uVar8 = std::string::find(cVar5,0x3d);
  uVar9 = std::string::rfind(cVar5,0x5d);
  sVar1 = *param_1;
  if (uVar9 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar9 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar9 = *(ulong *)(param_1 + 8);
    }
    uVar13 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar13 = uVar8;
    }
    uVar8 = uVar9;
  }
  else {
    uVar13 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar13 = uVar8;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar8 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar8 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar13 < uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar13,uVar9 - uVar13,(allocator *)param_1);
  FUN_008d39d4(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar10 = FUN_008d38ac(param_1);
  if (lVar10 != -1) {
    std::string::erase((ulong)param_1,lVar10 - 2);
  }
  sVar1 = *param_1;
  uVar12 = (uint)(byte)sVar1;
  uVar9 = (ulong)((byte)sVar1 >> 1);
  uVar13 = *(ulong *)(param_1 + 8);
  bVar14 = (byte)sVar1 & 1;
  uVar8 = uVar9;
  if (((byte)sVar1 & 1) != 0) {
    uVar8 = uVar13;
  }
  if (uVar8 != 0) {
    psVar11 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar11 = param_1 + 1;
    }
    iVar6 = isblank((uint)(byte)*psVar11);
    if (iVar6 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar12 = (uint)(byte)sVar1;
        uVar9 = (ulong)((byte)sVar1 >> 1);
        uVar13 = *(ulong *)(param_1 + 8);
        bVar14 = (byte)sVar1 & 1;
        uVar8 = uVar9;
        if (((byte)sVar1 & 1) != 0) {
          uVar8 = uVar13;
        }
        if (uVar8 == 0) break;
        psVar11 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar11 = *(string **)(param_1 + 0x10);
        }
        iVar6 = isblank((uint)(byte)*psVar11);
      } while (iVar6 != 0);
    }
  }
  bVar4 = bVar14 == 0;
  if (!bVar4) {
    uVar9 = uVar13;
  }
  while (uVar9 != 0) {
    psVar11 = *(string **)(param_1 + 0x10);
    if (bVar4) {
      psVar11 = param_1 + 1;
      uVar13 = (ulong)(uVar12 >> 1);
    }
    iVar6 = isblank((uint)(byte)psVar11[uVar13 - 1]);
    if (iVar6 == 0) break;
    FUN_008d38c8(param_1);
    sVar1 = *param_1;
    uVar12 = (uint)(byte)sVar1;
    bVar4 = ((byte)sVar1 & 1) == 0;
    uVar13 = *(ulong *)(param_1 + 8);
    uVar9 = (ulong)((byte)sVar1 >> 1);
    if (!bVar4) {
      uVar9 = uVar13;
    }
  }
  puVar3 = PTR_DAT_04379a08;
  uVar8 = FUN_008d3908(param_1,PTR_DAT_04379a08);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar8);
      uVar8 = FUN_008d3908(param_1,puVar3);
    } while (uVar8 != 0xffffffffffffffff);
  }
  uVar8 = FUN_008d3908(param_1,puVar3 + 0x18);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar8);
      uVar8 = FUN_008d3908(param_1,puVar3 + 0x18);
    } while (uVar8 != 0xffffffffffffffff);
  }
  return;
}


