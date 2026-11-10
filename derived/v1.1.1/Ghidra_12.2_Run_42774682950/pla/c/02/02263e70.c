/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02263e70; name: FUN_02263e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02263e70(void)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043df778 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043df778), iVar11 != 0)) {
    DAT_043df748 = 0x16;
    DAT_043df758 = (byte *)0x0;
    DAT_043df749._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043df750 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043df760 = 0x2a;
    _DAT_043df754 = 0;
    DAT_043df770._7_1_ = 0;
    DAT_043df770._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043df770._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043df770._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043df770._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043df770._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043df769 = s__anonymous_namespace__039071f8[8];
    DAT_043df769_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043df769_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043df769_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043df769_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043df76e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043df770._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043df761._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043df761._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043df770._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043df748,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df778);
  }
  plVar9 = DAT_043f1798;
  lVar19 = tpidr_el0;
  plVar16 = *(long **)(lVar19 + 0x20);
  if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x70,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_0389c9ee._24_8_;
  _DAT_043df728 = 0x71;
  DAT_043df730 = 0x62;
  DAT_043df738 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_0389c9ee._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_0389c9ee._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0389c9ee._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389c9ee._8_8_;
  *(undefined8 *)pcVar12 = s_std__string_sol__detail__ctti_ge_0389c9ee._0_8_;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389c9ee._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_0389c9ee._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar5;
  *(undefined8 *)(pcVar12 + 0x20) = uVar6;
  *(undefined8 *)(pcVar12 + 0x28) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0389c9ee._88_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0389c9ee._80_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0389c9ee._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389c9ee._64_8_;
  pcVar12[0x62] = '\0';
  *(undefined8 *)(pcVar12 + 0x50) = uVar7;
  *(undefined8 *)(pcVar12 + 0x58) = uVar8;
  *(undefined8 *)(pcVar12 + 0x40) = uVar5;
  *(undefined8 *)(pcVar12 + 0x48) = uVar6;
  pcVar12[0x60] = 't';
  pcVar12[0x61] = ']';
  std::string::find('(',0x5b);
  uVar13 = std::string::find('(',0x3d);
  uVar14 = std::string::rfind('(',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043df728 & 1) == 0) {
      uVar14 = (ulong)(DAT_043df728 >> 1);
    }
    else {
      uVar14 = DAT_043df730;
    }
    uVar17 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar17 = uVar13;
    }
    uVar13 = uVar14;
  }
  else {
    uVar17 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar17 = uVar13;
    }
    if ((_DAT_043df728 & 1) == 0) {
      uVar13 = (ulong)(DAT_043df728 >> 1);
    }
    else {
      uVar13 = DAT_043df730;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043df728,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043df728);
  if ((_DAT_043df728 & 1) != 0) {
    *DAT_043df738 = '\0';
    plVar9 = DAT_043f1798;
    pcVar12 = (char *)DAT_043df738;
    DAT_043df730 = 0;
    if (((_DAT_043df728 & 1) != 0) && (DAT_043df738 != (byte *)0x0)) {
      plVar16 = *(long **)(lVar19 + 0x20);
      if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
        *(long **)(lVar19 + 0x20) = DAT_043f1798;
        plVar16 = plVar9;
      }
      uVar14 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar14 & 1) != 0) {
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar19 + 0x38d480)) {
          FUN_02bcc824(plVar16,pcVar12,0,8);
          goto LAB_0226409c;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,pcVar12,0,8);
    }
  }
LAB_0226409c:
  uVar14 = local_78 >> 1 & 0x7f;
  uVar22 = (uint)local_78 & 0xff;
  _DAT_043df728 = local_78;
  DAT_043df730 = uStack_70;
  uVar23 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar14;
    pbVar24 = &DAT_043df729;
  }
  else {
    pbVar24 = local_68;
  }
  DAT_043df738 = local_68;
  if (0xd < (long)uStack_70) {
    pbVar18 = pbVar24 + uStack_70;
    lVar19 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (pbVar24[uStack_70] == 0x6b) {
        lVar20 = 0;
        do {
          if (lVar20 == -0xd) {
            if ((lVar19 != -0xd) &&
               (pbVar18 + (~(ulong)pbVar24 - 0xd) != (byte *)0xffffffffffffffff)) {
              std::string::erase(0x43df728,(ulong)(pbVar18 + (~(ulong)pbVar24 - 0xd) + -2));
              uVar22 = (uint)DAT_043df728;
              uVar23 = DAT_043df728 & 1;
              uVar14 = (ulong)(DAT_043df728 >> 1);
            }
            goto LAB_02264170;
          }
          lVar3 = lVar20 + -2;
          lVar4 = lVar20 + 0xc;
          lVar20 = lVar20 + -1;
        } while (pbVar18[lVar3] == "seperator_mark"[lVar4]);
      }
      pbVar18 = pbVar18 + -1;
      lVar19 = lVar19 + 1;
    }
  }
LAB_02264170:
  pbVar24 = DAT_043df738;
  uVar17 = DAT_043df730;
  bVar10 = uVar23 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = DAT_043df730;
  }
  if (uVar13 != 0) {
    pbVar18 = &DAT_043df729;
    if (uVar23 != 0) {
      pbVar18 = DAT_043df738;
    }
    iVar11 = isblank((uint)*pbVar18);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      uVar14 = (ulong)(uVar22 >> 1);
    }
    else {
      do {
        pbVar15 = &DAT_043df729;
        if (!bVar10) {
          pbVar15 = pbVar24;
        }
        std::string::erase(0x43df728,(long)pbVar15 - (long)pbVar18);
        pbVar24 = DAT_043df738;
        uVar17 = DAT_043df730;
        uVar22 = (uint)DAT_043df728;
        bVar10 = (_DAT_043df728 & 1) == 0;
        uVar14 = (ulong)(DAT_043df728 >> 1);
        uVar23 = DAT_043df728 & 1;
        uVar13 = uVar14;
        if (!bVar10) {
          uVar13 = DAT_043df730;
        }
        if (uVar13 == 0) break;
        pbVar18 = &DAT_043df729;
        if ((_DAT_043df728 & 1) != 0) {
          pbVar18 = DAT_043df738;
        }
        iVar11 = isblank((uint)*pbVar18);
      } while (iVar11 != 0);
    }
  }
  bVar10 = uVar23 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = uVar17;
  }
  while (uVar13 != 0) {
    uVar14 = (ulong)(uVar22 >> 1);
    uVar13 = uVar14;
    pbVar24 = &DAT_043df729;
    if (!bVar10) {
      uVar13 = uVar17;
      pbVar24 = DAT_043df738;
    }
    iVar11 = isblank((uint)pbVar24[uVar13 - 1]);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      break;
    }
    FUN_02264674(&DAT_043df728);
    uVar22 = (uint)DAT_043df728;
    bVar10 = (_DAT_043df728 & 1) == 0;
    uVar23 = DAT_043df728 & 1;
    uVar14 = (ulong)(DAT_043df728 >> 1);
    uVar17 = DAT_043df730;
    uVar13 = uVar14;
    if (!bVar10) {
      uVar13 = DAT_043df730;
    }
  }
  if (uVar23 != 0) {
    uVar14 = uVar17;
  }
  pbVar24 = &DAT_043df729;
  if (uVar23 != 0) {
    pbVar24 = DAT_043df738;
  }
  sVar1 = CONCAT44(_DAT_043df754,ram0x043df750);
  if ((DAT_043df748 & 1) == 0) {
    sVar1 = (ulong)(DAT_043df748 >> 1);
    pbVar18 = (byte *)&DAT_043df749;
  }
  else {
    pbVar18 = DAT_043df758;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_022643cc;
  }
  if ((long)sVar1 <= (long)uVar14) {
    bVar2 = *pbVar18;
    pbVar21 = pbVar24 + uVar14;
    pbVar15 = pbVar24;
    uVar13 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar1) ||
         (pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar13 - sVar1) + 1), pbVar15 == (byte *)0x0))
      break;
      iVar11 = memcmp(pbVar15,pbVar18,sVar1);
      if (iVar11 == 0) goto LAB_02264598;
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar13);
  }
LAB_0226429c:
  sVar1 = CONCAT26(_DAT_043df76e,CONCAT51(_DAT_043df769,DAT_043df761._7_1_));
  pbVar18 = (byte *)CONCAT17(DAT_043df770._7_1_,
                             CONCAT16(DAT_043df770._6_1_,
                                      CONCAT51(DAT_043df770._1_5_,(char)DAT_043df770)));
  if ((DAT_043df760 & 1) == 0) {
    pbVar18 = (byte *)&DAT_043df761;
    sVar1 = (ulong)(DAT_043df760 >> 1);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_0226447c;
  }
  if ((long)sVar1 <= (long)uVar14) {
    bVar2 = *pbVar18;
    pbVar21 = pbVar24 + uVar14;
    pbVar15 = pbVar24;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar1) {
        return;
      }
      pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar14 - sVar1) + 1);
      if (pbVar15 == (byte *)0x0) {
        return;
      }
      iVar11 = memcmp(pbVar15,pbVar18,sVar1);
      if (iVar11 == 0) {
        if (pbVar15 == pbVar21) {
          return;
        }
        do {
          uVar14 = (long)pbVar15 - (long)pbVar24;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_0226447c:
          while( true ) {
            std::string::erase(0x43df728,uVar14);
            bVar10 = (_DAT_043df728 & 1) != 0;
            uVar14 = _DAT_043df728 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043df730;
            }
            sVar1 = CONCAT26(_DAT_043df76e,CONCAT51(_DAT_043df769,DAT_043df761._7_1_));
            pbVar18 = (byte *)CONCAT17(DAT_043df770._7_1_,
                                       CONCAT16(DAT_043df770._6_1_,
                                                CONCAT51(DAT_043df770._1_5_,(char)DAT_043df770)));
            pbVar24 = DAT_043df738;
            if (!bVar10) {
              pbVar24 = &DAT_043df729;
            }
            if ((DAT_043df760 & 1) == 0) {
              pbVar18 = (byte *)&DAT_043df761;
              sVar1 = (ulong)(DAT_043df760 >> 1);
            }
            if (sVar1 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar1) {
            return;
          }
          bVar2 = *pbVar18;
          pbVar21 = pbVar24 + uVar14;
          pbVar15 = pbVar24;
          while( true ) {
            if (0xfffffffffffffffe < uVar14 - sVar1) {
              return;
            }
            pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar14 - sVar1) + 1);
            if (pbVar15 == (byte *)0x0) {
              return;
            }
            iVar11 = memcmp(pbVar15,pbVar18,sVar1);
            if (iVar11 == 0) break;
            pbVar15 = pbVar15 + 1;
            uVar14 = (long)pbVar21 - (long)pbVar15;
            if ((long)uVar14 < (long)sVar1) {
              return;
            }
          }
          if (pbVar15 == pbVar21) {
            return;
          }
        } while( true );
      }
      pbVar15 = pbVar15 + 1;
      uVar14 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar14);
  }
  return;
LAB_02264598:
  if ((pbVar15 == pbVar21) || (uVar13 = (long)pbVar15 - (long)pbVar24, uVar13 == 0xffffffffffffffff)
     ) goto LAB_0226429c;
LAB_022643cc:
  while( true ) {
    std::string::erase(0x43df728,uVar13);
    bVar10 = (_DAT_043df728 & 1) == 0;
    pbVar24 = DAT_043df738;
    if (bVar10) {
      pbVar24 = &DAT_043df729;
    }
    sVar1 = CONCAT44(_DAT_043df754,ram0x043df750);
    uVar14 = _DAT_043df728 >> 1 & 0x7f;
    if (!bVar10) {
      uVar14 = DAT_043df730;
    }
    if ((DAT_043df748 & 1) == 0) {
      sVar1 = (ulong)(DAT_043df748 >> 1);
      pbVar18 = (byte *)&DAT_043df749;
    }
    else {
      pbVar18 = DAT_043df758;
    }
    if (sVar1 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar1) goto LAB_0226429c;
  bVar2 = *pbVar18;
  pbVar21 = pbVar24 + uVar14;
  pbVar15 = pbVar24;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar1) ||
       (pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar13 - sVar1) + 1), pbVar15 == (byte *)0x0))
    goto LAB_0226429c;
    iVar11 = memcmp(pbVar15,pbVar18,sVar1);
    if (iVar11 == 0) break;
    pbVar15 = pbVar15 + 1;
    uVar13 = (long)pbVar21 - (long)pbVar15;
    if ((long)uVar13 < (long)sVar1) goto LAB_0226429c;
  }
  goto LAB_02264598;
}


