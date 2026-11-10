/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01077da0; name: FUN_01077da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01077da0(void)

{
  size_t sVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  
  if (((DAT_043b9dc8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b9dc8), iVar11 != 0)) {
    DAT_043b9d98 = 0x16;
    DAT_043b9da8 = (byte *)0x0;
    DAT_043b9d99._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b9da0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b9db0 = 0x2a;
    _DAT_043b9da4 = 0;
    DAT_043b9dc0._7_1_ = 0;
    DAT_043b9dc0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b9dc0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b9dc0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b9dc0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b9dc0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b9db9 = s__anonymous_namespace__039071f8[8];
    DAT_043b9db9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b9db9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b9db9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b9db9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b9dbe = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b9dc0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b9db1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b9db1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b9dc0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b9d98,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b9dc8);
  }
  plVar9 = DAT_043f1798;
  lVar19 = tpidr_el0;
  plVar16 = *(long **)(lVar19 + 0x20);
  if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar3 = s_std__string_sol__detail__ctti_ge_039b49a0._104_8_;
  _DAT_043b9d78 = 0x81;
  DAT_043b9d80 = 0x7e;
  DAT_043b9d88 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_039b49a0._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar3;
  uVar3 = CONCAT62(s_std__string_sol__detail__ctti_ge_039b49a0._120_6_,
                   s_std__string_sol__detail__ctti_ge_039b49a0._118_2_);
  *(ulong *)(pcVar12 + 0x70) =
       CONCAT26(s_std__string_sol__detail__ctti_ge_039b49a0._118_2_,
                s_std__string_sol__detail__ctti_ge_039b49a0._112_6_);
  uVar8 = s_std__string_sol__detail__ctti_ge_039b49a0._88_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_039b49a0._80_8_;
  *(undefined8 *)(pcVar12 + 0x76) = uVar3;
  uVar6 = s_std__string_sol__detail__ctti_ge_039b49a0._72_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_039b49a0._64_8_;
  *(undefined8 *)(pcVar12 + 0x50) = uVar7;
  *(undefined8 *)(pcVar12 + 0x58) = uVar8;
  *(undefined8 *)(pcVar12 + 0x40) = uVar3;
  *(undefined8 *)(pcVar12 + 0x48) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_039b49a0._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039b49a0._48_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_039b49a0._40_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_std__string_sol__detail__ctti_ge_039b49a0._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar3;
  *(undefined8 *)(pcVar12 + 0x30) = uVar6;
  *(undefined8 *)(pcVar12 + 0x38) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_039b49a0._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_039b49a0._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039b49a0._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_039b49a0._0_8_;
  pcVar12[0x7e] = '\0';
  *(undefined8 *)pcVar12 = uVar3;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  *(undefined8 *)(pcVar12 + 0x10) = uVar7;
  *(undefined8 *)(pcVar12 + 0x18) = uVar8;
  std::string::find('x',0x5b);
  uVar13 = std::string::find('x',0x3d);
  uVar14 = std::string::rfind('x',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043b9d78 & 1) == 0) {
      uVar14 = (ulong)(DAT_043b9d78 >> 1);
    }
    else {
      uVar14 = DAT_043b9d80;
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
    if ((_DAT_043b9d78 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b9d78 >> 1);
    }
    else {
      uVar13 = DAT_043b9d80;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b9d78,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043b9d78);
  if ((_DAT_043b9d78 & 1) != 0) {
    *DAT_043b9d88 = '\0';
    plVar9 = DAT_043f1798;
    pcVar12 = (char *)DAT_043b9d88;
    DAT_043b9d80 = 0;
    if (((_DAT_043b9d78 & 1) != 0) && (DAT_043b9d88 != (byte *)0x0)) {
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
          goto LAB_01077fdc;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,pcVar12,0,8);
    }
  }
LAB_01077fdc:
  uVar14 = local_78 >> 1 & 0x7f;
  uVar22 = (uint)local_78 & 0xff;
  _DAT_043b9d78 = local_78;
  DAT_043b9d80 = uStack_70;
  uVar23 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar14;
    pbVar24 = &DAT_043b9d79;
  }
  else {
    pbVar24 = local_68;
  }
  DAT_043b9d88 = local_68;
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
              std::string::erase(0x43b9d78,(ulong)(pbVar18 + (~(ulong)pbVar24 - 0xd) + -2));
              uVar22 = (uint)DAT_043b9d78;
              uVar23 = DAT_043b9d78 & 1;
              uVar14 = (ulong)(DAT_043b9d78 >> 1);
            }
            goto LAB_010780b0;
          }
          lVar4 = lVar20 + -2;
          lVar5 = lVar20 + 0xc;
          lVar20 = lVar20 + -1;
        } while (pbVar18[lVar4] == "seperator_mark"[lVar5]);
      }
      pbVar18 = pbVar18 + -1;
      lVar19 = lVar19 + 1;
    }
  }
LAB_010780b0:
  pbVar24 = DAT_043b9d88;
  uVar17 = DAT_043b9d80;
  bVar10 = uVar23 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = DAT_043b9d80;
  }
  if (uVar13 != 0) {
    pbVar18 = &DAT_043b9d79;
    if (uVar23 != 0) {
      pbVar18 = DAT_043b9d88;
    }
    iVar11 = isblank((uint)*pbVar18);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      uVar14 = (ulong)(uVar22 >> 1);
    }
    else {
      do {
        pbVar15 = &DAT_043b9d79;
        if (!bVar10) {
          pbVar15 = pbVar24;
        }
        std::string::erase(0x43b9d78,(long)pbVar15 - (long)pbVar18);
        pbVar24 = DAT_043b9d88;
        uVar17 = DAT_043b9d80;
        uVar22 = (uint)DAT_043b9d78;
        bVar10 = (_DAT_043b9d78 & 1) == 0;
        uVar14 = (ulong)(DAT_043b9d78 >> 1);
        uVar23 = DAT_043b9d78 & 1;
        uVar13 = uVar14;
        if (!bVar10) {
          uVar13 = DAT_043b9d80;
        }
        if (uVar13 == 0) break;
        pbVar18 = &DAT_043b9d79;
        if ((_DAT_043b9d78 & 1) != 0) {
          pbVar18 = DAT_043b9d88;
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
    pbVar24 = &DAT_043b9d79;
    if (!bVar10) {
      uVar13 = uVar17;
      pbVar24 = DAT_043b9d88;
    }
    iVar11 = isblank((uint)pbVar24[uVar13 - 1]);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      break;
    }
    FUN_01050c5c(&DAT_043b9d78);
    uVar22 = (uint)DAT_043b9d78;
    bVar10 = (_DAT_043b9d78 & 1) == 0;
    uVar23 = DAT_043b9d78 & 1;
    uVar14 = (ulong)(DAT_043b9d78 >> 1);
    uVar17 = DAT_043b9d80;
    uVar13 = uVar14;
    if (!bVar10) {
      uVar13 = DAT_043b9d80;
    }
  }
  if (uVar23 != 0) {
    uVar14 = uVar17;
  }
  pbVar24 = &DAT_043b9d79;
  if (uVar23 != 0) {
    pbVar24 = DAT_043b9d88;
  }
  sVar1 = CONCAT44(_DAT_043b9da4,ram0x043b9da0);
  if ((DAT_043b9d98 & 1) == 0) {
    sVar1 = (ulong)(DAT_043b9d98 >> 1);
    pbVar18 = (byte *)&DAT_043b9d99;
  }
  else {
    pbVar18 = DAT_043b9da8;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_01078318;
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
      if (iVar11 == 0) goto LAB_010784d8;
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar13);
  }
LAB_010781dc:
  sVar1 = CONCAT26(_DAT_043b9dbe,CONCAT51(_DAT_043b9db9,DAT_043b9db1._7_1_));
  pbVar18 = (byte *)CONCAT17(DAT_043b9dc0._7_1_,
                             CONCAT16(DAT_043b9dc0._6_1_,
                                      CONCAT51(DAT_043b9dc0._1_5_,(char)DAT_043b9dc0)));
  if ((DAT_043b9db0 & 1) == 0) {
    pbVar18 = (byte *)&DAT_043b9db1;
    sVar1 = (ulong)(DAT_043b9db0 >> 1);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_010783c8;
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
LAB_010783c8:
          while( true ) {
            std::string::erase(0x43b9d78,uVar14);
            bVar10 = (_DAT_043b9d78 & 1) != 0;
            uVar14 = _DAT_043b9d78 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043b9d80;
            }
            sVar1 = CONCAT26(_DAT_043b9dbe,CONCAT51(_DAT_043b9db9,DAT_043b9db1._7_1_));
            pbVar18 = (byte *)CONCAT17(DAT_043b9dc0._7_1_,
                                       CONCAT16(DAT_043b9dc0._6_1_,
                                                CONCAT51(DAT_043b9dc0._1_5_,(char)DAT_043b9dc0)));
            pbVar24 = DAT_043b9d88;
            if (!bVar10) {
              pbVar24 = &DAT_043b9d79;
            }
            if ((DAT_043b9db0 & 1) == 0) {
              pbVar18 = (byte *)&DAT_043b9db1;
              sVar1 = (ulong)(DAT_043b9db0 >> 1);
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
LAB_010784d8:
  if ((pbVar15 == pbVar21) || (uVar13 = (long)pbVar15 - (long)pbVar24, uVar13 == 0xffffffffffffffff)
     ) goto LAB_010781dc;
LAB_01078318:
  while( true ) {
    std::string::erase(0x43b9d78,uVar13);
    bVar10 = (_DAT_043b9d78 & 1) == 0;
    pbVar24 = DAT_043b9d88;
    if (bVar10) {
      pbVar24 = &DAT_043b9d79;
    }
    sVar1 = CONCAT44(_DAT_043b9da4,ram0x043b9da0);
    uVar14 = _DAT_043b9d78 >> 1 & 0x7f;
    if (!bVar10) {
      uVar14 = DAT_043b9d80;
    }
    if ((DAT_043b9d98 & 1) == 0) {
      sVar1 = (ulong)(DAT_043b9d98 >> 1);
      pbVar18 = (byte *)&DAT_043b9d99;
    }
    else {
      pbVar18 = DAT_043b9da8;
    }
    if (sVar1 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar1) goto LAB_010781dc;
  bVar2 = *pbVar18;
  pbVar21 = pbVar24 + uVar14;
  pbVar15 = pbVar24;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar1) ||
       (pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar13 - sVar1) + 1), pbVar15 == (byte *)0x0))
    goto LAB_010781dc;
    iVar11 = memcmp(pbVar15,pbVar18,sVar1);
    if (iVar11 == 0) break;
    pbVar15 = pbVar15 + 1;
    uVar13 = (long)pbVar21 - (long)pbVar15;
    if ((long)uVar13 < (long)sVar1) goto LAB_010781dc;
  }
  goto LAB_010784d8;
}


