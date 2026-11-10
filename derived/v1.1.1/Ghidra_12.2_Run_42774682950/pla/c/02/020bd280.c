/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020bd280; name: FUN_020bd280
 */


void FUN_020bd280(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  string *psVar16;
  uint uVar17;
  byte bVar18;
  ulong uVar19;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_043847d0 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_043847d0);
    puVar6 = PTR_DAT_043847d8;
    if (iVar10 != 0) {
      *(undefined8 *)PTR_DAT_043847d8 = 0;
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
      __cxa_guard_release(PTR_DAT_043847d0);
    }
  }
  plVar7 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar15 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar15 = plVar7;
  }
  pcVar11 = (char *)(**(code **)(*plVar15 + 0x10))(plVar15,0x70,8);
  *(undefined8 *)(param_1 + 8) = 0x6d;
  *(char **)(param_1 + 0x10) = pcVar11;
  uVar5 = s_std__string_sol__detail__ctti_ge_03962df0._88_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03962df0._80_8_;
  uVar2 = CONCAT35(s_std__string_sol__detail__ctti_ge_03962df0._101_3_,
                   s_std__string_sol__detail__ctti_ge_03962df0._96_5_);
  *(undefined8 *)param_1 = 0x71;
  uVar3 = CONCAT53(s_std__string_sol__detail__ctti_ge_03962df0._104_5_,
                   s_std__string_sol__detail__ctti_ge_03962df0._101_3_);
  *(undefined8 *)(pcVar11 + 0x60) = uVar2;
  *(undefined8 *)(pcVar11 + 0x50) = uVar4;
  *(undefined8 *)(pcVar11 + 0x58) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_03962df0._72_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03962df0._64_8_;
  *(undefined8 *)(pcVar11 + 0x65) = uVar3;
  uVar3 = s_std__string_sol__detail__ctti_ge_03962df0._56_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03962df0._48_8_;
  *(undefined8 *)(pcVar11 + 0x40) = uVar4;
  *(undefined8 *)(pcVar11 + 0x48) = uVar5;
  *(undefined8 *)(pcVar11 + 0x30) = uVar2;
  *(undefined8 *)(pcVar11 + 0x38) = uVar3;
  uVar4 = s_std__string_sol__detail__ctti_ge_03962df0._40_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_03962df0._32_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03962df0._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_std__string_sol__detail__ctti_ge_03962df0._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar2;
  *(undefined8 *)(pcVar11 + 0x20) = uVar3;
  *(undefined8 *)(pcVar11 + 0x28) = uVar4;
  uVar3 = s_std__string_sol__detail__ctti_ge_03962df0._8_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_03962df0._0_8_;
  pcVar11[0x6d] = '\0';
  *(undefined8 *)pcVar11 = uVar2;
  *(undefined8 *)(pcVar11 + 8) = uVar3;
  cVar9 = (char)param_1;
  std::string::find(cVar9,0x5b);
  uVar12 = std::string::find(cVar9,0x3d);
  uVar13 = std::string::rfind(cVar9,0x5d);
  sVar1 = *param_1;
  if (uVar13 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar13 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 8);
    }
    uVar19 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar19 = uVar12;
    }
    uVar12 = uVar13;
  }
  else {
    uVar19 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar19 = uVar12;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar12 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar12 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar19 < uVar12 - 1) {
    uVar19 = uVar19 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar19,uVar13 - uVar19,(allocator *)param_1);
  FUN_020bcc24(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar14 = FUN_020bcafc(param_1);
  if (lVar14 != -1) {
    std::string::erase((ulong)param_1,lVar14 - 2);
  }
  sVar1 = *param_1;
  uVar17 = (uint)(byte)sVar1;
  uVar19 = (ulong)((byte)sVar1 >> 1);
  uVar12 = *(ulong *)(param_1 + 8);
  bVar18 = (byte)sVar1 & 1;
  uVar13 = uVar12;
  if (((byte)sVar1 & 1) == 0) {
    uVar13 = uVar19;
  }
  if (uVar13 != 0) {
    psVar16 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar16 = param_1 + 1;
    }
    iVar10 = isblank((uint)(byte)*psVar16);
    if (iVar10 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar17 = (uint)(byte)sVar1;
        uVar19 = (ulong)((byte)sVar1 >> 1);
        uVar12 = *(ulong *)(param_1 + 8);
        bVar18 = (byte)sVar1 & 1;
        uVar13 = uVar19;
        if (((byte)sVar1 & 1) != 0) {
          uVar13 = uVar12;
        }
        if (uVar13 == 0) break;
        psVar16 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar16 = *(string **)(param_1 + 0x10);
        }
        iVar10 = isblank((uint)(byte)*psVar16);
      } while (iVar10 != 0);
    }
  }
  bVar8 = bVar18 == 0;
  uVar13 = uVar12;
  if (bVar18 == 0) {
    uVar13 = uVar19;
  }
  while (uVar13 != 0) {
    while( true ) {
      psVar16 = *(string **)(param_1 + 0x10);
      if (bVar8) {
        psVar16 = param_1 + 1;
        uVar12 = (ulong)(uVar17 >> 1);
      }
      iVar10 = isblank((uint)(byte)psVar16[uVar12 - 1]);
      if (iVar10 == 0) goto LAB_020bd4c0;
      FUN_020bcb18(param_1);
      sVar1 = *param_1;
      uVar17 = (uint)(byte)sVar1;
      bVar8 = ((byte)sVar1 & 1) == 0;
      uVar12 = *(ulong *)(param_1 + 8);
      uVar13 = uVar12;
      if (((byte)sVar1 & 1) != 0) break;
      if ((byte)sVar1 >> 1 == 0) goto LAB_020bd4c0;
    }
  }
LAB_020bd4c0:
  puVar6 = PTR_DAT_043847d8;
  uVar12 = FUN_020bcb58(param_1,PTR_DAT_043847d8);
  if (uVar12 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar12);
      uVar12 = FUN_020bcb58(param_1,puVar6);
    } while (uVar12 != 0xffffffffffffffff);
  }
  uVar12 = FUN_020bcb58(param_1,puVar6 + 0x18);
  if (uVar12 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar12);
      uVar12 = FUN_020bcb58(param_1,puVar6 + 0x18);
    } while (uVar12 != 0xffffffffffffffff);
  }
  return;
}


