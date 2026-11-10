/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ebb8e0; name: FUN_00ebb8e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ebb8e0(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
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
  byte *pbVar19;
  ulong uVar20;
  size_t sVar21;
  uint uVar22;
  byte *pbVar23;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b1d28 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b1d28), iVar11 != 0)) {
    DAT_043b1cf8 = 0x16;
    DAT_043b1d08 = (byte *)0x0;
    _DAT_043b1d04 = 0;
    DAT_043b1cf9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b1d00 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b1d10 = 0x2a;
    DAT_043b1d20._7_1_ = 0;
    DAT_043b1d20._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b1d20._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b1d20._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b1d20._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b1d20._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b1d19 = s__anonymous_namespace__039071f8[8];
    DAT_043b1d19_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b1d19_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b1d19_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b1d19_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b1d1e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b1d20._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b1d11._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b1d11._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b1d20._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b1cf8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b1d28);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar17 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar17 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_038d3bf0._88_8_;
  _DAT_043b1cd8 = 0x71;
  DAT_043b1ce0 = 0x6f;
  DAT_043b1ce8 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x50) = s_std__string_sol__detail__ctti_ge_038d3bf0._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar4;
  uVar4 = CONCAT71(s_std__string_sol__detail__ctti_ge_038d3bf0._104_7_,
                   s_std__string_sol__detail__ctti_ge_038d3bf0[0x67]);
  *(ulong *)(pcVar12 + 0x60) =
       CONCAT17(s_std__string_sol__detail__ctti_ge_038d3bf0[0x67],
                s_std__string_sol__detail__ctti_ge_038d3bf0._96_7_);
  uVar8 = s_std__string_sol__detail__ctti_ge_038d3bf0._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038d3bf0._64_8_;
  *(undefined8 *)(pcVar12 + 0x67) = uVar4;
  uVar6 = s_std__string_sol__detail__ctti_ge_038d3bf0._56_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038d3bf0._48_8_;
  *(undefined8 *)(pcVar12 + 0x40) = uVar7;
  *(undefined8 *)(pcVar12 + 0x48) = uVar8;
  *(undefined8 *)(pcVar12 + 0x30) = uVar4;
  *(undefined8 *)(pcVar12 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_038d3bf0._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038d3bf0._32_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038d3bf0._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_038d3bf0._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar4;
  *(undefined8 *)(pcVar12 + 0x20) = uVar6;
  *(undefined8 *)(pcVar12 + 0x28) = uVar7;
  uVar6 = s_std__string_sol__detail__ctti_ge_038d3bf0._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038d3bf0._0_8_;
  pcVar12[0x6f] = '\0';
  *(undefined8 *)pcVar12 = uVar4;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  std::string::find(-0x28,0x5b);
  uVar13 = std::string::find(-0x28,0x3d);
  uVar14 = std::string::rfind(-0x28,0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043b1cd8 & 1) == 0) {
      uVar14 = (ulong)(DAT_043b1cd8 >> 1);
    }
    else {
      uVar14 = DAT_043b1ce0;
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
    if ((_DAT_043b1cd8 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b1cd8 >> 1);
    }
    else {
      uVar13 = DAT_043b1ce0;
    }
  }
  if (uVar18 < uVar13 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b1cd8,uVar18,uVar14 - uVar18,
                      (allocator *)&DAT_043b1cd8);
  FUN_00ebbf98(&DAT_043b1cd8);
  _DAT_043b1cd8 = local_78;
  DAT_043b1ce0 = uStack_70;
  DAT_043b1ce8 = local_68;
  lVar15 = FUN_00ebbf3c(&DAT_043b1cd8);
  if (lVar15 != -1) {
    std::string::erase(0x43b1cd8,lVar15 - 2);
  }
  uVar14 = (ulong)(DAT_043b1cd8 >> 1);
  uVar13 = DAT_043b1ce0;
  pbVar23 = DAT_043b1ce8;
  uVar18 = uVar14;
  if ((_DAT_043b1cd8 & 1) != 0) {
    uVar18 = DAT_043b1ce0;
  }
  while( true ) {
    bVar2 = DAT_043b1cd8 & 1;
    bVar5 = DAT_043b1cd8 & 1;
    uVar22 = DAT_043b1cd8 & 1;
    uVar20 = _DAT_043b1cd8 & 0xff;
    DAT_043b1ce0 = uVar13;
    DAT_043b1ce8 = pbVar23;
    if (uVar18 == 0) break;
    bVar3 = DAT_043b1cd8 & 1;
    pbVar1 = &DAT_043b1cd9;
    if ((DAT_043b1cd8 & 1) != 0) {
      pbVar1 = pbVar23;
    }
    iVar11 = isblank((uint)*pbVar1);
    if (iVar11 == 0) break;
    pbVar16 = &DAT_043b1cd9;
    if (bVar3 != 0) {
      pbVar16 = pbVar23;
    }
    std::string::erase(0x43b1cd8,(long)pbVar16 - (long)pbVar1);
    uVar14 = (ulong)(DAT_043b1cd8 >> 1);
    uVar13 = DAT_043b1ce0;
    pbVar23 = DAT_043b1ce8;
    uVar18 = uVar14;
    if ((_DAT_043b1cd8 & 1) != 0) {
      uVar18 = DAT_043b1ce0;
    }
  }
  bVar10 = bVar5 == 0;
  uVar18 = uVar13;
  if (bVar2 == 0) {
    uVar18 = uVar14;
  }
  while( true ) {
    if (uVar18 == 0) break;
    while( true ) {
      uVar14 = (ulong)((uint)uVar20 >> 1);
      uVar18 = uVar14;
      pbVar23 = &DAT_043b1cd9;
      if (!bVar10) {
        uVar18 = uVar13;
        pbVar23 = DAT_043b1ce8;
      }
      iVar11 = isblank((uint)pbVar23[uVar18 - 1]);
      if (iVar11 == 0) {
        uVar22 = (uint)uVar20 & 1;
        goto LAB_00ebbb48;
      }
      FUN_00ebbf58(&DAT_043b1cd8);
      uVar20 = _DAT_043b1cd8 & 0xff;
      bVar10 = (_DAT_043b1cd8 & 1) == 0;
      uVar14 = (ulong)(DAT_043b1cd8 >> 1);
      uVar22 = DAT_043b1cd8 & 1;
      uVar13 = DAT_043b1ce0;
      uVar18 = DAT_043b1ce0;
      if ((_DAT_043b1cd8 & 1) != 0) break;
      if (uVar14 == 0) goto LAB_00ebbb48;
    }
  }
LAB_00ebbb48:
  if (uVar22 != 0) {
    uVar14 = uVar13;
  }
  pbVar23 = &DAT_043b1cd9;
  if (uVar22 != 0) {
    pbVar23 = DAT_043b1ce8;
  }
  sVar21 = CONCAT44(_DAT_043b1d04,ram0x043b1d00);
  pbVar1 = DAT_043b1d08;
  if ((DAT_043b1cf8 & 1) == 0) {
    sVar21 = (size_t)(DAT_043b1cf8 >> 1);
    pbVar1 = (byte *)&DAT_043b1cf9;
  }
  if (sVar21 == 0) {
    uVar13 = 0;
    goto LAB_00ebbd78;
  }
  if ((long)sVar21 <= (long)uVar14) {
    bVar2 = *pbVar1;
    pbVar16 = pbVar23;
    uVar13 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar21) ||
         (pbVar16 = memchr(pbVar16,(uint)bVar2,(uVar13 - sVar21) + 1), pbVar16 == (byte *)0x0))
      break;
      iVar11 = memcmp(pbVar16,pbVar1,sVar21);
      if (iVar11 == 0) {
        if (pbVar16 != pbVar23 + uVar14) {
          uVar13 = (long)pbVar16 - (long)pbVar23;
          goto joined_r0x00ebbe4c;
        }
        break;
      }
      pbVar16 = pbVar16 + 1;
      uVar13 = (long)(pbVar23 + uVar14) - (long)pbVar16;
    } while ((long)sVar21 <= (long)uVar13);
  }
  goto LAB_00ebbba0;
joined_r0x00ebbe4c:
  if (uVar13 != 0xffffffffffffffff) {
LAB_00ebbd78:
    std::string::erase(0x43b1cd8,uVar13);
    bVar10 = (_DAT_043b1cd8 & 1) == 0;
    pbVar23 = DAT_043b1ce8;
    if (bVar10) {
      pbVar23 = &DAT_043b1cd9;
    }
    sVar21 = CONCAT44(_DAT_043b1d04,ram0x043b1d00);
    uVar14 = _DAT_043b1cd8 >> 1 & 0x7f;
    if (!bVar10) {
      uVar14 = DAT_043b1ce0;
    }
    if ((DAT_043b1cf8 & 1) == 0) {
      sVar21 = (ulong)(DAT_043b1cf8 >> 1);
      pbVar1 = (byte *)&DAT_043b1cf9;
    }
    else {
      pbVar1 = DAT_043b1d08;
    }
    if (sVar21 == 0) {
      uVar13 = 0;
    }
    else {
      if ((long)uVar14 < (long)sVar21) goto LAB_00ebbba0;
      bVar2 = *pbVar1;
      pbVar16 = pbVar23;
      uVar13 = uVar14;
      while( true ) {
        if ((0xfffffffffffffffe < uVar13 - sVar21) ||
           (pbVar16 = memchr(pbVar16,(uint)bVar2,(uVar13 - sVar21) + 1), pbVar16 == (byte *)0x0))
        goto LAB_00ebbba0;
        iVar11 = memcmp(pbVar16,pbVar1,sVar21);
        if (iVar11 == 0) break;
        pbVar16 = pbVar16 + 1;
        uVar13 = (long)(pbVar23 + uVar14) - (long)pbVar16;
        if ((long)uVar13 < (long)sVar21) goto LAB_00ebbba0;
      }
      if (pbVar16 == pbVar23 + uVar14) goto LAB_00ebbba0;
      uVar13 = (long)pbVar16 - (long)pbVar23;
    }
    goto joined_r0x00ebbe4c;
  }
LAB_00ebbba0:
  sVar21 = CONCAT26(_DAT_043b1d1e,CONCAT51(_DAT_043b1d19,DAT_043b1d11._7_1_));
  pbVar1 = (byte *)CONCAT17(DAT_043b1d20._7_1_,
                            CONCAT16(DAT_043b1d20._6_1_,
                                     CONCAT51(DAT_043b1d20._1_5_,(char)DAT_043b1d20)));
  if ((DAT_043b1d10 & 1) == 0) {
    pbVar1 = (byte *)&DAT_043b1d11;
    sVar21 = (ulong)(DAT_043b1d10 >> 1);
  }
  if (sVar21 == 0) {
    uVar14 = 0;
    goto LAB_00ebbc7c;
  }
  if ((long)sVar21 <= (long)uVar14) {
    bVar2 = *pbVar1;
    pbVar19 = pbVar23 + uVar14;
    pbVar16 = pbVar23;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar21) {
        return;
      }
      pbVar16 = memchr(pbVar16,(uint)bVar2,(uVar14 - sVar21) + 1);
      if (pbVar16 == (byte *)0x0) {
        return;
      }
      iVar11 = memcmp(pbVar16,pbVar1,sVar21);
      if (iVar11 == 0) {
        do {
          if (pbVar16 == pbVar19) {
            return;
          }
          uVar14 = (long)pbVar16 - (long)pbVar23;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_00ebbc7c:
          while( true ) {
            std::string::erase(0x43b1cd8,uVar14);
            bVar10 = (_DAT_043b1cd8 & 1) != 0;
            uVar14 = _DAT_043b1cd8 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043b1ce0;
            }
            sVar21 = CONCAT26(_DAT_043b1d1e,CONCAT51(_DAT_043b1d19,DAT_043b1d11._7_1_));
            pbVar1 = (byte *)CONCAT17(DAT_043b1d20._7_1_,
                                      CONCAT16(DAT_043b1d20._6_1_,
                                               CONCAT51(DAT_043b1d20._1_5_,(char)DAT_043b1d20)));
            pbVar23 = DAT_043b1ce8;
            if (!bVar10) {
              pbVar23 = &DAT_043b1cd9;
            }
            if ((DAT_043b1d10 & 1) == 0) {
              pbVar1 = (byte *)&DAT_043b1d11;
              sVar21 = (ulong)(DAT_043b1d10 >> 1);
            }
            if (sVar21 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar21) {
            return;
          }
          bVar2 = *pbVar1;
          pbVar19 = pbVar23 + uVar14;
          pbVar16 = pbVar23;
          while( true ) {
            if (0xfffffffffffffffe < uVar14 - sVar21) {
              return;
            }
            pbVar16 = memchr(pbVar16,(uint)bVar2,(uVar14 - sVar21) + 1);
            if (pbVar16 == (byte *)0x0) {
              return;
            }
            iVar11 = memcmp(pbVar16,pbVar1,sVar21);
            if (iVar11 == 0) break;
            pbVar16 = pbVar16 + 1;
            uVar14 = (long)pbVar19 - (long)pbVar16;
            if ((long)uVar14 < (long)sVar21) {
              return;
            }
          }
        } while( true );
      }
      pbVar16 = pbVar16 + 1;
      uVar14 = (long)pbVar19 - (long)pbVar16;
    } while ((long)sVar21 <= (long)uVar14);
  }
  return;
}


