/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015bc420; name: FUN_015bc420
 */


/* WARNING: Removing unreachable block (ram,0x015bcbe8) */

void FUN_015bc420(string *param_1)

{
  string *psVar1;
  size_t sVar2;
  byte *pbVar3;
  string sVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  string *psVar19;
  long *plVar20;
  string *psVar21;
  long lVar22;
  byte *pbVar23;
  string *psVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar23 = PTR_DAT_0437fd20;
  if (((*PTR_DAT_0437fd18 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437fd18), iVar15 != 0)) {
    *(undefined8 *)pbVar23 = 0;
    *(undefined8 *)(pbVar23 + 8) = 0;
    *pbVar23 = 0x16;
    uVar6 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar23 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar23 + 0x10) = 0;
    *(undefined8 *)(pbVar23 + 0x18) = 0;
    pbVar23[0xc] = 0;
    *(undefined8 *)(pbVar23 + 1) = uVar6;
    pbVar23[0x18] = 0x2a;
    uVar6 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar23 + 0x20) = 0;
    *(undefined8 *)(pbVar23 + 0x28) = 0;
    *(undefined8 *)(pbVar23 + 0x26) = uVar6;
    uVar6 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar23 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar23 + 0x19) = uVar6;
    pbVar23[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar23,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437fd18);
  }
  plVar12 = DAT_043f1798;
  lVar22 = tpidr_el0;
  plVar20 = *(long **)(lVar22 + 0x20);
  if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
    *(long **)(lVar22 + 0x20) = DAT_043f1798;
    plVar20 = plVar12;
  }
  pcVar16 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x80,8);
  *(undefined8 *)param_1 = 0x81;
  uVar6 = CONCAT53(s_std__string_sol__detail__ctti_ge_038dfd48._120_5_,
                   s_std__string_sol__detail__ctti_ge_038dfd48._117_3_);
  *(undefined8 *)(param_1 + 8) = 0x7d;
  *(char **)(param_1 + 0x10) = pcVar16;
  *(undefined8 *)(pcVar16 + 0x75) = uVar6;
  uVar11 = s_std__string_sol__detail__ctti_ge_038dfd48._104_8_;
  uVar10 = s_std__string_sol__detail__ctti_ge_038dfd48._96_8_;
  *(ulong *)(pcVar16 + 0x70) =
       CONCAT35(s_std__string_sol__detail__ctti_ge_038dfd48._117_3_,
                s_std__string_sol__detail__ctti_ge_038dfd48._112_5_);
  uVar9 = s_std__string_sol__detail__ctti_ge_038dfd48._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038dfd48._64_8_;
  *(undefined8 *)(pcVar16 + 0x60) = uVar10;
  *(undefined8 *)(pcVar16 + 0x68) = uVar11;
  uVar11 = s_std__string_sol__detail__ctti_ge_038dfd48._88_8_;
  uVar10 = s_std__string_sol__detail__ctti_ge_038dfd48._80_8_;
  *(undefined8 *)(pcVar16 + 0x40) = uVar6;
  *(undefined8 *)(pcVar16 + 0x48) = uVar9;
  *(undefined8 *)(pcVar16 + 0x50) = uVar10;
  *(undefined8 *)(pcVar16 + 0x58) = uVar11;
  uVar10 = s_std__string_sol__detail__ctti_ge_038dfd48._56_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038dfd48._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038dfd48._32_8_;
  *(undefined8 *)(pcVar16 + 0x30) = s_std__string_sol__detail__ctti_ge_038dfd48._48_8_;
  *(undefined8 *)(pcVar16 + 0x38) = uVar10;
  *(undefined8 *)(pcVar16 + 0x20) = uVar6;
  *(undefined8 *)(pcVar16 + 0x28) = uVar9;
  uVar11 = s_std__string_sol__detail__ctti_ge_038dfd48._24_8_;
  uVar10 = s_std__string_sol__detail__ctti_ge_038dfd48._16_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038dfd48._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038dfd48._0_8_;
  pcVar16[0x7d] = '\0';
  *(undefined8 *)(pcVar16 + 0x10) = uVar10;
  *(undefined8 *)(pcVar16 + 0x18) = uVar11;
  *(undefined8 *)pcVar16 = uVar6;
  *(undefined8 *)(pcVar16 + 8) = uVar9;
  cVar14 = (char)param_1;
  std::string::find(cVar14,0x5b);
  uVar17 = std::string::find(cVar14,0x3d);
  uVar18 = std::string::rfind(cVar14,0x5d);
  sVar4 = *param_1;
  if (uVar18 == 0xffffffffffffffff) {
    if (((byte)sVar4 & 1) == 0) {
      uVar18 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar18 = *(ulong *)(param_1 + 8);
    }
    uVar26 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar26 = uVar17;
    }
    uVar17 = uVar18;
  }
  else {
    uVar26 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar26 = uVar17;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar17 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar26 < uVar17 - 1) {
    uVar26 = uVar26 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar26,uVar18 - uVar26,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
    goto LAB_015bc664;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar12 = DAT_043f1798;
  if (((byte)*param_1 & 1) == 0) goto LAB_015bc664;
  lVar25 = *(long *)(param_1 + 0x10);
  if (lVar25 != 0) {
    plVar20 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar20 = plVar12;
    }
    uVar17 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar20,lVar25,0,8);
        goto LAB_015bc660;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar25,0,8);
  }
LAB_015bc660:
  *(undefined8 *)param_1 = 0;
LAB_015bc664:
  uVar18 = local_78 >> 1 & 0x7f;
  bVar13 = (local_78 & 1) != 0;
  uVar17 = uVar18;
  if (bVar13) {
    uVar17 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar27 = (uint)local_78 & 0xff;
  uVar28 = (uint)local_78 & 1;
  psVar1 = local_68;
  if (!bVar13) {
    psVar1 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar26 = uStack_70;
  if (0xd < (long)uVar17) {
    psVar21 = psVar1 + uVar17;
    lVar22 = 1;
    while (uVar17 != 0xd) {
      uVar17 = uVar17 - 1;
      if (psVar1[uVar17] == (string)0x6b) {
        lVar25 = 0;
        do {
          if (lVar25 == -0xd) {
            if ((lVar22 != -0xd) &&
               (psVar21 + (~(ulong)psVar1 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar21 + (~(ulong)psVar1 - 0xd) + -2));
              sVar4 = *param_1;
              uVar27 = (uint)(byte)sVar4;
              uVar28 = (byte)sVar4 & 1;
              uVar26 = *(ulong *)(param_1 + 8);
              uVar18 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_015bc738;
          }
          lVar7 = lVar25 + -2;
          lVar8 = lVar25 + 0xc;
          lVar25 = lVar25 + -1;
        } while (psVar21[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar21 = psVar21 + -1;
      lVar22 = lVar22 + 1;
    }
  }
LAB_015bc738:
  psVar1 = param_1 + 1;
  uVar17 = uVar18;
  if (uVar28 != 0) {
    uVar17 = uVar26;
  }
  if (uVar17 != 0) {
    psVar21 = psVar1;
    if (uVar28 != 0) {
      psVar21 = *(string **)(param_1 + 0x10);
    }
    iVar15 = isblank((uint)(byte)*psVar21);
    if (iVar15 == 0) {
      uVar28 = uVar27 & 1;
      uVar18 = (ulong)(uVar27 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar27 = (uint)(byte)sVar4;
        uVar18 = (ulong)((byte)sVar4 >> 1);
        uVar26 = *(ulong *)(param_1 + 8);
        uVar28 = (byte)sVar4 & 1;
        uVar17 = uVar18;
        if (((byte)sVar4 & 1) != 0) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) break;
        psVar21 = psVar1;
        if (((byte)sVar4 & 1) != 0) {
          psVar21 = *(string **)(param_1 + 0x10);
        }
        iVar15 = isblank((uint)(byte)*psVar21);
      } while (iVar15 != 0);
    }
  }
  bVar13 = uVar28 == 0;
  uVar17 = uVar18;
  if (!bVar13) {
    uVar17 = uVar26;
  }
  if (uVar17 != 0) {
    do {
      psVar21 = *(string **)(param_1 + 0x10);
      uVar18 = (ulong)(uVar27 >> 1);
      if (bVar13) {
        psVar21 = param_1 + 1;
        uVar17 = uVar18;
      }
      else {
        uVar17 = uVar26;
      }
      iVar15 = isblank((uint)(byte)psVar21[uVar17 - 1]);
      if (iVar15 == 0) break;
      FUN_015b4e20(param_1);
      sVar4 = *param_1;
      uVar27 = (uint)(byte)sVar4;
      bVar13 = ((byte)sVar4 & 1) == 0;
      uVar26 = *(ulong *)(param_1 + 8);
      uVar18 = (ulong)((byte)sVar4 >> 1);
      uVar17 = uVar18;
      if (!bVar13) {
        uVar17 = uVar26;
      }
    } while (uVar17 != 0);
    uVar28 = uVar27 & 1;
  }
  if (uVar28 != 0) {
    uVar18 = uVar26;
  }
  psVar21 = psVar1;
  if (uVar28 != 0) {
    psVar21 = *(string **)(param_1 + 0x10);
  }
  sVar2 = *(size_t *)(pbVar23 + 8);
  pbVar3 = *(byte **)(pbVar23 + 0x10);
  if ((*pbVar23 & 1) == 0) {
    pbVar3 = pbVar23 + 1;
    sVar2 = (ulong)(*pbVar23 >> 1);
  }
  if (sVar2 == 0) {
    uVar17 = 0;
    goto LAB_015bc964;
  }
  if ((long)sVar2 <= (long)uVar18) {
    bVar5 = *pbVar3;
    psVar19 = psVar21;
    uVar17 = uVar18;
    do {
      if ((0xfffffffffffffffe < uVar17 - sVar2) ||
         (psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1), psVar19 == (string *)0x0))
      break;
      iVar15 = memcmp(psVar19,pbVar3,sVar2);
      if (iVar15 == 0) {
        if (psVar19 != psVar21 + uVar18) {
          pbVar23 = PTR_DAT_0437fd20;
          goto LAB_015bcb2c;
        }
        break;
      }
      psVar19 = psVar19 + 1;
      uVar17 = (long)(psVar21 + uVar18) - (long)psVar19;
    } while ((long)sVar2 <= (long)uVar17);
    pbVar23 = PTR_DAT_0437fd20;
  }
LAB_015bc878:
  sVar2 = (ulong)(pbVar23[0x18] >> 1);
  pbVar3 = pbVar23 + 0x19;
  if ((pbVar23[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar23 + 0x20);
    pbVar3 = *(byte **)(pbVar23 + 0x28);
  }
  if (sVar2 == 0) {
    uVar17 = 0;
    goto LAB_015bca14;
  }
  if ((long)sVar2 <= (long)uVar18) {
    bVar5 = *pbVar3;
    psVar24 = psVar21 + uVar18;
    psVar19 = psVar21;
    do {
      if (0xfffffffffffffffe < uVar18 - sVar2) {
        return;
      }
      psVar19 = memchr(psVar19,(uint)bVar5,(uVar18 - sVar2) + 1);
      if (psVar19 == (string *)0x0) {
        return;
      }
      iVar15 = memcmp(psVar19,pbVar3,sVar2);
      if (iVar15 == 0) {
        do {
          if (psVar19 == psVar24) {
            return;
          }
          uVar17 = (long)psVar19 - (long)psVar21;
          if (uVar17 == 0xffffffffffffffff) {
            return;
          }
LAB_015bca14:
          while( true ) {
            std::string::erase((ulong)param_1,uVar17);
            bVar13 = ((byte)*param_1 & 1) != 0;
            uVar17 = (ulong)((byte)*param_1 >> 1);
            if (bVar13) {
              uVar17 = *(ulong *)(param_1 + 8);
            }
            psVar21 = psVar1;
            if (bVar13) {
              psVar21 = *(string **)(param_1 + 0x10);
            }
            sVar2 = (ulong)((byte)PTR_DAT_0437fd20[0x18] >> 1);
            pbVar23 = PTR_DAT_0437fd20 + 0x19;
            if ((PTR_DAT_0437fd20[0x18] & 1) != 0) {
              sVar2 = *(size_t *)(PTR_DAT_0437fd20 + 0x20);
              pbVar23 = *(byte **)(PTR_DAT_0437fd20 + 0x28);
            }
            if (sVar2 != 0) break;
            uVar17 = 0;
          }
          if ((long)uVar17 < (long)sVar2) {
            return;
          }
          bVar5 = *pbVar23;
          psVar24 = psVar21 + uVar17;
          psVar19 = psVar21;
          while( true ) {
            if (0xfffffffffffffffe < uVar17 - sVar2) {
              return;
            }
            psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1);
            if (psVar19 == (string *)0x0) {
              return;
            }
            iVar15 = memcmp(psVar19,pbVar23,sVar2);
            if (iVar15 == 0) break;
            psVar19 = psVar19 + 1;
            uVar17 = (long)psVar24 - (long)psVar19;
            if ((long)uVar17 < (long)sVar2) {
              return;
            }
          }
        } while( true );
      }
      psVar19 = psVar19 + 1;
      uVar18 = (long)psVar24 - (long)psVar19;
    } while ((long)sVar2 <= (long)uVar18);
  }
  return;
LAB_015bcb2c:
  uVar17 = (long)psVar19 - (long)psVar21;
  while( true ) {
    if (uVar17 == 0xffffffffffffffff) goto LAB_015bc878;
LAB_015bc964:
    std::string::erase((ulong)param_1,uVar17);
    bVar13 = ((byte)*param_1 & 1) != 0;
    psVar21 = psVar1;
    if (bVar13) {
      psVar21 = *(string **)(param_1 + 0x10);
    }
    sVar2 = *(size_t *)(pbVar23 + 8);
    pbVar3 = *(byte **)(pbVar23 + 0x10);
    uVar18 = (ulong)((byte)*param_1 >> 1);
    if (bVar13) {
      uVar18 = *(ulong *)(param_1 + 8);
    }
    if ((*pbVar23 & 1) == 0) {
      pbVar3 = pbVar23 + 1;
      sVar2 = (ulong)(*pbVar23 >> 1);
    }
    if (sVar2 != 0) break;
    uVar17 = 0;
  }
  if ((long)uVar18 < (long)sVar2) goto LAB_015bc878;
  bVar5 = *pbVar3;
  psVar19 = psVar21;
  uVar17 = uVar18;
  while( true ) {
    if ((0xfffffffffffffffe < uVar17 - sVar2) ||
       (psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1), psVar19 == (string *)0x0))
    goto LAB_015bc878;
    iVar15 = memcmp(psVar19,pbVar3,sVar2);
    if (iVar15 == 0) break;
    psVar19 = psVar19 + 1;
    uVar17 = (long)(psVar21 + uVar18) - (long)psVar19;
    if ((long)uVar17 < (long)sVar2) goto LAB_015bc878;
  }
  if (psVar19 == psVar21 + uVar18) goto LAB_015bc878;
  goto LAB_015bcb2c;
}


