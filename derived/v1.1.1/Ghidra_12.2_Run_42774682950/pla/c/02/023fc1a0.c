/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023fc1a0; name: FUN_023fc1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023fc1a0(void)

{
  size_t sVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  
  if (((DAT_043e4870 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e4870), iVar11 != 0)) {
    DAT_043e4840 = 0x16;
    DAT_043e4850 = (byte *)0x0;
    DAT_043e4841._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e4848 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e4858 = 0x2a;
    _DAT_043e484c = 0;
    DAT_043e4868._7_1_ = 0;
    DAT_043e4868._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e4868._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e4868._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e4868._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e4868._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e4861 = s__anonymous_namespace__039071f8[8];
    DAT_043e4861_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e4861_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e4861_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e4861_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e4866 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e4868._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e4859._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e4859._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e4868._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e4840,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e4870);
  }
  plVar9 = DAT_043f1798;
  lVar19 = tpidr_el0;
  plVar16 = *(long **)(lVar19 + 0x20);
  if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x70,8);
  uVar3 = s_std__string_sol__detail__ctti_ge_0390171f._72_8_;
  DAT_043e4820 = 0x71;
  DAT_043e4828 = 0x66;
  DAT_043e4830 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x40) = s_std__string_sol__detail__ctti_ge_0390171f._64_8_;
  *(undefined8 *)(pcVar12 + 0x48) = uVar3;
  uVar4 = CONCAT62(s_std__string_sol__detail__ctti_ge_0390171f._96_6_,
                   s_std__string_sol__detail__ctti_ge_0390171f._94_2_);
  uVar3 = CONCAT26(s_std__string_sol__detail__ctti_ge_0390171f._94_2_,
                   s_std__string_sol__detail__ctti_ge_0390171f._88_6_);
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_0390171f._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar3;
  *(undefined8 *)(pcVar12 + 0x5e) = uVar4;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390171f._56_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0390171f._48_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0390171f._40_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_std__string_sol__detail__ctti_ge_0390171f._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar3;
  *(undefined8 *)(pcVar12 + 0x30) = uVar4;
  *(undefined8 *)(pcVar12 + 0x38) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0390171f._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390171f._16_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0390171f._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0390171f._0_8_;
  pcVar12[0x66] = '\0';
  *(undefined8 *)pcVar12 = uVar3;
  *(undefined8 *)(pcVar12 + 8) = uVar4;
  *(undefined8 *)(pcVar12 + 0x10) = uVar7;
  *(undefined8 *)(pcVar12 + 0x18) = uVar8;
  std::string::find(' ',0x5b);
  uVar13 = std::string::find(' ',0x3d);
  uVar14 = std::string::rfind(' ',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((DAT_043e4820 & 1) == 0) {
      uVar14 = (ulong)((byte)DAT_043e4820 >> 1);
    }
    else {
      uVar14 = DAT_043e4828;
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
    if ((DAT_043e4820 & 1) == 0) {
      uVar13 = (ulong)((byte)DAT_043e4820 >> 1);
    }
    else {
      uVar13 = DAT_043e4828;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e4820,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043e4820);
  if ((DAT_043e4820 & 1) != 0) {
    *DAT_043e4830 = '\0';
    plVar9 = DAT_043f1798;
    pcVar12 = (char *)DAT_043e4830;
    DAT_043e4828 = 0;
    if (((DAT_043e4820 & 1) != 0) && (DAT_043e4830 != (byte *)0x0)) {
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
          goto LAB_023fc3cc;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,pcVar12,0,8);
    }
  }
LAB_023fc3cc:
  uVar14 = local_78 >> 1 & 0x7f;
  uVar22 = (uint)local_78 & 0xff;
  DAT_043e4820 = local_78;
  DAT_043e4828 = uStack_70;
  uVar23 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar14;
    pbVar24 = (byte *)((long)&DAT_043e4820 + 1);
  }
  else {
    pbVar24 = local_68;
  }
  DAT_043e4830 = local_68;
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
              std::string::erase(0x43e4820,(ulong)(pbVar18 + (~(ulong)pbVar24 - 0xd) + -2));
              uVar22 = (uint)(byte)DAT_043e4820;
              uVar23 = (byte)DAT_043e4820 & 1;
              uVar14 = (ulong)((byte)DAT_043e4820 >> 1);
            }
            goto LAB_023fc4a0;
          }
          lVar5 = lVar20 + -2;
          lVar6 = lVar20 + 0xc;
          lVar20 = lVar20 + -1;
        } while (pbVar18[lVar5] == "seperator_mark"[lVar6]);
      }
      pbVar18 = pbVar18 + -1;
      lVar19 = lVar19 + 1;
    }
  }
LAB_023fc4a0:
  pbVar24 = DAT_043e4830;
  uVar17 = DAT_043e4828;
  bVar10 = uVar23 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = DAT_043e4828;
  }
  if (uVar13 != 0) {
    pbVar18 = (byte *)((long)&DAT_043e4820 + 1);
    if (uVar23 != 0) {
      pbVar18 = DAT_043e4830;
    }
    iVar11 = isblank((uint)*pbVar18);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      uVar14 = (ulong)(uVar22 >> 1);
    }
    else {
      do {
        pbVar15 = (byte *)((long)&DAT_043e4820 + 1);
        if (!bVar10) {
          pbVar15 = pbVar24;
        }
        std::string::erase(0x43e4820,(long)pbVar15 - (long)pbVar18);
        pbVar24 = DAT_043e4830;
        uVar17 = DAT_043e4828;
        uVar22 = (uint)(byte)DAT_043e4820;
        bVar10 = (DAT_043e4820 & 1) == 0;
        uVar14 = (ulong)((byte)DAT_043e4820 >> 1);
        uVar23 = (byte)DAT_043e4820 & 1;
        uVar13 = uVar14;
        if (!bVar10) {
          uVar13 = DAT_043e4828;
        }
        if (uVar13 == 0) break;
        pbVar18 = (byte *)((long)&DAT_043e4820 + 1);
        if ((DAT_043e4820 & 1) != 0) {
          pbVar18 = DAT_043e4830;
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
    pbVar24 = (byte *)((long)&DAT_043e4820 + 1);
    if (!bVar10) {
      uVar13 = uVar17;
      pbVar24 = DAT_043e4830;
    }
    iVar11 = isblank((uint)pbVar24[uVar13 - 1]);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      break;
    }
    FUN_023e00e0(&DAT_043e4820);
    uVar22 = (uint)(byte)DAT_043e4820;
    bVar10 = (DAT_043e4820 & 1) == 0;
    uVar23 = (byte)DAT_043e4820 & 1;
    uVar14 = (ulong)((byte)DAT_043e4820 >> 1);
    uVar17 = DAT_043e4828;
    uVar13 = uVar14;
    if (!bVar10) {
      uVar13 = DAT_043e4828;
    }
  }
  if (uVar23 != 0) {
    uVar14 = uVar17;
  }
  pbVar24 = (byte *)((long)&DAT_043e4820 + 1);
  if (uVar23 != 0) {
    pbVar24 = DAT_043e4830;
  }
  sVar1 = CONCAT44(_DAT_043e484c,ram0x043e4848);
  if ((DAT_043e4840 & 1) == 0) {
    sVar1 = (ulong)(DAT_043e4840 >> 1);
    pbVar18 = (byte *)&DAT_043e4841;
  }
  else {
    pbVar18 = DAT_043e4850;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_023fc708;
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
      if (iVar11 == 0) goto LAB_023fc8c8;
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar13);
  }
LAB_023fc5cc:
  sVar1 = CONCAT26(_DAT_043e4866,CONCAT51(_DAT_043e4861,DAT_043e4859._7_1_));
  pbVar18 = (byte *)CONCAT17(DAT_043e4868._7_1_,
                             CONCAT16(DAT_043e4868._6_1_,
                                      CONCAT51(DAT_043e4868._1_5_,(char)DAT_043e4868)));
  if ((DAT_043e4858 & 1) == 0) {
    pbVar18 = (byte *)&DAT_043e4859;
    sVar1 = (ulong)(DAT_043e4858 >> 1);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_023fc7b8;
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
LAB_023fc7b8:
          while( true ) {
            std::string::erase(0x43e4820,uVar14);
            bVar10 = (DAT_043e4820 & 1) != 0;
            uVar14 = DAT_043e4820 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043e4828;
            }
            sVar1 = CONCAT26(_DAT_043e4866,CONCAT51(_DAT_043e4861,DAT_043e4859._7_1_));
            pbVar18 = (byte *)CONCAT17(DAT_043e4868._7_1_,
                                       CONCAT16(DAT_043e4868._6_1_,
                                                CONCAT51(DAT_043e4868._1_5_,(char)DAT_043e4868)));
            pbVar24 = DAT_043e4830;
            if (!bVar10) {
              pbVar24 = (byte *)((long)&DAT_043e4820 + 1);
            }
            if ((DAT_043e4858 & 1) == 0) {
              pbVar18 = (byte *)&DAT_043e4859;
              sVar1 = (ulong)(DAT_043e4858 >> 1);
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
LAB_023fc8c8:
  if ((pbVar15 == pbVar21) || (uVar13 = (long)pbVar15 - (long)pbVar24, uVar13 == 0xffffffffffffffff)
     ) goto LAB_023fc5cc;
LAB_023fc708:
  while( true ) {
    std::string::erase(0x43e4820,uVar13);
    bVar10 = (DAT_043e4820 & 1) == 0;
    pbVar24 = DAT_043e4830;
    if (bVar10) {
      pbVar24 = (byte *)((long)&DAT_043e4820 + 1);
    }
    sVar1 = CONCAT44(_DAT_043e484c,ram0x043e4848);
    uVar14 = DAT_043e4820 >> 1 & 0x7f;
    if (!bVar10) {
      uVar14 = DAT_043e4828;
    }
    if ((DAT_043e4840 & 1) == 0) {
      sVar1 = (ulong)(DAT_043e4840 >> 1);
      pbVar18 = (byte *)&DAT_043e4841;
    }
    else {
      pbVar18 = DAT_043e4850;
    }
    if (sVar1 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar1) goto LAB_023fc5cc;
  bVar2 = *pbVar18;
  pbVar21 = pbVar24 + uVar14;
  pbVar15 = pbVar24;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar1) ||
       (pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar13 - sVar1) + 1), pbVar15 == (byte *)0x0))
    goto LAB_023fc5cc;
    iVar11 = memcmp(pbVar15,pbVar18,sVar1);
    if (iVar11 == 0) break;
    pbVar15 = pbVar15 + 1;
    uVar13 = (long)pbVar21 - (long)pbVar15;
    if ((long)uVar13 < (long)sVar1) goto LAB_023fc5cc;
  }
  goto LAB_023fc8c8;
}


