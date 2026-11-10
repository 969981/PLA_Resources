/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00edf9d0; name: FUN_00edf9d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00edf9d0(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  byte *pbVar21;
  uint uVar22;
  size_t sVar23;
  uint uVar24;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b2808 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b2808), iVar10 != 0)) {
    DAT_043b27d8 = 0x16;
    DAT_043b27e8 = (byte *)0x0;
    _DAT_043b27e4 = 0;
    DAT_043b27d9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b27e0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b27f0 = 0x2a;
    DAT_043b2800._7_1_ = 0;
    DAT_043b2800._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b2800._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b2800._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b2800._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b2800._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b27f9 = s__anonymous_namespace__039071f8[8];
    DAT_043b27f9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b27f9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b27f9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b27f9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b27fe = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b2800._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b27f1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b27f1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b2800._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b27d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b2808);
  }
  plVar8 = DAT_043f1798;
  lVar18 = tpidr_el0;
  plVar15 = *(long **)(lVar18 + 0x20);
  if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
    *(long **)(lVar18 + 0x20) = DAT_043f1798;
    plVar15 = plVar8;
  }
  pcVar11 = (char *)(**(code **)(*plVar15 + 0x10))(plVar15,0x70,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_038a4546._72_8_;
  _DAT_043b27b8 = 0x71;
  DAT_043b27c0 = 0x68;
  DAT_043b27c8 = (byte *)pcVar11;
  *(undefined8 *)(pcVar11 + 0x40) = s_std__string_sol__detail__ctti_ge_038a4546._64_8_;
  *(undefined8 *)(pcVar11 + 0x48) = uVar4;
  uVar5 = s_std__string_sol__detail__ctti_ge_038a4546._88_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038a4546._80_8_;
  *(undefined8 *)(pcVar11 + 0x60) = s_std__string_sol__detail__ctti_ge_038a4546._96_8_;
  *(undefined8 *)(pcVar11 + 0x50) = uVar4;
  *(undefined8 *)(pcVar11 + 0x58) = uVar5;
  uVar6 = s_std__string_sol__detail__ctti_ge_038a4546._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038a4546._48_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038a4546._40_8_;
  *(undefined8 *)(pcVar11 + 0x20) = s_std__string_sol__detail__ctti_ge_038a4546._32_8_;
  *(undefined8 *)(pcVar11 + 0x28) = uVar4;
  *(undefined8 *)(pcVar11 + 0x30) = uVar5;
  *(undefined8 *)(pcVar11 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_038a4546._24_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038a4546._16_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038a4546._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038a4546._0_8_;
  pcVar11[0x68] = '\0';
  *(undefined8 *)pcVar11 = uVar4;
  *(undefined8 *)(pcVar11 + 8) = uVar5;
  *(undefined8 *)(pcVar11 + 0x10) = uVar6;
  *(undefined8 *)(pcVar11 + 0x18) = uVar7;
  std::string::find(-0x48,0x5b);
  uVar12 = std::string::find(-0x48,0x3d);
  uVar13 = std::string::rfind(-0x48,0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043b27b8 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b27b8 >> 1);
    }
    else {
      uVar13 = DAT_043b27c0;
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
    if ((_DAT_043b27b8 & 1) == 0) {
      uVar12 = (ulong)(DAT_043b27b8 >> 1);
    }
    else {
      uVar12 = DAT_043b27c0;
    }
  }
  if (uVar16 < uVar12 - 1) {
    uVar16 = uVar16 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b27b8,uVar16,uVar13 - uVar16,
                      (allocator *)&DAT_043b27b8);
  if ((_DAT_043b27b8 & 1) != 0) {
    *DAT_043b27c8 = '\0';
    plVar8 = DAT_043f1798;
    pcVar11 = (char *)DAT_043b27c8;
    DAT_043b27c0 = 0;
    if (((_DAT_043b27b8 & 1) != 0) && (DAT_043b27c8 != (byte *)0x0)) {
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
          goto LAB_00edfc04;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,pcVar11,0,8);
    }
  }
LAB_00edfc04:
  uVar22 = (uint)local_78 & 0xff;
  uVar24 = (uint)local_78 & 1;
  uVar13 = local_78 >> 1 & 0x7f;
  _DAT_043b27b8 = local_78;
  DAT_043b27c0 = uStack_70;
  DAT_043b27c8 = local_68;
  if ((local_78 & 1) == 0) {
    local_68 = &DAT_043b27b9;
    uStack_70 = uVar13;
    if (uVar13 < 0xe) goto LAB_00edfcd4;
  }
  else if ((long)uStack_70 < 0xe) goto LAB_00edfcd4;
  pbVar17 = local_68 + uStack_70;
  lVar18 = 1;
  while (uStack_70 != 0xd) {
    uStack_70 = uStack_70 - 1;
    if (local_68[uStack_70] == 0x6b) {
      lVar19 = 0;
      do {
        if (lVar19 == -0xd) {
          if ((lVar18 != -0xd) && (pbVar17 + (~(ulong)local_68 - 0xd) != (byte *)0xffffffffffffffff)
             ) {
            std::string::erase(0x43b27b8,(ulong)(pbVar17 + (~(ulong)local_68 - 0xd) + -2));
            uVar22 = (uint)DAT_043b27b8;
            uVar24 = DAT_043b27b8 & 1;
            uVar13 = (ulong)(DAT_043b27b8 >> 1);
          }
          goto LAB_00edfcd4;
        }
        lVar2 = lVar19 + -2;
        lVar3 = lVar19 + 0xc;
        lVar19 = lVar19 + -1;
      } while (pbVar17[lVar2] == "seperator_mark"[lVar3]);
    }
    pbVar17 = pbVar17 + -1;
    lVar18 = lVar18 + 1;
  }
LAB_00edfcd4:
  pbVar17 = DAT_043b27c8;
  uVar16 = DAT_043b27c0;
  bVar9 = uVar24 == 0;
  uVar12 = uVar13;
  if (!bVar9) {
    uVar12 = DAT_043b27c0;
  }
  if (uVar12 != 0) {
    pbVar20 = &DAT_043b27b9;
    if (uVar24 != 0) {
      pbVar20 = DAT_043b27c8;
    }
    iVar10 = isblank((uint)*pbVar20);
    if (iVar10 == 0) {
      uVar24 = uVar22 & 1;
      uVar13 = (ulong)(uVar22 >> 1);
    }
    else {
      do {
        pbVar14 = &DAT_043b27b9;
        if (!bVar9) {
          pbVar14 = pbVar17;
        }
        std::string::erase(0x43b27b8,(long)pbVar14 - (long)pbVar20);
        pbVar17 = DAT_043b27c8;
        uVar16 = DAT_043b27c0;
        uVar22 = (uint)DAT_043b27b8;
        bVar9 = (_DAT_043b27b8 & 1) == 0;
        uVar13 = (ulong)(DAT_043b27b8 >> 1);
        uVar24 = DAT_043b27b8 & 1;
        uVar12 = uVar13;
        if (!bVar9) {
          uVar12 = DAT_043b27c0;
        }
        if (uVar12 == 0) break;
        pbVar20 = &DAT_043b27b9;
        if ((_DAT_043b27b8 & 1) != 0) {
          pbVar20 = DAT_043b27c8;
        }
        iVar10 = isblank((uint)*pbVar20);
      } while (iVar10 != 0);
    }
  }
  bVar9 = uVar24 == 0;
  uVar12 = uVar13;
  if (!bVar9) {
    uVar12 = uVar16;
  }
  while (uVar12 != 0) {
    uVar13 = (ulong)(uVar22 >> 1);
    uVar12 = uVar13;
    pbVar17 = &DAT_043b27b9;
    if (!bVar9) {
      uVar12 = uVar16;
      pbVar17 = DAT_043b27c8;
    }
    iVar10 = isblank((uint)pbVar17[uVar12 - 1]);
    if (iVar10 == 0) {
      uVar24 = uVar22 & 1;
      break;
    }
    FUN_00ee01e0(&DAT_043b27b8);
    uVar22 = (uint)DAT_043b27b8;
    bVar9 = (_DAT_043b27b8 & 1) == 0;
    uVar24 = DAT_043b27b8 & 1;
    uVar13 = (ulong)(DAT_043b27b8 >> 1);
    uVar16 = DAT_043b27c0;
    uVar12 = uVar13;
    if (!bVar9) {
      uVar12 = DAT_043b27c0;
    }
  }
  if (uVar24 != 0) {
    uVar13 = uVar16;
  }
  pbVar17 = &DAT_043b27b9;
  if (uVar24 != 0) {
    pbVar17 = DAT_043b27c8;
  }
  sVar23 = CONCAT44(_DAT_043b27e4,ram0x043b27e0);
  pbVar20 = DAT_043b27e8;
  if ((DAT_043b27d8 & 1) == 0) {
    sVar23 = (size_t)(DAT_043b27d8 >> 1);
    pbVar20 = (byte *)&DAT_043b27d9;
  }
  if (sVar23 == 0) {
    uVar12 = 0;
    goto LAB_00edff48;
  }
  if ((long)sVar23 <= (long)uVar13) {
    bVar1 = *pbVar20;
    pbVar21 = pbVar17 + uVar13;
    pbVar14 = pbVar17;
    uVar12 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar12 - sVar23) ||
         (pbVar14 = memchr(pbVar14,(uint)bVar1,(uVar12 - sVar23) + 1), pbVar14 == (byte *)0x0))
      break;
      iVar10 = memcmp(pbVar14,pbVar20,sVar23);
      if (iVar10 == 0) goto LAB_00ee0108;
      pbVar14 = pbVar14 + 1;
      uVar12 = (long)pbVar21 - (long)pbVar14;
    } while ((long)sVar23 <= (long)uVar12);
  }
LAB_00edfdf8:
  sVar23 = CONCAT26(_DAT_043b27fe,CONCAT51(_DAT_043b27f9,DAT_043b27f1._7_1_));
  pbVar20 = (byte *)CONCAT17(DAT_043b2800._7_1_,
                             CONCAT16(DAT_043b2800._6_1_,
                                      CONCAT51(DAT_043b2800._1_5_,(char)DAT_043b2800)));
  if ((DAT_043b27f0 & 1) == 0) {
    pbVar20 = (byte *)&DAT_043b27f1;
    sVar23 = (ulong)(DAT_043b27f0 >> 1);
  }
  if (sVar23 == 0) {
    uVar13 = 0;
    goto LAB_00ee004c;
  }
  if ((long)sVar23 <= (long)uVar13) {
    bVar1 = *pbVar20;
    pbVar21 = pbVar17 + uVar13;
    pbVar14 = pbVar17;
    do {
      if (0xfffffffffffffffe < uVar13 - sVar23) {
        return;
      }
      pbVar14 = memchr(pbVar14,(uint)bVar1,(uVar13 - sVar23) + 1);
      if (pbVar14 == (byte *)0x0) {
        return;
      }
      iVar10 = memcmp(pbVar14,pbVar20,sVar23);
      if (iVar10 == 0) {
        if (pbVar14 == pbVar21) {
          return;
        }
        do {
          uVar13 = (long)pbVar14 - (long)pbVar17;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_00ee004c:
          while( true ) {
            std::string::erase(0x43b27b8,uVar13);
            bVar9 = (_DAT_043b27b8 & 1) != 0;
            uVar13 = _DAT_043b27b8 >> 1 & 0x7f;
            if (bVar9) {
              uVar13 = DAT_043b27c0;
            }
            sVar23 = CONCAT26(_DAT_043b27fe,CONCAT51(_DAT_043b27f9,DAT_043b27f1._7_1_));
            pbVar20 = (byte *)CONCAT17(DAT_043b2800._7_1_,
                                       CONCAT16(DAT_043b2800._6_1_,
                                                CONCAT51(DAT_043b2800._1_5_,(char)DAT_043b2800)));
            pbVar17 = DAT_043b27c8;
            if (!bVar9) {
              pbVar17 = &DAT_043b27b9;
            }
            if ((DAT_043b27f0 & 1) == 0) {
              pbVar20 = (byte *)&DAT_043b27f1;
              sVar23 = (ulong)(DAT_043b27f0 >> 1);
            }
            if (sVar23 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar23) {
            return;
          }
          bVar1 = *pbVar20;
          pbVar21 = pbVar17 + uVar13;
          pbVar14 = pbVar17;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar23) {
              return;
            }
            pbVar14 = memchr(pbVar14,(uint)bVar1,(uVar13 - sVar23) + 1);
            if (pbVar14 == (byte *)0x0) {
              return;
            }
            iVar10 = memcmp(pbVar14,pbVar20,sVar23);
            if (iVar10 == 0) break;
            pbVar14 = pbVar14 + 1;
            uVar13 = (long)pbVar21 - (long)pbVar14;
            if ((long)uVar13 < (long)sVar23) {
              return;
            }
          }
          if (pbVar14 == pbVar21) {
            return;
          }
        } while( true );
      }
      pbVar14 = pbVar14 + 1;
      uVar13 = (long)pbVar21 - (long)pbVar14;
    } while ((long)sVar23 <= (long)uVar13);
  }
  return;
LAB_00ee0108:
  if (pbVar14 == pbVar21) goto LAB_00edfdf8;
  uVar12 = (long)pbVar14 - (long)pbVar17;
  while( true ) {
    if (uVar12 == 0xffffffffffffffff) goto LAB_00edfdf8;
LAB_00edff48:
    std::string::erase(0x43b27b8,uVar12);
    sVar23 = CONCAT44(_DAT_043b27e4,ram0x043b27e0);
    if ((_DAT_043b27b8 & 1) == 0) {
      uVar13 = _DAT_043b27b8 >> 1 & 0x7f;
      pbVar17 = &DAT_043b27b9;
    }
    else {
      uVar13 = DAT_043b27c0;
      pbVar17 = DAT_043b27c8;
    }
    if ((DAT_043b27d8 & 1) == 0) {
      sVar23 = (ulong)(DAT_043b27d8 >> 1);
      pbVar20 = (byte *)&DAT_043b27d9;
    }
    else {
      pbVar20 = DAT_043b27e8;
    }
    if (sVar23 != 0) break;
    uVar12 = 0;
  }
  if ((long)uVar13 < (long)sVar23) goto LAB_00edfdf8;
  bVar1 = *pbVar20;
  pbVar21 = pbVar17 + uVar13;
  pbVar14 = pbVar17;
  uVar12 = uVar13;
  while( true ) {
    if ((0xfffffffffffffffe < uVar12 - sVar23) ||
       (pbVar14 = memchr(pbVar14,(uint)bVar1,(uVar12 - sVar23) + 1), pbVar14 == (byte *)0x0))
    goto LAB_00edfdf8;
    iVar10 = memcmp(pbVar14,pbVar20,sVar23);
    if (iVar10 == 0) break;
    pbVar14 = pbVar14 + 1;
    uVar12 = (long)pbVar21 - (long)pbVar14;
    if ((long)uVar12 < (long)sVar23) goto LAB_00edfdf8;
  }
  goto LAB_00ee0108;
}


