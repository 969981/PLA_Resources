/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f839e0; name: FUN_00f839e0
 */


/* WARNING: Removing unreachable block (ram,0x00f841e0) */

void FUN_00f839e0(string *param_1)

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
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  string *psVar27;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar22 = PTR_DAT_0437d890;
  if (((*PTR_DAT_0437d888 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437d888), iVar14 != 0)) {
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
    __cxa_guard_release(PTR_DAT_0437d888);
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
  uVar6 = s_std__string_sol__detail__ctti_ge_038fdba6._112_8_;
  *(undefined8 *)(param_1 + 8) = 0x78;
  *(char **)(param_1 + 0x10) = pcVar15;
  *(undefined8 *)(pcVar15 + 0x70) = uVar6;
  uVar10 = s_std__string_sol__detail__ctti_ge_038fdba6._104_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038fdba6._88_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038fdba6._80_8_;
  *(undefined8 *)(pcVar15 + 0x60) = s_std__string_sol__detail__ctti_ge_038fdba6._96_8_;
  *(undefined8 *)(pcVar15 + 0x68) = uVar10;
  *(undefined8 *)(pcVar15 + 0x50) = uVar6;
  *(undefined8 *)(pcVar15 + 0x58) = uVar9;
  uVar10 = s_std__string_sol__detail__ctti_ge_038fdba6._72_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038fdba6._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038fdba6._48_8_;
  *(undefined8 *)(pcVar15 + 0x40) = s_std__string_sol__detail__ctti_ge_038fdba6._64_8_;
  *(undefined8 *)(pcVar15 + 0x48) = uVar10;
  *(undefined8 *)(pcVar15 + 0x30) = uVar6;
  *(undefined8 *)(pcVar15 + 0x38) = uVar9;
  uVar10 = s_std__string_sol__detail__ctti_ge_038fdba6._40_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_038fdba6._24_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038fdba6._16_8_;
  *(undefined8 *)(pcVar15 + 0x20) = s_std__string_sol__detail__ctti_ge_038fdba6._32_8_;
  *(undefined8 *)(pcVar15 + 0x28) = uVar10;
  *(undefined8 *)(pcVar15 + 0x10) = uVar6;
  *(undefined8 *)(pcVar15 + 0x18) = uVar9;
  uVar9 = s_std__string_sol__detail__ctti_ge_038fdba6._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038fdba6._0_8_;
  pcVar15[0x78] = '\0';
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
    uVar24 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar24 = uVar16;
    }
    uVar16 = uVar17;
  }
  else {
    uVar24 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar24 = uVar16;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar16 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar24 < uVar16 - 1) {
    uVar24 = uVar24 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar24,uVar17 - uVar24,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
    goto LAB_00f83c1c;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar11 = DAT_043f1798;
  if (((byte)*param_1 & 1) == 0) goto LAB_00f83c1c;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 != 0) {
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
        FUN_02bcc824(plVar19,lVar23,0,8);
        goto LAB_00f83c18;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar23,0,8);
  }
LAB_00f83c18:
  *(undefined8 *)param_1 = 0;
LAB_00f83c1c:
  uVar17 = local_78 >> 1 & 0x7f;
  bVar12 = (local_78 & 1) != 0;
  uVar16 = uVar17;
  if (bVar12) {
    uVar16 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar25 = (uint)local_78 & 0xff;
  uVar26 = (uint)local_78 & 1;
  psVar27 = local_68;
  if (!bVar12) {
    psVar27 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar24 = uStack_70;
  if (0xd < (long)uVar16) {
    psVar20 = psVar27 + uVar16;
    lVar21 = 1;
    while (uVar16 != 0xd) {
      uVar16 = uVar16 - 1;
      if (psVar27[uVar16] == (string)0x6b) {
        lVar23 = 0;
        do {
          if (lVar23 == -0xd) {
            if ((lVar21 != -0xd) &&
               (psVar20 + (~(ulong)psVar27 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar20 + (~(ulong)psVar27 - 0xd) + -2));
              sVar4 = *param_1;
              uVar25 = (uint)(byte)sVar4;
              uVar26 = (byte)sVar4 & 1;
              uVar24 = *(ulong *)(param_1 + 8);
              uVar17 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_00f83cf0;
          }
          lVar7 = lVar23 + -2;
          lVar8 = lVar23 + 0xc;
          lVar23 = lVar23 + -1;
        } while (psVar20[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar20 = psVar20 + -1;
      lVar21 = lVar21 + 1;
    }
  }
LAB_00f83cf0:
  uVar16 = uVar24;
  if (uVar26 == 0) {
    uVar16 = uVar17;
  }
  if (uVar16 != 0) {
    psVar27 = param_1 + 1;
    if (uVar26 != 0) {
      psVar27 = *(string **)(param_1 + 0x10);
    }
    iVar14 = isblank((uint)(byte)*psVar27);
    if (iVar14 == 0) {
      uVar26 = uVar25 & 1;
      uVar17 = (ulong)(uVar25 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar25 = (uint)(byte)sVar4;
        uVar17 = (ulong)((byte)sVar4 >> 1);
        uVar24 = *(ulong *)(param_1 + 8);
        uVar26 = (byte)sVar4 & 1;
        uVar16 = uVar17;
        if (((byte)sVar4 & 1) != 0) {
          uVar16 = uVar24;
        }
        if (uVar16 == 0) break;
        psVar27 = param_1 + 1;
        if (((byte)sVar4 & 1) != 0) {
          psVar27 = *(string **)(param_1 + 0x10);
        }
        iVar14 = isblank((uint)(byte)*psVar27);
      } while (iVar14 != 0);
    }
  }
  psVar27 = param_1 + 1;
  bVar12 = uVar26 == 0;
  uVar16 = uVar24;
  if (uVar26 == 0) {
    uVar16 = uVar17;
  }
  if (uVar16 != 0) {
    do {
      while( true ) {
        psVar20 = *(string **)(param_1 + 0x10);
        uVar17 = (ulong)(uVar25 >> 1);
        if (bVar12) {
          psVar20 = param_1 + 1;
          uVar16 = uVar17;
        }
        else {
          uVar16 = uVar24;
        }
        iVar14 = isblank((uint)(byte)psVar20[uVar16 - 1]);
        if (iVar14 == 0) goto LAB_00f83dd0;
        FUN_00f69b60(param_1);
        sVar4 = *param_1;
        uVar25 = (uint)(byte)sVar4;
        bVar12 = ((byte)sVar4 & 1) == 0;
        uVar24 = *(ulong *)(param_1 + 8);
        uVar17 = (ulong)((byte)sVar4 >> 1);
        if (((byte)sVar4 & 1) != 0) break;
        if (uVar17 == 0) goto LAB_00f83dd0;
      }
    } while (uVar24 != 0);
LAB_00f83dd0:
    uVar26 = uVar25 & 1;
  }
  if (uVar26 != 0) {
    uVar17 = uVar24;
  }
  psVar20 = psVar27;
  if (uVar26 != 0) {
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
    goto LAB_00f83f4c;
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
          pbVar22 = PTR_DAT_0437d890;
          goto LAB_00f8410c;
        }
        break;
      }
      psVar18 = psVar18 + 1;
      uVar16 = (long)(psVar20 + uVar17) - (long)psVar18;
    } while ((long)sVar2 <= (long)uVar16);
    pbVar22 = PTR_DAT_0437d890;
  }
LAB_00f83e3c:
  sVar2 = (ulong)(pbVar22[0x18] >> 1);
  pbVar3 = pbVar22 + 0x19;
  if ((pbVar22[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar22 + 0x20);
    pbVar3 = *(byte **)(pbVar22 + 0x28);
  }
  if (sVar2 != 0) {
    if ((long)sVar2 <= (long)uVar17) {
      bVar5 = *pbVar3;
      psVar1 = psVar20 + uVar17;
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
          if (psVar18 == psVar1) {
            return;
          }
          uVar16 = (long)psVar18 - (long)psVar20;
          if (uVar16 == 0xffffffffffffffff) {
            return;
          }
          goto LAB_00f83ffc;
        }
        psVar18 = psVar18 + 1;
        uVar17 = (long)psVar1 - (long)psVar18;
      } while ((long)sVar2 <= (long)uVar17);
    }
    return;
  }
  uVar16 = 0;
LAB_00f83ffc:
  do {
    while( true ) {
      std::string::erase((ulong)param_1,uVar16);
      bVar12 = ((byte)*param_1 & 1) != 0;
      uVar16 = (ulong)((byte)*param_1 >> 1);
      if (bVar12) {
        uVar16 = *(ulong *)(param_1 + 8);
      }
      psVar20 = psVar27;
      if (bVar12) {
        psVar20 = *(string **)(param_1 + 0x10);
      }
      sVar2 = (ulong)((byte)PTR_DAT_0437d890[0x18] >> 1);
      pbVar22 = PTR_DAT_0437d890 + 0x19;
      if ((PTR_DAT_0437d890[0x18] & 1) != 0) {
        sVar2 = *(size_t *)(PTR_DAT_0437d890 + 0x20);
        pbVar22 = *(byte **)(PTR_DAT_0437d890 + 0x28);
      }
      if (sVar2 != 0) break;
      uVar16 = 0;
    }
    if ((long)uVar16 < (long)sVar2) {
      return;
    }
    bVar5 = *pbVar22;
    psVar1 = psVar20 + uVar16;
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
      uVar16 = (long)psVar1 - (long)psVar18;
      if ((long)uVar16 < (long)sVar2) {
        return;
      }
    }
    if (psVar18 == psVar1) {
      return;
    }
    uVar16 = (long)psVar18 - (long)psVar20;
  } while (uVar16 != 0xffffffffffffffff);
  return;
LAB_00f8410c:
  uVar16 = (long)psVar18 - (long)psVar20;
  while( true ) {
    if (uVar16 == 0xffffffffffffffff) goto LAB_00f83e3c;
LAB_00f83f4c:
    std::string::erase((ulong)param_1,uVar16);
    bVar12 = ((byte)*param_1 & 1) != 0;
    psVar20 = psVar27;
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
  if ((long)uVar17 < (long)sVar2) goto LAB_00f83e3c;
  bVar5 = *pbVar3;
  psVar18 = psVar20;
  uVar16 = uVar17;
  while( true ) {
    if ((0xfffffffffffffffe < uVar16 - sVar2) ||
       (psVar18 = memchr(psVar18,(uint)bVar5,(uVar16 - sVar2) + 1), psVar18 == (string *)0x0))
    goto LAB_00f83e3c;
    iVar14 = memcmp(psVar18,pbVar3,sVar2);
    if (iVar14 == 0) break;
    psVar18 = psVar18 + 1;
    uVar16 = (long)(psVar20 + uVar17) - (long)psVar18;
    if ((long)uVar16 < (long)sVar2) goto LAB_00f83e3c;
  }
  if (psVar18 == psVar20 + uVar17) goto LAB_00f83e3c;
  goto LAB_00f8410c;
}


