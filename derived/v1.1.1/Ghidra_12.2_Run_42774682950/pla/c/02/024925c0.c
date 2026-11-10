/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024925c0; name: FUN_024925c0
 */


void FUN_024925c0(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  string *psVar18;
  uint uVar19;
  ulong uVar20;
  byte bVar21;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_043876d8 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(PTR_DAT_043876d8);
    puVar8 = PTR_DAT_043876e0;
    if (iVar12 != 0) {
      *(undefined8 *)PTR_DAT_043876e0 = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      *puVar8 = 0x16;
      uVar2 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar8 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 1) = uVar2;
      puVar8[0x18] = 0x2a;
      uVar2 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar8[0xc] = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x26) = uVar2;
      uVar2 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar8 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar8 + 0x19) = uVar2;
      puVar8[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043876d8);
    }
  }
  plVar9 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar17 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar17 = plVar9;
  }
  pcVar13 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
  uVar3 = s_std__string_sol__detail__ctti_ge_03965354._88_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03965354._80_8_;
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x70;
  *(char **)(param_1 + 0x10) = pcVar13;
  uVar7 = s_std__string_sol__detail__ctti_ge_03965354._104_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_03965354._96_8_;
  *(undefined8 *)(pcVar13 + 0x50) = uVar2;
  *(undefined8 *)(pcVar13 + 0x58) = uVar3;
  uVar5 = s_std__string_sol__detail__ctti_ge_03965354._72_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03965354._64_8_;
  *(undefined8 *)(pcVar13 + 0x60) = uVar6;
  *(undefined8 *)(pcVar13 + 0x68) = uVar7;
  uVar3 = s_std__string_sol__detail__ctti_ge_03965354._56_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03965354._48_8_;
  *(undefined8 *)(pcVar13 + 0x40) = uVar4;
  *(undefined8 *)(pcVar13 + 0x48) = uVar5;
  *(undefined8 *)(pcVar13 + 0x30) = uVar2;
  *(undefined8 *)(pcVar13 + 0x38) = uVar3;
  uVar4 = s_std__string_sol__detail__ctti_ge_03965354._40_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_03965354._32_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03965354._24_8_;
  *(undefined8 *)(pcVar13 + 0x10) = s_std__string_sol__detail__ctti_ge_03965354._16_8_;
  *(undefined8 *)(pcVar13 + 0x18) = uVar2;
  *(undefined8 *)(pcVar13 + 0x20) = uVar3;
  *(undefined8 *)(pcVar13 + 0x28) = uVar4;
  uVar3 = s_std__string_sol__detail__ctti_ge_03965354._8_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03965354._0_8_;
  pcVar13[0x70] = '\0';
  *(undefined8 *)pcVar13 = uVar2;
  *(undefined8 *)(pcVar13 + 8) = uVar3;
  cVar11 = (char)param_1;
  std::string::find(cVar11,0x5b);
  uVar14 = std::string::find(cVar11,0x3d);
  uVar15 = std::string::rfind(cVar11,0x5d);
  sVar1 = *param_1;
  if (uVar15 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar15 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar15 = *(ulong *)(param_1 + 8);
    }
    uVar20 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar20 = uVar14;
    }
    uVar14 = uVar15;
  }
  else {
    uVar20 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar20 = uVar14;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar14 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar20 < uVar14 - 1) {
    uVar20 = uVar20 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar20,uVar15 - uVar20,(allocator *)param_1);
  FUN_02492acc(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar16 = FUN_024929a4(param_1);
  if (lVar16 != -1) {
    std::string::erase((ulong)param_1,lVar16 - 2);
  }
  sVar1 = *param_1;
  uVar19 = (uint)(byte)sVar1;
  uVar15 = (ulong)((byte)sVar1 >> 1);
  uVar20 = *(ulong *)(param_1 + 8);
  bVar21 = (byte)sVar1 & 1;
  uVar14 = uVar15;
  if (((byte)sVar1 & 1) != 0) {
    uVar14 = uVar20;
  }
  if (uVar14 != 0) {
    psVar18 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar18 = param_1 + 1;
    }
    iVar12 = isblank((uint)(byte)*psVar18);
    if (iVar12 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar19 = (uint)(byte)sVar1;
        uVar15 = (ulong)((byte)sVar1 >> 1);
        uVar20 = *(ulong *)(param_1 + 8);
        bVar21 = (byte)sVar1 & 1;
        uVar14 = uVar15;
        if (((byte)sVar1 & 1) != 0) {
          uVar14 = uVar20;
        }
        if (uVar14 == 0) break;
        psVar18 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar18 = *(string **)(param_1 + 0x10);
        }
        iVar12 = isblank((uint)(byte)*psVar18);
      } while (iVar12 != 0);
    }
  }
  bVar10 = bVar21 == 0;
  if (!bVar10) {
    uVar15 = uVar20;
  }
  while (uVar15 != 0) {
    psVar18 = *(string **)(param_1 + 0x10);
    if (bVar10) {
      psVar18 = param_1 + 1;
      uVar20 = (ulong)(uVar19 >> 1);
    }
    iVar12 = isblank((uint)(byte)psVar18[uVar20 - 1]);
    if (iVar12 == 0) break;
    FUN_024929c0(param_1);
    sVar1 = *param_1;
    uVar19 = (uint)(byte)sVar1;
    bVar10 = ((byte)sVar1 & 1) == 0;
    uVar20 = *(ulong *)(param_1 + 8);
    uVar15 = (ulong)((byte)sVar1 >> 1);
    if (!bVar10) {
      uVar15 = uVar20;
    }
  }
  puVar8 = PTR_DAT_043876e0;
  uVar14 = FUN_02492a00(param_1,PTR_DAT_043876e0);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar14);
      uVar14 = FUN_02492a00(param_1,puVar8);
    } while (uVar14 != 0xffffffffffffffff);
  }
  uVar14 = FUN_02492a00(param_1,puVar8 + 0x18);
  if (uVar14 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar14);
      uVar14 = FUN_02492a00(param_1,puVar8 + 0x18);
    } while (uVar14 != 0xffffffffffffffff);
  }
  return;
}


