/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f81170; name: FUN_00f81170
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00f81170(string *param_1)

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
  string *psVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar28 = PTR_DAT_0437d848;
  if (((*PTR_DAT_0437d840 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437d840), iVar15 != 0)) {
    *(undefined8 *)pbVar28 = 0;
    *(undefined8 *)(pbVar28 + 8) = 0;
    *pbVar28 = 0x16;
    uVar6 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar28 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar28 + 0x10) = 0;
    *(undefined8 *)(pbVar28 + 0x18) = 0;
    pbVar28[0xc] = 0;
    *(undefined8 *)(pbVar28 + 1) = uVar6;
    pbVar28[0x18] = 0x2a;
    uVar6 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar28 + 0x20) = 0;
    *(undefined8 *)(pbVar28 + 0x28) = 0;
    *(undefined8 *)(pbVar28 + 0x26) = uVar6;
    uVar6 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar28 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar28 + 0x19) = uVar6;
    pbVar28[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar28,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437d840);
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
  *(undefined8 *)(param_1 + 8) = 99;
  *(char **)(param_1 + 0x10) = pcVar16;
  pcVar16[0x5f] = 'i';
  uVar10 = s_std__string_sol__detail__ctti_ge_039324da._88_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_039324da._80_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039324da._72_8_;
  pcVar16[0x60] = 'n';
  pcVar16[0x61] = 't';
  pcVar16[0x62] = ']';
  *(undefined8 *)(pcVar16 + 0x40) = s_std__string_sol__detail__ctti_ge_039324da._64_8_;
  *(undefined8 *)(pcVar16 + 0x48) = uVar6;
  *(undefined8 *)(pcVar16 + 0x50) = uVar9;
  *(undefined8 *)(pcVar16 + 0x58) = uVar10;
  uVar10 = s_std__string_sol__detail__ctti_ge_039324da._56_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_039324da._48_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039324da._40_8_;
  *(undefined8 *)(pcVar16 + 0x20) = s_std__string_sol__detail__ctti_ge_039324da._32_8_;
  *(undefined8 *)(pcVar16 + 0x28) = uVar6;
  *(undefined8 *)(pcVar16 + 0x30) = uVar9;
  *(undefined8 *)(pcVar16 + 0x38) = uVar10;
  uVar11 = s_std__string_sol__detail__ctti_ge_039324da._24_8_;
  uVar10 = s_std__string_sol__detail__ctti_ge_039324da._16_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_039324da._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039324da._0_8_;
  pcVar16[99] = '\0';
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
    uVar25 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar25 = uVar17;
    }
    uVar17 = uVar18;
  }
  else {
    uVar25 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar25 = uVar17;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar17 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar25 < uVar17 - 1) {
    uVar25 = uVar25 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar25,uVar18 - uVar25,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    plVar12 = DAT_043f1798;
    if (((byte)*param_1 & 1) != 0) {
      lVar24 = *(long *)(param_1 + 0x10);
      if (lVar24 != 0) {
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
            FUN_02bcc824(plVar20,lVar24,0,8);
            goto LAB_00f81394;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar24,0,8);
      }
LAB_00f81394:
      *(undefined8 *)param_1 = 0;
    }
  }
  uVar18 = local_78 >> 1 & 0x7f;
  bVar13 = (local_78 & 1) != 0;
  uVar17 = uVar18;
  if (bVar13) {
    uVar17 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar26 = (uint)local_78 & 0xff;
  uVar27 = (uint)local_78 & 1;
  psVar23 = local_68;
  if (!bVar13) {
    psVar23 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar25 = uStack_70;
  if (0xd < (long)uVar17) {
    psVar21 = psVar23 + uVar17;
    lVar22 = 1;
    while (uVar17 != 0xd) {
      uVar17 = uVar17 - 1;
      if (psVar23[uVar17] == (string)0x6b) {
        lVar24 = 0;
        do {
          if (lVar24 == -0xd) {
            if ((lVar22 != -0xd) &&
               (psVar21 + (~(ulong)psVar23 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar21 + (~(ulong)psVar23 - 0xd) + -2));
              sVar4 = *param_1;
              uVar26 = (uint)(byte)sVar4;
              uVar27 = (byte)sVar4 & 1;
              uVar25 = *(ulong *)(param_1 + 8);
              uVar18 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_00f8146c;
          }
          lVar7 = lVar24 + -2;
          lVar8 = lVar24 + 0xc;
          lVar24 = lVar24 + -1;
        } while (psVar21[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar21 = psVar21 + -1;
      lVar22 = lVar22 + 1;
    }
  }
LAB_00f8146c:
  uVar17 = uVar25;
  if (uVar27 == 0) {
    uVar17 = uVar18;
  }
  if (uVar17 != 0) {
    psVar23 = param_1 + 1;
    if (uVar27 != 0) {
      psVar23 = *(string **)(param_1 + 0x10);
    }
    iVar15 = isblank((uint)(byte)*psVar23);
    if (iVar15 == 0) {
      uVar27 = uVar26 & 1;
      uVar18 = (ulong)(uVar26 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar26 = (uint)(byte)sVar4;
        uVar18 = (ulong)((byte)sVar4 >> 1);
        uVar25 = *(ulong *)(param_1 + 8);
        uVar27 = (byte)sVar4 & 1;
        uVar17 = uVar18;
        if (((byte)sVar4 & 1) != 0) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) break;
        psVar23 = param_1 + 1;
        if (((byte)sVar4 & 1) != 0) {
          psVar23 = *(string **)(param_1 + 0x10);
        }
        iVar15 = isblank((uint)(byte)*psVar23);
      } while (iVar15 != 0);
    }
  }
  psVar23 = param_1 + 1;
  bVar13 = uVar27 == 0;
  uVar17 = uVar25;
  if (uVar27 == 0) {
    uVar17 = uVar18;
  }
  while (uVar17 != 0) {
    while( true ) {
      psVar21 = *(string **)(param_1 + 0x10);
      uVar18 = (ulong)(uVar26 >> 1);
      if (bVar13) {
        psVar21 = param_1 + 1;
        uVar17 = uVar18;
      }
      else {
        uVar17 = uVar25;
      }
      iVar15 = isblank((uint)(byte)psVar21[uVar17 - 1]);
      if (iVar15 == 0) {
        uVar27 = uVar26 & 1;
        goto LAB_00f81520;
      }
      FUN_00f69b60(param_1);
      sVar4 = *param_1;
      uVar26 = (uint)(byte)sVar4;
      bVar13 = ((byte)sVar4 & 1) == 0;
      uVar25 = *(ulong *)(param_1 + 8);
      uVar18 = (ulong)((byte)sVar4 >> 1);
      uVar27 = (byte)sVar4 & 1;
      uVar17 = uVar25;
      if (((byte)sVar4 & 1) != 0) break;
      if (uVar18 == 0) goto LAB_00f81520;
    }
  }
LAB_00f81520:
  psVar21 = psVar23;
  if (uVar27 != 0) {
    uVar18 = uVar25;
    psVar21 = *(string **)(param_1 + 0x10);
  }
  sVar2 = *(size_t *)(pbVar28 + 8);
  pbVar3 = *(byte **)(pbVar28 + 0x10);
  if ((*pbVar28 & 1) == 0) {
    pbVar3 = pbVar28 + 1;
    sVar2 = (ulong)(*pbVar28 >> 1);
  }
  if (sVar2 == 0) {
    uVar17 = 0;
    goto LAB_00f816cc;
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
          uVar17 = (long)psVar19 - (long)psVar21;
          pbVar28 = PTR_DAT_0437d848;
          goto joined_r0x00f8189c;
        }
        break;
      }
      psVar19 = psVar19 + 1;
      uVar17 = (long)(psVar21 + uVar18) - (long)psVar19;
    } while ((long)sVar2 <= (long)uVar17);
    pbVar28 = PTR_DAT_0437d848;
  }
LAB_00f81588:
  sVar2 = (ulong)(pbVar28[0x18] >> 1);
  pbVar3 = pbVar28 + 0x19;
  if ((pbVar28[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar28 + 0x20);
    pbVar3 = *(byte **)(pbVar28 + 0x28);
  }
  if (sVar2 == 0) {
    uVar17 = 0;
LAB_00f81778:
    do {
      while( true ) {
        std::string::erase((ulong)param_1,uVar17);
        bVar13 = ((byte)*param_1 & 1) != 0;
        uVar17 = (ulong)((byte)*param_1 >> 1);
        if (bVar13) {
          uVar17 = *(ulong *)(param_1 + 8);
        }
        psVar21 = psVar23;
        if (bVar13) {
          psVar21 = *(string **)(param_1 + 0x10);
        }
        sVar2 = (ulong)(pbVar28[0x18] >> 1);
        pbVar3 = pbVar28 + 0x19;
        if ((pbVar28[0x18] & 1) != 0) {
          sVar2 = *(size_t *)(pbVar28 + 0x20);
          pbVar3 = *(byte **)(pbVar28 + 0x28);
        }
        if (sVar2 != 0) break;
        uVar17 = 0;
      }
      if ((long)uVar17 < (long)sVar2) {
        return;
      }
      bVar5 = *pbVar3;
      psVar1 = psVar21 + uVar17;
      psVar19 = psVar21;
      while( true ) {
        if (0xfffffffffffffffe < uVar17 - sVar2) {
          return;
        }
        psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1);
        if (psVar19 == (string *)0x0) {
          return;
        }
        iVar15 = memcmp(psVar19,pbVar3,sVar2);
        if (iVar15 == 0) break;
        psVar19 = psVar19 + 1;
        uVar17 = (long)psVar1 - (long)psVar19;
        if ((long)uVar17 < (long)sVar2) {
          return;
        }
      }
      if (psVar19 == psVar1) {
        return;
      }
      uVar17 = (long)psVar19 - (long)psVar21;
    } while (uVar17 != 0xffffffffffffffff);
    return;
  }
  if ((long)sVar2 <= (long)uVar18) {
    bVar5 = *pbVar3;
    psVar1 = psVar21 + uVar18;
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
        if (psVar19 == psVar1) {
          return;
        }
        uVar17 = (long)psVar19 - (long)psVar21;
        if (uVar17 == 0xffffffffffffffff) {
          return;
        }
        goto LAB_00f81778;
      }
      psVar19 = psVar19 + 1;
      uVar18 = (long)psVar1 - (long)psVar19;
    } while ((long)sVar2 <= (long)uVar18);
  }
  return;
joined_r0x00f8189c:
  if (uVar17 != 0xffffffffffffffff) {
LAB_00f816cc:
    std::string::erase((ulong)param_1,uVar17);
    bVar13 = ((byte)*param_1 & 1) != 0;
    uVar18 = (ulong)((byte)*param_1 >> 1);
    if (bVar13) {
      uVar18 = *(ulong *)(param_1 + 8);
    }
    psVar21 = psVar23;
    if (bVar13) {
      psVar21 = *(string **)(param_1 + 0x10);
    }
    sVar2 = *(size_t *)(pbVar28 + 8);
    pbVar3 = *(byte **)(pbVar28 + 0x10);
    if ((*pbVar28 & 1) == 0) {
      pbVar3 = pbVar28 + 1;
      sVar2 = (ulong)(*pbVar28 >> 1);
    }
    if (sVar2 == 0) {
      uVar17 = 0;
    }
    else {
      if ((long)uVar18 < (long)sVar2) goto LAB_00f81588;
      bVar5 = *pbVar3;
      psVar19 = psVar21;
      uVar17 = uVar18;
      while( true ) {
        if ((0xfffffffffffffffe < uVar17 - sVar2) ||
           (psVar19 = memchr(psVar19,(uint)bVar5,(uVar17 - sVar2) + 1), psVar19 == (string *)0x0))
        goto LAB_00f81588;
        iVar15 = memcmp(psVar19,pbVar3,sVar2);
        if (iVar15 == 0) break;
        psVar19 = psVar19 + 1;
        uVar17 = (long)(psVar21 + uVar18) - (long)psVar19;
        if ((long)uVar17 < (long)sVar2) goto LAB_00f81588;
      }
      if (psVar19 == psVar21 + uVar18) goto LAB_00f81588;
      uVar17 = (long)psVar19 - (long)psVar21;
    }
    goto joined_r0x00f8189c;
  }
  goto LAB_00f81588;
}


