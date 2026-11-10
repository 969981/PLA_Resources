/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fb94e0; name: FUN_01fb94e0
 */


void FUN_01fb94e0(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  string *psVar15;
  uint uVar16;
  ulong uVar17;
  byte bVar18;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_043832f8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_043832f8);
    puVar5 = PTR_DAT_04383300;
    if (iVar9 != 0) {
      *(undefined8 *)PTR_DAT_04383300 = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *puVar5 = 0x16;
      uVar2 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar5 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(undefined8 *)(puVar5 + 1) = uVar2;
      puVar5[0x18] = 0x2a;
      uVar2 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar5[0xc] = 0;
      *(undefined8 *)(puVar5 + 0x20) = 0;
      *(undefined8 *)(puVar5 + 0x28) = 0;
      *(undefined8 *)(puVar5 + 0x26) = uVar2;
      uVar2 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar5 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar5 + 0x19) = uVar2;
      puVar5[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043832f8);
    }
  }
  plVar6 = DAT_043f1798;
  lVar13 = tpidr_el0;
  plVar14 = *(long **)(lVar13 + 0x20);
  if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
    *(long **)(lVar13 + 0x20) = DAT_043f1798;
    plVar14 = plVar6;
  }
  pcVar10 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x80,8);
  *(undefined8 *)param_1 = 0x81;
  uVar2 = CONCAT53(s_std__string_sol__detail__ctti_ge_03890886._112_5_,
                   s_std__string_sol__detail__ctti_ge_03890886._109_3_);
  *(undefined8 *)(param_1 + 8) = 0x75;
  *(char **)(param_1 + 0x10) = pcVar10;
  *(undefined8 *)(pcVar10 + 0x6d) = uVar2;
  uVar3 = s_std__string_sol__detail__ctti_ge_03890886._96_8_;
  *(ulong *)(pcVar10 + 0x68) =
       CONCAT35(s_std__string_sol__detail__ctti_ge_03890886._109_3_,
                s_std__string_sol__detail__ctti_ge_03890886._104_5_);
  uVar2 = s_std__string_sol__detail__ctti_ge_03890886._80_8_;
  *(undefined8 *)(pcVar10 + 0x58) = s_std__string_sol__detail__ctti_ge_03890886._88_8_;
  *(undefined8 *)(pcVar10 + 0x60) = uVar3;
  *(undefined8 *)(pcVar10 + 0x50) = uVar2;
  uVar4 = s_std__string_sol__detail__ctti_ge_03890886._72_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_03890886._56_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03890886._48_8_;
  *(undefined8 *)(pcVar10 + 0x40) = s_std__string_sol__detail__ctti_ge_03890886._64_8_;
  *(undefined8 *)(pcVar10 + 0x48) = uVar4;
  *(undefined8 *)(pcVar10 + 0x30) = uVar2;
  *(undefined8 *)(pcVar10 + 0x38) = uVar3;
  uVar4 = s_std__string_sol__detail__ctti_ge_03890886._40_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_03890886._24_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03890886._16_8_;
  *(undefined8 *)(pcVar10 + 0x20) = s_std__string_sol__detail__ctti_ge_03890886._32_8_;
  *(undefined8 *)(pcVar10 + 0x28) = uVar4;
  *(undefined8 *)(pcVar10 + 0x10) = uVar2;
  *(undefined8 *)(pcVar10 + 0x18) = uVar3;
  uVar3 = s_std__string_sol__detail__ctti_ge_03890886._8_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03890886._0_8_;
  pcVar10[0x75] = '\0';
  *(undefined8 *)pcVar10 = uVar2;
  *(undefined8 *)(pcVar10 + 8) = uVar3;
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
    uVar17 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar17 = uVar11;
    }
    uVar11 = uVar12;
  }
  else {
    uVar17 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar17 = uVar11;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar11 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar17 < uVar11 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar17,uVar12 - uVar17,(allocator *)param_1);
  FUN_01fb74bc(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar13 = FUN_01fb7394(param_1);
  if (lVar13 != -1) {
    std::string::erase((ulong)param_1,lVar13 - 2);
  }
  sVar1 = *param_1;
  uVar16 = (uint)(byte)sVar1;
  uVar12 = (ulong)((byte)sVar1 >> 1);
  uVar17 = *(ulong *)(param_1 + 8);
  bVar18 = (byte)sVar1 & 1;
  uVar11 = uVar12;
  if (((byte)sVar1 & 1) != 0) {
    uVar11 = uVar17;
  }
  if (uVar11 != 0) {
    psVar15 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar15 = param_1 + 1;
    }
    iVar9 = isblank((uint)(byte)*psVar15);
    if (iVar9 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar16 = (uint)(byte)sVar1;
        uVar12 = (ulong)((byte)sVar1 >> 1);
        uVar17 = *(ulong *)(param_1 + 8);
        bVar18 = (byte)sVar1 & 1;
        uVar11 = uVar12;
        if (((byte)sVar1 & 1) != 0) {
          uVar11 = uVar17;
        }
        if (uVar11 == 0) break;
        psVar15 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar15 = *(string **)(param_1 + 0x10);
        }
        iVar9 = isblank((uint)(byte)*psVar15);
      } while (iVar9 != 0);
    }
  }
  bVar7 = bVar18 == 0;
  if (!bVar7) {
    uVar12 = uVar17;
  }
  while (uVar12 != 0) {
    psVar15 = *(string **)(param_1 + 0x10);
    if (bVar7) {
      psVar15 = param_1 + 1;
      uVar17 = (ulong)(uVar16 >> 1);
    }
    iVar9 = isblank((uint)(byte)psVar15[uVar17 - 1]);
    if (iVar9 == 0) break;
    FUN_01fb73b0(param_1);
    sVar1 = *param_1;
    uVar16 = (uint)(byte)sVar1;
    bVar7 = ((byte)sVar1 & 1) == 0;
    uVar17 = *(ulong *)(param_1 + 8);
    uVar12 = (ulong)((byte)sVar1 >> 1);
    if (!bVar7) {
      uVar12 = uVar17;
    }
  }
  puVar5 = PTR_DAT_04383300;
  uVar11 = FUN_01fb73f0(param_1,PTR_DAT_04383300);
  if (uVar11 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar11);
      uVar11 = FUN_01fb73f0(param_1,puVar5);
    } while (uVar11 != 0xffffffffffffffff);
  }
  uVar11 = FUN_01fb73f0(param_1,puVar5 + 0x18);
  if (uVar11 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar11);
      uVar11 = FUN_01fb73f0(param_1,puVar5 + 0x18);
    } while (uVar11 != 0xffffffffffffffff);
  }
  return;
}


