/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e19110; name: FUN_01e19110
 */


void FUN_01e19110(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  string *psVar14;
  uint uVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_04382ad8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04382ad8);
    puVar6 = PTR_DAT_04382ae0;
    if (iVar9 != 0) {
      *(undefined8 *)PTR_DAT_04382ae0 = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *puVar6 = 0x16;
      uVar2 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar6 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 1) = uVar2;
      puVar6[0x18] = 0x2a;
      uVar2 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar6[0xc] = 0;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + 0x26) = uVar2;
      uVar2 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar6 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar6 + 0x19) = uVar2;
      puVar6[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04382ad8);
    }
  }
  pcVar10 = operator_new(0x70);
  *(undefined8 *)param_1 = 0x71;
  pcVar10[0x67] = 'i';
  uVar3 = s_std__string_sol__detail__ctti_ge_0393c6c3._72_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c6c3._64_8_;
  pcVar10[0x68] = 'n';
  pcVar10[0x69] = 't';
  pcVar10[0x6a] = ']';
  *(undefined8 *)(param_1 + 8) = 0x6b;
  *(char **)(param_1 + 0x10) = pcVar10;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393c6c3._96_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393c6c3._88_8_;
  pcVar10[0x6b] = '\0';
  *(undefined8 *)(pcVar10 + 0x40) = uVar2;
  *(undefined8 *)(pcVar10 + 0x48) = uVar3;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c6c3._80_8_;
  *(undefined8 *)(pcVar10 + 0x60) = uVar5;
  *(undefined8 *)(pcVar10 + 0x50) = uVar2;
  *(undefined8 *)(pcVar10 + 0x58) = uVar4;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c6c3._40_8_;
  *(undefined8 *)(pcVar10 + 0x20) = s_std__string_sol__detail__ctti_ge_0393c6c3._32_8_;
  *(undefined8 *)(pcVar10 + 0x28) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c6c3._56_8_;
  *(undefined8 *)(pcVar10 + 0x30) = s_std__string_sol__detail__ctti_ge_0393c6c3._48_8_;
  *(undefined8 *)(pcVar10 + 0x38) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c6c3._8_8_;
  *(undefined8 *)pcVar10 = s_std__string_sol__detail__ctti_ge_0393c6c3._0_8_;
  *(undefined8 *)(pcVar10 + 8) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c6c3._24_8_;
  *(undefined8 *)(pcVar10 + 0x10) = s_std__string_sol__detail__ctti_ge_0393c6c3._16_8_;
  *(undefined8 *)(pcVar10 + 0x18) = uVar2;
  cVar8 = (char)param_1;
  std::string::find(cVar8,0x5b);
  uVar11 = std::string::find(cVar8,0x3d);
  uVar12 = std::string::rfind(cVar8,0x5d);
  sVar1 = *param_1;
  if (uVar12 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar12 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar12 = *(ulong *)(param_1 + 8);
    }
    uVar16 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar16 = uVar11;
    }
    uVar11 = uVar12;
  }
  else {
    uVar16 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar16 = uVar11;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar11 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar16 < uVar11 - 1) {
    uVar16 = uVar16 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar16,uVar12 - uVar16,(allocator *)param_1);
  FUN_01e1854c(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar13 = FUN_01e18424(param_1);
  if (lVar13 != -1) {
    std::string::erase((ulong)param_1,lVar13 - 2);
  }
  sVar1 = *param_1;
  uVar15 = (uint)(byte)sVar1;
  uVar12 = (ulong)((byte)sVar1 >> 1);
  uVar16 = *(ulong *)(param_1 + 8);
  bVar17 = (byte)sVar1 & 1;
  uVar11 = uVar12;
  if (((byte)sVar1 & 1) != 0) {
    uVar11 = uVar16;
  }
  if (uVar11 != 0) {
    psVar14 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar14 = param_1 + 1;
    }
    iVar9 = isblank((uint)(byte)*psVar14);
    if (iVar9 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar15 = (uint)(byte)sVar1;
        uVar12 = (ulong)((byte)sVar1 >> 1);
        uVar16 = *(ulong *)(param_1 + 8);
        bVar17 = (byte)sVar1 & 1;
        uVar11 = uVar12;
        if (((byte)sVar1 & 1) != 0) {
          uVar11 = uVar16;
        }
        if (uVar11 == 0) break;
        psVar14 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar14 = *(string **)(param_1 + 0x10);
        }
        iVar9 = isblank((uint)(byte)*psVar14);
      } while (iVar9 != 0);
    }
  }
  bVar7 = bVar17 == 0;
  if (!bVar7) {
    uVar12 = uVar16;
  }
  while (uVar12 != 0) {
    psVar14 = *(string **)(param_1 + 0x10);
    if (bVar7) {
      psVar14 = param_1 + 1;
      uVar16 = (ulong)(uVar15 >> 1);
    }
    iVar9 = isblank((uint)(byte)psVar14[uVar16 - 1]);
    if (iVar9 == 0) break;
    FUN_01e18440(param_1);
    sVar1 = *param_1;
    uVar15 = (uint)(byte)sVar1;
    bVar7 = ((byte)sVar1 & 1) == 0;
    uVar16 = *(ulong *)(param_1 + 8);
    uVar12 = (ulong)((byte)sVar1 >> 1);
    if (!bVar7) {
      uVar12 = uVar16;
    }
  }
  puVar6 = PTR_DAT_04382ae0;
  uVar11 = FUN_01e18480(param_1,PTR_DAT_04382ae0);
  if (uVar11 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar11);
      uVar11 = FUN_01e18480(param_1,puVar6);
    } while (uVar11 != 0xffffffffffffffff);
  }
  uVar11 = FUN_01e18480(param_1,puVar6 + 0x18);
  if (uVar11 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar11);
      uVar11 = FUN_01e18480(param_1,puVar6 + 0x18);
    } while (uVar11 != 0xffffffffffffffff);
  }
  return;
}


