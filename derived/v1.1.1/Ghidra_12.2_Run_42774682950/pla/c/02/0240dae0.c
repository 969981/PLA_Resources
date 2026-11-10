/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0240dae0; name: FUN_0240dae0
 */


void FUN_0240dae0(string *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  string sVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  string *psVar18;
  long *plVar19;
  string *psVar20;
  string *psVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*PTR_DAT_04387038 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04387038);
    puVar9 = PTR_DAT_04387040;
    if (iVar13 != 0) {
      *(undefined8 *)PTR_DAT_04387040 = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      *puVar9 = 0x16;
      uVar5 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar9 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar9 + 0x10) = 0;
      *(undefined8 *)(puVar9 + 0x18) = 0;
      *(undefined8 *)(puVar9 + 1) = uVar5;
      puVar9[0x18] = 0x2a;
      uVar5 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar9[0xc] = 0;
      *(undefined8 *)(puVar9 + 0x20) = 0;
      *(undefined8 *)(puVar9 + 0x28) = 0;
      *(undefined8 *)(puVar9 + 0x26) = uVar5;
      uVar5 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar9 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar9 + 0x19) = uVar5;
      puVar9[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04387038);
    }
  }
  plVar10 = DAT_043f1798;
  lVar17 = tpidr_el0;
  plVar19 = *(long **)(lVar17 + 0x20);
  if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
    *(long **)(lVar17 + 0x20) = DAT_043f1798;
    plVar19 = plVar10;
  }
  pcVar14 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x70,8);
  *(undefined8 *)(param_1 + 8) = 0x65;
  *(char **)(param_1 + 0x10) = pcVar14;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390cae0._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0390cae0._64_8_;
  *(undefined8 *)param_1 = 0x71;
  uVar6 = CONCAT53(s_std__string_sol__detail__ctti_ge_0390cae0._96_5_,
                   s_std__string_sol__detail__ctti_ge_0390cae0._93_3_);
  *(undefined8 *)(pcVar14 + 0x40) = uVar5;
  *(undefined8 *)(pcVar14 + 0x48) = uVar7;
  uVar5 = CONCAT35(s_std__string_sol__detail__ctti_ge_0390cae0._93_3_,
                   s_std__string_sol__detail__ctti_ge_0390cae0._88_5_);
  *(undefined8 *)(pcVar14 + 0x50) = s_std__string_sol__detail__ctti_ge_0390cae0._80_8_;
  *(undefined8 *)(pcVar14 + 0x58) = uVar5;
  *(undefined8 *)(pcVar14 + 0x5d) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390cae0._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390cae0._48_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0390cae0._40_8_;
  *(undefined8 *)(pcVar14 + 0x20) = s_std__string_sol__detail__ctti_ge_0390cae0._32_8_;
  *(undefined8 *)(pcVar14 + 0x28) = uVar5;
  *(undefined8 *)(pcVar14 + 0x30) = uVar6;
  *(undefined8 *)(pcVar14 + 0x38) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0390cae0._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390cae0._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390cae0._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0390cae0._0_8_;
  pcVar14[0x65] = '\0';
  *(undefined8 *)pcVar14 = uVar5;
  *(undefined8 *)(pcVar14 + 8) = uVar6;
  *(undefined8 *)(pcVar14 + 0x10) = uVar7;
  *(undefined8 *)(pcVar14 + 0x18) = uVar8;
  cVar12 = (char)param_1;
  std::string::find(cVar12,0x5b);
  uVar15 = std::string::find(cVar12,0x3d);
  uVar16 = std::string::rfind(cVar12,0x5d);
  sVar3 = *param_1;
  if (uVar16 == 0xffffffffffffffff) {
    if (((byte)sVar3 & 1) == 0) {
      uVar16 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    uVar22 = 0;
    if (uVar15 != 0xffffffffffffffff) {
      uVar22 = uVar15;
    }
    uVar15 = uVar16;
  }
  else {
    uVar22 = 0;
    if (uVar15 != 0xffffffffffffffff) {
      uVar22 = uVar15;
    }
    if (((byte)sVar3 & 1) == 0) {
      uVar15 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar15 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar22 < uVar15 - 1) {
    uVar22 = uVar22 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar22,uVar16 - uVar22,(allocator *)param_1);
  FUN_024083c8(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar17 = FUN_0240836c(param_1);
  if (lVar17 != -1) {
    std::string::erase((ulong)param_1,lVar17 - 2);
  }
  sVar3 = *param_1;
  uVar23 = (uint)(byte)sVar3;
  uVar16 = (ulong)((byte)sVar3 >> 1);
  uVar22 = *(ulong *)(param_1 + 8);
  uVar24 = (byte)sVar3 & 1;
  uVar15 = uVar16;
  if (((byte)sVar3 & 1) != 0) {
    uVar15 = uVar22;
  }
  if (uVar15 != 0) {
    psVar20 = *(string **)(param_1 + 0x10);
    if (((byte)sVar3 & 1) == 0) {
      psVar20 = param_1 + 1;
    }
    iVar13 = isblank((uint)(byte)*psVar20);
    if (iVar13 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar3 = *param_1;
        uVar23 = (uint)(byte)sVar3;
        uVar16 = (ulong)((byte)sVar3 >> 1);
        uVar22 = *(ulong *)(param_1 + 8);
        uVar24 = (byte)sVar3 & 1;
        uVar15 = uVar16;
        if (((byte)sVar3 & 1) != 0) {
          uVar15 = uVar22;
        }
        if (uVar15 == 0) break;
        psVar20 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar20 = *(string **)(param_1 + 0x10);
        }
        iVar13 = isblank((uint)(byte)*psVar20);
      } while (iVar13 != 0);
    }
  }
  bVar11 = uVar24 == 0;
  uVar15 = uVar16;
  if (!bVar11) {
    uVar15 = uVar22;
  }
  while (uVar15 != 0) {
    psVar20 = *(string **)(param_1 + 0x10);
    uVar16 = (ulong)(uVar23 >> 1);
    if (bVar11) {
      psVar20 = param_1 + 1;
      uVar15 = uVar16;
    }
    else {
      uVar15 = uVar22;
    }
    iVar13 = isblank((uint)(byte)psVar20[uVar15 - 1]);
    if (iVar13 == 0) {
      uVar24 = uVar23 & 1;
      break;
    }
    FUN_02408388(param_1);
    sVar3 = *param_1;
    uVar23 = (uint)(byte)sVar3;
    bVar11 = ((byte)sVar3 & 1) == 0;
    uVar22 = *(ulong *)(param_1 + 8);
    uVar24 = (byte)sVar3 & 1;
    uVar16 = (ulong)((byte)sVar3 >> 1);
    uVar15 = uVar16;
    if (!bVar11) {
      uVar15 = uVar22;
    }
  }
  psVar20 = *(string **)(param_1 + 0x10);
  if (uVar24 == 0) {
    psVar20 = param_1 + 1;
  }
  sVar1 = *(size_t *)(PTR_DAT_04387040 + 8);
  pbVar2 = *(byte **)(PTR_DAT_04387040 + 0x10);
  if (uVar24 != 0) {
    uVar16 = uVar22;
  }
  if ((*PTR_DAT_04387040 & 1) == 0) {
    pbVar2 = PTR_DAT_04387040 + 1;
    sVar1 = (ulong)((byte)*PTR_DAT_04387040 >> 1);
  }
  if (sVar1 == 0) {
    uVar15 = 0;
    goto LAB_0240de5c;
  }
  if ((long)sVar1 <= (long)uVar16) {
    bVar4 = *pbVar2;
    psVar21 = psVar20 + uVar16;
    psVar18 = psVar20;
    uVar15 = uVar16;
    do {
      if ((0xfffffffffffffffe < uVar15 - sVar1) ||
         (psVar18 = memchr(psVar18,(uint)bVar4,(uVar15 - sVar1) + 1), psVar18 == (string *)0x0))
      break;
      iVar13 = memcmp(psVar18,pbVar2,sVar1);
      if (iVar13 == 0) goto LAB_0240e018;
      psVar18 = psVar18 + 1;
      uVar15 = (long)psVar21 - (long)psVar18;
    } while ((long)sVar1 <= (long)uVar15);
  }
LAB_0240dd9c:
  sVar1 = (ulong)((byte)PTR_DAT_04387040[0x18] >> 1);
  pbVar2 = PTR_DAT_04387040 + 0x19;
  if ((PTR_DAT_04387040[0x18] & 1) != 0) {
    sVar1 = *(size_t *)(PTR_DAT_04387040 + 0x20);
    pbVar2 = *(byte **)(PTR_DAT_04387040 + 0x28);
  }
  if (sVar1 == 0) {
    uVar15 = 0;
    goto LAB_0240df10;
  }
  if ((long)sVar1 <= (long)uVar16) {
    bVar4 = *pbVar2;
    psVar21 = psVar20 + uVar16;
    psVar18 = psVar20;
    do {
      if (0xfffffffffffffffe < uVar16 - sVar1) {
        return;
      }
      psVar18 = memchr(psVar18,(uint)bVar4,(uVar16 - sVar1) + 1);
      if (psVar18 == (string *)0x0) {
        return;
      }
      iVar13 = memcmp(psVar18,pbVar2,sVar1);
      if (iVar13 == 0) {
        do {
          if (psVar18 == psVar21) {
            return;
          }
          uVar15 = (long)psVar18 - (long)psVar20;
          if (uVar15 == 0xffffffffffffffff) {
            return;
          }
LAB_0240df10:
          while( true ) {
            std::string::erase((ulong)param_1,uVar15);
            uVar15 = (ulong)((byte)*param_1 >> 1);
            psVar20 = param_1 + 1;
            if (((byte)*param_1 & 1) != 0) {
              uVar15 = *(ulong *)(param_1 + 8);
              psVar20 = *(string **)(param_1 + 0x10);
            }
            sVar1 = (ulong)((byte)PTR_DAT_04387040[0x18] >> 1);
            pbVar2 = PTR_DAT_04387040 + 0x19;
            if ((PTR_DAT_04387040[0x18] & 1) != 0) {
              sVar1 = *(size_t *)(PTR_DAT_04387040 + 0x20);
              pbVar2 = *(byte **)(PTR_DAT_04387040 + 0x28);
            }
            if (sVar1 != 0) break;
            uVar15 = 0;
          }
          if ((long)uVar15 < (long)sVar1) {
            return;
          }
          bVar4 = *pbVar2;
          psVar21 = psVar20 + uVar15;
          psVar18 = psVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar15 - sVar1) {
              return;
            }
            psVar18 = memchr(psVar18,(uint)bVar4,(uVar15 - sVar1) + 1);
            if (psVar18 == (string *)0x0) {
              return;
            }
            iVar13 = memcmp(psVar18,pbVar2,sVar1);
            if (iVar13 == 0) break;
            psVar18 = psVar18 + 1;
            uVar15 = (long)psVar21 - (long)psVar18;
            if ((long)uVar15 < (long)sVar1) {
              return;
            }
          }
        } while( true );
      }
      psVar18 = psVar18 + 1;
      uVar16 = (long)psVar21 - (long)psVar18;
    } while ((long)sVar1 <= (long)uVar16);
  }
  return;
LAB_0240e018:
  if ((psVar18 == psVar21) || (uVar15 = (long)psVar18 - (long)psVar20, uVar15 == 0xffffffffffffffff)
     ) goto LAB_0240dd9c;
LAB_0240de5c:
  while( true ) {
    std::string::erase((ulong)param_1,uVar15);
    psVar20 = param_1 + 1;
    uVar16 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      psVar20 = *(string **)(param_1 + 0x10);
      uVar16 = *(ulong *)(param_1 + 8);
    }
    sVar1 = *(size_t *)(PTR_DAT_04387040 + 8);
    pbVar2 = *(byte **)(PTR_DAT_04387040 + 0x10);
    if ((*PTR_DAT_04387040 & 1) == 0) {
      pbVar2 = PTR_DAT_04387040 + 1;
      sVar1 = (ulong)((byte)*PTR_DAT_04387040 >> 1);
    }
    if (sVar1 != 0) break;
    uVar15 = 0;
  }
  if ((long)uVar16 < (long)sVar1) goto LAB_0240dd9c;
  bVar4 = *pbVar2;
  psVar21 = psVar20 + uVar16;
  psVar18 = psVar20;
  uVar15 = uVar16;
  while( true ) {
    if ((0xfffffffffffffffe < uVar15 - sVar1) ||
       (psVar18 = memchr(psVar18,(uint)bVar4,(uVar15 - sVar1) + 1), psVar18 == (string *)0x0))
    goto LAB_0240dd9c;
    iVar13 = memcmp(psVar18,pbVar2,sVar1);
    if (iVar13 == 0) break;
    psVar18 = psVar18 + 1;
    uVar15 = (long)psVar21 - (long)psVar18;
    if ((long)uVar15 < (long)sVar1) goto LAB_0240dd9c;
  }
  goto LAB_0240e018;
}


