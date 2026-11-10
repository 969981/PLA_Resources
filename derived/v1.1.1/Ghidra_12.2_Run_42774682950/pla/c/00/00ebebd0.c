/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ebebd0; name: FUN_00ebebd0
 */


void FUN_00ebebd0(string *param_1)

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
  byte *pbVar25;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pbVar25 = PTR_DAT_0437c948;
  if (((*PTR_DAT_0437c940 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_0437c940), iVar13 != 0)) {
    *(undefined8 *)pbVar25 = 0;
    *(undefined8 *)(pbVar25 + 8) = 0;
    *pbVar25 = 0x16;
    uVar5 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar25 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar25 + 0x10) = 0;
    *(undefined8 *)(pbVar25 + 0x18) = 0;
    pbVar25[0xc] = 0;
    *(undefined8 *)(pbVar25 + 1) = uVar5;
    pbVar25[0x18] = 0x2a;
    uVar5 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar25 + 0x20) = 0;
    *(undefined8 *)(pbVar25 + 0x28) = 0;
    *(undefined8 *)(pbVar25 + 0x26) = uVar5;
    uVar5 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar25 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar25 + 0x19) = uVar5;
    pbVar25[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar25,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437c940);
  }
  plVar10 = DAT_043f1798;
  lVar17 = tpidr_el0;
  plVar19 = *(long **)(lVar17 + 0x20);
  if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
    *(long **)(lVar17 + 0x20) = DAT_043f1798;
    plVar19 = plVar10;
  }
  pcVar14 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x60,8);
  *(undefined8 *)(param_1 + 8) = 0x5e;
  *(char **)(param_1 + 0x10) = pcVar14;
  uVar8 = s_std__string_sol__detail__ctti_ge_038d3c60._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038d3c60._64_8_;
  uVar5 = CONCAT26(s_std__string_sol__detail__ctti_ge_038d3c60._86_2_,
                   s_std__string_sol__detail__ctti_ge_038d3c60._80_6_);
  *(undefined8 *)param_1 = 0x61;
  uVar6 = CONCAT62(s_std__string_sol__detail__ctti_ge_038d3c60._88_6_,
                   s_std__string_sol__detail__ctti_ge_038d3c60._86_2_);
  *(undefined8 *)(pcVar14 + 0x50) = uVar5;
  *(undefined8 *)(pcVar14 + 0x40) = uVar7;
  *(undefined8 *)(pcVar14 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_038d3c60._56_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038d3c60._48_8_;
  *(undefined8 *)(pcVar14 + 0x56) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_038d3c60._40_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038d3c60._32_8_;
  *(undefined8 *)(pcVar14 + 0x30) = uVar7;
  *(undefined8 *)(pcVar14 + 0x38) = uVar8;
  *(undefined8 *)(pcVar14 + 0x20) = uVar5;
  *(undefined8 *)(pcVar14 + 0x28) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_038d3c60._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038d3c60._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038d3c60._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038d3c60._0_8_;
  pcVar14[0x5e] = '\0';
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
  FUN_00ebbf98(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar17 = FUN_00ebbf3c(param_1);
  if (lVar17 != -1) {
    std::string::erase((ulong)param_1,lVar17 - 2);
  }
  sVar3 = *param_1;
  uVar23 = (uint)(byte)sVar3;
  uVar15 = (ulong)((byte)sVar3 >> 1);
  uVar22 = *(ulong *)(param_1 + 8);
  uVar24 = (byte)sVar3 & 1;
  uVar16 = uVar22;
  if (((byte)sVar3 & 1) == 0) {
    uVar16 = uVar15;
  }
  if (uVar16 != 0) {
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
        uVar15 = (ulong)((byte)sVar3 >> 1);
        uVar22 = *(ulong *)(param_1 + 8);
        uVar24 = (byte)sVar3 & 1;
        uVar16 = uVar15;
        if (((byte)sVar3 & 1) != 0) {
          uVar16 = uVar22;
        }
        if (uVar16 == 0) break;
        psVar20 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar20 = *(string **)(param_1 + 0x10);
        }
        iVar13 = isblank((uint)(byte)*psVar20);
      } while (iVar13 != 0);
    }
  }
  bVar11 = uVar24 == 0;
  uVar16 = uVar22;
  if (uVar24 == 0) {
    uVar16 = uVar15;
  }
  while (uVar16 != 0) {
    while( true ) {
      psVar20 = *(string **)(param_1 + 0x10);
      uVar15 = (ulong)(uVar23 >> 1);
      if (bVar11) {
        psVar20 = param_1 + 1;
        uVar16 = uVar15;
      }
      else {
        uVar16 = uVar22;
      }
      iVar13 = isblank((uint)(byte)psVar20[uVar16 - 1]);
      if (iVar13 == 0) {
        uVar24 = uVar23 & 1;
        goto LAB_00ebee20;
      }
      FUN_00ebbf58(param_1);
      sVar3 = *param_1;
      uVar23 = (uint)(byte)sVar3;
      bVar11 = ((byte)sVar3 & 1) == 0;
      uVar22 = *(ulong *)(param_1 + 8);
      uVar15 = (ulong)((byte)sVar3 >> 1);
      uVar24 = (byte)sVar3 & 1;
      uVar16 = uVar22;
      if (((byte)sVar3 & 1) != 0) break;
      if (uVar15 == 0) goto LAB_00ebee20;
    }
  }
LAB_00ebee20:
  psVar20 = *(string **)(param_1 + 0x10);
  if (uVar24 != 0) {
    uVar15 = uVar22;
  }
  if (uVar24 == 0) {
    psVar20 = param_1 + 1;
  }
  sVar1 = *(size_t *)(pbVar25 + 8);
  pbVar2 = *(byte **)(pbVar25 + 0x10);
  if ((*pbVar25 & 1) == 0) {
    pbVar2 = pbVar25 + 1;
    sVar1 = (ulong)(*pbVar25 >> 1);
  }
  if (sVar1 == 0) {
    uVar16 = 0;
LAB_00ebef5c:
    do {
      std::string::erase((ulong)param_1,uVar16);
      sVar1 = *(size_t *)(pbVar25 + 8);
      pbVar2 = *(byte **)(pbVar25 + 0x10);
      uVar15 = (ulong)((byte)*param_1 >> 1);
      psVar20 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        uVar15 = *(ulong *)(param_1 + 8);
        psVar20 = *(string **)(param_1 + 0x10);
      }
      if ((*pbVar25 & 1) == 0) {
        pbVar2 = pbVar25 + 1;
        sVar1 = (ulong)(*pbVar25 >> 1);
      }
      if (sVar1 == 0) {
        uVar16 = 0;
      }
      else {
        if ((long)uVar15 < (long)sVar1) break;
        bVar4 = *pbVar2;
        psVar18 = psVar20;
        uVar16 = uVar15;
        while( true ) {
          if ((0xfffffffffffffffe < uVar16 - sVar1) ||
             (psVar18 = memchr(psVar18,(uint)bVar4,(uVar16 - sVar1) + 1), psVar18 == (string *)0x0))
          goto LAB_00ebee7c;
          iVar13 = memcmp(psVar18,pbVar2,sVar1);
          if (iVar13 == 0) break;
          psVar18 = psVar18 + 1;
          uVar16 = (long)(psVar20 + uVar15) - (long)psVar18;
          pbVar25 = PTR_DAT_0437c948;
          if ((long)uVar16 < (long)sVar1) goto LAB_00ebee84;
        }
        if (psVar18 == psVar20 + uVar15) goto LAB_00ebee7c;
        uVar16 = (long)psVar18 - (long)psVar20;
      }
      pbVar25 = PTR_DAT_0437c948;
    } while (uVar16 != 0xffffffffffffffff);
  }
  else if ((long)sVar1 <= (long)uVar15) {
    bVar4 = *pbVar2;
    psVar18 = psVar20;
    uVar16 = uVar15;
    do {
      if ((0xfffffffffffffffe < uVar16 - sVar1) ||
         (psVar18 = memchr(psVar18,(uint)bVar4,(uVar16 - sVar1) + 1), psVar18 == (string *)0x0))
      goto LAB_00ebee7c;
      iVar13 = memcmp(psVar18,pbVar2,sVar1);
      pbVar25 = PTR_DAT_0437c948;
      if (iVar13 == 0) {
        if (psVar18 == psVar20 + uVar15) goto LAB_00ebee7c;
        uVar16 = (long)psVar18 - (long)psVar20;
        if (uVar16 != 0xffffffffffffffff) goto LAB_00ebef5c;
        break;
      }
      psVar18 = psVar18 + 1;
      uVar16 = (long)(psVar20 + uVar15) - (long)psVar18;
    } while ((long)sVar1 <= (long)uVar16);
  }
LAB_00ebee84:
  sVar1 = (ulong)(pbVar25[0x18] >> 1);
  pbVar2 = pbVar25 + 0x19;
  if ((pbVar25[0x18] & 1) != 0) {
    sVar1 = *(size_t *)(pbVar25 + 0x20);
    pbVar2 = *(byte **)(pbVar25 + 0x28);
  }
  if (sVar1 == 0) {
    uVar15 = 0;
    goto LAB_00ebf014;
  }
  if ((long)sVar1 <= (long)uVar15) {
    bVar4 = *pbVar2;
    psVar21 = psVar20 + uVar15;
    psVar18 = psVar20;
    do {
      if (0xfffffffffffffffe < uVar15 - sVar1) {
        return;
      }
      psVar18 = memchr(psVar18,(uint)bVar4,(uVar15 - sVar1) + 1);
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
LAB_00ebf014:
          while( true ) {
            puVar9 = PTR_DAT_0437c948;
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
            sVar1 = (ulong)((byte)puVar9[0x18] >> 1);
            pbVar25 = puVar9 + 0x19;
            if ((puVar9[0x18] & 1) != 0) {
              sVar1 = *(size_t *)(puVar9 + 0x20);
              pbVar25 = *(byte **)(puVar9 + 0x28);
            }
            if (sVar1 != 0) break;
            uVar15 = 0;
          }
          if ((long)uVar15 < (long)sVar1) {
            return;
          }
          bVar4 = *pbVar25;
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
            iVar13 = memcmp(psVar18,pbVar25,sVar1);
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
      uVar15 = (long)psVar21 - (long)psVar18;
    } while ((long)sVar1 <= (long)uVar15);
  }
  return;
LAB_00ebee7c:
  pbVar25 = PTR_DAT_0437c948;
  goto LAB_00ebee84;
}


