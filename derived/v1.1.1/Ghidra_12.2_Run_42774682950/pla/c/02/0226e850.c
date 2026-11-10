/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0226e850; name: FUN_0226e850
 */


/* WARNING: Removing unreachable block (ram,0x0226ef90) */
/* WARNING: Removing unreachable block (ram,0x0226ef80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0226e850(void)

{
  size_t sVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long *plVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043dfd68 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dfd68), iVar10 != 0)) {
    DAT_043dfd38 = 0x16;
    DAT_043dfd48 = (byte *)0x0;
    DAT_043dfd39._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043dfd40 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043dfd50 = 0x2a;
    _DAT_043dfd44 = 0;
    DAT_043dfd60._7_1_ = 0;
    DAT_043dfd60._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043dfd60._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043dfd60._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043dfd60._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043dfd60._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043dfd59 = s__anonymous_namespace__039071f8[8];
    DAT_043dfd59_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043dfd59_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043dfd59_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043dfd59_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043dfd5e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043dfd60._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043dfd51._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043dfd51._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043dfd60._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043dfd38,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dfd68);
  }
  plVar8 = DAT_043f1798;
  lVar18 = tpidr_el0;
  plVar15 = *(long **)(lVar18 + 0x20);
  if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
    *(long **)(lVar18 + 0x20) = DAT_043f1798;
    plVar15 = plVar8;
  }
  pcVar11 = (char *)(**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
  uVar3 = s_std__string_sol__detail__ctti_ge_03900e46._88_8_;
  _DAT_043dfd18 = 0x81;
  DAT_043dfd20 = 0x75;
  DAT_043dfd28 = (byte *)pcVar11;
  *(undefined8 *)(pcVar11 + 0x50) = s_std__string_sol__detail__ctti_ge_03900e46._80_8_;
  *(undefined8 *)(pcVar11 + 0x58) = uVar3;
  uVar4 = CONCAT53(s_std__string_sol__detail__ctti_ge_03900e46._112_5_,
                   s_std__string_sol__detail__ctti_ge_03900e46._109_3_);
  uVar3 = CONCAT35(s_std__string_sol__detail__ctti_ge_03900e46._109_3_,
                   s_std__string_sol__detail__ctti_ge_03900e46._104_5_);
  *(undefined8 *)(pcVar11 + 0x60) = s_std__string_sol__detail__ctti_ge_03900e46._96_8_;
  *(undefined8 *)(pcVar11 + 0x68) = uVar3;
  *(undefined8 *)(pcVar11 + 0x6d) = uVar4;
  uVar7 = s_std__string_sol__detail__ctti_ge_03900e46._72_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03900e46._64_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_03900e46._56_8_;
  *(undefined8 *)(pcVar11 + 0x30) = s_std__string_sol__detail__ctti_ge_03900e46._48_8_;
  *(undefined8 *)(pcVar11 + 0x38) = uVar3;
  *(undefined8 *)(pcVar11 + 0x40) = uVar4;
  *(undefined8 *)(pcVar11 + 0x48) = uVar7;
  uVar7 = s_std__string_sol__detail__ctti_ge_03900e46._40_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03900e46._32_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_03900e46._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_std__string_sol__detail__ctti_ge_03900e46._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar3;
  *(undefined8 *)(pcVar11 + 0x20) = uVar4;
  *(undefined8 *)(pcVar11 + 0x28) = uVar7;
  uVar4 = s_std__string_sol__detail__ctti_ge_03900e46._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_03900e46._0_8_;
  pcVar11[0x75] = '\0';
  *(undefined8 *)pcVar11 = uVar3;
  *(undefined8 *)(pcVar11 + 8) = uVar4;
  std::string::find('\x18',0x5b);
  uVar12 = std::string::find('\x18',0x3d);
  uVar13 = std::string::rfind('\x18',0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043dfd18 & 1) == 0) {
      uVar13 = (ulong)(DAT_043dfd18 >> 1);
    }
    else {
      uVar13 = DAT_043dfd20;
    }
    uVar16 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar16 = uVar12;
    }
    uVar12 = uVar13;
  }
  else {
    uVar16 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar16 = uVar12;
    }
    if ((_DAT_043dfd18 & 1) == 0) {
      uVar12 = (ulong)(DAT_043dfd18 >> 1);
    }
    else {
      uVar12 = DAT_043dfd20;
    }
  }
  if (uVar16 < uVar12 - 1) {
    uVar16 = uVar16 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043dfd18,uVar16,uVar13 - uVar16,
                      (allocator *)&DAT_043dfd18);
  if ((_DAT_043dfd18 & 1) != 0) {
    *DAT_043dfd28 = '\0';
    plVar8 = DAT_043f1798;
    pcVar11 = (char *)DAT_043dfd28;
    DAT_043dfd20 = 0;
    if (((_DAT_043dfd18 & 1) != 0) && (DAT_043dfd28 != (byte *)0x0)) {
      plVar15 = *(long **)(lVar18 + 0x20);
      if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
        *(long **)(lVar18 + 0x20) = DAT_043f1798;
        plVar15 = plVar8;
      }
      uVar13 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar13 & 1) != 0) {
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar18 + 0x38d480)) {
          FUN_02bcc824(plVar15,pcVar11,0,8);
          goto LAB_0226ea90;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,pcVar11,0,8);
    }
  }
LAB_0226ea90:
  uVar13 = local_78 >> 1 & 0x7f;
  uVar21 = (uint)local_78 & 0xff;
  _DAT_043dfd18 = local_78;
  DAT_043dfd20 = uStack_70;
  uVar22 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar13;
    pbVar23 = &DAT_043dfd19;
  }
  else {
    pbVar23 = local_68;
  }
  DAT_043dfd28 = local_68;
  if (0xd < (long)uStack_70) {
    pbVar17 = pbVar23 + uStack_70;
    lVar18 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (pbVar23[uStack_70] == 0x6b) {
        lVar19 = 0;
        do {
          if (lVar19 == -0xd) {
            if ((lVar18 != -0xd) &&
               (pbVar17 + (~(ulong)pbVar23 - 0xd) != (byte *)0xffffffffffffffff)) {
              std::string::erase(0x43dfd18,(ulong)(pbVar17 + (~(ulong)pbVar23 - 0xd) + -2));
              uVar21 = (uint)DAT_043dfd18;
              uVar22 = DAT_043dfd18 & 1;
              uVar13 = (ulong)(DAT_043dfd18 >> 1);
            }
            goto LAB_0226eb64;
          }
          lVar5 = lVar19 + -2;
          lVar6 = lVar19 + 0xc;
          lVar19 = lVar19 + -1;
        } while (pbVar17[lVar5] == "seperator_mark"[lVar6]);
      }
      pbVar17 = pbVar17 + -1;
      lVar18 = lVar18 + 1;
    }
  }
LAB_0226eb64:
  pbVar23 = DAT_043dfd28;
  uVar16 = DAT_043dfd20;
  bVar9 = uVar22 == 0;
  uVar12 = uVar13;
  if (!bVar9) {
    uVar12 = DAT_043dfd20;
  }
  if (uVar12 != 0) {
    pbVar17 = &DAT_043dfd19;
    if (uVar22 != 0) {
      pbVar17 = DAT_043dfd28;
    }
    iVar10 = isblank((uint)*pbVar17);
    if (iVar10 == 0) {
      uVar22 = uVar21 & 1;
      uVar13 = (ulong)(uVar21 >> 1);
    }
    else {
      do {
        pbVar14 = &DAT_043dfd19;
        if (!bVar9) {
          pbVar14 = pbVar23;
        }
        std::string::erase(0x43dfd18,(long)pbVar14 - (long)pbVar17);
        pbVar23 = DAT_043dfd28;
        uVar16 = DAT_043dfd20;
        uVar21 = (uint)DAT_043dfd18;
        bVar9 = (_DAT_043dfd18 & 1) == 0;
        uVar13 = (ulong)(DAT_043dfd18 >> 1);
        uVar22 = DAT_043dfd18 & 1;
        uVar12 = uVar13;
        if (!bVar9) {
          uVar12 = DAT_043dfd20;
        }
        if (uVar12 == 0) break;
        pbVar17 = &DAT_043dfd19;
        if ((_DAT_043dfd18 & 1) != 0) {
          pbVar17 = DAT_043dfd28;
        }
        iVar10 = isblank((uint)*pbVar17);
      } while (iVar10 != 0);
    }
  }
  bVar9 = uVar22 == 0;
  uVar12 = uVar13;
  if (!bVar9) {
    uVar12 = uVar16;
  }
  if (uVar12 != 0) {
    do {
      uVar13 = (ulong)(uVar21 >> 1);
      uVar12 = uVar13;
      pbVar23 = &DAT_043dfd19;
      if (!bVar9) {
        uVar12 = uVar16;
        pbVar23 = DAT_043dfd28;
      }
      iVar10 = isblank((uint)pbVar23[uVar12 - 1]);
      if (iVar10 == 0) break;
      FUN_02264674(&DAT_043dfd18);
      uVar21 = (uint)DAT_043dfd18;
      bVar9 = (_DAT_043dfd18 & 1) == 0;
      uVar13 = (ulong)(DAT_043dfd18 >> 1);
      uVar12 = uVar13;
      if (!bVar9) {
        uVar12 = DAT_043dfd20;
      }
      uVar16 = DAT_043dfd20;
    } while (uVar12 != 0);
    uVar22 = uVar21 & 1;
  }
  if (uVar22 != 0) {
    uVar13 = uVar16;
  }
  pbVar23 = &DAT_043dfd19;
  if (uVar22 != 0) {
    pbVar23 = DAT_043dfd28;
  }
  sVar1 = CONCAT44(_DAT_043dfd44,ram0x043dfd40);
  if ((DAT_043dfd38 & 1) == 0) {
    sVar1 = (ulong)(DAT_043dfd38 >> 1);
    pbVar17 = (byte *)&DAT_043dfd39;
  }
  else {
    pbVar17 = DAT_043dfd48;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
    goto LAB_0226edb4;
  }
  if ((long)sVar1 <= (long)uVar13) {
    bVar2 = *pbVar17;
    pbVar20 = pbVar23 + uVar13;
    pbVar14 = pbVar23;
    uVar12 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar12 - sVar1) ||
         (pbVar14 = memchr(pbVar14,(uint)bVar2,(uVar12 - sVar1) + 1), pbVar14 == (byte *)0x0))
      break;
      iVar10 = memcmp(pbVar14,pbVar17,sVar1);
      if (iVar10 == 0) goto LAB_0226f02c;
      pbVar14 = pbVar14 + 1;
      uVar12 = (long)pbVar20 - (long)pbVar14;
    } while ((long)sVar1 <= (long)uVar12);
  }
LAB_0226ecc0:
  sVar1 = CONCAT26(_DAT_043dfd5e,CONCAT51(_DAT_043dfd59,DAT_043dfd51._7_1_));
  pbVar17 = (byte *)CONCAT17(DAT_043dfd60._7_1_,
                             CONCAT16(DAT_043dfd60._6_1_,
                                      CONCAT51(DAT_043dfd60._1_5_,(char)DAT_043dfd60)));
  if ((DAT_043dfd50 & 1) == 0) {
    pbVar17 = (byte *)&DAT_043dfd51;
    sVar1 = (ulong)(DAT_043dfd50 >> 1);
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_0226ee64;
  }
  if ((long)sVar1 <= (long)uVar13) {
    bVar2 = *pbVar17;
    pbVar20 = pbVar23 + uVar13;
    pbVar14 = pbVar23;
    do {
      if (0xfffffffffffffffe < uVar13 - sVar1) {
        return;
      }
      pbVar14 = memchr(pbVar14,(uint)bVar2,(uVar13 - sVar1) + 1);
      if (pbVar14 == (byte *)0x0) {
        return;
      }
      iVar10 = memcmp(pbVar14,pbVar17,sVar1);
      if (iVar10 == 0) {
        if (pbVar14 == pbVar20) {
          return;
        }
        do {
          uVar13 = (long)pbVar14 - (long)pbVar23;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_0226ee64:
          while( true ) {
            std::string::erase(0x43dfd18,uVar13);
            bVar9 = (_DAT_043dfd18 & 1) != 0;
            uVar13 = _DAT_043dfd18 >> 1 & 0x7f;
            if (bVar9) {
              uVar13 = DAT_043dfd20;
            }
            sVar1 = CONCAT26(_DAT_043dfd5e,CONCAT51(_DAT_043dfd59,DAT_043dfd51._7_1_));
            pbVar17 = (byte *)CONCAT17(DAT_043dfd60._7_1_,
                                       CONCAT16(DAT_043dfd60._6_1_,
                                                CONCAT51(DAT_043dfd60._1_5_,(char)DAT_043dfd60)));
            pbVar23 = DAT_043dfd28;
            if (!bVar9) {
              pbVar23 = &DAT_043dfd19;
            }
            if ((DAT_043dfd50 & 1) == 0) {
              pbVar17 = (byte *)&DAT_043dfd51;
              sVar1 = (ulong)(DAT_043dfd50 >> 1);
            }
            if (sVar1 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar1) {
            return;
          }
          bVar2 = *pbVar17;
          pbVar20 = pbVar23 + uVar13;
          pbVar14 = pbVar23;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar1) {
              return;
            }
            pbVar14 = memchr(pbVar14,(uint)bVar2,(uVar13 - sVar1) + 1);
            if (pbVar14 == (byte *)0x0) {
              return;
            }
            iVar10 = memcmp(pbVar14,pbVar17,sVar1);
            if (iVar10 == 0) break;
            pbVar14 = pbVar14 + 1;
            uVar13 = (long)pbVar20 - (long)pbVar14;
            if ((long)uVar13 < (long)sVar1) {
              return;
            }
          }
          if (pbVar14 == pbVar20) {
            return;
          }
        } while( true );
      }
      pbVar14 = pbVar14 + 1;
      uVar13 = (long)pbVar20 - (long)pbVar14;
    } while ((long)sVar1 <= (long)uVar13);
  }
  return;
LAB_0226f02c:
  if ((pbVar14 == pbVar20) || (uVar12 = (long)pbVar14 - (long)pbVar23, uVar12 == 0xffffffffffffffff)
     ) goto LAB_0226ecc0;
LAB_0226edb4:
  while( true ) {
    std::string::erase(0x43dfd18,uVar12);
    bVar9 = (_DAT_043dfd18 & 1) == 0;
    pbVar23 = DAT_043dfd28;
    if (bVar9) {
      pbVar23 = &DAT_043dfd19;
    }
    sVar1 = CONCAT44(_DAT_043dfd44,ram0x043dfd40);
    uVar13 = _DAT_043dfd18 >> 1 & 0x7f;
    if (!bVar9) {
      uVar13 = DAT_043dfd20;
    }
    if ((DAT_043dfd38 & 1) == 0) {
      sVar1 = (ulong)(DAT_043dfd38 >> 1);
      pbVar17 = (byte *)&DAT_043dfd39;
    }
    else {
      pbVar17 = DAT_043dfd48;
    }
    if (sVar1 != 0) break;
    uVar12 = 0;
  }
  if ((long)uVar13 < (long)sVar1) goto LAB_0226ecc0;
  bVar2 = *pbVar17;
  pbVar20 = pbVar23 + uVar13;
  pbVar14 = pbVar23;
  uVar12 = uVar13;
  while( true ) {
    if ((0xfffffffffffffffe < uVar12 - sVar1) ||
       (pbVar14 = memchr(pbVar14,(uint)bVar2,(uVar12 - sVar1) + 1), pbVar14 == (byte *)0x0))
    goto LAB_0226ecc0;
    iVar10 = memcmp(pbVar14,pbVar17,sVar1);
    if (iVar10 == 0) break;
    pbVar14 = pbVar14 + 1;
    uVar12 = (long)pbVar20 - (long)pbVar14;
    if ((long)uVar12 < (long)sVar1) goto LAB_0226ecc0;
  }
  goto LAB_0226f02c;
}


