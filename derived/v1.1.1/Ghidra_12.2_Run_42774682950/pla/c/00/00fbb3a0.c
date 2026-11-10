/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fbb3a0; name: FUN_00fbb3a0
 */


/* WARNING: Removing unreachable block (ram,0x00fbbb64) */

void FUN_00fbb3a0(string *param_1)

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
  long *plVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  string *psVar18;
  long *plVar19;
  string *psVar20;
  long lVar21;
  byte *pbVar22;
  string *psVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar22 = PTR_DAT_0437dc90;
  if (((*PTR_DAT_0437dc88 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437dc88), iVar14 != 0)) {
    *(undefined8 *)pbVar22 = 0;
    *(undefined8 *)(pbVar22 + 8) = 0;
    *pbVar22 = 0x16;
    uVar6 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar22 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar22 + 0x10) = 0;
    *(undefined8 *)(pbVar22 + 0x18) = 0;
    pbVar22[0xc] = 0;
    *(undefined8 *)(pbVar22 + 1) = uVar6;
    pbVar22[0x18] = 0x2a;
    uVar6 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar22 + 0x20) = 0;
    *(undefined8 *)(pbVar22 + 0x28) = 0;
    *(undefined8 *)(pbVar22 + 0x26) = uVar6;
    uVar6 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar22 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar22 + 0x19) = uVar6;
    pbVar22[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar22,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437dc88);
  }
  plVar11 = DAT_043f1798;
  lVar21 = tpidr_el0;
  plVar19 = *(long **)(lVar21 + 0x20);
  if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
    *(long **)(lVar21 + 0x20) = DAT_043f1798;
    plVar19 = plVar11;
  }
  pcVar15 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x80,8);
  *(undefined8 *)param_1 = 0x81;
  uVar6 = CONCAT62(s_std__string_sol__detail__ctti_ge_039bded8._112_6_,
                   s_std__string_sol__detail__ctti_ge_039bded8._110_2_);
  *(undefined8 *)(param_1 + 8) = 0x76;
  *(char **)(param_1 + 0x10) = pcVar15;
  *(undefined8 *)(pcVar15 + 0x6e) = uVar6;
  uVar9 = s_std__string_sol__detail__ctti_ge_039bded8._96_8_;
  *(ulong *)(pcVar15 + 0x68) =
       CONCAT26(s_std__string_sol__detail__ctti_ge_039bded8._110_2_,
                s_std__string_sol__detail__ctti_ge_039bded8._104_6_);
  uVar6 = s_std__string_sol__detail__ctti_ge_039bded8._80_8_;
  *(undefined8 *)(pcVar15 + 0x58) = s_std__string_sol__detail__ctti_ge_039bded8._88_8_;
  *(undefined8 *)(pcVar15 + 0x60) = uVar9;
  *(undefined8 *)(pcVar15 + 0x50) = uVar6;
  uVar10 = s_std__string_sol__detail__ctti_ge_039bded8._72_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_039bded8._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039bded8._48_8_;
  *(undefined8 *)(pcVar15 + 0x40) = s_std__string_sol__detail__ctti_ge_039bded8._64_8_;
  *(undefined8 *)(pcVar15 + 0x48) = uVar10;
  *(undefined8 *)(pcVar15 + 0x30) = uVar6;
  *(undefined8 *)(pcVar15 + 0x38) = uVar9;
  uVar10 = s_std__string_sol__detail__ctti_ge_039bded8._40_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_039bded8._24_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039bded8._16_8_;
  *(undefined8 *)(pcVar15 + 0x20) = s_std__string_sol__detail__ctti_ge_039bded8._32_8_;
  *(undefined8 *)(pcVar15 + 0x28) = uVar10;
  *(undefined8 *)(pcVar15 + 0x10) = uVar6;
  *(undefined8 *)(pcVar15 + 0x18) = uVar9;
  uVar9 = s_std__string_sol__detail__ctti_ge_039bded8._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039bded8._0_8_;
  pcVar15[0x76] = '\0';
  *(undefined8 *)pcVar15 = uVar6;
  *(undefined8 *)(pcVar15 + 8) = uVar9;
  cVar13 = (char)param_1;
  std::string::find(cVar13,0x5b);
  uVar16 = std::string::find(cVar13,0x3d);
  uVar17 = std::string::rfind(cVar13,0x5d);
  sVar4 = *param_1;
  if (uVar17 == 0xffffffffffffffff) {
    if (((byte)sVar4 & 1) == 0) {
      uVar17 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 8);
    }
    uVar25 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar25 = uVar16;
    }
    uVar16 = uVar17;
  }
  else {
    uVar25 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar25 = uVar16;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar16 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar25 < uVar16 - 1) {
    uVar25 = uVar25 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar25,uVar17 - uVar25,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
    goto LAB_00fbb5e0;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar11 = DAT_043f1798;
  if (((byte)*param_1 & 1) == 0) goto LAB_00fbb5e0;
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 != 0) {
    plVar19 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar19 = plVar11;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar24,0,8);
        goto LAB_00fbb5dc;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar24,0,8);
  }
LAB_00fbb5dc:
  *(undefined8 *)param_1 = 0;
LAB_00fbb5e0:
  uVar17 = local_78 >> 1 & 0x7f;
  bVar12 = (local_78 & 1) != 0;
  uVar16 = uVar17;
  if (bVar12) {
    uVar16 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar26 = (uint)local_78 & 0xff;
  uVar27 = (uint)local_78 & 1;
  psVar1 = local_68;
  if (!bVar12) {
    psVar1 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar25 = uStack_70;
  if (0xd < (long)uVar16) {
    psVar20 = psVar1 + uVar16;
    lVar21 = 1;
    while (uVar16 != 0xd) {
      uVar16 = uVar16 - 1;
      if (psVar1[uVar16] == (string)0x6b) {
        lVar24 = 0;
        do {
          if (lVar24 == -0xd) {
            if ((lVar21 != -0xd) &&
               (psVar20 + (~(ulong)psVar1 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar20 + (~(ulong)psVar1 - 0xd) + -2));
              sVar4 = *param_1;
              uVar26 = (uint)(byte)sVar4;
              uVar27 = (byte)sVar4 & 1;
              uVar25 = *(ulong *)(param_1 + 8);
              uVar17 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_00fbb6b4;
          }
          lVar7 = lVar24 + -2;
          lVar8 = lVar24 + 0xc;
          lVar24 = lVar24 + -1;
        } while (psVar20[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar20 = psVar20 + -1;
      lVar21 = lVar21 + 1;
    }
  }
LAB_00fbb6b4:
  psVar1 = param_1 + 1;
  uVar16 = uVar17;
  if (uVar27 != 0) {
    uVar16 = uVar25;
  }
  if (uVar16 != 0) {
    psVar20 = psVar1;
    if (uVar27 != 0) {
      psVar20 = *(string **)(param_1 + 0x10);
    }
    iVar14 = isblank((uint)(byte)*psVar20);
    if (iVar14 == 0) {
      uVar27 = uVar26 & 1;
      uVar17 = (ulong)(uVar26 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar26 = (uint)(byte)sVar4;
        uVar17 = (ulong)((byte)sVar4 >> 1);
        uVar25 = *(ulong *)(param_1 + 8);
        uVar27 = (byte)sVar4 & 1;
        uVar16 = uVar17;
        if (((byte)sVar4 & 1) != 0) {
          uVar16 = uVar25;
        }
        if (uVar16 == 0) break;
        psVar20 = psVar1;
        if (((byte)sVar4 & 1) != 0) {
          psVar20 = *(string **)(param_1 + 0x10);
        }
        iVar14 = isblank((uint)(byte)*psVar20);
      } while (iVar14 != 0);
    }
  }
  bVar12 = uVar27 == 0;
  uVar16 = uVar17;
  if (!bVar12) {
    uVar16 = uVar25;
  }
  if (uVar16 != 0) {
    do {
      psVar20 = *(string **)(param_1 + 0x10);
      uVar17 = (ulong)(uVar26 >> 1);
      if (bVar12) {
        psVar20 = param_1 + 1;
        uVar16 = uVar17;
      }
      else {
        uVar16 = uVar25;
      }
      iVar14 = isblank((uint)(byte)psVar20[uVar16 - 1]);
      if (iVar14 == 0) break;
      FUN_00fa5904(param_1);
      sVar4 = *param_1;
      uVar26 = (uint)(byte)sVar4;
      bVar12 = ((byte)sVar4 & 1) == 0;
      uVar25 = *(ulong *)(param_1 + 8);
      uVar17 = (ulong)((byte)sVar4 >> 1);
      uVar16 = uVar17;
      if (!bVar12) {
        uVar16 = uVar25;
      }
    } while (uVar16 != 0);
    uVar27 = uVar26 & 1;
  }
  if (uVar27 != 0) {
    uVar17 = uVar25;
  }
  psVar20 = psVar1;
  if (uVar27 != 0) {
    psVar20 = *(string **)(param_1 + 0x10);
  }
  sVar2 = *(size_t *)(pbVar22 + 8);
  pbVar3 = *(byte **)(pbVar22 + 0x10);
  if ((*pbVar22 & 1) == 0) {
    pbVar3 = pbVar22 + 1;
    sVar2 = (ulong)(*pbVar22 >> 1);
  }
  if (sVar2 == 0) {
    uVar16 = 0;
    goto LAB_00fbb8e0;
  }
  if ((long)sVar2 <= (long)uVar17) {
    bVar5 = *pbVar3;
    psVar18 = psVar20;
    uVar16 = uVar17;
    do {
      if ((0xfffffffffffffffe < uVar16 - sVar2) ||
         (psVar18 = memchr(psVar18,(uint)bVar5,(uVar16 - sVar2) + 1), psVar18 == (string *)0x0))
      break;
      iVar14 = memcmp(psVar18,pbVar3,sVar2);
      if (iVar14 == 0) {
        if (psVar18 != psVar20 + uVar17) {
          pbVar22 = PTR_DAT_0437dc90;
          goto LAB_00fbbaa8;
        }
        break;
      }
      psVar18 = psVar18 + 1;
      uVar16 = (long)(psVar20 + uVar17) - (long)psVar18;
    } while ((long)sVar2 <= (long)uVar16);
    pbVar22 = PTR_DAT_0437dc90;
  }
LAB_00fbb7f4:
  sVar2 = (ulong)(pbVar22[0x18] >> 1);
  pbVar3 = pbVar22 + 0x19;
  if ((pbVar22[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar22 + 0x20);
    pbVar3 = *(byte **)(pbVar22 + 0x28);
  }
  if (sVar2 == 0) {
    uVar16 = 0;
    goto LAB_00fbb990;
  }
  if ((long)sVar2 <= (long)uVar17) {
    bVar5 = *pbVar3;
    psVar23 = psVar20 + uVar17;
    psVar18 = psVar20;
    do {
      if (0xfffffffffffffffe < uVar17 - sVar2) {
        return;
      }
      psVar18 = memchr(psVar18,(uint)bVar5,(uVar17 - sVar2) + 1);
      if (psVar18 == (string *)0x0) {
        return;
      }
      iVar14 = memcmp(psVar18,pbVar3,sVar2);
      if (iVar14 == 0) {
        do {
          if (psVar18 == psVar23) {
            return;
          }
          uVar16 = (long)psVar18 - (long)psVar20;
          if (uVar16 == 0xffffffffffffffff) {
            return;
          }
LAB_00fbb990:
          while( true ) {
            std::string::erase((ulong)param_1,uVar16);
            bVar12 = ((byte)*param_1 & 1) != 0;
            uVar16 = (ulong)((byte)*param_1 >> 1);
            if (bVar12) {
              uVar16 = *(ulong *)(param_1 + 8);
            }
            psVar20 = psVar1;
            if (bVar12) {
              psVar20 = *(string **)(param_1 + 0x10);
            }
            sVar2 = (ulong)((byte)PTR_DAT_0437dc90[0x18] >> 1);
            pbVar22 = PTR_DAT_0437dc90 + 0x19;
            if ((PTR_DAT_0437dc90[0x18] & 1) != 0) {
              sVar2 = *(size_t *)(PTR_DAT_0437dc90 + 0x20);
              pbVar22 = *(byte **)(PTR_DAT_0437dc90 + 0x28);
            }
            if (sVar2 != 0) break;
            uVar16 = 0;
          }
          if ((long)uVar16 < (long)sVar2) {
            return;
          }
          bVar5 = *pbVar22;
          psVar23 = psVar20 + uVar16;
          psVar18 = psVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar16 - sVar2) {
              return;
            }
            psVar18 = memchr(psVar18,(uint)bVar5,(uVar16 - sVar2) + 1);
            if (psVar18 == (string *)0x0) {
              return;
            }
            iVar14 = memcmp(psVar18,pbVar22,sVar2);
            if (iVar14 == 0) break;
            psVar18 = psVar18 + 1;
            uVar16 = (long)psVar23 - (long)psVar18;
            if ((long)uVar16 < (long)sVar2) {
              return;
            }
          }
        } while( true );
      }
      psVar18 = psVar18 + 1;
      uVar17 = (long)psVar23 - (long)psVar18;
    } while ((long)sVar2 <= (long)uVar17);
  }
  return;
LAB_00fbbaa8:
  uVar16 = (long)psVar18 - (long)psVar20;
  while( true ) {
    if (uVar16 == 0xffffffffffffffff) goto LAB_00fbb7f4;
LAB_00fbb8e0:
    std::string::erase((ulong)param_1,uVar16);
    bVar12 = ((byte)*param_1 & 1) != 0;
    psVar20 = psVar1;
    if (bVar12) {
      psVar20 = *(string **)(param_1 + 0x10);
    }
    sVar2 = *(size_t *)(pbVar22 + 8);
    pbVar3 = *(byte **)(pbVar22 + 0x10);
    uVar17 = (ulong)((byte)*param_1 >> 1);
    if (bVar12) {
      uVar17 = *(ulong *)(param_1 + 8);
    }
    if ((*pbVar22 & 1) == 0) {
      pbVar3 = pbVar22 + 1;
      sVar2 = (ulong)(*pbVar22 >> 1);
    }
    if (sVar2 != 0) break;
    uVar16 = 0;
  }
  if ((long)uVar17 < (long)sVar2) goto LAB_00fbb7f4;
  bVar5 = *pbVar3;
  psVar18 = psVar20;
  uVar16 = uVar17;
  while( true ) {
    if ((0xfffffffffffffffe < uVar16 - sVar2) ||
       (psVar18 = memchr(psVar18,(uint)bVar5,(uVar16 - sVar2) + 1), psVar18 == (string *)0x0))
    goto LAB_00fbb7f4;
    iVar14 = memcmp(psVar18,pbVar3,sVar2);
    if (iVar14 == 0) break;
    psVar18 = psVar18 + 1;
    uVar16 = (long)(psVar20 + uVar17) - (long)psVar18;
    if ((long)uVar16 < (long)sVar2) goto LAB_00fbb7f4;
  }
  if (psVar18 == psVar20 + uVar17) goto LAB_00fbb7f4;
  goto LAB_00fbbaa8;
}


