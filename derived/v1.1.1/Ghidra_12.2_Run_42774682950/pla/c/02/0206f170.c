/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0206f170; name: FUN_0206f170
 */


/* WARNING: Removing unreachable block (ram,0x0206f958) */

void FUN_0206f170(string *param_1)

{
  string sVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  string *psVar16;
  string *psVar17;
  long *plVar18;
  ulong uVar19;
  string *psVar20;
  size_t sVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar27 = PTR_DAT_04384408;
  if (((*PTR_DAT_04384400 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04384400), iVar12 != 0)) {
    *(undefined8 *)pbVar27 = 0;
    *(undefined8 *)(pbVar27 + 8) = 0;
    *pbVar27 = 0x16;
    uVar3 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar27 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar27 + 0x10) = 0;
    *(undefined8 *)(pbVar27 + 0x18) = 0;
    pbVar27[0xc] = 0;
    *(undefined8 *)(pbVar27 + 1) = uVar3;
    pbVar27[0x18] = 0x2a;
    uVar3 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar27 + 0x20) = 0;
    *(undefined8 *)(pbVar27 + 0x28) = 0;
    *(undefined8 *)(pbVar27 + 0x26) = uVar3;
    uVar3 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar27 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar27 + 0x19) = uVar3;
    pbVar27[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar27,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04384400);
  }
  plVar9 = DAT_043f1798;
  lVar22 = tpidr_el0;
  plVar18 = *(long **)(lVar22 + 0x20);
  if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
    *(long **)(lVar22 + 0x20) = DAT_043f1798;
    plVar18 = plVar9;
  }
  pcVar13 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x80,8);
  *(undefined8 *)param_1 = 0x81;
  uVar3 = CONCAT62(s_std__string_sol__detail__ctti_ge_0396d2ce._120_6_,
                   s_std__string_sol__detail__ctti_ge_0396d2ce._118_2_);
  *(undefined8 *)(param_1 + 8) = 0x7e;
  *(char **)(param_1 + 0x10) = pcVar13;
  *(undefined8 *)(pcVar13 + 0x76) = uVar3;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396d2ce._104_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396d2ce._96_8_;
  *(ulong *)(pcVar13 + 0x70) =
       CONCAT26(s_std__string_sol__detail__ctti_ge_0396d2ce._118_2_,
                s_std__string_sol__detail__ctti_ge_0396d2ce._112_6_);
  uVar6 = s_std__string_sol__detail__ctti_ge_0396d2ce._72_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0396d2ce._64_8_;
  *(undefined8 *)(pcVar13 + 0x60) = uVar7;
  *(undefined8 *)(pcVar13 + 0x68) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396d2ce._88_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396d2ce._80_8_;
  *(undefined8 *)(pcVar13 + 0x40) = uVar3;
  *(undefined8 *)(pcVar13 + 0x48) = uVar6;
  *(undefined8 *)(pcVar13 + 0x50) = uVar7;
  *(undefined8 *)(pcVar13 + 0x58) = uVar8;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396d2ce._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0396d2ce._40_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0396d2ce._32_8_;
  *(undefined8 *)(pcVar13 + 0x30) = s_std__string_sol__detail__ctti_ge_0396d2ce._48_8_;
  *(undefined8 *)(pcVar13 + 0x38) = uVar7;
  *(undefined8 *)(pcVar13 + 0x20) = uVar3;
  *(undefined8 *)(pcVar13 + 0x28) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_0396d2ce._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0396d2ce._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0396d2ce._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0396d2ce._0_8_;
  pcVar13[0x7e] = '\0';
  *(undefined8 *)(pcVar13 + 0x10) = uVar7;
  *(undefined8 *)(pcVar13 + 0x18) = uVar8;
  *(undefined8 *)pcVar13 = uVar3;
  *(undefined8 *)(pcVar13 + 8) = uVar6;
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
    uVar19 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar19 = uVar14;
    }
    uVar14 = uVar15;
  }
  else {
    uVar19 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar19 = uVar14;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar14 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar19 < uVar14 - 1) {
    uVar19 = uVar19 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar19,uVar15 - uVar19,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    plVar9 = DAT_043f1798;
    if (((byte)*param_1 & 1) != 0) {
      lVar23 = *(long *)(param_1 + 0x10);
      if (lVar23 != 0) {
        plVar18 = *(long **)(lVar22 + 0x20);
        if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
          *(long **)(lVar22 + 0x20) = DAT_043f1798;
          plVar18 = plVar9;
        }
        uVar14 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar22 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar22 + 0x38d488) = 1;
            *(undefined8 *)(lVar22 + 0x38d478) = 0;
            *(undefined8 *)(lVar22 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar22 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar23,0,8);
            goto LAB_0206f3b0;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar23,0,8);
      }
LAB_0206f3b0:
      *(undefined8 *)param_1 = 0;
    }
  }
  uVar25 = (uint)local_78 & 0xff;
  uVar26 = (uint)local_78 & 1;
  psVar17 = param_1 + 1;
  uVar14 = local_78 >> 1 & 0x7f;
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  *(ulong *)param_1 = local_78;
  uVar15 = uStack_70;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar14;
    local_68 = psVar17;
    if (0xd < uVar14) goto LAB_0206f3e4;
  }
  else if (0xd < (long)uStack_70) {
LAB_0206f3e4:
    psVar20 = local_68 + uStack_70;
    lVar22 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (local_68[uStack_70] == (string)0x6b) {
        lVar23 = 0;
        do {
          if (lVar23 == -0xd) {
            if ((lVar22 != -0xd) &&
               (psVar20 + (~(ulong)local_68 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar20 + (~(ulong)local_68 - 0xd) + -2));
              sVar1 = *param_1;
              uVar25 = (uint)(byte)sVar1;
              uVar26 = (byte)sVar1 & 1;
              uVar14 = (ulong)((byte)sVar1 >> 1);
              uVar15 = *(ulong *)(param_1 + 8);
            }
            goto LAB_0206f488;
          }
          lVar4 = lVar23 + -2;
          lVar5 = lVar23 + 0xc;
          lVar23 = lVar23 + -1;
        } while (psVar20[lVar4] == *(string *)("seperator_mark" + lVar5));
      }
      psVar20 = psVar20 + -1;
      lVar22 = lVar22 + 1;
    }
  }
LAB_0206f488:
  uVar19 = uVar14;
  if (uVar26 != 0) {
    uVar19 = uVar15;
  }
  if (uVar19 != 0) {
    psVar20 = psVar17;
    if (uVar26 != 0) {
      psVar20 = *(string **)(param_1 + 0x10);
    }
    iVar12 = isblank((uint)(byte)*psVar20);
    if (iVar12 == 0) {
      uVar26 = uVar25 & 1;
      uVar14 = (ulong)(uVar25 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar25 = (uint)(byte)sVar1;
        uVar14 = (ulong)((byte)sVar1 >> 1);
        uVar15 = *(ulong *)(param_1 + 8);
        uVar26 = (byte)sVar1 & 1;
        uVar19 = uVar14;
        if (((byte)sVar1 & 1) != 0) {
          uVar19 = uVar15;
        }
        if (uVar19 == 0) break;
        psVar20 = psVar17;
        if (((byte)sVar1 & 1) != 0) {
          psVar20 = *(string **)(param_1 + 0x10);
        }
        iVar12 = isblank((uint)(byte)*psVar20);
      } while (iVar12 != 0);
    }
  }
  bVar10 = uVar26 == 0;
  uVar19 = uVar14;
  if (!bVar10) {
    uVar19 = uVar15;
  }
  if (uVar19 != 0) {
    do {
      psVar20 = *(string **)(param_1 + 0x10);
      uVar14 = (ulong)(uVar25 >> 1);
      if (bVar10) {
        psVar20 = param_1 + 1;
        uVar19 = uVar14;
      }
      else {
        uVar19 = uVar15;
      }
      iVar12 = isblank((uint)(byte)psVar20[uVar19 - 1]);
      if (iVar12 == 0) break;
      FUN_02057e90(param_1);
      sVar1 = *param_1;
      uVar25 = (uint)(byte)sVar1;
      bVar10 = ((byte)sVar1 & 1) == 0;
      uVar15 = *(ulong *)(param_1 + 8);
      uVar14 = (ulong)((byte)sVar1 >> 1);
      uVar19 = uVar14;
      if (!bVar10) {
        uVar19 = uVar15;
      }
    } while (uVar19 != 0);
    uVar26 = uVar25 & 1;
  }
  if (uVar26 != 0) {
    uVar14 = uVar15;
  }
  psVar20 = psVar17;
  if (uVar26 != 0) {
    psVar20 = *(string **)(param_1 + 0x10);
  }
  sVar21 = *(size_t *)(pbVar27 + 8);
  if ((*pbVar27 & 1) == 0) {
    pbVar24 = pbVar27 + 1;
    sVar21 = (size_t)(*pbVar27 >> 1);
  }
  else {
    pbVar24 = *(byte **)(pbVar27 + 0x10);
  }
  if (sVar21 == 0) {
    uVar15 = 0;
    goto LAB_0206f6c8;
  }
  if ((long)sVar21 <= (long)uVar14) {
    bVar2 = *pbVar24;
    psVar16 = psVar20;
    uVar15 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar15 - sVar21) ||
         (psVar16 = memchr(psVar16,(uint)bVar2,(uVar15 - sVar21) + 1), psVar16 == (string *)0x0))
      break;
      iVar12 = memcmp(psVar16,pbVar24,sVar21);
      if (iVar12 == 0) {
        if (psVar16 != psVar20 + uVar14) {
          uVar15 = (long)psVar16 - (long)psVar20;
          pbVar27 = PTR_DAT_04384408;
          goto LAB_0206f884;
        }
        break;
      }
      psVar16 = psVar16 + 1;
      uVar15 = (long)(psVar20 + uVar14) - (long)psVar16;
    } while ((long)sVar21 <= (long)uVar15);
    pbVar27 = PTR_DAT_04384408;
  }
LAB_0206f5c0:
  sVar21 = (ulong)(pbVar27[0x18] >> 1);
  pbVar24 = pbVar27 + 0x19;
  if ((pbVar27[0x18] & 1) != 0) {
    sVar21 = *(size_t *)(pbVar27 + 0x20);
    pbVar24 = *(byte **)(pbVar27 + 0x28);
  }
  if (sVar21 == 0) {
    uVar14 = 0;
    goto LAB_0206f770;
  }
  if ((long)sVar21 <= (long)uVar14) {
    bVar2 = *pbVar24;
    psVar16 = psVar20 + uVar14;
    psVar17 = psVar20;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar21) {
        return;
      }
      psVar17 = memchr(psVar17,(uint)bVar2,(uVar14 - sVar21) + 1);
      if (psVar17 == (string *)0x0) {
        return;
      }
      iVar12 = memcmp(psVar17,pbVar24,sVar21);
      if (iVar12 == 0) {
        if (psVar17 == psVar16) {
          return;
        }
        do {
          uVar14 = (long)psVar17 - (long)psVar20;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_0206f770:
          while( true ) {
            std::string::erase((ulong)param_1,uVar14);
            bVar10 = ((byte)*param_1 & 1) != 0;
            psVar20 = *(string **)(param_1 + 0x10);
            uVar14 = (ulong)((byte)*param_1 >> 1);
            if (bVar10) {
              uVar14 = *(ulong *)(param_1 + 8);
            }
            if (!bVar10) {
              psVar20 = param_1 + 1;
            }
            sVar21 = (ulong)((byte)PTR_DAT_04384408[0x18] >> 1);
            pbVar27 = PTR_DAT_04384408 + 0x19;
            if ((PTR_DAT_04384408[0x18] & 1) != 0) {
              sVar21 = *(size_t *)(PTR_DAT_04384408 + 0x20);
              pbVar27 = *(byte **)(PTR_DAT_04384408 + 0x28);
            }
            if (sVar21 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar21) {
            return;
          }
          bVar2 = *pbVar27;
          psVar16 = psVar20 + uVar14;
          psVar17 = psVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar14 - sVar21) {
              return;
            }
            psVar17 = memchr(psVar17,(uint)bVar2,(uVar14 - sVar21) + 1);
            if (psVar17 == (string *)0x0) {
              return;
            }
            iVar12 = memcmp(psVar17,pbVar27,sVar21);
            if (iVar12 == 0) break;
            psVar17 = psVar17 + 1;
            uVar14 = (long)psVar16 - (long)psVar17;
            if ((long)uVar14 < (long)sVar21) {
              return;
            }
          }
          if (psVar17 == psVar16) {
            return;
          }
        } while( true );
      }
      psVar17 = psVar17 + 1;
      uVar14 = (long)psVar16 - (long)psVar17;
    } while ((long)sVar21 <= (long)uVar14);
  }
  return;
LAB_0206f884:
  if (uVar15 != 0xffffffffffffffff) {
LAB_0206f6c8:
    std::string::erase((ulong)param_1,uVar15);
    bVar10 = ((byte)*param_1 & 1) != 0;
    psVar20 = psVar17;
    if (bVar10) {
      psVar20 = *(string **)(param_1 + 0x10);
    }
    uVar14 = (ulong)((byte)*param_1 >> 1);
    if (bVar10) {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    sVar21 = *(size_t *)(pbVar27 + 8);
    pbVar24 = *(byte **)(pbVar27 + 0x10);
    if ((*pbVar27 & 1) == 0) {
      pbVar24 = pbVar27 + 1;
      sVar21 = (ulong)(*pbVar27 >> 1);
    }
    if (sVar21 == 0) {
      uVar15 = 0;
    }
    else {
      if ((long)uVar14 < (long)sVar21) goto LAB_0206f5c0;
      bVar2 = *pbVar24;
      psVar16 = psVar20;
      uVar15 = uVar14;
      while( true ) {
        if ((0xfffffffffffffffe < uVar15 - sVar21) ||
           (psVar16 = memchr(psVar16,(uint)bVar2,(uVar15 - sVar21) + 1), psVar16 == (string *)0x0))
        goto LAB_0206f5c0;
        iVar12 = memcmp(psVar16,pbVar24,sVar21);
        if (iVar12 == 0) break;
        psVar16 = psVar16 + 1;
        uVar15 = (long)(psVar20 + uVar14) - (long)psVar16;
        if ((long)uVar15 < (long)sVar21) goto LAB_0206f5c0;
      }
      if (psVar16 == psVar20 + uVar14) goto LAB_0206f5c0;
      uVar15 = (long)psVar16 - (long)psVar20;
    }
    goto LAB_0206f884;
  }
  goto LAB_0206f5c0;
}


