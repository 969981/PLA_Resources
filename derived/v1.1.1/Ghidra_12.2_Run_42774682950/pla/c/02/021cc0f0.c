/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021cc0f0; name: FUN_021cc0f0
 */


/* WARNING: Removing unreachable block (ram,0x021cc66c) */

void FUN_021cc0f0(string *param_1)

{
  string sVar1;
  byte bVar2;
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
  string *psVar15;
  long *plVar16;
  string *psVar17;
  byte *pbVar18;
  string *psVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  size_t sVar24;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_043859a0;
  if (((*PTR_DAT_04385998 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04385998), iVar10 != 0)) {
    *(undefined8 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    *puVar6 = 0x16;
    uVar3 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(puVar6 + 8) = 0x7d73756f;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    puVar6[0xc] = 0;
    *(undefined8 *)(puVar6 + 1) = uVar3;
    puVar6[0x18] = 0x2a;
    uVar3 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    *(undefined8 *)(puVar6 + 0x26) = uVar3;
    uVar3 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(puVar6 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(puVar6 + 0x19) = uVar3;
    puVar6[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04385998);
  }
  plVar7 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar16 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar16 = plVar7;
  }
  pcVar11 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  *(undefined8 *)param_1 = 0x81;
  uVar3 = CONCAT71(s_std__string_sol__detail__ctti_ge_0392a618._112_7_,
                   s_std__string_sol__detail__ctti_ge_0392a618[0x6f]);
  *(undefined8 *)(param_1 + 8) = 0x77;
  *(char **)(param_1 + 0x10) = pcVar11;
  *(undefined8 *)(pcVar11 + 0x6f) = uVar3;
  uVar4 = s_std__string_sol__detail__ctti_ge_0392a618._96_8_;
  *(ulong *)(pcVar11 + 0x68) =
       CONCAT17(s_std__string_sol__detail__ctti_ge_0392a618[0x6f],
                s_std__string_sol__detail__ctti_ge_0392a618._104_7_);
  uVar3 = s_std__string_sol__detail__ctti_ge_0392a618._80_8_;
  *(undefined8 *)(pcVar11 + 0x58) = s_std__string_sol__detail__ctti_ge_0392a618._88_8_;
  *(undefined8 *)(pcVar11 + 0x60) = uVar4;
  *(undefined8 *)(pcVar11 + 0x50) = uVar3;
  uVar5 = s_std__string_sol__detail__ctti_ge_0392a618._72_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0392a618._56_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0392a618._48_8_;
  *(undefined8 *)(pcVar11 + 0x40) = s_std__string_sol__detail__ctti_ge_0392a618._64_8_;
  *(undefined8 *)(pcVar11 + 0x48) = uVar5;
  *(undefined8 *)(pcVar11 + 0x30) = uVar3;
  *(undefined8 *)(pcVar11 + 0x38) = uVar4;
  uVar5 = s_std__string_sol__detail__ctti_ge_0392a618._40_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0392a618._24_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0392a618._16_8_;
  *(undefined8 *)(pcVar11 + 0x20) = s_std__string_sol__detail__ctti_ge_0392a618._32_8_;
  *(undefined8 *)(pcVar11 + 0x28) = uVar5;
  *(undefined8 *)(pcVar11 + 0x10) = uVar3;
  *(undefined8 *)(pcVar11 + 0x18) = uVar4;
  uVar4 = s_std__string_sol__detail__ctti_ge_0392a618._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0392a618._0_8_;
  pcVar11[0x77] = '\0';
  *(undefined8 *)pcVar11 = uVar3;
  *(undefined8 *)(pcVar11 + 8) = uVar4;
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
    uVar20 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar20 = uVar12;
    }
    uVar12 = uVar13;
  }
  else {
    uVar20 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar20 = uVar12;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar12 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar12 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar20 < uVar12 - 1) {
    uVar20 = uVar20 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar20,uVar13 - uVar20,(allocator *)param_1);
  FUN_021beb9c(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar14 = FUN_021beb40(param_1);
  if (lVar14 != -1) {
    std::string::erase((ulong)param_1,lVar14 - 2);
  }
  sVar1 = *param_1;
  uVar22 = (uint)(byte)sVar1;
  uVar13 = (ulong)((byte)sVar1 >> 1);
  uVar20 = *(ulong *)(param_1 + 8);
  uVar23 = (byte)sVar1 & 1;
  uVar12 = uVar13;
  if (((byte)sVar1 & 1) != 0) {
    uVar12 = uVar20;
  }
  if (uVar12 != 0) {
    psVar17 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar17 = param_1 + 1;
    }
    iVar10 = isblank((uint)(byte)*psVar17);
    if (iVar10 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar22 = (uint)(byte)sVar1;
        uVar13 = (ulong)((byte)sVar1 >> 1);
        uVar20 = *(ulong *)(param_1 + 8);
        uVar23 = (byte)sVar1 & 1;
        uVar12 = uVar13;
        if (((byte)sVar1 & 1) != 0) {
          uVar12 = uVar20;
        }
        if (uVar12 == 0) break;
        psVar17 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar17 = *(string **)(param_1 + 0x10);
        }
        iVar10 = isblank((uint)(byte)*psVar17);
      } while (iVar10 != 0);
    }
  }
  pbVar18 = PTR_DAT_043859a0;
  bVar8 = uVar23 == 0;
  uVar12 = uVar13;
  if (!bVar8) {
    uVar12 = uVar20;
  }
  if (uVar12 != 0) {
    do {
      psVar17 = *(string **)(param_1 + 0x10);
      uVar13 = (ulong)(uVar22 >> 1);
      if (bVar8) {
        psVar17 = param_1 + 1;
        uVar12 = uVar13;
      }
      else {
        uVar12 = uVar20;
      }
      iVar10 = isblank((uint)(byte)psVar17[uVar12 - 1]);
      if (iVar10 == 0) break;
      FUN_021beb5c(param_1);
      sVar1 = *param_1;
      uVar22 = (uint)(byte)sVar1;
      bVar8 = ((byte)sVar1 & 1) == 0;
      uVar20 = *(ulong *)(param_1 + 8);
      uVar13 = (ulong)((byte)sVar1 >> 1);
      uVar12 = uVar13;
      if (!bVar8) {
        uVar12 = uVar20;
      }
    } while (uVar12 != 0);
    uVar23 = uVar22 & 1;
  }
  psVar17 = *(string **)(param_1 + 0x10);
  if (uVar23 != 0) {
    uVar13 = uVar20;
  }
  if (uVar23 == 0) {
    psVar17 = param_1 + 1;
  }
  sVar24 = *(size_t *)(pbVar18 + 8);
  if ((*pbVar18 & 1) == 0) {
    pbVar21 = pbVar18 + 1;
    sVar24 = (size_t)(*pbVar18 >> 1);
  }
  else {
    pbVar21 = *(byte **)(pbVar18 + 0x10);
  }
  if (sVar24 == 0) {
    uVar12 = 0;
LAB_021cc578:
    do {
      std::string::erase((ulong)param_1,uVar12);
      sVar24 = *(size_t *)(pbVar18 + 8);
      pbVar21 = *(byte **)(pbVar18 + 0x10);
      uVar13 = (ulong)((byte)*param_1 >> 1);
      psVar17 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        uVar13 = *(ulong *)(param_1 + 8);
        psVar17 = *(string **)(param_1 + 0x10);
      }
      if ((*pbVar18 & 1) == 0) {
        pbVar21 = pbVar18 + 1;
        sVar24 = (ulong)(*pbVar18 >> 1);
      }
      if (sVar24 == 0) {
        uVar12 = 0;
      }
      else {
        if ((long)uVar13 < (long)sVar24) break;
        bVar2 = *pbVar21;
        psVar15 = psVar17;
        uVar12 = uVar13;
        while( true ) {
          if ((0xfffffffffffffffe < uVar12 - sVar24) ||
             (psVar15 = memchr(psVar15,(uint)bVar2,(uVar12 - sVar24) + 1), psVar15 == (string *)0x0)
             ) goto LAB_021cc3e4;
          iVar10 = memcmp(psVar15,pbVar21,sVar24);
          if (iVar10 == 0) break;
          psVar15 = psVar15 + 1;
          uVar12 = (long)(psVar17 + uVar13) - (long)psVar15;
          if ((long)uVar12 < (long)sVar24) goto LAB_021cc3e4;
        }
        if (psVar15 == psVar17 + uVar13) goto LAB_021cc3e4;
        uVar12 = (long)psVar15 - (long)psVar17;
      }
      pbVar18 = PTR_DAT_043859a0;
    } while (uVar12 != 0xffffffffffffffff);
  }
  else if ((long)sVar24 <= (long)uVar13) {
    bVar2 = *pbVar21;
    psVar15 = psVar17;
    uVar12 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar12 - sVar24) ||
         (psVar15 = memchr(psVar15,(uint)bVar2,(uVar12 - sVar24) + 1), psVar15 == (string *)0x0))
      break;
      iVar10 = memcmp(psVar15,pbVar21,sVar24);
      if (iVar10 == 0) {
        if (psVar15 != psVar17 + uVar13) {
          uVar12 = (long)psVar15 - (long)psVar17;
          pbVar18 = PTR_DAT_043859a0;
          if (uVar12 != 0xffffffffffffffff) goto LAB_021cc578;
          goto LAB_021cc3ec;
        }
        break;
      }
      psVar15 = psVar15 + 1;
      uVar12 = (long)(psVar17 + uVar13) - (long)psVar15;
    } while ((long)sVar24 <= (long)uVar12);
LAB_021cc3e4:
    pbVar18 = PTR_DAT_043859a0;
  }
LAB_021cc3ec:
  sVar24 = (ulong)(pbVar18[0x18] >> 1);
  pbVar21 = pbVar18 + 0x19;
  if ((pbVar18[0x18] & 1) != 0) {
    sVar24 = *(size_t *)(pbVar18 + 0x20);
    pbVar21 = *(byte **)(pbVar18 + 0x28);
  }
  if (sVar24 == 0) {
    uVar12 = 0;
    goto LAB_021cc46c;
  }
  if ((long)sVar24 <= (long)uVar13) {
    bVar2 = *pbVar21;
    psVar19 = psVar17 + uVar13;
    psVar15 = psVar17;
    do {
      if (0xfffffffffffffffe < uVar13 - sVar24) {
        return;
      }
      psVar15 = memchr(psVar15,(uint)bVar2,(uVar13 - sVar24) + 1);
      if (psVar15 == (string *)0x0) {
        return;
      }
      iVar10 = memcmp(psVar15,pbVar21,sVar24);
      if (iVar10 == 0) {
        do {
          if (psVar15 == psVar19) {
            return;
          }
          uVar12 = (long)psVar15 - (long)psVar17;
          if (uVar12 == 0xffffffffffffffff) {
            return;
          }
LAB_021cc46c:
          while( true ) {
            std::string::erase((ulong)param_1,uVar12);
            bVar8 = ((byte)*param_1 & 1) != 0;
            psVar17 = *(string **)(param_1 + 0x10);
            uVar12 = (ulong)((byte)*param_1 >> 1);
            if (bVar8) {
              uVar12 = *(ulong *)(param_1 + 8);
            }
            if (!bVar8) {
              psVar17 = param_1 + 1;
            }
            sVar24 = (ulong)((byte)PTR_DAT_043859a0[0x18] >> 1);
            pbVar18 = PTR_DAT_043859a0 + 0x19;
            if ((PTR_DAT_043859a0[0x18] & 1) != 0) {
              sVar24 = *(size_t *)(PTR_DAT_043859a0 + 0x20);
              pbVar18 = *(byte **)(PTR_DAT_043859a0 + 0x28);
            }
            if (sVar24 != 0) break;
            uVar12 = 0;
          }
          if ((long)uVar12 < (long)sVar24) {
            return;
          }
          bVar2 = *pbVar18;
          psVar19 = psVar17 + uVar12;
          psVar15 = psVar17;
          while( true ) {
            if (0xfffffffffffffffe < uVar12 - sVar24) {
              return;
            }
            psVar15 = memchr(psVar15,(uint)bVar2,(uVar12 - sVar24) + 1);
            if (psVar15 == (string *)0x0) {
              return;
            }
            iVar10 = memcmp(psVar15,pbVar18,sVar24);
            if (iVar10 == 0) break;
            psVar15 = psVar15 + 1;
            uVar12 = (long)psVar19 - (long)psVar15;
            if ((long)uVar12 < (long)sVar24) {
              return;
            }
          }
        } while( true );
      }
      psVar15 = psVar15 + 1;
      uVar13 = (long)psVar19 - (long)psVar15;
    } while ((long)sVar24 <= (long)uVar13);
  }
  return;
}


