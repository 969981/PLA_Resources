/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd7e10; name: FUN_00fd7e10
 */


/* WARNING: Removing unreachable block (ram,0x00fd8370) */
/* WARNING: Removing unreachable block (ram,0x00fd8380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fd7e10(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b7928 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b7928), iVar10 != 0)) {
    DAT_043b78f8 = 0x16;
    DAT_043b7908 = (byte *)0x0;
    _DAT_043b7904 = 0;
    DAT_043b78f9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b7900 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b7910 = 0x2a;
    DAT_043b7920._7_1_ = 0;
    DAT_043b7920._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b7920._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b7920._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b7920._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b7920._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b7919 = s__anonymous_namespace__039071f8[8];
    DAT_043b7919_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b7919_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b7919_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b7919_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b791e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b7920._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b7911._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b7911._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b7920._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b78f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b7928);
  }
  plVar8 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar16 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar16 = plVar8;
  }
  pcVar11 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_039446c0._88_8_;
  _DAT_043b78d8 = 0x81;
  DAT_043b78e0 = 0x76;
  DAT_043b78e8 = (byte *)pcVar11;
  *(undefined8 *)(pcVar11 + 0x50) = s_std__string_sol__detail__ctti_ge_039446c0._80_8_;
  *(undefined8 *)(pcVar11 + 0x58) = uVar5;
  uVar6 = CONCAT62(s_std__string_sol__detail__ctti_ge_039446c0._112_6_,
                   s_std__string_sol__detail__ctti_ge_039446c0._110_2_);
  uVar5 = CONCAT26(s_std__string_sol__detail__ctti_ge_039446c0._110_2_,
                   s_std__string_sol__detail__ctti_ge_039446c0._104_6_);
  *(undefined8 *)(pcVar11 + 0x60) = s_std__string_sol__detail__ctti_ge_039446c0._96_8_;
  *(undefined8 *)(pcVar11 + 0x68) = uVar5;
  *(undefined8 *)(pcVar11 + 0x6e) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_039446c0._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039446c0._64_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039446c0._56_8_;
  *(undefined8 *)(pcVar11 + 0x30) = s_std__string_sol__detail__ctti_ge_039446c0._48_8_;
  *(undefined8 *)(pcVar11 + 0x38) = uVar5;
  *(undefined8 *)(pcVar11 + 0x40) = uVar6;
  *(undefined8 *)(pcVar11 + 0x48) = uVar7;
  uVar7 = s_std__string_sol__detail__ctti_ge_039446c0._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039446c0._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039446c0._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_std__string_sol__detail__ctti_ge_039446c0._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar5;
  *(undefined8 *)(pcVar11 + 0x20) = uVar6;
  *(undefined8 *)(pcVar11 + 0x28) = uVar7;
  uVar6 = s_std__string_sol__detail__ctti_ge_039446c0._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039446c0._0_8_;
  pcVar11[0x76] = '\0';
  *(undefined8 *)pcVar11 = uVar5;
  *(undefined8 *)(pcVar11 + 8) = uVar6;
  std::string::find(-0x28,0x5b);
  uVar12 = std::string::find(-0x28,0x3d);
  uVar13 = std::string::rfind(-0x28,0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043b78d8 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b78d8 >> 1);
    }
    else {
      uVar13 = DAT_043b78e0;
    }
    uVar17 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar17 = uVar12;
    }
    uVar12 = uVar13;
  }
  else {
    uVar17 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar17 = uVar12;
    }
    if ((_DAT_043b78d8 & 1) == 0) {
      uVar12 = (ulong)(DAT_043b78d8 >> 1);
    }
    else {
      uVar12 = DAT_043b78e0;
    }
  }
  if (uVar17 < uVar12 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b78d8,uVar17,uVar13 - uVar17,
                      (allocator *)&DAT_043b78d8);
  FUN_00fd64bc(&DAT_043b78d8);
  _DAT_043b78d8 = local_78;
  DAT_043b78e0 = uStack_70;
  DAT_043b78e8 = local_68;
  lVar14 = FUN_00fd6460(&DAT_043b78d8);
  if (lVar14 != -1) {
    std::string::erase(0x43b78d8,lVar14 - 2);
  }
  bVar9 = (_DAT_043b78d8 & 1) == 0;
  uVar12 = (ulong)(DAT_043b78d8 >> 1);
  uVar17 = DAT_043b78e0;
  pbVar20 = DAT_043b78e8;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = DAT_043b78e0;
  }
  while( true ) {
    uVar18 = (uint)DAT_043b78d8;
    bVar4 = DAT_043b78d8 & 1;
    uVar19 = _DAT_043b78d8 & 0xff;
    DAT_043b78e0 = uVar17;
    DAT_043b78e8 = pbVar20;
    if (uVar13 == 0) break;
    pbVar3 = &DAT_043b78d9;
    if ((DAT_043b78d8 & 1) != 0) {
      pbVar3 = pbVar20;
    }
    iVar10 = isblank((uint)*pbVar3);
    if (iVar10 == 0) break;
    pbVar15 = &DAT_043b78d9;
    if (!bVar9) {
      pbVar15 = pbVar20;
    }
    std::string::erase(0x43b78d8,(long)pbVar15 - (long)pbVar3);
    bVar9 = (_DAT_043b78d8 & 1) == 0;
    uVar12 = (ulong)(DAT_043b78d8 >> 1);
    uVar17 = DAT_043b78e0;
    pbVar20 = DAT_043b78e8;
    uVar13 = uVar12;
    if (!bVar9) {
      uVar13 = DAT_043b78e0;
    }
  }
  bVar9 = bVar4 == 0;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = uVar17;
  }
  while (uVar13 != 0) {
    uVar18 = (uint)uVar19;
    uVar12 = (ulong)(uVar18 >> 1);
    uVar13 = uVar12;
    pbVar20 = &DAT_043b78d9;
    if (!bVar9) {
      uVar13 = uVar17;
      pbVar20 = DAT_043b78e8;
    }
    iVar10 = isblank((uint)pbVar20[uVar13 - 1]);
    if (iVar10 == 0) break;
    FUN_00fd647c(&DAT_043b78d8);
    uVar19 = _DAT_043b78d8 & 0xff;
    uVar18 = (uint)uVar19;
    bVar9 = (_DAT_043b78d8 & 1) == 0;
    uVar12 = _DAT_043b78d8 >> 1 & 0x7f;
    uVar17 = DAT_043b78e0;
    uVar13 = uVar12;
    if (!bVar9) {
      uVar13 = DAT_043b78e0;
    }
  }
  bVar9 = (uVar18 & 1) != 0;
  if (bVar9) {
    uVar12 = uVar17;
  }
  pbVar20 = &DAT_043b78d9;
  if (bVar9) {
    pbVar20 = DAT_043b78e8;
  }
  sVar2 = CONCAT44(_DAT_043b7904,ram0x043b7900);
  if ((DAT_043b78f8 & 1) == 0) {
    sVar2 = (ulong)(DAT_043b78f8 >> 1);
    pbVar3 = (byte *)&DAT_043b78f9;
  }
  else {
    pbVar3 = DAT_043b7908;
  }
  if (sVar2 == 0) {
    uVar13 = 0;
LAB_00fd818c:
    do {
      while( true ) {
        std::string::erase(0x43b78d8,uVar13);
        sVar2 = CONCAT44(_DAT_043b7904,ram0x043b7900);
        if ((_DAT_043b78d8 & 1) == 0) {
          uVar12 = _DAT_043b78d8 >> 1 & 0x7f;
          pbVar20 = &DAT_043b78d9;
        }
        else {
          uVar12 = DAT_043b78e0;
          pbVar20 = DAT_043b78e8;
        }
        if ((DAT_043b78f8 & 1) == 0) {
          sVar2 = (ulong)(DAT_043b78f8 >> 1);
          pbVar3 = (byte *)&DAT_043b78f9;
        }
        else {
          pbVar3 = DAT_043b7908;
        }
        if (sVar2 != 0) break;
        uVar13 = 0;
      }
      if ((long)uVar12 < (long)sVar2) goto LAB_00fd80fc;
      bVar4 = *pbVar3;
      pbVar15 = pbVar20;
      uVar13 = uVar12;
      while( true ) {
        if ((0xfffffffffffffffe < uVar13 - sVar2) ||
           (pbVar15 = memchr(pbVar15,(uint)bVar4,(uVar13 - sVar2) + 1), pbVar15 == (byte *)0x0))
        goto LAB_00fd80fc;
        iVar10 = memcmp(pbVar15,pbVar3,sVar2);
        if (iVar10 == 0) break;
        pbVar15 = pbVar15 + 1;
        uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
        if ((long)uVar13 < (long)sVar2) goto LAB_00fd80fc;
      }
      if ((pbVar15 == pbVar20 + uVar12) ||
         (uVar13 = (long)pbVar15 - (long)pbVar20, uVar13 == 0xffffffffffffffff)) goto LAB_00fd80fc;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar12) {
    bVar4 = *pbVar3;
    pbVar15 = pbVar20;
    uVar13 = uVar12;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar2) ||
         (pbVar15 = memchr(pbVar15,(uint)bVar4,(uVar13 - sVar2) + 1), pbVar15 == (byte *)0x0))
      break;
      iVar10 = memcmp(pbVar15,pbVar3,sVar2);
      if (iVar10 == 0) {
        if ((pbVar15 != pbVar20 + uVar12) &&
           (uVar13 = (long)pbVar15 - (long)pbVar20, uVar13 != 0xffffffffffffffff))
        goto LAB_00fd818c;
        break;
      }
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
    } while ((long)sVar2 <= (long)uVar13);
  }
LAB_00fd80fc:
  sVar2 = CONCAT26(_DAT_043b791e,CONCAT51(_DAT_043b7919,DAT_043b7911._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043b7920._7_1_,
                            CONCAT16(DAT_043b7920._6_1_,
                                     CONCAT51(DAT_043b7920._1_5_,(char)DAT_043b7920)));
  if ((DAT_043b7910 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043b7911;
    sVar2 = (ulong)(DAT_043b7910 >> 1);
  }
  if (sVar2 == 0) {
    uVar13 = 0;
    goto LAB_00fd8238;
  }
  if ((long)sVar2 <= (long)uVar12) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar20 + uVar12;
    pbVar15 = pbVar20;
    do {
      if (0xfffffffffffffffe < uVar12 - sVar2) {
        return;
      }
      pbVar15 = memchr(pbVar15,(uint)bVar4,(uVar12 - sVar2) + 1);
      if (pbVar15 == (byte *)0x0) {
        return;
      }
      iVar10 = memcmp(pbVar15,pbVar3,sVar2);
      if (iVar10 == 0) {
        if (pbVar15 == pbVar1) {
          return;
        }
        do {
          uVar13 = (long)pbVar15 - (long)pbVar20;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_00fd8238:
          while( true ) {
            std::string::erase(0x43b78d8,uVar13);
            bVar9 = (_DAT_043b78d8 & 1) != 0;
            uVar13 = _DAT_043b78d8 >> 1 & 0x7f;
            if (bVar9) {
              uVar13 = DAT_043b78e0;
            }
            sVar2 = CONCAT26(_DAT_043b791e,CONCAT51(_DAT_043b7919,DAT_043b7911._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043b7920._7_1_,
                                      CONCAT16(DAT_043b7920._6_1_,
                                               CONCAT51(DAT_043b7920._1_5_,(char)DAT_043b7920)));
            pbVar20 = DAT_043b78e8;
            if (!bVar9) {
              pbVar20 = &DAT_043b78d9;
            }
            if ((DAT_043b7910 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043b7911;
              sVar2 = (ulong)(DAT_043b7910 >> 1);
            }
            if (sVar2 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar20 + uVar13;
          pbVar15 = pbVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar2) {
              return;
            }
            pbVar15 = memchr(pbVar15,(uint)bVar4,(uVar13 - sVar2) + 1);
            if (pbVar15 == (byte *)0x0) {
              return;
            }
            iVar10 = memcmp(pbVar15,pbVar3,sVar2);
            if (iVar10 == 0) break;
            pbVar15 = pbVar15 + 1;
            uVar13 = (long)pbVar1 - (long)pbVar15;
            if ((long)uVar13 < (long)sVar2) {
              return;
            }
          }
          if (pbVar15 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar15 = pbVar15 + 1;
      uVar12 = (long)pbVar1 - (long)pbVar15;
    } while ((long)sVar2 <= (long)uVar12);
  }
  return;
}


