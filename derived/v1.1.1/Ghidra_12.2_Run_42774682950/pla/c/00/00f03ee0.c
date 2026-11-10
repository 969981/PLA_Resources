/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f03ee0; name: FUN_00f03ee0
 */


/* WARNING: Removing unreachable block (ram,0x00f046b8) */

void FUN_00f03ee0(string *param_1)

{
  string sVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  string *psVar18;
  string *psVar19;
  long *plVar20;
  ulong uVar21;
  string *psVar22;
  size_t sVar23;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar29 = PTR_DAT_0437d380;
  if (((*PTR_DAT_0437d378 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437d378), iVar14 != 0)) {
    *(undefined8 *)pbVar29 = 0;
    *(undefined8 *)(pbVar29 + 8) = 0;
    *pbVar29 = 0x16;
    uVar3 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar29 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar29 + 0x10) = 0;
    *(undefined8 *)(pbVar29 + 0x18) = 0;
    pbVar29[0xc] = 0;
    *(undefined8 *)(pbVar29 + 1) = uVar3;
    pbVar29[0x18] = 0x2a;
    uVar3 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar29 + 0x20) = 0;
    *(undefined8 *)(pbVar29 + 0x28) = 0;
    *(undefined8 *)(pbVar29 + 0x26) = uVar3;
    uVar3 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar29 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar29 + 0x19) = uVar3;
    pbVar29[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar29,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437d378);
  }
  plVar11 = DAT_043f1798;
  lVar24 = tpidr_el0;
  plVar20 = *(long **)(lVar24 + 0x20);
  if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
    *(long **)(lVar24 + 0x20) = DAT_043f1798;
    plVar20 = plVar11;
  }
  pcVar15 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x80,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_0388e9d0._88_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0388e9d0._80_8_;
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x70;
  *(char **)(param_1 + 0x10) = pcVar15;
  uVar10 = s_std__string_sol__detail__ctti_ge_0388e9d0._104_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_0388e9d0._96_8_;
  *(undefined8 *)(pcVar15 + 0x50) = uVar3;
  *(undefined8 *)(pcVar15 + 0x58) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_0388e9d0._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0388e9d0._64_8_;
  *(undefined8 *)(pcVar15 + 0x60) = uVar9;
  *(undefined8 *)(pcVar15 + 0x68) = uVar10;
  uVar6 = s_std__string_sol__detail__ctti_ge_0388e9d0._56_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0388e9d0._48_8_;
  *(undefined8 *)(pcVar15 + 0x40) = uVar7;
  *(undefined8 *)(pcVar15 + 0x48) = uVar8;
  *(undefined8 *)(pcVar15 + 0x30) = uVar3;
  *(undefined8 *)(pcVar15 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0388e9d0._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0388e9d0._32_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0388e9d0._24_8_;
  *(undefined8 *)(pcVar15 + 0x10) = s_std__string_sol__detail__ctti_ge_0388e9d0._16_8_;
  *(undefined8 *)(pcVar15 + 0x18) = uVar3;
  *(undefined8 *)(pcVar15 + 0x20) = uVar6;
  *(undefined8 *)(pcVar15 + 0x28) = uVar7;
  uVar6 = s_std__string_sol__detail__ctti_ge_0388e9d0._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0388e9d0._0_8_;
  pcVar15[0x70] = '\0';
  *(undefined8 *)pcVar15 = uVar3;
  *(undefined8 *)(pcVar15 + 8) = uVar6;
  cVar13 = (char)param_1;
  std::string::find(cVar13,0x5b);
  uVar16 = std::string::find(cVar13,0x3d);
  uVar17 = std::string::rfind(cVar13,0x5d);
  sVar1 = *param_1;
  if (uVar17 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar17 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 8);
    }
    uVar21 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar21 = uVar16;
    }
    uVar16 = uVar17;
  }
  else {
    uVar21 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar21 = uVar16;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar16 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar21 < uVar16 - 1) {
    uVar21 = uVar21 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar21,uVar17 - uVar21,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    plVar11 = DAT_043f1798;
    if (((byte)*param_1 & 1) != 0) {
      lVar25 = *(long *)(param_1 + 0x10);
      if (lVar25 != 0) {
        plVar20 = *(long **)(lVar24 + 0x20);
        if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
          *(long **)(lVar24 + 0x20) = DAT_043f1798;
          plVar20 = plVar11;
        }
        uVar16 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(lVar24 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar24 + 0x38d488) = 1;
            *(undefined8 *)(lVar24 + 0x38d478) = 0;
            *(undefined8 *)(lVar24 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar24 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar25,0,8);
            goto LAB_00f04110;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar25,0,8);
      }
LAB_00f04110:
      *(undefined8 *)param_1 = 0;
    }
  }
  uVar27 = (uint)local_78 & 0xff;
  uVar28 = (uint)local_78 & 1;
  psVar19 = param_1 + 1;
  uVar16 = local_78 >> 1 & 0x7f;
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  *(ulong *)param_1 = local_78;
  uVar17 = uStack_70;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar16;
    local_68 = psVar19;
    if (0xd < uVar16) goto LAB_00f04144;
  }
  else if (0xd < (long)uStack_70) {
LAB_00f04144:
    psVar22 = local_68 + uStack_70;
    lVar24 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (local_68[uStack_70] == (string)0x6b) {
        lVar25 = 0;
        do {
          if (lVar25 == -0xd) {
            if ((lVar24 != -0xd) &&
               (psVar22 + (~(ulong)local_68 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar22 + (~(ulong)local_68 - 0xd) + -2));
              sVar1 = *param_1;
              uVar27 = (uint)(byte)sVar1;
              uVar28 = (byte)sVar1 & 1;
              uVar16 = (ulong)((byte)sVar1 >> 1);
              uVar17 = *(ulong *)(param_1 + 8);
            }
            goto LAB_00f041e8;
          }
          lVar4 = lVar25 + -2;
          lVar5 = lVar25 + 0xc;
          lVar25 = lVar25 + -1;
        } while (psVar22[lVar4] == *(string *)("seperator_mark" + lVar5));
      }
      psVar22 = psVar22 + -1;
      lVar24 = lVar24 + 1;
    }
  }
LAB_00f041e8:
  uVar21 = uVar16;
  if (uVar28 != 0) {
    uVar21 = uVar17;
  }
  if (uVar21 != 0) {
    psVar22 = psVar19;
    if (uVar28 != 0) {
      psVar22 = *(string **)(param_1 + 0x10);
    }
    iVar14 = isblank((uint)(byte)*psVar22);
    if (iVar14 == 0) {
      uVar28 = uVar27 & 1;
      uVar16 = (ulong)(uVar27 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar27 = (uint)(byte)sVar1;
        uVar16 = (ulong)((byte)sVar1 >> 1);
        uVar17 = *(ulong *)(param_1 + 8);
        uVar28 = (byte)sVar1 & 1;
        uVar21 = uVar16;
        if (((byte)sVar1 & 1) != 0) {
          uVar21 = uVar17;
        }
        if (uVar21 == 0) break;
        psVar22 = psVar19;
        if (((byte)sVar1 & 1) != 0) {
          psVar22 = *(string **)(param_1 + 0x10);
        }
        iVar14 = isblank((uint)(byte)*psVar22);
      } while (iVar14 != 0);
    }
  }
  bVar12 = uVar28 == 0;
  uVar21 = uVar16;
  if (!bVar12) {
    uVar21 = uVar17;
  }
  if (uVar21 != 0) {
    do {
      psVar22 = *(string **)(param_1 + 0x10);
      uVar16 = (ulong)(uVar27 >> 1);
      if (bVar12) {
        psVar22 = param_1 + 1;
        uVar21 = uVar16;
      }
      else {
        uVar21 = uVar17;
      }
      iVar14 = isblank((uint)(byte)psVar22[uVar21 - 1]);
      if (iVar14 == 0) break;
      FUN_00ee01e0(param_1);
      sVar1 = *param_1;
      uVar27 = (uint)(byte)sVar1;
      bVar12 = ((byte)sVar1 & 1) == 0;
      uVar17 = *(ulong *)(param_1 + 8);
      uVar16 = (ulong)((byte)sVar1 >> 1);
      uVar21 = uVar16;
      if (!bVar12) {
        uVar21 = uVar17;
      }
    } while (uVar21 != 0);
    uVar28 = uVar27 & 1;
  }
  if (uVar28 != 0) {
    uVar16 = uVar17;
  }
  psVar22 = psVar19;
  if (uVar28 != 0) {
    psVar22 = *(string **)(param_1 + 0x10);
  }
  sVar23 = *(size_t *)(pbVar29 + 8);
  if ((*pbVar29 & 1) == 0) {
    pbVar26 = pbVar29 + 1;
    sVar23 = (size_t)(*pbVar29 >> 1);
  }
  else {
    pbVar26 = *(byte **)(pbVar29 + 0x10);
  }
  if (sVar23 == 0) {
    uVar17 = 0;
    goto LAB_00f04420;
  }
  if ((long)sVar23 <= (long)uVar16) {
    bVar2 = *pbVar26;
    psVar18 = psVar22;
    uVar17 = uVar16;
    do {
      if ((0xfffffffffffffffe < uVar17 - sVar23) ||
         (psVar18 = memchr(psVar18,(uint)bVar2,(uVar17 - sVar23) + 1), psVar18 == (string *)0x0))
      break;
      iVar14 = memcmp(psVar18,pbVar26,sVar23);
      if (iVar14 == 0) {
        if (psVar18 != psVar22 + uVar16) {
          uVar17 = (long)psVar18 - (long)psVar22;
          pbVar29 = PTR_DAT_0437d380;
          goto LAB_00f045e4;
        }
        break;
      }
      psVar18 = psVar18 + 1;
      uVar17 = (long)(psVar22 + uVar16) - (long)psVar18;
    } while ((long)sVar23 <= (long)uVar17);
    pbVar29 = PTR_DAT_0437d380;
  }
LAB_00f04320:
  sVar23 = (ulong)(pbVar29[0x18] >> 1);
  pbVar26 = pbVar29 + 0x19;
  if ((pbVar29[0x18] & 1) != 0) {
    sVar23 = *(size_t *)(pbVar29 + 0x20);
    pbVar26 = *(byte **)(pbVar29 + 0x28);
  }
  if (sVar23 == 0) {
    uVar16 = 0;
    goto LAB_00f04524;
  }
  if ((long)sVar23 <= (long)uVar16) {
    bVar2 = *pbVar26;
    psVar18 = psVar22 + uVar16;
    psVar19 = psVar22;
    do {
      if (0xfffffffffffffffe < uVar16 - sVar23) {
        return;
      }
      psVar19 = memchr(psVar19,(uint)bVar2,(uVar16 - sVar23) + 1);
      if (psVar19 == (string *)0x0) {
        return;
      }
      iVar14 = memcmp(psVar19,pbVar26,sVar23);
      if (iVar14 == 0) {
        if (psVar19 == psVar18) {
          return;
        }
        do {
          uVar16 = (long)psVar19 - (long)psVar22;
          if (uVar16 == 0xffffffffffffffff) {
            return;
          }
LAB_00f04524:
          while( true ) {
            std::string::erase((ulong)param_1,uVar16);
            bVar12 = ((byte)*param_1 & 1) != 0;
            psVar22 = *(string **)(param_1 + 0x10);
            uVar16 = (ulong)((byte)*param_1 >> 1);
            if (bVar12) {
              uVar16 = *(ulong *)(param_1 + 8);
            }
            if (!bVar12) {
              psVar22 = param_1 + 1;
            }
            sVar23 = (ulong)((byte)PTR_DAT_0437d380[0x18] >> 1);
            pbVar29 = PTR_DAT_0437d380 + 0x19;
            if ((PTR_DAT_0437d380[0x18] & 1) != 0) {
              sVar23 = *(size_t *)(PTR_DAT_0437d380 + 0x20);
              pbVar29 = *(byte **)(PTR_DAT_0437d380 + 0x28);
            }
            if (sVar23 != 0) break;
            uVar16 = 0;
          }
          if ((long)uVar16 < (long)sVar23) {
            return;
          }
          bVar2 = *pbVar29;
          psVar18 = psVar22 + uVar16;
          psVar19 = psVar22;
          while( true ) {
            if (0xfffffffffffffffe < uVar16 - sVar23) {
              return;
            }
            psVar19 = memchr(psVar19,(uint)bVar2,(uVar16 - sVar23) + 1);
            if (psVar19 == (string *)0x0) {
              return;
            }
            iVar14 = memcmp(psVar19,pbVar29,sVar23);
            if (iVar14 == 0) break;
            psVar19 = psVar19 + 1;
            uVar16 = (long)psVar18 - (long)psVar19;
            if ((long)uVar16 < (long)sVar23) {
              return;
            }
          }
          if (psVar19 == psVar18) {
            return;
          }
        } while( true );
      }
      psVar19 = psVar19 + 1;
      uVar16 = (long)psVar18 - (long)psVar19;
    } while ((long)sVar23 <= (long)uVar16);
  }
  return;
LAB_00f045e4:
  if (uVar17 != 0xffffffffffffffff) {
LAB_00f04420:
    std::string::erase((ulong)param_1,uVar17);
    bVar12 = ((byte)*param_1 & 1) != 0;
    psVar22 = psVar19;
    if (bVar12) {
      psVar22 = *(string **)(param_1 + 0x10);
    }
    uVar16 = (ulong)((byte)*param_1 >> 1);
    if (bVar12) {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    sVar23 = *(size_t *)(pbVar29 + 8);
    pbVar26 = *(byte **)(pbVar29 + 0x10);
    if ((*pbVar29 & 1) == 0) {
      pbVar26 = pbVar29 + 1;
      sVar23 = (ulong)(*pbVar29 >> 1);
    }
    if (sVar23 == 0) {
      uVar17 = 0;
    }
    else {
      if ((long)uVar16 < (long)sVar23) goto LAB_00f04320;
      bVar2 = *pbVar26;
      psVar18 = psVar22;
      uVar17 = uVar16;
      while( true ) {
        if ((0xfffffffffffffffe < uVar17 - sVar23) ||
           (psVar18 = memchr(psVar18,(uint)bVar2,(uVar17 - sVar23) + 1), psVar18 == (string *)0x0))
        goto LAB_00f04320;
        iVar14 = memcmp(psVar18,pbVar26,sVar23);
        if (iVar14 == 0) break;
        psVar18 = psVar18 + 1;
        uVar17 = (long)(psVar22 + uVar16) - (long)psVar18;
        if ((long)uVar17 < (long)sVar23) goto LAB_00f04320;
      }
      if (psVar18 == psVar22 + uVar16) goto LAB_00f04320;
      uVar17 = (long)psVar18 - (long)psVar22;
    }
    goto LAB_00f045e4;
  }
  goto LAB_00f04320;
}


