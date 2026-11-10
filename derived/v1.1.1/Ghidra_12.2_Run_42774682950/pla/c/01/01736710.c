/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01736710; name: FUN_01736710
 */


void FUN_01736710(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  string *psVar12;
  uint uVar13;
  ulong uVar14;
  byte bVar15;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_04380b40 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04380b40);
    puVar4 = PTR_DAT_04380b48;
    if (iVar7 != 0) {
      *(undefined8 *)PTR_DAT_04380b48 = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *puVar4 = 0x16;
      uVar2 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar4 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      *(undefined8 *)(puVar4 + 1) = uVar2;
      puVar4[0x18] = 0x2a;
      uVar2 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar4[0xc] = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      *(undefined8 *)(puVar4 + 0x26) = uVar2;
      uVar2 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar4 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar4 + 0x19) = uVar2;
      puVar4[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04380b40);
    }
  }
  pcVar8 = operator_new(0x80);
  pcVar8[0x78] = '\0';
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x78;
  *(char **)(param_1 + 0x10) = pcVar8;
  uVar3 = s_std__string_sol__detail__ctti_ge_03929bec._112_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03929bec._96_8_;
  *(undefined8 *)(pcVar8 + 0x68) = s_std__string_sol__detail__ctti_ge_03929bec._104_8_;
  *(undefined8 *)(pcVar8 + 0x70) = uVar3;
  uVar3 = s_std__string_sol__detail__ctti_ge_03929bec._80_8_;
  *(undefined8 *)(pcVar8 + 0x58) = s_std__string_sol__detail__ctti_ge_03929bec._88_8_;
  *(undefined8 *)(pcVar8 + 0x60) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_03929bec._64_8_;
  *(undefined8 *)(pcVar8 + 0x48) = s_std__string_sol__detail__ctti_ge_03929bec._72_8_;
  *(undefined8 *)(pcVar8 + 0x50) = uVar3;
  uVar3 = s_std__string_sol__detail__ctti_ge_03929bec._48_8_;
  *(undefined8 *)(pcVar8 + 0x38) = s_std__string_sol__detail__ctti_ge_03929bec._56_8_;
  *(undefined8 *)(pcVar8 + 0x40) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_03929bec._32_8_;
  *(undefined8 *)(pcVar8 + 0x28) = s_std__string_sol__detail__ctti_ge_03929bec._40_8_;
  *(undefined8 *)(pcVar8 + 0x30) = uVar3;
  uVar3 = s_std__string_sol__detail__ctti_ge_03929bec._16_8_;
  *(undefined8 *)(pcVar8 + 0x18) = s_std__string_sol__detail__ctti_ge_03929bec._24_8_;
  *(undefined8 *)(pcVar8 + 0x20) = uVar2;
  uVar2 = s_std__string_sol__detail__ctti_ge_03929bec._8_8_;
  *(undefined8 *)pcVar8 = s_std__string_sol__detail__ctti_ge_03929bec._0_8_;
  *(undefined8 *)(pcVar8 + 8) = uVar2;
  *(undefined8 *)(pcVar8 + 0x10) = uVar3;
  cVar6 = (char)param_1;
  std::string::find(cVar6,0x5b);
  uVar9 = std::string::find(cVar6,0x3d);
  uVar10 = std::string::rfind(cVar6,0x5d);
  sVar1 = *param_1;
  if (uVar10 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar10 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar10 = *(ulong *)(param_1 + 8);
    }
    uVar14 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar14 = uVar9;
    }
    uVar9 = uVar10;
  }
  else {
    uVar14 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar14 = uVar9;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar9 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar9 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar14 < uVar9 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar14,uVar10 - uVar14,(allocator *)param_1);
  FUN_01735174(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar11 = FUN_0173504c(param_1);
  if (lVar11 != -1) {
    std::string::erase((ulong)param_1,lVar11 - 2);
  }
  sVar1 = *param_1;
  uVar13 = (uint)(byte)sVar1;
  uVar10 = (ulong)((byte)sVar1 >> 1);
  uVar14 = *(ulong *)(param_1 + 8);
  bVar15 = (byte)sVar1 & 1;
  uVar9 = uVar10;
  if (((byte)sVar1 & 1) != 0) {
    uVar9 = uVar14;
  }
  if (uVar9 != 0) {
    psVar12 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar12 = param_1 + 1;
    }
    iVar7 = isblank((uint)(byte)*psVar12);
    if (iVar7 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar13 = (uint)(byte)sVar1;
        uVar10 = (ulong)((byte)sVar1 >> 1);
        uVar14 = *(ulong *)(param_1 + 8);
        bVar15 = (byte)sVar1 & 1;
        uVar9 = uVar10;
        if (((byte)sVar1 & 1) != 0) {
          uVar9 = uVar14;
        }
        if (uVar9 == 0) break;
        psVar12 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar12 = *(string **)(param_1 + 0x10);
        }
        iVar7 = isblank((uint)(byte)*psVar12);
      } while (iVar7 != 0);
    }
  }
  bVar5 = bVar15 == 0;
  if (!bVar5) {
    uVar10 = uVar14;
  }
  while (uVar10 != 0) {
    psVar12 = *(string **)(param_1 + 0x10);
    if (bVar5) {
      psVar12 = param_1 + 1;
      uVar14 = (ulong)(uVar13 >> 1);
    }
    iVar7 = isblank((uint)(byte)psVar12[uVar14 - 1]);
    if (iVar7 == 0) break;
    FUN_01735068(param_1);
    sVar1 = *param_1;
    uVar13 = (uint)(byte)sVar1;
    bVar5 = ((byte)sVar1 & 1) == 0;
    uVar14 = *(ulong *)(param_1 + 8);
    uVar10 = (ulong)((byte)sVar1 >> 1);
    if (!bVar5) {
      uVar10 = uVar14;
    }
  }
  puVar4 = PTR_DAT_04380b48;
  uVar9 = FUN_017350a8(param_1,PTR_DAT_04380b48);
  if (uVar9 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar9);
      uVar9 = FUN_017350a8(param_1,puVar4);
    } while (uVar9 != 0xffffffffffffffff);
  }
  uVar9 = FUN_017350a8(param_1,puVar4 + 0x18);
  if (uVar9 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar9);
      uVar9 = FUN_017350a8(param_1,puVar4 + 0x18);
    } while (uVar9 != 0xffffffffffffffff);
  }
  return;
}


