/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0206b800; name: FUN_0206b800
 */


/* WARNING: Removing unreachable block (ram,0x0206bfec) */

void FUN_0206b800(string *param_1)

{
  string sVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  string *psVar15;
  string *psVar16;
  long *plVar17;
  ulong uVar18;
  string *psVar19;
  size_t sVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar26 = PTR_DAT_04384320;
  if (((*PTR_DAT_04384318 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04384318), iVar11 != 0)) {
    *(undefined8 *)pbVar26 = 0;
    *(undefined8 *)(pbVar26 + 8) = 0;
    *pbVar26 = 0x16;
    uVar3 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar26 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar26 + 0x10) = 0;
    *(undefined8 *)(pbVar26 + 0x18) = 0;
    pbVar26[0xc] = 0;
    *(undefined8 *)(pbVar26 + 1) = uVar3;
    pbVar26[0x18] = 0x2a;
    uVar3 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar26 + 0x20) = 0;
    *(undefined8 *)(pbVar26 + 0x28) = 0;
    *(undefined8 *)(pbVar26 + 0x26) = uVar3;
    uVar3 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar26 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar26 + 0x19) = uVar3;
    pbVar26[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar26,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04384318);
  }
  plVar8 = DAT_043f1798;
  lVar21 = tpidr_el0;
  plVar17 = *(long **)(lVar21 + 0x20);
  if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
    *(long **)(lVar21 + 0x20) = DAT_043f1798;
    plVar17 = plVar8;
  }
  pcVar12 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x7b;
  *(char **)(param_1 + 0x10) = pcVar12;
  pcVar12[0x77] = 'i';
  uVar6 = s_std__string_sol__detail__ctti_ge_0394f87f._88_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0394f87f._80_8_;
  pcVar12[0x78] = 'n';
  pcVar12[0x79] = 't';
  pcVar12[0x7a] = ']';
  *(undefined8 *)(pcVar12 + 0x70) = s_std__string_sol__detail__ctti_ge_0394f87f._112_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0394f87f._104_8_;
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_0394f87f._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar7;
  *(undefined8 *)(pcVar12 + 0x50) = uVar3;
  *(undefined8 *)(pcVar12 + 0x58) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0394f87f._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0394f87f._56_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0394f87f._48_8_;
  *(undefined8 *)(pcVar12 + 0x40) = s_std__string_sol__detail__ctti_ge_0394f87f._64_8_;
  *(undefined8 *)(pcVar12 + 0x48) = uVar7;
  *(undefined8 *)(pcVar12 + 0x30) = uVar3;
  *(undefined8 *)(pcVar12 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0394f87f._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0394f87f._24_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0394f87f._16_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_std__string_sol__detail__ctti_ge_0394f87f._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar7;
  *(undefined8 *)(pcVar12 + 0x10) = uVar3;
  *(undefined8 *)(pcVar12 + 0x18) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0394f87f._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0394f87f._0_8_;
  pcVar12[0x7b] = '\0';
  *(undefined8 *)pcVar12 = uVar3;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  cVar10 = (char)param_1;
  std::string::find(cVar10,0x5b);
  uVar13 = std::string::find(cVar10,0x3d);
  uVar14 = std::string::rfind(cVar10,0x5d);
  sVar1 = *param_1;
  if (uVar14 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar14 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    uVar18 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar18 = uVar13;
    }
    uVar13 = uVar14;
  }
  else {
    uVar18 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar18 = uVar13;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar13 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar18 < uVar13 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar18,uVar14 - uVar18,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    plVar8 = DAT_043f1798;
    if (((byte)*param_1 & 1) != 0) {
      lVar22 = *(long *)(param_1 + 0x10);
      if (lVar22 != 0) {
        plVar17 = *(long **)(lVar21 + 0x20);
        if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
          *(long **)(lVar21 + 0x20) = DAT_043f1798;
          plVar17 = plVar8;
        }
        uVar13 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar13 & 1) != 0) {
          if (*(char *)(lVar21 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar21 + 0x38d488) = 1;
            *(undefined8 *)(lVar21 + 0x38d478) = 0;
            *(undefined8 *)(lVar21 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar21 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar22,0,8);
            goto LAB_0206ba44;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar22,0,8);
      }
LAB_0206ba44:
      *(undefined8 *)param_1 = 0;
    }
  }
  uVar24 = (uint)local_78 & 0xff;
  uVar25 = (uint)local_78 & 1;
  psVar16 = param_1 + 1;
  uVar13 = local_78 >> 1 & 0x7f;
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  *(ulong *)param_1 = local_78;
  uVar14 = uStack_70;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar13;
    local_68 = psVar16;
    if (0xd < uVar13) goto LAB_0206ba78;
  }
  else if (0xd < (long)uStack_70) {
LAB_0206ba78:
    psVar19 = local_68 + uStack_70;
    lVar21 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (local_68[uStack_70] == (string)0x6b) {
        lVar22 = 0;
        do {
          if (lVar22 == -0xd) {
            if ((lVar21 != -0xd) &&
               (psVar19 + (~(ulong)local_68 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar19 + (~(ulong)local_68 - 0xd) + -2));
              sVar1 = *param_1;
              uVar24 = (uint)(byte)sVar1;
              uVar25 = (byte)sVar1 & 1;
              uVar13 = (ulong)((byte)sVar1 >> 1);
              uVar14 = *(ulong *)(param_1 + 8);
            }
            goto LAB_0206bb1c;
          }
          lVar4 = lVar22 + -2;
          lVar5 = lVar22 + 0xc;
          lVar22 = lVar22 + -1;
        } while (psVar19[lVar4] == *(string *)("seperator_mark" + lVar5));
      }
      psVar19 = psVar19 + -1;
      lVar21 = lVar21 + 1;
    }
  }
LAB_0206bb1c:
  uVar18 = uVar13;
  if (uVar25 != 0) {
    uVar18 = uVar14;
  }
  if (uVar18 != 0) {
    psVar19 = psVar16;
    if (uVar25 != 0) {
      psVar19 = *(string **)(param_1 + 0x10);
    }
    iVar11 = isblank((uint)(byte)*psVar19);
    if (iVar11 == 0) {
      uVar25 = uVar24 & 1;
      uVar13 = (ulong)(uVar24 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar24 = (uint)(byte)sVar1;
        uVar13 = (ulong)((byte)sVar1 >> 1);
        uVar14 = *(ulong *)(param_1 + 8);
        uVar25 = (byte)sVar1 & 1;
        uVar18 = uVar13;
        if (((byte)sVar1 & 1) != 0) {
          uVar18 = uVar14;
        }
        if (uVar18 == 0) break;
        psVar19 = psVar16;
        if (((byte)sVar1 & 1) != 0) {
          psVar19 = *(string **)(param_1 + 0x10);
        }
        iVar11 = isblank((uint)(byte)*psVar19);
      } while (iVar11 != 0);
    }
  }
  bVar9 = uVar25 == 0;
  uVar18 = uVar13;
  if (!bVar9) {
    uVar18 = uVar14;
  }
  if (uVar18 != 0) {
    do {
      psVar19 = *(string **)(param_1 + 0x10);
      uVar13 = (ulong)(uVar24 >> 1);
      if (bVar9) {
        psVar19 = param_1 + 1;
        uVar18 = uVar13;
      }
      else {
        uVar18 = uVar14;
      }
      iVar11 = isblank((uint)(byte)psVar19[uVar18 - 1]);
      if (iVar11 == 0) break;
      FUN_02057e90(param_1);
      sVar1 = *param_1;
      uVar24 = (uint)(byte)sVar1;
      bVar9 = ((byte)sVar1 & 1) == 0;
      uVar14 = *(ulong *)(param_1 + 8);
      uVar13 = (ulong)((byte)sVar1 >> 1);
      uVar18 = uVar13;
      if (!bVar9) {
        uVar18 = uVar14;
      }
    } while (uVar18 != 0);
    uVar25 = uVar24 & 1;
  }
  if (uVar25 != 0) {
    uVar13 = uVar14;
  }
  psVar19 = psVar16;
  if (uVar25 != 0) {
    psVar19 = *(string **)(param_1 + 0x10);
  }
  sVar20 = *(size_t *)(pbVar26 + 8);
  if ((*pbVar26 & 1) == 0) {
    pbVar23 = pbVar26 + 1;
    sVar20 = (size_t)(*pbVar26 >> 1);
  }
  else {
    pbVar23 = *(byte **)(pbVar26 + 0x10);
  }
  if (sVar20 == 0) {
    uVar14 = 0;
    goto LAB_0206bd5c;
  }
  if ((long)sVar20 <= (long)uVar13) {
    bVar2 = *pbVar23;
    psVar15 = psVar19;
    uVar14 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar14 - sVar20) ||
         (psVar15 = memchr(psVar15,(uint)bVar2,(uVar14 - sVar20) + 1), psVar15 == (string *)0x0))
      break;
      iVar11 = memcmp(psVar15,pbVar23,sVar20);
      if (iVar11 == 0) {
        if (psVar15 != psVar19 + uVar13) {
          uVar14 = (long)psVar15 - (long)psVar19;
          pbVar26 = PTR_DAT_04384320;
          goto LAB_0206bf18;
        }
        break;
      }
      psVar15 = psVar15 + 1;
      uVar14 = (long)(psVar19 + uVar13) - (long)psVar15;
    } while ((long)sVar20 <= (long)uVar14);
    pbVar26 = PTR_DAT_04384320;
  }
LAB_0206bc54:
  sVar20 = (ulong)(pbVar26[0x18] >> 1);
  pbVar23 = pbVar26 + 0x19;
  if ((pbVar26[0x18] & 1) != 0) {
    sVar20 = *(size_t *)(pbVar26 + 0x20);
    pbVar23 = *(byte **)(pbVar26 + 0x28);
  }
  if (sVar20 == 0) {
    uVar13 = 0;
    goto LAB_0206be04;
  }
  if ((long)sVar20 <= (long)uVar13) {
    bVar2 = *pbVar23;
    psVar15 = psVar19 + uVar13;
    psVar16 = psVar19;
    do {
      if (0xfffffffffffffffe < uVar13 - sVar20) {
        return;
      }
      psVar16 = memchr(psVar16,(uint)bVar2,(uVar13 - sVar20) + 1);
      if (psVar16 == (string *)0x0) {
        return;
      }
      iVar11 = memcmp(psVar16,pbVar23,sVar20);
      if (iVar11 == 0) {
        if (psVar16 == psVar15) {
          return;
        }
        do {
          uVar13 = (long)psVar16 - (long)psVar19;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_0206be04:
          while( true ) {
            std::string::erase((ulong)param_1,uVar13);
            bVar9 = ((byte)*param_1 & 1) != 0;
            psVar19 = *(string **)(param_1 + 0x10);
            uVar13 = (ulong)((byte)*param_1 >> 1);
            if (bVar9) {
              uVar13 = *(ulong *)(param_1 + 8);
            }
            if (!bVar9) {
              psVar19 = param_1 + 1;
            }
            sVar20 = (ulong)((byte)PTR_DAT_04384320[0x18] >> 1);
            pbVar26 = PTR_DAT_04384320 + 0x19;
            if ((PTR_DAT_04384320[0x18] & 1) != 0) {
              sVar20 = *(size_t *)(PTR_DAT_04384320 + 0x20);
              pbVar26 = *(byte **)(PTR_DAT_04384320 + 0x28);
            }
            if (sVar20 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar20) {
            return;
          }
          bVar2 = *pbVar26;
          psVar15 = psVar19 + uVar13;
          psVar16 = psVar19;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar20) {
              return;
            }
            psVar16 = memchr(psVar16,(uint)bVar2,(uVar13 - sVar20) + 1);
            if (psVar16 == (string *)0x0) {
              return;
            }
            iVar11 = memcmp(psVar16,pbVar26,sVar20);
            if (iVar11 == 0) break;
            psVar16 = psVar16 + 1;
            uVar13 = (long)psVar15 - (long)psVar16;
            if ((long)uVar13 < (long)sVar20) {
              return;
            }
          }
          if (psVar16 == psVar15) {
            return;
          }
        } while( true );
      }
      psVar16 = psVar16 + 1;
      uVar13 = (long)psVar15 - (long)psVar16;
    } while ((long)sVar20 <= (long)uVar13);
  }
  return;
LAB_0206bf18:
  if (uVar14 != 0xffffffffffffffff) {
LAB_0206bd5c:
    std::string::erase((ulong)param_1,uVar14);
    bVar9 = ((byte)*param_1 & 1) != 0;
    psVar19 = psVar16;
    if (bVar9) {
      psVar19 = *(string **)(param_1 + 0x10);
    }
    uVar13 = (ulong)((byte)*param_1 >> 1);
    if (bVar9) {
      uVar13 = *(ulong *)(param_1 + 8);
    }
    sVar20 = *(size_t *)(pbVar26 + 8);
    pbVar23 = *(byte **)(pbVar26 + 0x10);
    if ((*pbVar26 & 1) == 0) {
      pbVar23 = pbVar26 + 1;
      sVar20 = (ulong)(*pbVar26 >> 1);
    }
    if (sVar20 == 0) {
      uVar14 = 0;
    }
    else {
      if ((long)uVar13 < (long)sVar20) goto LAB_0206bc54;
      bVar2 = *pbVar23;
      psVar15 = psVar19;
      uVar14 = uVar13;
      while( true ) {
        if ((0xfffffffffffffffe < uVar14 - sVar20) ||
           (psVar15 = memchr(psVar15,(uint)bVar2,(uVar14 - sVar20) + 1), psVar15 == (string *)0x0))
        goto LAB_0206bc54;
        iVar11 = memcmp(psVar15,pbVar23,sVar20);
        if (iVar11 == 0) break;
        psVar15 = psVar15 + 1;
        uVar14 = (long)(psVar19 + uVar13) - (long)psVar15;
        if ((long)uVar14 < (long)sVar20) goto LAB_0206bc54;
      }
      if (psVar15 == psVar19 + uVar13) goto LAB_0206bc54;
      uVar14 = (long)psVar15 - (long)psVar19;
    }
    goto LAB_0206bf18;
  }
  goto LAB_0206bc54;
}


