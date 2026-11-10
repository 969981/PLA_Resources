/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024c1a20; name: FUN_024c1a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024c1a20(void)

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
  
  if (((DAT_043e7610 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e7610), iVar11 != 0)) {
    DAT_043e75e0 = 0x16;
    DAT_043e75f0 = (byte *)0x0;
    DAT_043e75e1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e75e8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e75f8 = 0x2a;
    _DAT_043e75ec = 0;
    DAT_043e7608._7_1_ = 0;
    DAT_043e7608._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e7608._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e7608._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e7608._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e7608._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e7601 = s__anonymous_namespace__039071f8[8];
    DAT_043e7601_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e7601_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e7601_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e7601_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e7606 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e7608._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e75f9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e75f9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e7608._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e75e0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7610);
  }
  plVar9 = DAT_043f1798;
  lVar19 = tpidr_el0;
  plVar16 = *(long **)(lVar19 + 0x20);
  if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x70,8);
  uVar3 = s_std__string_sol__detail__ctti_ge_0399e5c1._88_8_;
  _DAT_043e75c0 = 0x71;
  DAT_043e75c8 = 0x6d;
  DAT_043e75d0 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_0399e5c1._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar3;
  uVar3 = CONCAT53(s_std__string_sol__detail__ctti_ge_0399e5c1._104_5_,
                   s_std__string_sol__detail__ctti_ge_0399e5c1._101_3_);
  *(ulong *)(pcVar12 + 0x60) =
       CONCAT35(s_std__string_sol__detail__ctti_ge_0399e5c1._101_3_,
                s_std__string_sol__detail__ctti_ge_0399e5c1._96_5_);
  uVar8 = s_std__string_sol__detail__ctti_ge_0399e5c1._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0399e5c1._64_8_;
  *(undefined8 *)(pcVar12 + 0x65) = uVar3;
  uVar6 = s_std__string_sol__detail__ctti_ge_0399e5c1._56_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0399e5c1._48_8_;
  *(undefined8 *)(pcVar12 + 0x40) = uVar7;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  *(undefined8 *)(pcVar12 + 0x30) = uVar3;
  *(undefined8 *)(pcVar12 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0399e5c1._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0399e5c1._32_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0399e5c1._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_0399e5c1._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar3;
  *(undefined8 *)(pcVar12 + 0x20) = uVar6;
  *(undefined8 *)(pcVar12 + 0x28) = uVar7;
  uVar6 = s_std__string_sol__detail__ctti_ge_0399e5c1._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0399e5c1._0_8_;
  pcVar12[0x6d] = '\0';
  *(undefined8 *)pcVar12 = uVar3;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  std::string::find(-0x40,0x5b);
  uVar13 = std::string::find(-0x40,0x3d);
  uVar14 = std::string::rfind(-0x40,0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043e75c0 & 1) == 0) {
      uVar14 = (ulong)(DAT_043e75c0 >> 1);
    }
    else {
      uVar14 = DAT_043e75c8;
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
    if ((_DAT_043e75c0 & 1) == 0) {
      uVar13 = (ulong)(DAT_043e75c0 >> 1);
    }
    else {
      uVar13 = DAT_043e75c8;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e75c0,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043e75c0);
  if ((_DAT_043e75c0 & 1) != 0) {
    *DAT_043e75d0 = '\0';
    plVar9 = DAT_043f1798;
    pcVar12 = (char *)DAT_043e75d0;
    DAT_043e75c8 = 0;
    if (((_DAT_043e75c0 & 1) != 0) && (DAT_043e75d0 != (byte *)0x0)) {
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
          goto LAB_024c1c54;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,pcVar12,0,8);
    }
  }
LAB_024c1c54:
  uVar14 = local_78 >> 1 & 0x7f;
  uVar22 = (uint)local_78 & 0xff;
  _DAT_043e75c0 = local_78;
  DAT_043e75c8 = uStack_70;
  uVar23 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar14;
    pbVar24 = &DAT_043e75c1;
  }
  else {
    pbVar24 = local_68;
  }
  DAT_043e75d0 = local_68;
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
              std::string::erase(0x43e75c0,(ulong)(pbVar18 + (~(ulong)pbVar24 - 0xd) + -2));
              uVar22 = (uint)DAT_043e75c0;
              uVar23 = DAT_043e75c0 & 1;
              uVar14 = (ulong)(DAT_043e75c0 >> 1);
            }
            goto LAB_024c1d28;
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
LAB_024c1d28:
  pbVar24 = DAT_043e75d0;
  uVar17 = DAT_043e75c8;
  bVar10 = uVar23 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = DAT_043e75c8;
  }
  if (uVar13 != 0) {
    pbVar18 = &DAT_043e75c1;
    if (uVar23 != 0) {
      pbVar18 = DAT_043e75d0;
    }
    iVar11 = isblank((uint)*pbVar18);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      uVar14 = (ulong)(uVar22 >> 1);
    }
    else {
      do {
        pbVar15 = &DAT_043e75c1;
        if (!bVar10) {
          pbVar15 = pbVar24;
        }
        std::string::erase(0x43e75c0,(long)pbVar15 - (long)pbVar18);
        pbVar24 = DAT_043e75d0;
        uVar17 = DAT_043e75c8;
        uVar22 = (uint)DAT_043e75c0;
        bVar10 = (_DAT_043e75c0 & 1) == 0;
        uVar14 = (ulong)(DAT_043e75c0 >> 1);
        uVar23 = DAT_043e75c0 & 1;
        uVar13 = uVar14;
        if (!bVar10) {
          uVar13 = DAT_043e75c8;
        }
        if (uVar13 == 0) break;
        pbVar18 = &DAT_043e75c1;
        if ((_DAT_043e75c0 & 1) != 0) {
          pbVar18 = DAT_043e75d0;
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
    pbVar24 = &DAT_043e75c1;
    if (!bVar10) {
      uVar13 = uVar17;
      pbVar24 = DAT_043e75d0;
    }
    iVar11 = isblank((uint)pbVar24[uVar13 - 1]);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      break;
    }
    FUN_024a7ca8(&DAT_043e75c0);
    uVar22 = (uint)DAT_043e75c0;
    bVar10 = (_DAT_043e75c0 & 1) == 0;
    uVar23 = DAT_043e75c0 & 1;
    uVar14 = (ulong)(DAT_043e75c0 >> 1);
    uVar17 = DAT_043e75c8;
    uVar13 = uVar14;
    if (!bVar10) {
      uVar13 = DAT_043e75c8;
    }
  }
  if (uVar23 != 0) {
    uVar14 = uVar17;
  }
  pbVar24 = &DAT_043e75c1;
  if (uVar23 != 0) {
    pbVar24 = DAT_043e75d0;
  }
  sVar1 = CONCAT44(_DAT_043e75ec,ram0x043e75e8);
  if ((DAT_043e75e0 & 1) == 0) {
    sVar1 = (ulong)(DAT_043e75e0 >> 1);
    pbVar18 = (byte *)&DAT_043e75e1;
  }
  else {
    pbVar18 = DAT_043e75f0;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_024c1f8c;
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
      if (iVar11 == 0) goto LAB_024c214c;
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar13);
  }
LAB_024c1e54:
  sVar1 = CONCAT26(_DAT_043e7606,CONCAT51(_DAT_043e7601,DAT_043e75f9._7_1_));
  pbVar18 = (byte *)CONCAT17(DAT_043e7608._7_1_,
                             CONCAT16(DAT_043e7608._6_1_,
                                      CONCAT51(DAT_043e7608._1_5_,(char)DAT_043e7608)));
  if ((DAT_043e75f8 & 1) == 0) {
    pbVar18 = (byte *)&DAT_043e75f9;
    sVar1 = (ulong)(DAT_043e75f8 >> 1);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_024c203c;
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
LAB_024c203c:
          while( true ) {
            std::string::erase(0x43e75c0,uVar14);
            bVar10 = (_DAT_043e75c0 & 1) != 0;
            uVar14 = _DAT_043e75c0 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043e75c8;
            }
            sVar1 = CONCAT26(_DAT_043e7606,CONCAT51(_DAT_043e7601,DAT_043e75f9._7_1_));
            pbVar18 = (byte *)CONCAT17(DAT_043e7608._7_1_,
                                       CONCAT16(DAT_043e7608._6_1_,
                                                CONCAT51(DAT_043e7608._1_5_,(char)DAT_043e7608)));
            pbVar24 = DAT_043e75d0;
            if (!bVar10) {
              pbVar24 = &DAT_043e75c1;
            }
            if ((DAT_043e75f8 & 1) == 0) {
              pbVar18 = (byte *)&DAT_043e75f9;
              sVar1 = (ulong)(DAT_043e75f8 >> 1);
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
LAB_024c214c:
  if ((pbVar15 == pbVar21) || (uVar13 = (long)pbVar15 - (long)pbVar24, uVar13 == 0xffffffffffffffff)
     ) goto LAB_024c1e54;
LAB_024c1f8c:
  while( true ) {
    std::string::erase(0x43e75c0,uVar13);
    bVar10 = (_DAT_043e75c0 & 1) == 0;
    pbVar24 = DAT_043e75d0;
    if (bVar10) {
      pbVar24 = &DAT_043e75c1;
    }
    sVar1 = CONCAT44(_DAT_043e75ec,ram0x043e75e8);
    uVar14 = _DAT_043e75c0 >> 1 & 0x7f;
    if (!bVar10) {
      uVar14 = DAT_043e75c8;
    }
    if ((DAT_043e75e0 & 1) == 0) {
      sVar1 = (ulong)(DAT_043e75e0 >> 1);
      pbVar18 = (byte *)&DAT_043e75e1;
    }
    else {
      pbVar18 = DAT_043e75f0;
    }
    if (sVar1 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar1) goto LAB_024c1e54;
  bVar2 = *pbVar18;
  pbVar21 = pbVar24 + uVar14;
  pbVar15 = pbVar24;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar1) ||
       (pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar13 - sVar1) + 1), pbVar15 == (byte *)0x0))
    goto LAB_024c1e54;
    iVar11 = memcmp(pbVar15,pbVar18,sVar1);
    if (iVar11 == 0) break;
    pbVar15 = pbVar15 + 1;
    uVar13 = (long)pbVar21 - (long)pbVar15;
    if ((long)uVar13 < (long)sVar1) goto LAB_024c1e54;
  }
  goto LAB_024c214c;
}


