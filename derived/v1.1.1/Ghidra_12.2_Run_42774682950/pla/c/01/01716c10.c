/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01716c10; name: FUN_01716c10
 */


void FUN_01716c10(string *param_1)

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
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  string *psVar28;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar27 = PTR_DAT_04380918;
  if (((*PTR_DAT_04380910 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04380910), iVar15 != 0)) {
    *(undefined8 *)pbVar27 = 0;
    *(undefined8 *)(pbVar27 + 8) = 0;
    *pbVar27 = 0x16;
    uVar6 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar27 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar27 + 0x10) = 0;
    *(undefined8 *)(pbVar27 + 0x18) = 0;
    pbVar27[0xc] = 0;
    *(undefined8 *)(pbVar27 + 1) = uVar6;
    pbVar27[0x18] = 0x2a;
    uVar6 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar27 + 0x20) = 0;
    *(undefined8 *)(pbVar27 + 0x28) = 0;
    *(undefined8 *)(pbVar27 + 0x26) = uVar6;
    uVar6 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar27 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar27 + 0x19) = uVar6;
    pbVar27[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar27,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04380910);
  }
  plVar12 = DAT_043f1798;
  lVar22 = tpidr_el0;
  plVar20 = *(long **)(lVar22 + 0x20);
  if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
    *(long **)(lVar22 + 0x20) = DAT_043f1798;
    plVar20 = plVar12;
  }
  pcVar16 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x70,8);
  *(undefined8 *)param_1 = 0x71;
  *(undefined8 *)(param_1 + 8) = 100;
  *(char **)(param_1 + 0x10) = pcVar16;
  pcVar16[0x60] = 'i';
  uVar10 = s_std__string_sol__detail__ctti_ge_038f56fd._88_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038f56fd._80_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038f56fd._72_8_;
  pcVar16[0x61] = 'n';
  pcVar16[0x62] = 't';
  pcVar16[99] = ']';
  *(undefined8 *)(pcVar16 + 0x40) = s_std__string_sol__detail__ctti_ge_038f56fd._64_8_;
  *(undefined8 *)(pcVar16 + 0x48) = uVar6;
  *(undefined8 *)(pcVar16 + 0x50) = uVar9;
  *(undefined8 *)(pcVar16 + 0x58) = uVar10;
  uVar10 = s_std__string_sol__detail__ctti_ge_038f56fd._56_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038f56fd._48_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038f56fd._40_8_;
  *(undefined8 *)(pcVar16 + 0x20) = s_std__string_sol__detail__ctti_ge_038f56fd._32_8_;
  *(undefined8 *)(pcVar16 + 0x28) = uVar6;
  *(undefined8 *)(pcVar16 + 0x30) = uVar9;
  *(undefined8 *)(pcVar16 + 0x38) = uVar10;
  uVar11 = s_std__string_sol__detail__ctti_ge_038f56fd._24_8_;
  uVar10 = s_std__string_sol__detail__ctti_ge_038f56fd._16_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038f56fd._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038f56fd._0_8_;
  pcVar16[100] = '\0';
  *(undefined8 *)pcVar16 = uVar6;
  *(undefined8 *)(pcVar16 + 8) = uVar9;
  *(undefined8 *)(pcVar16 + 0x10) = uVar10;
  *(undefined8 *)(pcVar16 + 0x18) = uVar11;
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
    uVar24 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar24 = uVar17;
    }
    uVar17 = uVar18;
  }
  else {
    uVar24 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar24 = uVar17;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar17 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar24 < uVar17 - 1) {
    uVar24 = uVar24 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar24,uVar18 - uVar24,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
    goto LAB_01716e38;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar12 = DAT_043f1798;
  if (((byte)*param_1 & 1) == 0) goto LAB_01716e38;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 != 0) {
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
        FUN_02bcc824(plVar20,lVar23,0,8);
        goto LAB_01716e34;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,0,8);
  }
LAB_01716e34:
  *(undefined8 *)param_1 = 0;
LAB_01716e38:
  uVar18 = local_78 >> 1 & 0x7f;
  bVar13 = (local_78 & 1) != 0;
  uVar17 = uVar18;
  if (bVar13) {
    uVar17 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar25 = (uint)local_78 & 0xff;
  uVar26 = (uint)local_78 & 1;
  psVar1 = local_68;
  if (!bVar13) {
    psVar1 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar24 = uStack_70;
  if (0xd < (long)uVar17) {
    psVar21 = psVar1 + uVar17;
    lVar22 = 1;
    while (uVar17 != 0xd) {
      uVar17 = uVar17 - 1;
      if (psVar1[uVar17] == (string)0x6b) {
        lVar23 = 0;
        do {
          if (lVar23 == -0xd) {
            if ((lVar22 != -0xd) &&
               (psVar21 + (~(ulong)psVar1 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar21 + (~(ulong)psVar1 - 0xd) + -2));
              sVar4 = *param_1;
              uVar25 = (uint)(byte)sVar4;
              uVar26 = (byte)sVar4 & 1;
              uVar24 = *(ulong *)(param_1 + 8);
              uVar18 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_01716f0c;
          }
          lVar7 = lVar23 + -2;
          lVar8 = lVar23 + 0xc;
          lVar23 = lVar23 + -1;
        } while (psVar21[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar21 = psVar21 + -1;
      lVar22 = lVar22 + 1;
    }
  }
LAB_01716f0c:
  psVar1 = param_1 + 1;
  uVar17 = uVar18;
  if (uVar26 != 0) {
    uVar17 = uVar24;
  }
  if (uVar17 != 0) {
    psVar21 = psVar1;
    if (uVar26 != 0) {
      psVar21 = *(string **)(param_1 + 0x10);
    }
    iVar15 = isblank((uint)(byte)*psVar21);
    if (iVar15 == 0) {
      uVar26 = uVar25 & 1;
      uVar18 = (ulong)(uVar25 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar25 = (uint)(byte)sVar4;
        uVar18 = (ulong)((byte)sVar4 >> 1);
        uVar24 = *(ulong *)(param_1 + 8);
        uVar26 = (byte)sVar4 & 1;
        uVar17 = uVar18;
        if (((byte)sVar4 & 1) != 0) {
          uVar17 = uVar24;
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
  bVar13 = uVar26 == 0;
  uVar17 = uVar18;
  if (!bVar13) {
    uVar17 = uVar24;
  }
  while (uVar17 != 0) {
    psVar21 = *(string **)(param_1 + 0x10);
    uVar18 = (ulong)(uVar25 >> 1);
    if (bVar13) {
      psVar21 = param_1 + 1;
      uVar17 = uVar18;
    }
    else {
      uVar17 = uVar24;
    }
    iVar15 = isblank((uint)(byte)psVar21[uVar17 - 1]);
    if (iVar15 == 0) {
      uVar26 = uVar25 & 1;
      break;
    }
    FUN_017142c4(param_1);
    sVar4 = *param_1;
    uVar25 = (uint)(byte)sVar4;
    bVar13 = ((byte)sVar4 & 1) == 0;
    uVar24 = *(ulong *)(param_1 + 8);
    uVar26 = (byte)sVar4 & 1;
    uVar18 = (ulong)((byte)sVar4 >> 1);
    uVar17 = uVar18;
    if (!bVar13) {
      uVar17 = uVar24;
    }
  }
  psVar21 = psVar1;
  if (uVar26 != 0) {
    uVar18 = uVar24;
    psVar21 = *(string **)(param_1 + 0x10);
  }
  sVar2 = *(size_t *)(pbVar27 + 8);
  pbVar3 = *(byte **)(pbVar27 + 0x10);
  if ((*pbVar27 & 1) == 0) {
    pbVar3 = pbVar27 + 1;
    sVar2 = (ulong)(*pbVar27 >> 1);
  }
  if (sVar2 == 0) {
    uVar17 = 0;
    goto LAB_0171714c;
  }
  if ((long)sVar2 <= (long)uVar18) {
    bVar5 = *pbVar3;
    psVar28 = psVar21 + uVar18;
    psVar19 = psVar21;
    uVar17 = uVar18;
    do {
      if ((0xfffffffffffffffe < uVar17 - sVar2) ||
         (psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1), psVar19 == (string *)0x0))
      break;
      iVar15 = memcmp(psVar19,pbVar3,sVar2);
      if (iVar15 == 0) goto LAB_017172f8;
      psVar19 = psVar19 + 1;
      uVar17 = (long)psVar28 - (long)psVar19;
    } while ((long)sVar2 <= (long)uVar17);
LAB_01717018:
    pbVar27 = PTR_DAT_04380918;
  }
LAB_01717020:
  sVar2 = (ulong)(pbVar27[0x18] >> 1);
  pbVar3 = pbVar27 + 0x19;
  if ((pbVar27[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar27 + 0x20);
    pbVar3 = *(byte **)(pbVar27 + 0x28);
  }
  if (sVar2 == 0) {
    uVar17 = 0;
    goto LAB_017171f4;
  }
  if ((long)sVar2 <= (long)uVar18) {
    bVar5 = *pbVar3;
    psVar28 = psVar21 + uVar18;
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
          if (psVar19 == psVar28) {
            return;
          }
          uVar17 = (long)psVar19 - (long)psVar21;
          if (uVar17 == 0xffffffffffffffff) {
            return;
          }
LAB_017171f4:
          while( true ) {
            std::string::erase((ulong)param_1,uVar17);
            uVar17 = (ulong)((byte)*param_1 >> 1);
            psVar21 = psVar1;
            if (((byte)*param_1 & 1) != 0) {
              uVar17 = *(ulong *)(param_1 + 8);
              psVar21 = *(string **)(param_1 + 0x10);
            }
            sVar2 = (ulong)((byte)PTR_DAT_04380918[0x18] >> 1);
            pbVar27 = PTR_DAT_04380918 + 0x19;
            if ((PTR_DAT_04380918[0x18] & 1) != 0) {
              sVar2 = *(size_t *)(PTR_DAT_04380918 + 0x20);
              pbVar27 = *(byte **)(PTR_DAT_04380918 + 0x28);
            }
            if (sVar2 != 0) break;
            uVar17 = 0;
          }
          if ((long)uVar17 < (long)sVar2) {
            return;
          }
          bVar5 = *pbVar27;
          psVar28 = psVar21 + uVar17;
          psVar19 = psVar21;
          while( true ) {
            if (0xfffffffffffffffe < uVar17 - sVar2) {
              return;
            }
            psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1);
            if (psVar19 == (string *)0x0) {
              return;
            }
            iVar15 = memcmp(psVar19,pbVar27,sVar2);
            if (iVar15 == 0) break;
            psVar19 = psVar19 + 1;
            uVar17 = (long)psVar28 - (long)psVar19;
            if ((long)uVar17 < (long)sVar2) {
              return;
            }
          }
        } while( true );
      }
      psVar19 = psVar19 + 1;
      uVar18 = (long)psVar28 - (long)psVar19;
    } while ((long)sVar2 <= (long)uVar18);
  }
  return;
LAB_017172f8:
  if (psVar19 == psVar28) goto LAB_01717018;
  uVar17 = (long)psVar19 - (long)psVar21;
  while( true ) {
    pbVar27 = PTR_DAT_04380918;
    if (uVar17 == 0xffffffffffffffff) goto LAB_01717020;
LAB_0171714c:
    std::string::erase((ulong)param_1,uVar17);
    bVar13 = ((byte)*param_1 & 1) != 0;
    uVar18 = (ulong)((byte)*param_1 >> 1);
    if (bVar13) {
      uVar18 = *(ulong *)(param_1 + 8);
    }
    psVar21 = psVar1;
    if (bVar13) {
      psVar21 = *(string **)(param_1 + 0x10);
    }
    sVar2 = *(size_t *)(pbVar27 + 8);
    pbVar3 = *(byte **)(pbVar27 + 0x10);
    if ((*pbVar27 & 1) == 0) {
      pbVar3 = pbVar27 + 1;
      sVar2 = (ulong)(*pbVar27 >> 1);
    }
    if (sVar2 != 0) break;
    uVar17 = 0;
  }
  if ((long)uVar18 < (long)sVar2) goto LAB_01717018;
  bVar5 = *pbVar3;
  psVar28 = psVar21 + uVar18;
  psVar19 = psVar21;
  uVar17 = uVar18;
  while( true ) {
    if ((0xfffffffffffffffe < uVar17 - sVar2) ||
       (psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1), psVar19 == (string *)0x0))
    goto LAB_01717018;
    iVar15 = memcmp(psVar19,pbVar3,sVar2);
    if (iVar15 == 0) break;
    psVar19 = psVar19 + 1;
    uVar17 = (long)psVar28 - (long)psVar19;
    if ((long)uVar17 < (long)sVar2) goto LAB_01717018;
  }
  goto LAB_017172f8;
}


