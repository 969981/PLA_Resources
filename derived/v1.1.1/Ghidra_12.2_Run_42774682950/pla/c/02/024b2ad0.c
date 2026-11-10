/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024b2ad0; name: FUN_024b2ad0
 */


/* WARNING: Removing unreachable block (ram,0x024b32b4) */
/* WARNING: Removing unreachable block (ram,0x024b32a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024b2ad0(void)

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
  
  if (((DAT_043e71c0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e71c0), iVar11 != 0)) {
    DAT_043e7190 = 0x16;
    DAT_043e71a0 = (byte *)0x0;
    DAT_043e7191._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e7198 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e71a8 = 0x2a;
    _DAT_043e719c = 0;
    DAT_043e71b8._7_1_ = 0;
    DAT_043e71b8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e71b8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e71b8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e71b8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e71b8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e71b1 = s__anonymous_namespace__039071f8[8];
    DAT_043e71b1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e71b1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e71b1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e71b1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e71b6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e71b8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e71a9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e71a9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e71b8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e7190,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e71c0);
  }
  plVar9 = DAT_043f1798;
  lVar19 = tpidr_el0;
  plVar16 = *(long **)(lVar19 + 0x20);
  if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar3 = s_std__string_sol__detail__ctti_ge_0390cc38._104_8_;
  _DAT_043e7170 = 0x81;
  DAT_043e7178 = 0x7f;
  DAT_043e7180 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_0390cc38._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar3;
  uVar3 = CONCAT71(s_std__string_sol__detail__ctti_ge_0390cc38._120_7_,
                   s_std__string_sol__detail__ctti_ge_0390cc38[0x77]);
  *(ulong *)(pcVar12 + 0x70) =
       CONCAT17(s_std__string_sol__detail__ctti_ge_0390cc38[0x77],
                s_std__string_sol__detail__ctti_ge_0390cc38._112_7_);
  uVar8 = s_std__string_sol__detail__ctti_ge_0390cc38._88_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390cc38._80_8_;
  *(undefined8 *)(pcVar12 + 0x77) = uVar3;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390cc38._72_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0390cc38._64_8_;
  *(undefined8 *)(pcVar12 + 0x50) = uVar7;
  *(undefined8 *)(pcVar12 + 0x58) = uVar8;
  *(undefined8 *)(pcVar12 + 0x40) = uVar3;
  *(undefined8 *)(pcVar12 + 0x48) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390cc38._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390cc38._48_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0390cc38._40_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_std__string_sol__detail__ctti_ge_0390cc38._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar3;
  *(undefined8 *)(pcVar12 + 0x30) = uVar6;
  *(undefined8 *)(pcVar12 + 0x38) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0390cc38._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390cc38._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390cc38._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0390cc38._0_8_;
  pcVar12[0x7f] = '\0';
  *(undefined8 *)pcVar12 = uVar3;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  *(undefined8 *)(pcVar12 + 0x10) = uVar7;
  *(undefined8 *)(pcVar12 + 0x18) = uVar8;
  std::string::find('p',0x5b);
  uVar13 = std::string::find('p',0x3d);
  uVar14 = std::string::rfind('p',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043e7170 & 1) == 0) {
      uVar14 = (ulong)(DAT_043e7170 >> 1);
    }
    else {
      uVar14 = DAT_043e7178;
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
    if ((_DAT_043e7170 & 1) == 0) {
      uVar13 = (ulong)(DAT_043e7170 >> 1);
    }
    else {
      uVar13 = DAT_043e7178;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e7170,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043e7170);
  if ((_DAT_043e7170 & 1) != 0) {
    *DAT_043e7180 = '\0';
    plVar9 = DAT_043f1798;
    pcVar12 = (char *)DAT_043e7180;
    DAT_043e7178 = 0;
    if (((_DAT_043e7170 & 1) != 0) && (DAT_043e7180 != (byte *)0x0)) {
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
          goto LAB_024b2d18;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,pcVar12,0,8);
    }
  }
LAB_024b2d18:
  uVar14 = local_78 >> 1 & 0x7f;
  uVar22 = (uint)local_78 & 0xff;
  _DAT_043e7170 = local_78;
  DAT_043e7178 = uStack_70;
  uVar23 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar14;
    pbVar24 = &DAT_043e7171;
  }
  else {
    pbVar24 = local_68;
  }
  DAT_043e7180 = local_68;
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
              std::string::erase(0x43e7170,(ulong)(pbVar18 + (~(ulong)pbVar24 - 0xd) + -2));
              uVar22 = (uint)DAT_043e7170;
              uVar23 = DAT_043e7170 & 1;
              uVar14 = (ulong)(DAT_043e7170 >> 1);
            }
            goto LAB_024b2dec;
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
LAB_024b2dec:
  pbVar24 = DAT_043e7180;
  uVar17 = DAT_043e7178;
  bVar10 = uVar23 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = DAT_043e7178;
  }
  if (uVar13 != 0) {
    pbVar18 = &DAT_043e7171;
    if (uVar23 != 0) {
      pbVar18 = DAT_043e7180;
    }
    iVar11 = isblank((uint)*pbVar18);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      uVar14 = (ulong)(uVar22 >> 1);
    }
    else {
      do {
        pbVar15 = &DAT_043e7171;
        if (!bVar10) {
          pbVar15 = pbVar24;
        }
        std::string::erase(0x43e7170,(long)pbVar15 - (long)pbVar18);
        pbVar24 = DAT_043e7180;
        uVar17 = DAT_043e7178;
        uVar22 = (uint)DAT_043e7170;
        bVar10 = (_DAT_043e7170 & 1) == 0;
        uVar14 = (ulong)(DAT_043e7170 >> 1);
        uVar23 = DAT_043e7170 & 1;
        uVar13 = uVar14;
        if (!bVar10) {
          uVar13 = DAT_043e7178;
        }
        if (uVar13 == 0) break;
        pbVar18 = &DAT_043e7171;
        if ((_DAT_043e7170 & 1) != 0) {
          pbVar18 = DAT_043e7180;
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
  if (uVar13 != 0) {
    do {
      uVar14 = (ulong)(uVar22 >> 1);
      uVar13 = uVar14;
      pbVar24 = &DAT_043e7171;
      if (!bVar10) {
        uVar13 = uVar17;
        pbVar24 = DAT_043e7180;
      }
      iVar11 = isblank((uint)pbVar24[uVar13 - 1]);
      if (iVar11 == 0) break;
      FUN_024a7ca8(&DAT_043e7170);
      uVar22 = (uint)DAT_043e7170;
      bVar10 = (_DAT_043e7170 & 1) == 0;
      uVar14 = (ulong)(DAT_043e7170 >> 1);
      uVar13 = uVar14;
      if (!bVar10) {
        uVar13 = DAT_043e7178;
      }
      uVar17 = DAT_043e7178;
    } while (uVar13 != 0);
    uVar23 = uVar22 & 1;
  }
  if (uVar23 != 0) {
    uVar14 = uVar17;
  }
  pbVar24 = &DAT_043e7171;
  if (uVar23 != 0) {
    pbVar24 = DAT_043e7180;
  }
  sVar1 = CONCAT44(_DAT_043e719c,ram0x043e7198);
  if ((DAT_043e7190 & 1) == 0) {
    sVar1 = (ulong)(DAT_043e7190 >> 1);
    pbVar18 = (byte *)&DAT_043e7191;
  }
  else {
    pbVar18 = DAT_043e71a0;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_024b3040;
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
      if (iVar11 == 0) goto LAB_024b32b8;
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar13);
  }
LAB_024b2f48:
  sVar1 = CONCAT26(_DAT_043e71b6,CONCAT51(_DAT_043e71b1,DAT_043e71a9._7_1_));
  pbVar18 = (byte *)CONCAT17(DAT_043e71b8._7_1_,
                             CONCAT16(DAT_043e71b8._6_1_,
                                      CONCAT51(DAT_043e71b8._1_5_,(char)DAT_043e71b8)));
  if ((DAT_043e71a8 & 1) == 0) {
    pbVar18 = (byte *)&DAT_043e71a9;
    sVar1 = (ulong)(DAT_043e71a8 >> 1);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_024b30f0;
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
LAB_024b30f0:
          while( true ) {
            std::string::erase(0x43e7170,uVar14);
            bVar10 = (_DAT_043e7170 & 1) != 0;
            uVar14 = _DAT_043e7170 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043e7178;
            }
            sVar1 = CONCAT26(_DAT_043e71b6,CONCAT51(_DAT_043e71b1,DAT_043e71a9._7_1_));
            pbVar18 = (byte *)CONCAT17(DAT_043e71b8._7_1_,
                                       CONCAT16(DAT_043e71b8._6_1_,
                                                CONCAT51(DAT_043e71b8._1_5_,(char)DAT_043e71b8)));
            pbVar24 = DAT_043e7180;
            if (!bVar10) {
              pbVar24 = &DAT_043e7171;
            }
            if ((DAT_043e71a8 & 1) == 0) {
              pbVar18 = (byte *)&DAT_043e71a9;
              sVar1 = (ulong)(DAT_043e71a8 >> 1);
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
LAB_024b32b8:
  if ((pbVar15 == pbVar21) || (uVar13 = (long)pbVar15 - (long)pbVar24, uVar13 == 0xffffffffffffffff)
     ) goto LAB_024b2f48;
LAB_024b3040:
  while( true ) {
    std::string::erase(0x43e7170,uVar13);
    bVar10 = (_DAT_043e7170 & 1) == 0;
    pbVar24 = DAT_043e7180;
    if (bVar10) {
      pbVar24 = &DAT_043e7171;
    }
    sVar1 = CONCAT44(_DAT_043e719c,ram0x043e7198);
    uVar14 = _DAT_043e7170 >> 1 & 0x7f;
    if (!bVar10) {
      uVar14 = DAT_043e7178;
    }
    if ((DAT_043e7190 & 1) == 0) {
      sVar1 = (ulong)(DAT_043e7190 >> 1);
      pbVar18 = (byte *)&DAT_043e7191;
    }
    else {
      pbVar18 = DAT_043e71a0;
    }
    if (sVar1 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar1) goto LAB_024b2f48;
  bVar2 = *pbVar18;
  pbVar21 = pbVar24 + uVar14;
  pbVar15 = pbVar24;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar1) ||
       (pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar13 - sVar1) + 1), pbVar15 == (byte *)0x0))
    goto LAB_024b2f48;
    iVar11 = memcmp(pbVar15,pbVar18,sVar1);
    if (iVar11 == 0) break;
    pbVar15 = pbVar15 + 1;
    uVar13 = (long)pbVar21 - (long)pbVar15;
    if ((long)uVar13 < (long)sVar1) goto LAB_024b2f48;
  }
  goto LAB_024b32b8;
}


