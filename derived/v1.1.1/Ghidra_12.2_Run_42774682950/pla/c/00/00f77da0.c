/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f77da0; name: FUN_00f77da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f77da0(void)

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
  
  if (((DAT_043b5de0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b5de0), iVar11 != 0)) {
    DAT_043b5db0 = 0x16;
    DAT_043b5dc0 = (byte *)0x0;
    DAT_043b5db1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b5db8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b5dc8 = 0x2a;
    _DAT_043b5dbc = 0;
    DAT_043b5dd8._7_1_ = 0;
    DAT_043b5dd8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b5dd8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b5dd8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b5dd8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b5dd8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b5dd1 = s__anonymous_namespace__039071f8[8];
    DAT_043b5dd1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b5dd1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b5dd1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b5dd1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b5dd6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b5dd8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b5dc9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b5dc9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b5dd8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b5db0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b5de0);
  }
  plVar9 = DAT_043f1798;
  lVar19 = tpidr_el0;
  plVar16 = *(long **)(lVar19 + 0x20);
  if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x60,8);
  uVar3 = s_std__string_sol__detail__ctti_ge_039084e5._72_8_;
  _DAT_043b5d90 = 0x61;
  DAT_043b5d98 = 0x5e;
  DAT_043b5da0 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x40) = s_std__string_sol__detail__ctti_ge_039084e5._64_8_;
  *(undefined8 *)(pcVar12 + 0x48) = uVar3;
  uVar3 = CONCAT62(s_std__string_sol__detail__ctti_ge_039084e5._88_6_,
                   s_std__string_sol__detail__ctti_ge_039084e5._86_2_);
  *(ulong *)(pcVar12 + 0x50) =
       CONCAT26(s_std__string_sol__detail__ctti_ge_039084e5._86_2_,
                s_std__string_sol__detail__ctti_ge_039084e5._80_6_);
  uVar8 = s_std__string_sol__detail__ctti_ge_039084e5._56_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_039084e5._48_8_;
  *(undefined8 *)(pcVar12 + 0x56) = uVar3;
  uVar6 = s_std__string_sol__detail__ctti_ge_039084e5._40_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_039084e5._32_8_;
  *(undefined8 *)(pcVar12 + 0x30) = uVar7;
  *(undefined8 *)(pcVar12 + 0x38) = uVar8;
  *(undefined8 *)(pcVar12 + 0x20) = uVar3;
  *(undefined8 *)(pcVar12 + 0x28) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_039084e5._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_039084e5._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039084e5._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_039084e5._0_8_;
  pcVar12[0x5e] = '\0';
  *(undefined8 *)pcVar12 = uVar3;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  *(undefined8 *)(pcVar12 + 0x10) = uVar7;
  *(undefined8 *)(pcVar12 + 0x18) = uVar8;
  std::string::find(-0x70,0x5b);
  uVar13 = std::string::find(-0x70,0x3d);
  uVar14 = std::string::rfind(-0x70,0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043b5d90 & 1) == 0) {
      uVar14 = (ulong)(DAT_043b5d90 >> 1);
    }
    else {
      uVar14 = DAT_043b5d98;
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
    if ((_DAT_043b5d90 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b5d90 >> 1);
    }
    else {
      uVar13 = DAT_043b5d98;
    }
  }
  if (uVar17 < uVar13 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b5d90,uVar17,uVar14 - uVar17,
                      (allocator *)&DAT_043b5d90);
  if ((_DAT_043b5d90 & 1) != 0) {
    *DAT_043b5da0 = '\0';
    plVar9 = DAT_043f1798;
    pcVar12 = (char *)DAT_043b5da0;
    DAT_043b5d98 = 0;
    if (((_DAT_043b5d90 & 1) != 0) && (DAT_043b5da0 != (byte *)0x0)) {
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
          goto LAB_00f77fcc;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,pcVar12,0,8);
    }
  }
LAB_00f77fcc:
  uVar14 = local_78 >> 1 & 0x7f;
  uVar22 = (uint)local_78 & 0xff;
  _DAT_043b5d90 = local_78;
  DAT_043b5d98 = uStack_70;
  uVar23 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar14;
    pbVar24 = &DAT_043b5d91;
  }
  else {
    pbVar24 = local_68;
  }
  DAT_043b5da0 = local_68;
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
              std::string::erase(0x43b5d90,(ulong)(pbVar18 + (~(ulong)pbVar24 - 0xd) + -2));
              uVar22 = (uint)DAT_043b5d90;
              uVar23 = DAT_043b5d90 & 1;
              uVar14 = (ulong)(DAT_043b5d90 >> 1);
            }
            goto LAB_00f780a0;
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
LAB_00f780a0:
  pbVar24 = DAT_043b5da0;
  uVar13 = DAT_043b5d98;
  bVar10 = uVar23 == 0;
  uVar17 = uVar14;
  if (uVar23 != 0) {
    uVar17 = DAT_043b5d98;
  }
  if (uVar17 != 0) {
    pbVar18 = &DAT_043b5d91;
    if (uVar23 != 0) {
      pbVar18 = DAT_043b5da0;
    }
    iVar11 = isblank((uint)*pbVar18);
    if (iVar11 == 0) {
      uVar23 = uVar22 & 1;
      uVar14 = (ulong)(uVar22 >> 1);
    }
    else {
      do {
        pbVar15 = &DAT_043b5d91;
        if (!bVar10) {
          pbVar15 = pbVar24;
        }
        std::string::erase(0x43b5d90,(long)pbVar15 - (long)pbVar18);
        pbVar24 = DAT_043b5da0;
        uVar13 = DAT_043b5d98;
        uVar22 = (uint)DAT_043b5d90;
        bVar10 = (_DAT_043b5d90 & 1) == 0;
        uVar14 = (ulong)(DAT_043b5d90 >> 1);
        uVar23 = DAT_043b5d90 & 1;
        uVar17 = uVar14;
        if ((_DAT_043b5d90 & 1) != 0) {
          uVar17 = DAT_043b5d98;
        }
        if (uVar17 == 0) break;
        pbVar18 = &DAT_043b5d91;
        if ((_DAT_043b5d90 & 1) != 0) {
          pbVar18 = DAT_043b5da0;
        }
        iVar11 = isblank((uint)*pbVar18);
      } while (iVar11 != 0);
    }
  }
  bVar10 = uVar23 == 0;
  uVar17 = uVar13;
  if (uVar23 == 0) {
    uVar17 = uVar14;
  }
  while( true ) {
    if (uVar17 == 0) break;
    while( true ) {
      uVar14 = (ulong)(uVar22 >> 1);
      uVar17 = uVar14;
      pbVar24 = &DAT_043b5d91;
      if (!bVar10) {
        uVar17 = uVar13;
        pbVar24 = DAT_043b5da0;
      }
      iVar11 = isblank((uint)pbVar24[uVar17 - 1]);
      if (iVar11 == 0) {
        uVar23 = uVar22 & 1;
        goto LAB_00f78170;
      }
      FUN_00f69b60(&DAT_043b5d90);
      uVar22 = (uint)DAT_043b5d90;
      bVar10 = (_DAT_043b5d90 & 1) == 0;
      uVar14 = (ulong)(DAT_043b5d90 >> 1);
      uVar23 = DAT_043b5d90 & 1;
      uVar13 = DAT_043b5d98;
      uVar17 = DAT_043b5d98;
      if ((_DAT_043b5d90 & 1) != 0) break;
      if (uVar14 == 0) goto LAB_00f78170;
    }
  }
LAB_00f78170:
  if (uVar23 != 0) {
    uVar14 = uVar13;
  }
  pbVar24 = &DAT_043b5d91;
  if (uVar23 != 0) {
    pbVar24 = DAT_043b5da0;
  }
  sVar1 = CONCAT44(_DAT_043b5dbc,ram0x043b5db8);
  if ((DAT_043b5db0 & 1) == 0) {
    sVar1 = (ulong)(DAT_043b5db0 >> 1);
    pbVar18 = (byte *)&DAT_043b5db1;
  }
  else {
    pbVar18 = DAT_043b5dc0;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_00f78320;
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
      if (iVar11 == 0) goto LAB_00f784e0;
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar13);
  }
LAB_00f781d8:
  sVar1 = CONCAT26(_DAT_043b5dd6,CONCAT51(_DAT_043b5dd1,DAT_043b5dc9._7_1_));
  pbVar18 = (byte *)CONCAT17(DAT_043b5dd8._7_1_,
                             CONCAT16(DAT_043b5dd8._6_1_,
                                      CONCAT51(DAT_043b5dd8._1_5_,(char)DAT_043b5dd8)));
  if ((DAT_043b5dc8 & 1) == 0) {
    pbVar18 = (byte *)&DAT_043b5dc9;
    sVar1 = (ulong)(DAT_043b5dc8 >> 1);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_00f783d0;
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
        do {
          if (pbVar15 == pbVar21) {
            return;
          }
          uVar14 = (long)pbVar15 - (long)pbVar24;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_00f783d0:
          while( true ) {
            std::string::erase(0x43b5d90,uVar14);
            bVar10 = (_DAT_043b5d90 & 1) != 0;
            uVar14 = _DAT_043b5d90 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043b5d98;
            }
            sVar1 = CONCAT26(_DAT_043b5dd6,CONCAT51(_DAT_043b5dd1,DAT_043b5dc9._7_1_));
            pbVar18 = (byte *)CONCAT17(DAT_043b5dd8._7_1_,
                                       CONCAT16(DAT_043b5dd8._6_1_,
                                                CONCAT51(DAT_043b5dd8._1_5_,(char)DAT_043b5dd8)));
            pbVar24 = DAT_043b5da0;
            if (!bVar10) {
              pbVar24 = &DAT_043b5d91;
            }
            if ((DAT_043b5dc8 & 1) == 0) {
              pbVar18 = (byte *)&DAT_043b5dc9;
              sVar1 = (ulong)(DAT_043b5dc8 >> 1);
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
        } while( true );
      }
      pbVar15 = pbVar15 + 1;
      uVar14 = (long)pbVar21 - (long)pbVar15;
    } while ((long)sVar1 <= (long)uVar14);
  }
  return;
LAB_00f784e0:
  if ((pbVar15 == pbVar21) || (uVar13 = (long)pbVar15 - (long)pbVar24, uVar13 == 0xffffffffffffffff)
     ) goto LAB_00f781d8;
LAB_00f78320:
  while( true ) {
    std::string::erase(0x43b5d90,uVar13);
    bVar10 = (_DAT_043b5d90 & 1) == 0;
    pbVar24 = DAT_043b5da0;
    if (bVar10) {
      pbVar24 = &DAT_043b5d91;
    }
    sVar1 = CONCAT44(_DAT_043b5dbc,ram0x043b5db8);
    uVar14 = _DAT_043b5d90 >> 1 & 0x7f;
    if (!bVar10) {
      uVar14 = DAT_043b5d98;
    }
    if ((DAT_043b5db0 & 1) == 0) {
      sVar1 = (ulong)(DAT_043b5db0 >> 1);
      pbVar18 = (byte *)&DAT_043b5db1;
    }
    else {
      pbVar18 = DAT_043b5dc0;
    }
    if (sVar1 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar1) goto LAB_00f781d8;
  bVar2 = *pbVar18;
  pbVar21 = pbVar24 + uVar14;
  pbVar15 = pbVar24;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar1) ||
       (pbVar15 = memchr(pbVar15,(uint)bVar2,(uVar13 - sVar1) + 1), pbVar15 == (byte *)0x0))
    goto LAB_00f781d8;
    iVar11 = memcmp(pbVar15,pbVar18,sVar1);
    if (iVar11 == 0) break;
    pbVar15 = pbVar15 + 1;
    uVar13 = (long)pbVar21 - (long)pbVar15;
    if ((long)uVar13 < (long)sVar1) goto LAB_00f781d8;
  }
  goto LAB_00f784e0;
}


