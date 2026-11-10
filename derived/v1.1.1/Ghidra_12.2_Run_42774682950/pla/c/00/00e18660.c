/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e18660; name: FUN_00e18660
 */


/* WARNING: Removing unreachable block (ram,0x00e18bc8) */

void FUN_00e18660(string *param_1)

{
  string sVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  byte *pbVar21;
  string *psVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  size_t sVar27;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar9 = PTR_DAT_0437c000;
  if (((*PTR_DAT_0437bff8 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_0437bff8), iVar13 != 0)) {
    *(undefined8 *)puVar9 = 0;
    *(undefined8 *)(puVar9 + 8) = 0;
    *puVar9 = 0x16;
    uVar3 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(puVar9 + 8) = 0x7d73756f;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    *(undefined8 *)(puVar9 + 0x18) = 0;
    puVar9[0xc] = 0;
    *(undefined8 *)(puVar9 + 1) = uVar3;
    puVar9[0x18] = 0x2a;
    uVar3 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x26) = uVar3;
    uVar3 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(puVar9 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(puVar9 + 0x19) = uVar3;
    puVar9[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437bff8);
  }
  plVar10 = DAT_043f1798;
  lVar17 = tpidr_el0;
  plVar19 = *(long **)(lVar17 + 0x20);
  if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
    *(long **)(lVar17 + 0x20) = DAT_043f1798;
    plVar19 = plVar10;
  }
  pcVar14 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x70,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_038cb2b3._72_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_038cb2b3._64_8_;
  *(undefined8 *)param_1 = 0x71;
  *(undefined8 *)(param_1 + 8) = 0x60;
  *(char **)(param_1 + 0x10) = pcVar14;
  uVar8 = s_std__string_sol__detail__ctti_ge_038cb2b3._88_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038cb2b3._80_8_;
  *(undefined8 *)(pcVar14 + 0x40) = uVar3;
  *(undefined8 *)(pcVar14 + 0x48) = uVar4;
  uVar6 = s_std__string_sol__detail__ctti_ge_038cb2b3._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038cb2b3._48_8_;
  *(undefined8 *)(pcVar14 + 0x50) = uVar7;
  *(undefined8 *)(pcVar14 + 0x58) = uVar8;
  uVar4 = s_std__string_sol__detail__ctti_ge_038cb2b3._40_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_038cb2b3._32_8_;
  *(undefined8 *)(pcVar14 + 0x30) = uVar5;
  *(undefined8 *)(pcVar14 + 0x38) = uVar6;
  *(undefined8 *)(pcVar14 + 0x20) = uVar3;
  *(undefined8 *)(pcVar14 + 0x28) = uVar4;
  uVar6 = s_std__string_sol__detail__ctti_ge_038cb2b3._24_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038cb2b3._16_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038cb2b3._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_038cb2b3._0_8_;
  pcVar14[0x60] = '\0';
  *(undefined8 *)pcVar14 = uVar3;
  *(undefined8 *)(pcVar14 + 8) = uVar4;
  *(undefined8 *)(pcVar14 + 0x10) = uVar5;
  *(undefined8 *)(pcVar14 + 0x18) = uVar6;
  cVar12 = (char)param_1;
  std::string::find(cVar12,0x5b);
  uVar15 = std::string::find(cVar12,0x3d);
  uVar16 = std::string::rfind(cVar12,0x5d);
  sVar1 = *param_1;
  if (uVar16 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar16 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    uVar23 = 0;
    if (uVar15 != 0xffffffffffffffff) {
      uVar23 = uVar15;
    }
    uVar15 = uVar16;
  }
  else {
    uVar23 = 0;
    if (uVar15 != 0xffffffffffffffff) {
      uVar23 = uVar15;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar15 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar15 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar23 < uVar15 - 1) {
    uVar23 = uVar23 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar23,uVar16 - uVar23,(allocator *)param_1);
  FUN_00e0f920(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar17 = FUN_00e0f8c4(param_1);
  if (lVar17 != -1) {
    std::string::erase((ulong)param_1,lVar17 - 2);
  }
  sVar1 = *param_1;
  uVar25 = (uint)(byte)sVar1;
  uVar16 = (ulong)((byte)sVar1 >> 1);
  uVar23 = *(ulong *)(param_1 + 8);
  uVar26 = (byte)sVar1 & 1;
  uVar15 = uVar16;
  if (((byte)sVar1 & 1) != 0) {
    uVar15 = uVar23;
  }
  if (uVar15 != 0) {
    psVar20 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar20 = param_1 + 1;
    }
    iVar13 = isblank((uint)(byte)*psVar20);
    if (iVar13 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar25 = (uint)(byte)sVar1;
        uVar16 = (ulong)((byte)sVar1 >> 1);
        uVar23 = *(ulong *)(param_1 + 8);
        uVar26 = (byte)sVar1 & 1;
        uVar15 = uVar16;
        if (((byte)sVar1 & 1) != 0) {
          uVar15 = uVar23;
        }
        if (uVar15 == 0) break;
        psVar20 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar20 = *(string **)(param_1 + 0x10);
        }
        iVar13 = isblank((uint)(byte)*psVar20);
      } while (iVar13 != 0);
    }
  }
  pbVar21 = PTR_DAT_0437c000;
  bVar11 = uVar26 == 0;
  uVar15 = uVar16;
  if (!bVar11) {
    uVar15 = uVar23;
  }
  if (uVar15 != 0) {
    do {
      psVar20 = *(string **)(param_1 + 0x10);
      uVar16 = (ulong)(uVar25 >> 1);
      if (bVar11) {
        psVar20 = param_1 + 1;
        uVar15 = uVar16;
      }
      else {
        uVar15 = uVar23;
      }
      iVar13 = isblank((uint)(byte)psVar20[uVar15 - 1]);
      if (iVar13 == 0) break;
      FUN_00e0f8e0(param_1);
      sVar1 = *param_1;
      uVar25 = (uint)(byte)sVar1;
      bVar11 = ((byte)sVar1 & 1) == 0;
      uVar23 = *(ulong *)(param_1 + 8);
      uVar16 = (ulong)((byte)sVar1 >> 1);
      uVar15 = uVar16;
      if (!bVar11) {
        uVar15 = uVar23;
      }
    } while (uVar15 != 0);
    uVar26 = uVar25 & 1;
  }
  psVar20 = *(string **)(param_1 + 0x10);
  if (uVar26 != 0) {
    uVar16 = uVar23;
  }
  if (uVar26 == 0) {
    psVar20 = param_1 + 1;
  }
  sVar27 = *(size_t *)(pbVar21 + 8);
  if ((*pbVar21 & 1) == 0) {
    pbVar24 = pbVar21 + 1;
    sVar27 = (size_t)(*pbVar21 >> 1);
  }
  else {
    pbVar24 = *(byte **)(pbVar21 + 0x10);
  }
  if (sVar27 == 0) {
    uVar15 = 0;
LAB_00e189d4:
    do {
      std::string::erase((ulong)param_1,uVar15);
      sVar27 = *(size_t *)(pbVar21 + 8);
      pbVar24 = *(byte **)(pbVar21 + 0x10);
      uVar16 = (ulong)((byte)*param_1 >> 1);
      psVar20 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        uVar16 = *(ulong *)(param_1 + 8);
        psVar20 = *(string **)(param_1 + 0x10);
      }
      if ((*pbVar21 & 1) == 0) {
        pbVar24 = pbVar21 + 1;
        sVar27 = (ulong)(*pbVar21 >> 1);
      }
      if (sVar27 == 0) {
        uVar15 = 0;
      }
      else {
        if ((long)uVar16 < (long)sVar27) break;
        bVar2 = *pbVar24;
        psVar18 = psVar20;
        uVar15 = uVar16;
        while( true ) {
          if ((0xfffffffffffffffe < uVar15 - sVar27) ||
             (psVar18 = memchr(psVar18,(uint)bVar2,(uVar15 - sVar27) + 1), psVar18 == (string *)0x0)
             ) goto LAB_00e18940;
          iVar13 = memcmp(psVar18,pbVar24,sVar27);
          if (iVar13 == 0) break;
          psVar18 = psVar18 + 1;
          uVar15 = (long)(psVar20 + uVar16) - (long)psVar18;
          if ((long)uVar15 < (long)sVar27) goto LAB_00e18940;
        }
        if (psVar18 == psVar20 + uVar16) goto LAB_00e18940;
        uVar15 = (long)psVar18 - (long)psVar20;
      }
      pbVar21 = PTR_DAT_0437c000;
    } while (uVar15 != 0xffffffffffffffff);
  }
  else if ((long)sVar27 <= (long)uVar16) {
    bVar2 = *pbVar24;
    psVar18 = psVar20;
    uVar15 = uVar16;
    do {
      if ((0xfffffffffffffffe < uVar15 - sVar27) ||
         (psVar18 = memchr(psVar18,(uint)bVar2,(uVar15 - sVar27) + 1), psVar18 == (string *)0x0))
      break;
      iVar13 = memcmp(psVar18,pbVar24,sVar27);
      if (iVar13 == 0) {
        if (psVar18 != psVar20 + uVar16) {
          uVar15 = (long)psVar18 - (long)psVar20;
          pbVar21 = PTR_DAT_0437c000;
          if (uVar15 != 0xffffffffffffffff) goto LAB_00e189d4;
          goto LAB_00e18948;
        }
        break;
      }
      psVar18 = psVar18 + 1;
      uVar15 = (long)(psVar20 + uVar16) - (long)psVar18;
    } while ((long)sVar27 <= (long)uVar15);
LAB_00e18940:
    pbVar21 = PTR_DAT_0437c000;
  }
LAB_00e18948:
  sVar27 = (ulong)(pbVar21[0x18] >> 1);
  pbVar24 = pbVar21 + 0x19;
  if ((pbVar21[0x18] & 1) != 0) {
    sVar27 = *(size_t *)(pbVar21 + 0x20);
    pbVar24 = *(byte **)(pbVar21 + 0x28);
  }
  if (sVar27 == 0) {
    uVar15 = 0;
    goto LAB_00e18ad8;
  }
  if ((long)sVar27 <= (long)uVar16) {
    bVar2 = *pbVar24;
    psVar22 = psVar20 + uVar16;
    psVar18 = psVar20;
    do {
      if (0xfffffffffffffffe < uVar16 - sVar27) {
        return;
      }
      psVar18 = memchr(psVar18,(uint)bVar2,(uVar16 - sVar27) + 1);
      if (psVar18 == (string *)0x0) {
        return;
      }
      iVar13 = memcmp(psVar18,pbVar24,sVar27);
      if (iVar13 == 0) {
        do {
          if (psVar18 == psVar22) {
            return;
          }
          uVar15 = (long)psVar18 - (long)psVar20;
          if (uVar15 == 0xffffffffffffffff) {
            return;
          }
LAB_00e18ad8:
          while( true ) {
            std::string::erase((ulong)param_1,uVar15);
            bVar11 = ((byte)*param_1 & 1) != 0;
            psVar20 = *(string **)(param_1 + 0x10);
            uVar15 = (ulong)((byte)*param_1 >> 1);
            if (bVar11) {
              uVar15 = *(ulong *)(param_1 + 8);
            }
            if (!bVar11) {
              psVar20 = param_1 + 1;
            }
            sVar27 = (ulong)((byte)PTR_DAT_0437c000[0x18] >> 1);
            pbVar21 = PTR_DAT_0437c000 + 0x19;
            if ((PTR_DAT_0437c000[0x18] & 1) != 0) {
              sVar27 = *(size_t *)(PTR_DAT_0437c000 + 0x20);
              pbVar21 = *(byte **)(PTR_DAT_0437c000 + 0x28);
            }
            if (sVar27 != 0) break;
            uVar15 = 0;
          }
          if ((long)uVar15 < (long)sVar27) {
            return;
          }
          bVar2 = *pbVar21;
          psVar22 = psVar20 + uVar15;
          psVar18 = psVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar15 - sVar27) {
              return;
            }
            psVar18 = memchr(psVar18,(uint)bVar2,(uVar15 - sVar27) + 1);
            if (psVar18 == (string *)0x0) {
              return;
            }
            iVar13 = memcmp(psVar18,pbVar21,sVar27);
            if (iVar13 == 0) break;
            psVar18 = psVar18 + 1;
            uVar15 = (long)psVar22 - (long)psVar18;
            if ((long)uVar15 < (long)sVar27) {
              return;
            }
          }
        } while( true );
      }
      psVar18 = psVar18 + 1;
      uVar16 = (long)psVar22 - (long)psVar18;
    } while ((long)sVar27 <= (long)uVar16);
  }
  return;
}


