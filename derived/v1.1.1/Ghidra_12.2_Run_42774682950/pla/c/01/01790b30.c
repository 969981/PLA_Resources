/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01790b30; name: FUN_01790b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01790b30(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
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
  byte *pbVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043cf870 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cf870), iVar11 != 0)) {
    DAT_043cf840 = 0x16;
    DAT_043cf850 = (byte *)0x0;
    _DAT_043cf84c = 0;
    DAT_043cf841._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043cf848 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043cf858 = 0x2a;
    DAT_043cf868._7_1_ = 0;
    DAT_043cf868._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043cf868._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043cf868._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043cf868._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043cf868._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043cf861 = s__anonymous_namespace__039071f8[8];
    DAT_043cf861_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043cf861_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043cf861_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043cf861_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043cf866 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043cf868._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043cf859._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043cf859._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043cf868._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043cf840,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cf870);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar17 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar17 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_039b5f41._88_8_;
  _DAT_043cf820 = 0x81;
  DAT_043cf828 = 0x77;
  DAT_043cf830 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_039b5f41._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar5;
  uVar6 = CONCAT71(s_std__string_sol__detail__ctti_ge_039b5f41._112_7_,
                   s_std__string_sol__detail__ctti_ge_039b5f41[0x6f]);
  uVar5 = CONCAT17(s_std__string_sol__detail__ctti_ge_039b5f41[0x6f],
                   s_std__string_sol__detail__ctti_ge_039b5f41._104_7_);
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_039b5f41._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar5;
  *(undefined8 *)(pcVar12 + 0x6f) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_039b5f41._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039b5f41._64_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039b5f41._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_039b5f41._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar5;
  *(undefined8 *)(pcVar12 + 0x40) = uVar6;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_039b5f41._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039b5f41._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039b5f41._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_039b5f41._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar5;
  *(undefined8 *)(pcVar12 + 0x20) = uVar6;
  *(undefined8 *)(pcVar12 + 0x28) = uVar8;
  uVar6 = s_std__string_sol__detail__ctti_ge_039b5f41._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039b5f41._0_8_;
  pcVar12[0x77] = '\0';
  *(undefined8 *)pcVar12 = uVar5;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  std::string::find(' ',0x5b);
  uVar13 = std::string::find(' ',0x3d);
  uVar14 = std::string::rfind(' ',0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043cf820 & 1) == 0) {
      uVar14 = (ulong)(DAT_043cf820 >> 1);
    }
    else {
      uVar14 = DAT_043cf828;
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
    if ((_DAT_043cf820 & 1) == 0) {
      uVar13 = (ulong)(DAT_043cf820 >> 1);
    }
    else {
      uVar13 = DAT_043cf828;
    }
  }
  if (uVar18 < uVar13 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043cf820,uVar18,uVar14 - uVar18,
                      (allocator *)&DAT_043cf820);
  FUN_017911c4(&DAT_043cf820);
  _DAT_043cf820 = local_78;
  DAT_043cf828 = uStack_70;
  DAT_043cf830 = local_68;
  lVar15 = FUN_01791168(&DAT_043cf820);
  if (lVar15 != -1) {
    std::string::erase(0x43cf820,lVar15 - 2);
  }
  bVar10 = (_DAT_043cf820 & 1) == 0;
  uVar13 = (ulong)(DAT_043cf820 >> 1);
  uVar18 = _DAT_043cf820;
  uVar7 = DAT_043cf828;
  pbVar20 = DAT_043cf830;
  uVar14 = uVar13;
  bVar4 = DAT_043cf820;
  if (!bVar10) {
    uVar14 = DAT_043cf828;
  }
  while( true ) {
    _DAT_043cf820 = uVar18;
    DAT_043cf828 = uVar7;
    DAT_043cf830 = pbVar20;
    if (uVar14 == 0) break;
    pbVar3 = &DAT_043cf821;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar20;
    }
    iVar11 = isblank((uint)*pbVar3);
    if (iVar11 == 0) break;
    pbVar16 = &DAT_043cf821;
    if (!bVar10) {
      pbVar16 = pbVar20;
    }
    std::string::erase(0x43cf820,(long)pbVar16 - (long)pbVar3);
    bVar10 = (_DAT_043cf820 & 1) == 0;
    uVar13 = (ulong)(DAT_043cf820 >> 1);
    uVar18 = _DAT_043cf820;
    uVar7 = DAT_043cf828;
    pbVar20 = DAT_043cf830;
    uVar14 = uVar13;
    bVar4 = DAT_043cf820;
    if (!bVar10) {
      uVar14 = DAT_043cf828;
    }
  }
  bVar10 = (bVar4 & 1) == 0;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = uVar7;
  }
  while (uVar19 = (uint)bVar4, uVar14 != 0) {
    uVar19 = (uint)uVar18;
    uVar13 = (ulong)((uVar19 & 0xff) >> 1);
    uVar14 = uVar13;
    pbVar20 = &DAT_043cf821;
    if (!bVar10) {
      uVar14 = uVar7;
      pbVar20 = DAT_043cf830;
    }
    iVar11 = isblank((uint)pbVar20[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_01791184(&DAT_043cf820);
    bVar10 = (_DAT_043cf820 & 1) == 0;
    uVar13 = (ulong)(DAT_043cf820 >> 1);
    uVar18 = _DAT_043cf820;
    uVar7 = DAT_043cf828;
    uVar14 = uVar13;
    bVar4 = DAT_043cf820;
    if (!bVar10) {
      uVar14 = DAT_043cf828;
    }
  }
  bVar10 = (uVar19 & 1) != 0;
  if (bVar10) {
    uVar13 = uVar7;
  }
  pbVar20 = &DAT_043cf821;
  if (bVar10) {
    pbVar20 = DAT_043cf830;
  }
  sVar2 = CONCAT44(_DAT_043cf84c,ram0x043cf848);
  if ((DAT_043cf840 & 1) == 0) {
    sVar2 = (ulong)(DAT_043cf840 >> 1);
    pbVar3 = (byte *)&DAT_043cf841;
  }
  else {
    pbVar3 = DAT_043cf850;
  }
  if (sVar2 == 0) {
    uVar14 = 0;
LAB_01790ea8:
    do {
      while( true ) {
        std::string::erase(0x43cf820,uVar14);
        sVar2 = CONCAT44(_DAT_043cf84c,ram0x043cf848);
        if ((_DAT_043cf820 & 1) == 0) {
          uVar13 = _DAT_043cf820 >> 1 & 0x7f;
          pbVar20 = &DAT_043cf821;
        }
        else {
          uVar13 = DAT_043cf828;
          pbVar20 = DAT_043cf830;
        }
        if ((DAT_043cf840 & 1) == 0) {
          sVar2 = (ulong)(DAT_043cf840 >> 1);
          pbVar3 = (byte *)&DAT_043cf841;
        }
        else {
          pbVar3 = DAT_043cf850;
        }
        if (sVar2 != 0) break;
        uVar14 = 0;
      }
      if ((long)uVar13 < (long)sVar2) goto LAB_01790dec;
      bVar4 = *pbVar3;
      pbVar16 = pbVar20;
      uVar14 = uVar13;
      while( true ) {
        if ((0xfffffffffffffffe < uVar14 - sVar2) ||
           (pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar14 - sVar2) + 1), pbVar16 == (byte *)0x0))
        goto LAB_01790dec;
        iVar11 = memcmp(pbVar16,pbVar3,sVar2);
        if (iVar11 == 0) break;
        pbVar16 = pbVar16 + 1;
        uVar14 = (long)(pbVar20 + uVar13) - (long)pbVar16;
        if ((long)uVar14 < (long)sVar2) goto LAB_01790dec;
      }
      if ((pbVar16 == pbVar20 + uVar13) ||
         (uVar14 = (long)pbVar16 - (long)pbVar20, uVar14 == 0xffffffffffffffff)) goto LAB_01790dec;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar13) {
    bVar4 = *pbVar3;
    pbVar16 = pbVar20;
    uVar14 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar14 - sVar2) ||
         (pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar14 - sVar2) + 1), pbVar16 == (byte *)0x0))
      break;
      iVar11 = memcmp(pbVar16,pbVar3,sVar2);
      if (iVar11 == 0) {
        if ((pbVar16 != pbVar20 + uVar13) &&
           (uVar14 = (long)pbVar16 - (long)pbVar20, uVar14 != 0xffffffffffffffff))
        goto LAB_01790ea8;
        break;
      }
      pbVar16 = pbVar16 + 1;
      uVar14 = (long)(pbVar20 + uVar13) - (long)pbVar16;
    } while ((long)sVar2 <= (long)uVar14);
  }
LAB_01790dec:
  sVar2 = CONCAT26(_DAT_043cf866,CONCAT51(_DAT_043cf861,DAT_043cf859._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043cf868._7_1_,
                            CONCAT16(DAT_043cf868._6_1_,
                                     CONCAT51(DAT_043cf868._1_5_,(char)DAT_043cf868)));
  if ((DAT_043cf858 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043cf859;
    sVar2 = (ulong)(DAT_043cf858 >> 1);
  }
  if (sVar2 == 0) {
    uVar14 = 0;
    goto LAB_01790f54;
  }
  if ((long)sVar2 <= (long)uVar13) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar20 + uVar13;
    pbVar16 = pbVar20;
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
          uVar14 = (long)pbVar16 - (long)pbVar20;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_01790f54:
          while( true ) {
            std::string::erase(0x43cf820,uVar14);
            bVar10 = (_DAT_043cf820 & 1) != 0;
            uVar14 = _DAT_043cf820 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043cf828;
            }
            sVar2 = CONCAT26(_DAT_043cf866,CONCAT51(_DAT_043cf861,DAT_043cf859._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043cf868._7_1_,
                                      CONCAT16(DAT_043cf868._6_1_,
                                               CONCAT51(DAT_043cf868._1_5_,(char)DAT_043cf868)));
            pbVar20 = DAT_043cf830;
            if (!bVar10) {
              pbVar20 = &DAT_043cf821;
            }
            if ((DAT_043cf858 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043cf859;
              sVar2 = (ulong)(DAT_043cf858 >> 1);
            }
            if (sVar2 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar20 + uVar14;
          pbVar16 = pbVar20;
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


