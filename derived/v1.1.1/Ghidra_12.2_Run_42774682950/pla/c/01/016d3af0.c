/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016d3af0; name: FUN_016d3af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016d3af0(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  byte *pbVar21;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043ccc70 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043ccc70), iVar12 != 0)) {
    DAT_043ccc40 = 0x16;
    DAT_043ccc50 = (byte *)0x0;
    _DAT_043ccc4c = 0;
    DAT_043ccc41._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043ccc48 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043ccc58 = 0x2a;
    DAT_043ccc68._7_1_ = 0;
    DAT_043ccc68._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043ccc68._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043ccc68._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043ccc68._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043ccc68._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043ccc61 = s__anonymous_namespace__039071f8[8];
    DAT_043ccc61_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043ccc61_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043ccc61_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043ccc61_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043ccc66 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043ccc68._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043ccc59._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043ccc59._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043ccc68._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043ccc40,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ccc70);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar18 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar18 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x70,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_0399b889._72_8_;
  _DAT_043ccc20 = 0x71;
  DAT_043ccc28 = 0x66;
  DAT_043ccc30 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_0399b889._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar5;
  uVar6 = CONCAT62(s_std__string_sol__detail__ctti_ge_0399b889._96_6_,
                   s_std__string_sol__detail__ctti_ge_0399b889._94_2_);
  uVar5 = CONCAT26(s_std__string_sol__detail__ctti_ge_0399b889._94_2_,
                   s_std__string_sol__detail__ctti_ge_0399b889._88_6_);
  *(undefined8 *)(pcVar13 + 0x50) = s_std__string_sol__detail__ctti_ge_0399b889._80_8_;
  *(undefined8 *)(pcVar13 + 0x58) = uVar5;
  *(undefined8 *)(pcVar13 + 0x5e) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_0399b889._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0399b889._48_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0399b889._40_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_0399b889._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar5;
  *(undefined8 *)(pcVar13 + 0x30) = uVar6;
  *(undefined8 *)(pcVar13 + 0x38) = uVar8;
  uVar9 = s_std__string_sol__detail__ctti_ge_0399b889._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0399b889._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0399b889._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0399b889._0_8_;
  pcVar13[0x66] = '\0';
  *(undefined8 *)pcVar13 = uVar5;
  *(undefined8 *)(pcVar13 + 8) = uVar6;
  *(undefined8 *)(pcVar13 + 0x10) = uVar8;
  *(undefined8 *)(pcVar13 + 0x18) = uVar9;
  std::string::find(' ',0x5b);
  uVar14 = std::string::find(' ',0x3d);
  uVar15 = std::string::rfind(' ',0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043ccc20 & 1) == 0) {
      uVar15 = (ulong)(DAT_043ccc20 >> 1);
    }
    else {
      uVar15 = DAT_043ccc28;
    }
    uVar19 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar19 = uVar14;
    }
    uVar14 = uVar15;
  }
  else {
    uVar19 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar19 = uVar14;
    }
    if ((_DAT_043ccc20 & 1) == 0) {
      uVar14 = (ulong)(DAT_043ccc20 >> 1);
    }
    else {
      uVar14 = DAT_043ccc28;
    }
  }
  if (uVar19 < uVar14 - 1) {
    uVar19 = uVar19 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ccc20,uVar19,uVar15 - uVar19,
                      (allocator *)&DAT_043ccc20);
  FUN_016cb7a8(&DAT_043ccc20);
  _DAT_043ccc20 = local_78;
  DAT_043ccc28 = uStack_70;
  DAT_043ccc30 = local_68;
  lVar16 = FUN_016cb74c(&DAT_043ccc20);
  if (lVar16 != -1) {
    std::string::erase(0x43ccc20,lVar16 - 2);
  }
  bVar11 = (_DAT_043ccc20 & 1) == 0;
  uVar14 = (ulong)(DAT_043ccc20 >> 1);
  uVar19 = _DAT_043ccc20;
  uVar7 = DAT_043ccc28;
  pbVar21 = DAT_043ccc30;
  uVar15 = uVar14;
  bVar4 = DAT_043ccc20;
  if (!bVar11) {
    uVar15 = DAT_043ccc28;
  }
  while( true ) {
    _DAT_043ccc20 = uVar19;
    DAT_043ccc28 = uVar7;
    DAT_043ccc30 = pbVar21;
    if (uVar15 == 0) break;
    pbVar3 = &DAT_043ccc21;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar21;
    }
    iVar12 = isblank((uint)*pbVar3);
    if (iVar12 == 0) break;
    pbVar17 = &DAT_043ccc21;
    if (!bVar11) {
      pbVar17 = pbVar21;
    }
    std::string::erase(0x43ccc20,(long)pbVar17 - (long)pbVar3);
    bVar11 = (_DAT_043ccc20 & 1) == 0;
    uVar14 = (ulong)(DAT_043ccc20 >> 1);
    uVar19 = _DAT_043ccc20;
    uVar7 = DAT_043ccc28;
    pbVar21 = DAT_043ccc30;
    uVar15 = uVar14;
    bVar4 = DAT_043ccc20;
    if (!bVar11) {
      uVar15 = DAT_043ccc28;
    }
  }
  bVar11 = (bVar4 & 1) == 0;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = uVar7;
  }
  while (uVar20 = (uint)bVar4, uVar15 != 0) {
    uVar20 = (uint)uVar19;
    uVar14 = (ulong)((uVar20 & 0xff) >> 1);
    uVar15 = uVar14;
    pbVar21 = &DAT_043ccc21;
    if (!bVar11) {
      uVar15 = uVar7;
      pbVar21 = DAT_043ccc30;
    }
    iVar12 = isblank((uint)pbVar21[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_016cb768(&DAT_043ccc20);
    bVar11 = (_DAT_043ccc20 & 1) == 0;
    uVar14 = (ulong)(DAT_043ccc20 >> 1);
    uVar19 = _DAT_043ccc20;
    uVar7 = DAT_043ccc28;
    uVar15 = uVar14;
    bVar4 = DAT_043ccc20;
    if (!bVar11) {
      uVar15 = DAT_043ccc28;
    }
  }
  bVar11 = (uVar20 & 1) != 0;
  if (bVar11) {
    uVar14 = uVar7;
  }
  pbVar21 = &DAT_043ccc21;
  if (bVar11) {
    pbVar21 = DAT_043ccc30;
  }
  sVar2 = CONCAT44(_DAT_043ccc4c,ram0x043ccc48);
  if ((DAT_043ccc40 & 1) == 0) {
    sVar2 = (ulong)(DAT_043ccc40 >> 1);
    pbVar3 = (byte *)&DAT_043ccc41;
  }
  else {
    pbVar3 = DAT_043ccc50;
  }
  if (sVar2 == 0) {
    uVar15 = 0;
LAB_016d3e60:
    do {
      while( true ) {
        std::string::erase(0x43ccc20,uVar15);
        sVar2 = CONCAT44(_DAT_043ccc4c,ram0x043ccc48);
        if ((_DAT_043ccc20 & 1) == 0) {
          uVar14 = _DAT_043ccc20 >> 1 & 0x7f;
          pbVar21 = &DAT_043ccc21;
        }
        else {
          uVar14 = DAT_043ccc28;
          pbVar21 = DAT_043ccc30;
        }
        if ((DAT_043ccc40 & 1) == 0) {
          sVar2 = (ulong)(DAT_043ccc40 >> 1);
          pbVar3 = (byte *)&DAT_043ccc41;
        }
        else {
          pbVar3 = DAT_043ccc50;
        }
        if (sVar2 != 0) break;
        uVar15 = 0;
      }
      if ((long)uVar14 < (long)sVar2) goto LAB_016d3da4;
      bVar4 = *pbVar3;
      pbVar17 = pbVar21;
      uVar15 = uVar14;
      while( true ) {
        if ((0xfffffffffffffffe < uVar15 - sVar2) ||
           (pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1), pbVar17 == (byte *)0x0))
        goto LAB_016d3da4;
        iVar12 = memcmp(pbVar17,pbVar3,sVar2);
        if (iVar12 == 0) break;
        pbVar17 = pbVar17 + 1;
        uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
        if ((long)uVar15 < (long)sVar2) goto LAB_016d3da4;
      }
      if ((pbVar17 == pbVar21 + uVar14) ||
         (uVar15 = (long)pbVar17 - (long)pbVar21, uVar15 == 0xffffffffffffffff)) goto LAB_016d3da4;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar4 = *pbVar3;
    pbVar17 = pbVar21;
    uVar15 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar15 - sVar2) ||
         (pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1), pbVar17 == (byte *)0x0))
      break;
      iVar12 = memcmp(pbVar17,pbVar3,sVar2);
      if (iVar12 == 0) {
        if ((pbVar17 != pbVar21 + uVar14) &&
           (uVar15 = (long)pbVar17 - (long)pbVar21, uVar15 != 0xffffffffffffffff))
        goto LAB_016d3e60;
        break;
      }
      pbVar17 = pbVar17 + 1;
      uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
    } while ((long)sVar2 <= (long)uVar15);
  }
LAB_016d3da4:
  sVar2 = CONCAT26(_DAT_043ccc66,CONCAT51(_DAT_043ccc61,DAT_043ccc59._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043ccc68._7_1_,
                            CONCAT16(DAT_043ccc68._6_1_,
                                     CONCAT51(DAT_043ccc68._1_5_,(char)DAT_043ccc68)));
  if ((DAT_043ccc58 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043ccc59;
    sVar2 = (ulong)(DAT_043ccc58 >> 1);
  }
  if (sVar2 == 0) {
    uVar15 = 0;
    goto LAB_016d3f0c;
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar21 + uVar14;
    pbVar17 = pbVar21;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar2) {
        return;
      }
      pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar14 - sVar2) + 1);
      if (pbVar17 == (byte *)0x0) {
        return;
      }
      iVar12 = memcmp(pbVar17,pbVar3,sVar2);
      if (iVar12 == 0) {
        if (pbVar17 == pbVar1) {
          return;
        }
        do {
          uVar15 = (long)pbVar17 - (long)pbVar21;
          if (uVar15 == 0xffffffffffffffff) {
            return;
          }
LAB_016d3f0c:
          while( true ) {
            std::string::erase(0x43ccc20,uVar15);
            bVar11 = (_DAT_043ccc20 & 1) != 0;
            uVar15 = _DAT_043ccc20 >> 1 & 0x7f;
            if (bVar11) {
              uVar15 = DAT_043ccc28;
            }
            sVar2 = CONCAT26(_DAT_043ccc66,CONCAT51(_DAT_043ccc61,DAT_043ccc59._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043ccc68._7_1_,
                                      CONCAT16(DAT_043ccc68._6_1_,
                                               CONCAT51(DAT_043ccc68._1_5_,(char)DAT_043ccc68)));
            pbVar21 = DAT_043ccc30;
            if (!bVar11) {
              pbVar21 = &DAT_043ccc21;
            }
            if ((DAT_043ccc58 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043ccc59;
              sVar2 = (ulong)(DAT_043ccc58 >> 1);
            }
            if (sVar2 != 0) break;
            uVar15 = 0;
          }
          if ((long)uVar15 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar21 + uVar15;
          pbVar17 = pbVar21;
          while( true ) {
            if (0xfffffffffffffffe < uVar15 - sVar2) {
              return;
            }
            pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1);
            if (pbVar17 == (byte *)0x0) {
              return;
            }
            iVar12 = memcmp(pbVar17,pbVar3,sVar2);
            if (iVar12 == 0) break;
            pbVar17 = pbVar17 + 1;
            uVar15 = (long)pbVar1 - (long)pbVar17;
            if ((long)uVar15 < (long)sVar2) {
              return;
            }
          }
          if (pbVar17 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar17 = pbVar17 + 1;
      uVar14 = (long)pbVar1 - (long)pbVar17;
    } while ((long)sVar2 <= (long)uVar14);
  }
  return;
}


