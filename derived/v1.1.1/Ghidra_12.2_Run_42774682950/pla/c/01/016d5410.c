/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016d5410; name: FUN_016d5410
 */


/* WARNING: Removing unreachable block (ram,0x016d597c) */
/* WARNING: Removing unreachable block (ram,0x016d598c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016d5410(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
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
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043ccd40 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043ccd40), iVar11 != 0)) {
    DAT_043ccd10 = 0x16;
    DAT_043ccd20 = (byte *)0x0;
    _DAT_043ccd1c = 0;
    DAT_043ccd11._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043ccd18 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043ccd28 = 0x2a;
    DAT_043ccd38._7_1_ = 0;
    DAT_043ccd38._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043ccd38._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043ccd38._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043ccd38._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043ccd38._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043ccd31 = s__anonymous_namespace__039071f8[8];
    DAT_043ccd31_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043ccd31_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043ccd31_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043ccd31_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043ccd36 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043ccd38._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043ccd29._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043ccd29._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043ccd38._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043ccd10,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ccd40);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar17 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar17 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_03890217._8_8_;
  _DAT_043cccf0 = 0x81;
  DAT_043cccf8 = 0x7b;
  DAT_043ccd00 = (byte *)pcVar12;
  *(undefined8 *)pcVar12 = s_std__string_sol__detail__ctti_ge_03890217._0_8_;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_03890217._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_03890217._24_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03890217._16_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_std__string_sol__detail__ctti_ge_03890217._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar7;
  *(undefined8 *)(pcVar12 + 0x10) = uVar5;
  *(undefined8 *)(pcVar12 + 0x18) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_03890217._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_03890217._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03890217._48_8_;
  *(undefined8 *)(pcVar12 + 0x40) = s_std__string_sol__detail__ctti_ge_03890217._64_8_;
  *(undefined8 *)(pcVar12 + 0x48) = uVar7;
  *(undefined8 *)(pcVar12 + 0x30) = uVar5;
  *(undefined8 *)(pcVar12 + 0x38) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_03890217._88_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03890217._80_8_;
  *(undefined8 *)(pcVar12 + 0x70) = s_std__string_sol__detail__ctti_ge_03890217._112_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_03890217._104_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_03890217._96_8_;
  pcVar12[0x7b] = '\0';
  *(undefined8 *)(pcVar12 + 0x60) = uVar7;
  *(undefined8 *)(pcVar12 + 0x68) = uVar8;
  *(undefined8 *)(pcVar12 + 0x50) = uVar5;
  *(undefined8 *)(pcVar12 + 0x58) = uVar6;
  pcVar12[0x77] = 'i';
  pcVar12[0x78] = 'n';
  pcVar12[0x79] = 't';
  pcVar12[0x7a] = ']';
  std::string::find(-0x10,0x5b);
  uVar13 = std::string::find(-0x10,0x3d);
  uVar14 = std::string::rfind(-0x10,0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043cccf0 & 1) == 0) {
      uVar14 = (ulong)(DAT_043cccf0 >> 1);
    }
    else {
      uVar14 = DAT_043cccf8;
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
    if ((_DAT_043cccf0 & 1) == 0) {
      uVar13 = (ulong)(DAT_043cccf0 >> 1);
    }
    else {
      uVar13 = DAT_043cccf8;
    }
  }
  if (uVar18 < uVar13 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043cccf0,uVar18,uVar14 - uVar18,
                      (allocator *)&DAT_043cccf0);
  FUN_016cb7a8(&DAT_043cccf0);
  _DAT_043cccf0 = local_78;
  DAT_043cccf8 = uStack_70;
  DAT_043ccd00 = local_68;
  lVar15 = FUN_016cb74c(&DAT_043cccf0);
  if (lVar15 != -1) {
    std::string::erase(0x43cccf0,lVar15 - 2);
  }
  bVar10 = (_DAT_043cccf0 & 1) == 0;
  uVar13 = (ulong)(DAT_043cccf0 >> 1);
  uVar18 = DAT_043cccf8;
  pbVar21 = DAT_043ccd00;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = DAT_043cccf8;
  }
  while( true ) {
    uVar19 = (uint)DAT_043cccf0;
    bVar4 = DAT_043cccf0 & 1;
    uVar20 = _DAT_043cccf0 & 0xff;
    DAT_043cccf8 = uVar18;
    DAT_043ccd00 = pbVar21;
    if (uVar14 == 0) break;
    pbVar3 = &DAT_043cccf1;
    if ((DAT_043cccf0 & 1) != 0) {
      pbVar3 = pbVar21;
    }
    iVar11 = isblank((uint)*pbVar3);
    if (iVar11 == 0) break;
    pbVar16 = &DAT_043cccf1;
    if (!bVar10) {
      pbVar16 = pbVar21;
    }
    std::string::erase(0x43cccf0,(long)pbVar16 - (long)pbVar3);
    bVar10 = (_DAT_043cccf0 & 1) == 0;
    uVar13 = (ulong)(DAT_043cccf0 >> 1);
    uVar18 = DAT_043cccf8;
    pbVar21 = DAT_043ccd00;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043cccf8;
    }
  }
  bVar10 = bVar4 == 0;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = uVar18;
  }
  while (uVar14 != 0) {
    uVar19 = (uint)uVar20;
    uVar13 = (ulong)(uVar19 >> 1);
    uVar14 = uVar13;
    pbVar21 = &DAT_043cccf1;
    if (!bVar10) {
      uVar14 = uVar18;
      pbVar21 = DAT_043ccd00;
    }
    iVar11 = isblank((uint)pbVar21[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_016cb768(&DAT_043cccf0);
    uVar20 = _DAT_043cccf0 & 0xff;
    uVar19 = (uint)uVar20;
    bVar10 = (_DAT_043cccf0 & 1) == 0;
    uVar13 = _DAT_043cccf0 >> 1 & 0x7f;
    uVar18 = DAT_043cccf8;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043cccf8;
    }
  }
  bVar10 = (uVar19 & 1) != 0;
  if (bVar10) {
    uVar13 = uVar18;
  }
  pbVar21 = &DAT_043cccf1;
  if (bVar10) {
    pbVar21 = DAT_043ccd00;
  }
  sVar2 = CONCAT44(_DAT_043ccd1c,ram0x043ccd18);
  if ((DAT_043ccd10 & 1) == 0) {
    sVar2 = (ulong)(DAT_043ccd10 >> 1);
    pbVar3 = (byte *)&DAT_043ccd11;
  }
  else {
    pbVar3 = DAT_043ccd20;
  }
  if (sVar2 == 0) {
    uVar14 = 0;
LAB_016d5798:
    do {
      while( true ) {
        std::string::erase(0x43cccf0,uVar14);
        sVar2 = CONCAT44(_DAT_043ccd1c,ram0x043ccd18);
        if ((_DAT_043cccf0 & 1) == 0) {
          uVar13 = _DAT_043cccf0 >> 1 & 0x7f;
          pbVar21 = &DAT_043cccf1;
        }
        else {
          uVar13 = DAT_043cccf8;
          pbVar21 = DAT_043ccd00;
        }
        if ((DAT_043ccd10 & 1) == 0) {
          sVar2 = (ulong)(DAT_043ccd10 >> 1);
          pbVar3 = (byte *)&DAT_043ccd11;
        }
        else {
          pbVar3 = DAT_043ccd20;
        }
        if (sVar2 != 0) break;
        uVar14 = 0;
      }
      if ((long)uVar13 < (long)sVar2) goto LAB_016d5708;
      bVar4 = *pbVar3;
      pbVar16 = pbVar21;
      uVar14 = uVar13;
      while( true ) {
        if ((0xfffffffffffffffe < uVar14 - sVar2) ||
           (pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar14 - sVar2) + 1), pbVar16 == (byte *)0x0))
        goto LAB_016d5708;
        iVar11 = memcmp(pbVar16,pbVar3,sVar2);
        if (iVar11 == 0) break;
        pbVar16 = pbVar16 + 1;
        uVar14 = (long)(pbVar21 + uVar13) - (long)pbVar16;
        if ((long)uVar14 < (long)sVar2) goto LAB_016d5708;
      }
      if ((pbVar16 == pbVar21 + uVar13) ||
         (uVar14 = (long)pbVar16 - (long)pbVar21, uVar14 == 0xffffffffffffffff)) goto LAB_016d5708;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar13) {
    bVar4 = *pbVar3;
    pbVar16 = pbVar21;
    uVar14 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar14 - sVar2) ||
         (pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar14 - sVar2) + 1), pbVar16 == (byte *)0x0))
      break;
      iVar11 = memcmp(pbVar16,pbVar3,sVar2);
      if (iVar11 == 0) {
        if ((pbVar16 != pbVar21 + uVar13) &&
           (uVar14 = (long)pbVar16 - (long)pbVar21, uVar14 != 0xffffffffffffffff))
        goto LAB_016d5798;
        break;
      }
      pbVar16 = pbVar16 + 1;
      uVar14 = (long)(pbVar21 + uVar13) - (long)pbVar16;
    } while ((long)sVar2 <= (long)uVar14);
  }
LAB_016d5708:
  sVar2 = CONCAT26(_DAT_043ccd36,CONCAT51(_DAT_043ccd31,DAT_043ccd29._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043ccd38._7_1_,
                            CONCAT16(DAT_043ccd38._6_1_,
                                     CONCAT51(DAT_043ccd38._1_5_,(char)DAT_043ccd38)));
  if ((DAT_043ccd28 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043ccd29;
    sVar2 = (ulong)(DAT_043ccd28 >> 1);
  }
  if (sVar2 == 0) {
    uVar14 = 0;
    goto LAB_016d5844;
  }
  if ((long)sVar2 <= (long)uVar13) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar21 + uVar13;
    pbVar16 = pbVar21;
    do {
      if (0xfffffffffffffffe < uVar13 - sVar2) {
        return;
      }
      pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar13 - sVar2) + 1);
      if (pbVar16 == (byte *)0x0) {
        return;
      }
      iVar11 = memcmp(pbVar16,pbVar3,sVar2);
      if (iVar11 == 0) {
        if (pbVar16 == pbVar1) {
          return;
        }
        do {
          uVar14 = (long)pbVar16 - (long)pbVar21;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_016d5844:
          while( true ) {
            std::string::erase(0x43cccf0,uVar14);
            bVar10 = (_DAT_043cccf0 & 1) != 0;
            uVar14 = _DAT_043cccf0 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043cccf8;
            }
            sVar2 = CONCAT26(_DAT_043ccd36,CONCAT51(_DAT_043ccd31,DAT_043ccd29._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043ccd38._7_1_,
                                      CONCAT16(DAT_043ccd38._6_1_,
                                               CONCAT51(DAT_043ccd38._1_5_,(char)DAT_043ccd38)));
            pbVar21 = DAT_043ccd00;
            if (!bVar10) {
              pbVar21 = &DAT_043cccf1;
            }
            if ((DAT_043ccd28 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043ccd29;
              sVar2 = (ulong)(DAT_043ccd28 >> 1);
            }
            if (sVar2 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar21 + uVar14;
          pbVar16 = pbVar21;
          while( true ) {
            if (0xfffffffffffffffe < uVar14 - sVar2) {
              return;
            }
            pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar14 - sVar2) + 1);
            if (pbVar16 == (byte *)0x0) {
              return;
            }
            iVar11 = memcmp(pbVar16,pbVar3,sVar2);
            if (iVar11 == 0) break;
            pbVar16 = pbVar16 + 1;
            uVar14 = (long)pbVar1 - (long)pbVar16;
            if ((long)uVar14 < (long)sVar2) {
              return;
            }
          }
          if (pbVar16 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar16 = pbVar16 + 1;
      uVar13 = (long)pbVar1 - (long)pbVar16;
    } while ((long)sVar2 <= (long)uVar13);
  }
  return;
}


