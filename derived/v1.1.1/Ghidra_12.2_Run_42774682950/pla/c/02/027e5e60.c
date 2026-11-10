/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027e5e60; name: FUN_027e5e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e5e60(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
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
  
  if (((DAT_043eaaf8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043eaaf8), iVar12 != 0)) {
    DAT_043eaac8 = 0x16;
    DAT_043eaad8 = (byte *)0x0;
    _DAT_043eaad4 = 0;
    DAT_043eaac9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043eaad0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043eaae0 = 0x2a;
    DAT_043eaaf0._7_1_ = 0;
    DAT_043eaaf0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043eaaf0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043eaaf0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043eaaf0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043eaaf0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043eaae9 = s__anonymous_namespace__039071f8[8];
    DAT_043eaae9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043eaae9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043eaae9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043eaae9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043eaaee = s__anonymous_namespace__039071f8._13_2_;
    DAT_043eaaf0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043eaae1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043eaae1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043eaaf0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043eaac8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043eaaf8);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar18 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar18 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x70,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_0389e739._88_8_;
  _DAT_043eaaa8 = 0x71;
  DAT_043eaab0 = 0x6e;
  DAT_043eaab8 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x50) = s_std__string_sol__detail__ctti_ge_0389e739._80_8_;
  *(undefined8 *)(pcVar13 + 0x58) = uVar5;
  uVar5 = CONCAT62(s_std__string_sol__detail__ctti_ge_0389e739._104_6_,
                   s_std__string_sol__detail__ctti_ge_0389e739._102_2_);
  *(ulong *)(pcVar13 + 0x60) =
       CONCAT26(s_std__string_sol__detail__ctti_ge_0389e739._102_2_,
                s_std__string_sol__detail__ctti_ge_0389e739._96_6_);
  uVar9 = s_std__string_sol__detail__ctti_ge_0389e739._72_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0389e739._64_8_;
  *(undefined8 *)(pcVar13 + 0x66) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_0389e739._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389e739._48_8_;
  *(undefined8 *)(pcVar13 + 0x40) = uVar8;
  *(undefined8 *)(pcVar13 + 0x48) = uVar9;
  *(undefined8 *)(pcVar13 + 0x30) = uVar5;
  *(undefined8 *)(pcVar13 + 0x38) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0389e739._40_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0389e739._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389e739._24_8_;
  *(undefined8 *)(pcVar13 + 0x10) = s_std__string_sol__detail__ctti_ge_0389e739._16_8_;
  *(undefined8 *)(pcVar13 + 0x18) = uVar5;
  *(undefined8 *)(pcVar13 + 0x20) = uVar7;
  *(undefined8 *)(pcVar13 + 0x28) = uVar8;
  uVar7 = s_std__string_sol__detail__ctti_ge_0389e739._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0389e739._0_8_;
  pcVar13[0x6e] = '\0';
  *(undefined8 *)pcVar13 = uVar5;
  *(undefined8 *)(pcVar13 + 8) = uVar7;
  std::string::find(-0x58,0x5b);
  uVar14 = std::string::find(-0x58,0x3d);
  uVar15 = std::string::rfind(-0x58,0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043eaaa8 & 1) == 0) {
      uVar15 = (ulong)(DAT_043eaaa8 >> 1);
    }
    else {
      uVar15 = DAT_043eaab0;
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
    if ((_DAT_043eaaa8 & 1) == 0) {
      uVar14 = (ulong)(DAT_043eaaa8 >> 1);
    }
    else {
      uVar14 = DAT_043eaab0;
    }
  }
  if (uVar19 < uVar14 - 1) {
    uVar19 = uVar19 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043eaaa8,uVar19,uVar15 - uVar19,
                      (allocator *)&DAT_043eaaa8);
  FUN_027e64f4(&DAT_043eaaa8);
  _DAT_043eaaa8 = local_78;
  DAT_043eaab0 = uStack_70;
  DAT_043eaab8 = local_68;
  lVar16 = FUN_027e6498(&DAT_043eaaa8);
  if (lVar16 != -1) {
    std::string::erase(0x43eaaa8,lVar16 - 2);
  }
  bVar11 = (_DAT_043eaaa8 & 1) == 0;
  uVar14 = (ulong)(DAT_043eaaa8 >> 1);
  uVar19 = _DAT_043eaaa8;
  uVar6 = DAT_043eaab0;
  pbVar21 = DAT_043eaab8;
  uVar15 = uVar14;
  bVar4 = DAT_043eaaa8;
  if (!bVar11) {
    uVar15 = DAT_043eaab0;
  }
  while( true ) {
    _DAT_043eaaa8 = uVar19;
    DAT_043eaab0 = uVar6;
    DAT_043eaab8 = pbVar21;
    if (uVar15 == 0) break;
    pbVar3 = &DAT_043eaaa9;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar21;
    }
    iVar12 = isblank((uint)*pbVar3);
    if (iVar12 == 0) break;
    pbVar17 = &DAT_043eaaa9;
    if (!bVar11) {
      pbVar17 = pbVar21;
    }
    std::string::erase(0x43eaaa8,(long)pbVar17 - (long)pbVar3);
    bVar11 = (_DAT_043eaaa8 & 1) == 0;
    uVar14 = (ulong)(DAT_043eaaa8 >> 1);
    uVar19 = _DAT_043eaaa8;
    uVar6 = DAT_043eaab0;
    pbVar21 = DAT_043eaab8;
    uVar15 = uVar14;
    bVar4 = DAT_043eaaa8;
    if (!bVar11) {
      uVar15 = DAT_043eaab0;
    }
  }
  bVar11 = (bVar4 & 1) == 0;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = uVar6;
  }
  while (uVar20 = (uint)bVar4, uVar15 != 0) {
    uVar20 = (uint)uVar19;
    uVar14 = (ulong)((uVar20 & 0xff) >> 1);
    uVar15 = uVar14;
    pbVar21 = &DAT_043eaaa9;
    if (!bVar11) {
      uVar15 = uVar6;
      pbVar21 = DAT_043eaab8;
    }
    iVar12 = isblank((uint)pbVar21[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_027e64b4(&DAT_043eaaa8);
    bVar11 = (_DAT_043eaaa8 & 1) == 0;
    uVar14 = (ulong)(DAT_043eaaa8 >> 1);
    uVar19 = _DAT_043eaaa8;
    uVar6 = DAT_043eaab0;
    uVar15 = uVar14;
    bVar4 = DAT_043eaaa8;
    if (!bVar11) {
      uVar15 = DAT_043eaab0;
    }
  }
  bVar11 = (uVar20 & 1) != 0;
  if (bVar11) {
    uVar14 = uVar6;
  }
  pbVar21 = &DAT_043eaaa9;
  if (bVar11) {
    pbVar21 = DAT_043eaab8;
  }
  sVar2 = CONCAT44(_DAT_043eaad4,ram0x043eaad0);
  if ((DAT_043eaac8 & 1) == 0) {
    sVar2 = (ulong)(DAT_043eaac8 >> 1);
    pbVar3 = (byte *)&DAT_043eaac9;
  }
  else {
    pbVar3 = DAT_043eaad8;
  }
  if (sVar2 == 0) {
    uVar15 = 0;
LAB_027e61d8:
    do {
      while( true ) {
        std::string::erase(0x43eaaa8,uVar15);
        sVar2 = CONCAT44(_DAT_043eaad4,ram0x043eaad0);
        if ((_DAT_043eaaa8 & 1) == 0) {
          uVar14 = _DAT_043eaaa8 >> 1 & 0x7f;
          pbVar21 = &DAT_043eaaa9;
        }
        else {
          uVar14 = DAT_043eaab0;
          pbVar21 = DAT_043eaab8;
        }
        if ((DAT_043eaac8 & 1) == 0) {
          sVar2 = (ulong)(DAT_043eaac8 >> 1);
          pbVar3 = (byte *)&DAT_043eaac9;
        }
        else {
          pbVar3 = DAT_043eaad8;
        }
        if (sVar2 != 0) break;
        uVar15 = 0;
      }
      if ((long)uVar14 < (long)sVar2) goto LAB_027e611c;
      bVar4 = *pbVar3;
      pbVar17 = pbVar21;
      uVar15 = uVar14;
      while( true ) {
        if ((0xfffffffffffffffe < uVar15 - sVar2) ||
           (pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1), pbVar17 == (byte *)0x0))
        goto LAB_027e611c;
        iVar12 = memcmp(pbVar17,pbVar3,sVar2);
        if (iVar12 == 0) break;
        pbVar17 = pbVar17 + 1;
        uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
        if ((long)uVar15 < (long)sVar2) goto LAB_027e611c;
      }
      if ((pbVar17 == pbVar21 + uVar14) ||
         (uVar15 = (long)pbVar17 - (long)pbVar21, uVar15 == 0xffffffffffffffff)) goto LAB_027e611c;
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
        goto LAB_027e61d8;
        break;
      }
      pbVar17 = pbVar17 + 1;
      uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
    } while ((long)sVar2 <= (long)uVar15);
  }
LAB_027e611c:
  sVar2 = CONCAT26(_DAT_043eaaee,CONCAT51(_DAT_043eaae9,DAT_043eaae1._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043eaaf0._7_1_,
                            CONCAT16(DAT_043eaaf0._6_1_,
                                     CONCAT51(DAT_043eaaf0._1_5_,(char)DAT_043eaaf0)));
  if ((DAT_043eaae0 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043eaae1;
    sVar2 = (ulong)(DAT_043eaae0 >> 1);
  }
  if (sVar2 == 0) {
    uVar15 = 0;
    goto LAB_027e6284;
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
LAB_027e6284:
          while( true ) {
            std::string::erase(0x43eaaa8,uVar15);
            bVar11 = (_DAT_043eaaa8 & 1) != 0;
            uVar15 = _DAT_043eaaa8 >> 1 & 0x7f;
            if (bVar11) {
              uVar15 = DAT_043eaab0;
            }
            sVar2 = CONCAT26(_DAT_043eaaee,CONCAT51(_DAT_043eaae9,DAT_043eaae1._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043eaaf0._7_1_,
                                      CONCAT16(DAT_043eaaf0._6_1_,
                                               CONCAT51(DAT_043eaaf0._1_5_,(char)DAT_043eaaf0)));
            pbVar21 = DAT_043eaab8;
            if (!bVar11) {
              pbVar21 = &DAT_043eaaa9;
            }
            if ((DAT_043eaae0 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043eaae1;
              sVar2 = (ulong)(DAT_043eaae0 >> 1);
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


