/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fc0b80; name: FUN_00fc0b80
 */


void FUN_00fc0b80(string *param_1)

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
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  string *psVar21;
  long *plVar22;
  string *psVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  string *psVar30;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar29 = PTR_DAT_0437dcc0;
  if (((*PTR_DAT_0437dcb8 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_0437dcb8), iVar17 != 0)) {
    *(undefined8 *)pbVar29 = 0;
    *(undefined8 *)(pbVar29 + 8) = 0;
    *pbVar29 = 0x16;
    uVar6 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar29 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar29 + 0x10) = 0;
    *(undefined8 *)(pbVar29 + 0x18) = 0;
    pbVar29[0xc] = 0;
    *(undefined8 *)(pbVar29 + 1) = uVar6;
    pbVar29[0x18] = 0x2a;
    uVar6 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar29 + 0x20) = 0;
    *(undefined8 *)(pbVar29 + 0x28) = 0;
    *(undefined8 *)(pbVar29 + 0x26) = uVar6;
    uVar6 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar29 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar29 + 0x19) = uVar6;
    pbVar29[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar29,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437dcb8);
  }
  plVar14 = DAT_043f1798;
  lVar24 = tpidr_el0;
  plVar22 = *(long **)(lVar24 + 0x20);
  if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
    *(long **)(lVar24 + 0x20) = DAT_043f1798;
    plVar22 = plVar14;
  }
  pcVar18 = (char *)(**(code **)(*plVar22 + 0x10))(plVar22,0x70,8);
  uVar9 = s_std__string_sol__detail__ctti_ge_0397dc99._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0397dc99._64_8_;
  *(undefined8 *)param_1 = 0x71;
  *(undefined8 *)(param_1 + 8) = 0x60;
  *(char **)(param_1 + 0x10) = pcVar18;
  uVar13 = s_std__string_sol__detail__ctti_ge_0397dc99._88_8_;
  uVar12 = s_std__string_sol__detail__ctti_ge_0397dc99._80_8_;
  *(undefined8 *)(pcVar18 + 0x40) = uVar6;
  *(undefined8 *)(pcVar18 + 0x48) = uVar9;
  uVar11 = s_std__string_sol__detail__ctti_ge_0397dc99._56_8_;
  uVar10 = s_std__string_sol__detail__ctti_ge_0397dc99._48_8_;
  *(undefined8 *)(pcVar18 + 0x50) = uVar12;
  *(undefined8 *)(pcVar18 + 0x58) = uVar13;
  uVar9 = s_std__string_sol__detail__ctti_ge_0397dc99._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0397dc99._32_8_;
  *(undefined8 *)(pcVar18 + 0x30) = uVar10;
  *(undefined8 *)(pcVar18 + 0x38) = uVar11;
  *(undefined8 *)(pcVar18 + 0x20) = uVar6;
  *(undefined8 *)(pcVar18 + 0x28) = uVar9;
  uVar11 = s_std__string_sol__detail__ctti_ge_0397dc99._24_8_;
  uVar10 = s_std__string_sol__detail__ctti_ge_0397dc99._16_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_0397dc99._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0397dc99._0_8_;
  pcVar18[0x60] = '\0';
  *(undefined8 *)pcVar18 = uVar6;
  *(undefined8 *)(pcVar18 + 8) = uVar9;
  *(undefined8 *)(pcVar18 + 0x10) = uVar10;
  *(undefined8 *)(pcVar18 + 0x18) = uVar11;
  cVar16 = (char)param_1;
  std::string::find(cVar16,0x5b);
  uVar19 = std::string::find(cVar16,0x3d);
  uVar20 = std::string::rfind(cVar16,0x5d);
  sVar4 = *param_1;
  if (uVar20 == 0xffffffffffffffff) {
    if (((byte)sVar4 & 1) == 0) {
      uVar20 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar20 = *(ulong *)(param_1 + 8);
    }
    uVar26 = 0;
    if (uVar19 != 0xffffffffffffffff) {
      uVar26 = uVar19;
    }
    uVar19 = uVar20;
  }
  else {
    uVar26 = 0;
    if (uVar19 != 0xffffffffffffffff) {
      uVar26 = uVar19;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar19 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar19 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar26 < uVar19 - 1) {
    uVar26 = uVar26 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar26,uVar20 - uVar26,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
    goto LAB_00fc0d9c;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar14 = DAT_043f1798;
  if (((byte)*param_1 & 1) == 0) goto LAB_00fc0d9c;
  lVar25 = *(long *)(param_1 + 0x10);
  if (lVar25 != 0) {
    plVar22 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar22 = plVar14;
    }
    uVar19 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar25,0,8);
        goto LAB_00fc0d98;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar25,0,8);
  }
LAB_00fc0d98:
  *(undefined8 *)param_1 = 0;
LAB_00fc0d9c:
  uVar20 = local_78 >> 1 & 0x7f;
  bVar15 = (local_78 & 1) != 0;
  uVar19 = uVar20;
  if (bVar15) {
    uVar19 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar27 = (uint)local_78 & 0xff;
  uVar28 = (uint)local_78 & 1;
  psVar1 = local_68;
  if (!bVar15) {
    psVar1 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar26 = uStack_70;
  if (0xd < (long)uVar19) {
    psVar23 = psVar1 + uVar19;
    lVar24 = 1;
    while (uVar19 != 0xd) {
      uVar19 = uVar19 - 1;
      if (psVar1[uVar19] == (string)0x6b) {
        lVar25 = 0;
        do {
          if (lVar25 == -0xd) {
            if ((lVar24 != -0xd) &&
               (psVar23 + (~(ulong)psVar1 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar23 + (~(ulong)psVar1 - 0xd) + -2));
              sVar4 = *param_1;
              uVar27 = (uint)(byte)sVar4;
              uVar28 = (byte)sVar4 & 1;
              uVar26 = *(ulong *)(param_1 + 8);
              uVar20 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_00fc0e70;
          }
          lVar7 = lVar25 + -2;
          lVar8 = lVar25 + 0xc;
          lVar25 = lVar25 + -1;
        } while (psVar23[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar23 = psVar23 + -1;
      lVar24 = lVar24 + 1;
    }
  }
LAB_00fc0e70:
  psVar1 = param_1 + 1;
  uVar19 = uVar20;
  if (uVar28 != 0) {
    uVar19 = uVar26;
  }
  if (uVar19 != 0) {
    psVar23 = psVar1;
    if (uVar28 != 0) {
      psVar23 = *(string **)(param_1 + 0x10);
    }
    iVar17 = isblank((uint)(byte)*psVar23);
    if (iVar17 == 0) {
      uVar28 = uVar27 & 1;
      uVar20 = (ulong)(uVar27 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar27 = (uint)(byte)sVar4;
        uVar20 = (ulong)((byte)sVar4 >> 1);
        uVar26 = *(ulong *)(param_1 + 8);
        uVar28 = (byte)sVar4 & 1;
        uVar19 = uVar20;
        if (((byte)sVar4 & 1) != 0) {
          uVar19 = uVar26;
        }
        if (uVar19 == 0) break;
        psVar23 = psVar1;
        if (((byte)sVar4 & 1) != 0) {
          psVar23 = *(string **)(param_1 + 0x10);
        }
        iVar17 = isblank((uint)(byte)*psVar23);
      } while (iVar17 != 0);
    }
  }
  bVar15 = uVar28 == 0;
  uVar19 = uVar20;
  if (!bVar15) {
    uVar19 = uVar26;
  }
  while (uVar19 != 0) {
    psVar23 = *(string **)(param_1 + 0x10);
    uVar20 = (ulong)(uVar27 >> 1);
    if (bVar15) {
      psVar23 = param_1 + 1;
      uVar19 = uVar20;
    }
    else {
      uVar19 = uVar26;
    }
    iVar17 = isblank((uint)(byte)psVar23[uVar19 - 1]);
    if (iVar17 == 0) {
      uVar28 = uVar27 & 1;
      break;
    }
    FUN_00fa5904(param_1);
    sVar4 = *param_1;
    uVar27 = (uint)(byte)sVar4;
    bVar15 = ((byte)sVar4 & 1) == 0;
    uVar26 = *(ulong *)(param_1 + 8);
    uVar28 = (byte)sVar4 & 1;
    uVar20 = (ulong)((byte)sVar4 >> 1);
    uVar19 = uVar20;
    if (!bVar15) {
      uVar19 = uVar26;
    }
  }
  psVar23 = psVar1;
  if (uVar28 != 0) {
    uVar20 = uVar26;
    psVar23 = *(string **)(param_1 + 0x10);
  }
  sVar2 = *(size_t *)(pbVar29 + 8);
  pbVar3 = *(byte **)(pbVar29 + 0x10);
  if ((*pbVar29 & 1) == 0) {
    pbVar3 = pbVar29 + 1;
    sVar2 = (ulong)(*pbVar29 >> 1);
  }
  if (sVar2 == 0) {
    uVar19 = 0;
    goto LAB_00fc10b0;
  }
  if ((long)sVar2 <= (long)uVar20) {
    bVar5 = *pbVar3;
    psVar30 = psVar23 + uVar20;
    psVar21 = psVar23;
    uVar19 = uVar20;
    do {
      if ((0xfffffffffffffffe < uVar19 - sVar2) ||
         (psVar21 = memchr(psVar21,(uint)bVar5,(uVar19 - sVar2) + 1), psVar21 == (string *)0x0))
      break;
      iVar17 = memcmp(psVar21,pbVar3,sVar2);
      if (iVar17 == 0) goto LAB_00fc125c;
      psVar21 = psVar21 + 1;
      uVar19 = (long)psVar30 - (long)psVar21;
    } while ((long)sVar2 <= (long)uVar19);
LAB_00fc0f7c:
    pbVar29 = PTR_DAT_0437dcc0;
  }
LAB_00fc0f84:
  sVar2 = (ulong)(pbVar29[0x18] >> 1);
  pbVar3 = pbVar29 + 0x19;
  if ((pbVar29[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar29 + 0x20);
    pbVar3 = *(byte **)(pbVar29 + 0x28);
  }
  if (sVar2 == 0) {
    uVar19 = 0;
    goto LAB_00fc1158;
  }
  if ((long)sVar2 <= (long)uVar20) {
    bVar5 = *pbVar3;
    psVar30 = psVar23 + uVar20;
    psVar21 = psVar23;
    do {
      if (0xfffffffffffffffe < uVar20 - sVar2) {
        return;
      }
      psVar21 = memchr(psVar21,(uint)bVar5,(uVar20 - sVar2) + 1);
      if (psVar21 == (string *)0x0) {
        return;
      }
      iVar17 = memcmp(psVar21,pbVar3,sVar2);
      if (iVar17 == 0) {
        do {
          if (psVar21 == psVar30) {
            return;
          }
          uVar19 = (long)psVar21 - (long)psVar23;
          if (uVar19 == 0xffffffffffffffff) {
            return;
          }
LAB_00fc1158:
          while( true ) {
            std::string::erase((ulong)param_1,uVar19);
            uVar19 = (ulong)((byte)*param_1 >> 1);
            psVar23 = psVar1;
            if (((byte)*param_1 & 1) != 0) {
              uVar19 = *(ulong *)(param_1 + 8);
              psVar23 = *(string **)(param_1 + 0x10);
            }
            sVar2 = (ulong)((byte)PTR_DAT_0437dcc0[0x18] >> 1);
            pbVar29 = PTR_DAT_0437dcc0 + 0x19;
            if ((PTR_DAT_0437dcc0[0x18] & 1) != 0) {
              sVar2 = *(size_t *)(PTR_DAT_0437dcc0 + 0x20);
              pbVar29 = *(byte **)(PTR_DAT_0437dcc0 + 0x28);
            }
            if (sVar2 != 0) break;
            uVar19 = 0;
          }
          if ((long)uVar19 < (long)sVar2) {
            return;
          }
          bVar5 = *pbVar29;
          psVar30 = psVar23 + uVar19;
          psVar21 = psVar23;
          while( true ) {
            if (0xfffffffffffffffe < uVar19 - sVar2) {
              return;
            }
            psVar21 = memchr(psVar21,(uint)bVar5,(uVar19 - sVar2) + 1);
            if (psVar21 == (string *)0x0) {
              return;
            }
            iVar17 = memcmp(psVar21,pbVar29,sVar2);
            if (iVar17 == 0) break;
            psVar21 = psVar21 + 1;
            uVar19 = (long)psVar30 - (long)psVar21;
            if ((long)uVar19 < (long)sVar2) {
              return;
            }
          }
        } while( true );
      }
      psVar21 = psVar21 + 1;
      uVar20 = (long)psVar30 - (long)psVar21;
    } while ((long)sVar2 <= (long)uVar20);
  }
  return;
LAB_00fc125c:
  if (psVar21 == psVar30) goto LAB_00fc0f7c;
  uVar19 = (long)psVar21 - (long)psVar23;
  while( true ) {
    pbVar29 = PTR_DAT_0437dcc0;
    if (uVar19 == 0xffffffffffffffff) goto LAB_00fc0f84;
LAB_00fc10b0:
    std::string::erase((ulong)param_1,uVar19);
    bVar15 = ((byte)*param_1 & 1) != 0;
    uVar20 = (ulong)((byte)*param_1 >> 1);
    if (bVar15) {
      uVar20 = *(ulong *)(param_1 + 8);
    }
    psVar23 = psVar1;
    if (bVar15) {
      psVar23 = *(string **)(param_1 + 0x10);
    }
    sVar2 = *(size_t *)(pbVar29 + 8);
    pbVar3 = *(byte **)(pbVar29 + 0x10);
    if ((*pbVar29 & 1) == 0) {
      pbVar3 = pbVar29 + 1;
      sVar2 = (ulong)(*pbVar29 >> 1);
    }
    if (sVar2 != 0) break;
    uVar19 = 0;
  }
  if ((long)uVar20 < (long)sVar2) goto LAB_00fc0f7c;
  bVar5 = *pbVar3;
  psVar30 = psVar23 + uVar20;
  psVar21 = psVar23;
  uVar19 = uVar20;
  while( true ) {
    if ((0xfffffffffffffffe < uVar19 - sVar2) ||
       (psVar21 = memchr(psVar21,(uint)bVar5,(uVar19 - sVar2) + 1), psVar21 == (string *)0x0))
    goto LAB_00fc0f7c;
    iVar17 = memcmp(psVar21,pbVar3,sVar2);
    if (iVar17 == 0) break;
    psVar21 = psVar21 + 1;
    uVar19 = (long)psVar30 - (long)psVar21;
    if ((long)uVar19 < (long)sVar2) goto LAB_00fc0f7c;
  }
  goto LAB_00fc125c;
}


