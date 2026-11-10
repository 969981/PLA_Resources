/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e17240; name: FUN_00e17240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e17240(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
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
  size_t sVar20;
  byte *pbVar21;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043aef10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043aef10), iVar11 != 0)) {
    DAT_043aeee0 = 0x16;
    DAT_043aeef0 = (byte *)0x0;
    _DAT_043aeeec = 0;
    DAT_043aeee1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043aeee8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043aeef8 = 0x2a;
    DAT_043aef08._7_1_ = 0;
    DAT_043aef08._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043aef08._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043aef08._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043aef08._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043aef08._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043aef01 = s__anonymous_namespace__039071f8[8];
    DAT_043aef01_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043aef01_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043aef01_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043aef01_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043aef06 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043aef08._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043aeef9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043aeef9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043aef08._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043aeee0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aef10);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar17 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar17 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_03943dca._24_8_;
  _DAT_043aeec0 = 0x71;
  DAT_043aeec8 = 0x6a;
  DAT_043aeed0 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_03943dca._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_03943dca._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_03943dca._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03943dca._8_8_;
  *(undefined8 *)pcVar12 = s_std__string_sol__detail__ctti_ge_03943dca._0_8_;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_03943dca._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_03943dca._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar5;
  *(undefined8 *)(pcVar12 + 0x20) = uVar6;
  *(undefined8 *)(pcVar12 + 0x28) = uVar7;
  uVar6 = s_std__string_sol__detail__ctti_ge_03943dca._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03943dca._64_8_;
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_03943dca._96_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_03943dca._88_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_03943dca._80_8_;
  pcVar12[0x6a] = '\0';
  *(undefined8 *)(pcVar12 + 0x40) = uVar5;
  *(undefined8 *)(pcVar12 + 0x48) = uVar6;
  pcVar12[0x68] = 't';
  pcVar12[0x69] = ']';
  *(undefined8 *)(pcVar12 + 0x50) = uVar7;
  *(undefined8 *)(pcVar12 + 0x58) = uVar8;
  std::string::find(-0x40,0x5b);
  uVar13 = std::string::find(-0x40,0x3d);
  uVar14 = std::string::rfind(-0x40,0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043aeec0 & 1) == 0) {
      uVar14 = (ulong)(DAT_043aeec0 >> 1);
    }
    else {
      uVar14 = DAT_043aeec8;
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
    if ((_DAT_043aeec0 & 1) == 0) {
      uVar13 = (ulong)(DAT_043aeec0 >> 1);
    }
    else {
      uVar13 = DAT_043aeec8;
    }
  }
  if (uVar18 < uVar13 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043aeec0,uVar18,uVar14 - uVar18,
                      (allocator *)&DAT_043aeec0);
  FUN_00e0f920(&DAT_043aeec0);
  _DAT_043aeec0 = local_78;
  DAT_043aeec8 = uStack_70;
  DAT_043aeed0 = local_68;
  lVar15 = FUN_00e0f8c4(&DAT_043aeec0);
  if (lVar15 != -1) {
    std::string::erase(0x43aeec0,lVar15 - 2);
  }
  bVar10 = (_DAT_043aeec0 & 1) == 0;
  uVar13 = (ulong)(DAT_043aeec0 >> 1);
  uVar18 = _DAT_043aeec0;
  uVar4 = DAT_043aeec8;
  pbVar21 = DAT_043aeed0;
  uVar14 = uVar13;
  bVar3 = DAT_043aeec0;
  if (!bVar10) {
    uVar14 = DAT_043aeec8;
  }
  while( true ) {
    _DAT_043aeec0 = uVar18;
    DAT_043aeec8 = uVar4;
    DAT_043aeed0 = pbVar21;
    if (uVar14 == 0) break;
    pbVar2 = &DAT_043aeec1;
    if ((bVar3 & 1) != 0) {
      pbVar2 = pbVar21;
    }
    iVar11 = isblank((uint)*pbVar2);
    if (iVar11 == 0) break;
    pbVar16 = &DAT_043aeec1;
    if (!bVar10) {
      pbVar16 = pbVar21;
    }
    std::string::erase(0x43aeec0,(long)pbVar16 - (long)pbVar2);
    bVar10 = (_DAT_043aeec0 & 1) == 0;
    uVar13 = (ulong)(DAT_043aeec0 >> 1);
    uVar18 = _DAT_043aeec0;
    uVar4 = DAT_043aeec8;
    pbVar21 = DAT_043aeed0;
    uVar14 = uVar13;
    bVar3 = DAT_043aeec0;
    if (!bVar10) {
      uVar14 = DAT_043aeec8;
    }
  }
  bVar10 = (bVar3 & 1) == 0;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = uVar4;
  }
  while (uVar19 = (uint)bVar3, uVar14 != 0) {
    uVar19 = (uint)uVar18;
    uVar13 = (ulong)((uVar19 & 0xff) >> 1);
    uVar14 = uVar13;
    pbVar21 = &DAT_043aeec1;
    if (!bVar10) {
      uVar14 = uVar4;
      pbVar21 = DAT_043aeed0;
    }
    iVar11 = isblank((uint)pbVar21[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_00e0f8e0(&DAT_043aeec0);
    bVar10 = (_DAT_043aeec0 & 1) == 0;
    uVar13 = (ulong)(DAT_043aeec0 >> 1);
    uVar18 = _DAT_043aeec0;
    uVar4 = DAT_043aeec8;
    uVar14 = uVar13;
    bVar3 = DAT_043aeec0;
    if (!bVar10) {
      uVar14 = DAT_043aeec8;
    }
  }
  bVar10 = (uVar19 & 1) != 0;
  if (bVar10) {
    uVar13 = uVar4;
  }
  pbVar21 = &DAT_043aeec1;
  if (bVar10) {
    pbVar21 = DAT_043aeed0;
  }
  sVar20 = CONCAT44(_DAT_043aeeec,ram0x043aeee8);
  pbVar2 = DAT_043aeef0;
  if ((DAT_043aeee0 & 1) == 0) {
    sVar20 = (size_t)(DAT_043aeee0 >> 1);
    pbVar2 = (byte *)&DAT_043aeee1;
  }
  if (sVar20 == 0) {
    uVar14 = 0;
    goto LAB_00e175c0;
  }
  if ((long)sVar20 <= (long)uVar13) {
    bVar3 = *pbVar2;
    pbVar16 = pbVar21;
    uVar14 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar14 - sVar20) ||
         (pbVar16 = memchr(pbVar16,(uint)bVar3,(uVar14 - sVar20) + 1), pbVar16 == (byte *)0x0))
      break;
      iVar11 = memcmp(pbVar16,pbVar2,sVar20);
      if (iVar11 == 0) {
        if (pbVar16 != pbVar21 + uVar13) {
          uVar14 = (long)pbVar16 - (long)pbVar21;
          goto joined_r0x00e17780;
        }
        break;
      }
      pbVar16 = pbVar16 + 1;
      uVar14 = (long)(pbVar21 + uVar13) - (long)pbVar16;
    } while ((long)sVar20 <= (long)uVar14);
  }
  goto LAB_00e174f8;
joined_r0x00e17780:
  if (uVar14 != 0xffffffffffffffff) {
LAB_00e175c0:
    std::string::erase(0x43aeec0,uVar14);
    bVar10 = (_DAT_043aeec0 & 1) == 0;
    pbVar21 = DAT_043aeed0;
    if (bVar10) {
      pbVar21 = &DAT_043aeec1;
    }
    sVar20 = CONCAT44(_DAT_043aeeec,ram0x043aeee8);
    uVar13 = _DAT_043aeec0 >> 1 & 0x7f;
    if (!bVar10) {
      uVar13 = DAT_043aeec8;
    }
    if ((DAT_043aeee0 & 1) == 0) {
      sVar20 = (ulong)(DAT_043aeee0 >> 1);
      pbVar2 = (byte *)&DAT_043aeee1;
    }
    else {
      pbVar2 = DAT_043aeef0;
    }
    if (sVar20 == 0) {
      uVar14 = 0;
    }
    else {
      if ((long)uVar13 < (long)sVar20) goto LAB_00e174f8;
      bVar3 = *pbVar2;
      pbVar16 = pbVar21;
      uVar14 = uVar13;
      while( true ) {
        if ((0xfffffffffffffffe < uVar14 - sVar20) ||
           (pbVar16 = memchr(pbVar16,(uint)bVar3,(uVar14 - sVar20) + 1), pbVar16 == (byte *)0x0))
        goto LAB_00e174f8;
        iVar11 = memcmp(pbVar16,pbVar2,sVar20);
        if (iVar11 == 0) break;
        pbVar16 = pbVar16 + 1;
        uVar14 = (long)(pbVar21 + uVar13) - (long)pbVar16;
        if ((long)uVar14 < (long)sVar20) goto LAB_00e174f8;
      }
      if (pbVar16 == pbVar21 + uVar13) goto LAB_00e174f8;
      uVar14 = (long)pbVar16 - (long)pbVar21;
    }
    goto joined_r0x00e17780;
  }
LAB_00e174f8:
  sVar20 = CONCAT26(_DAT_043aef06,CONCAT51(_DAT_043aef01,DAT_043aeef9._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043aef08._7_1_,
                            CONCAT16(DAT_043aef08._6_1_,
                                     CONCAT51(DAT_043aef08._1_5_,(char)DAT_043aef08)));
  if ((DAT_043aeef8 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043aeef9;
    sVar20 = (ulong)(DAT_043aeef8 >> 1);
  }
  if (sVar20 == 0) {
    uVar14 = 0;
    goto LAB_00e176b8;
  }
  if ((long)sVar20 <= (long)uVar13) {
    bVar3 = *pbVar2;
    pbVar1 = pbVar21 + uVar13;
    pbVar16 = pbVar21;
    do {
      if (0xfffffffffffffffe < uVar13 - sVar20) {
        return;
      }
      pbVar16 = memchr(pbVar16,(uint)bVar3,(uVar13 - sVar20) + 1);
      if (pbVar16 == (byte *)0x0) {
        return;
      }
      iVar11 = memcmp(pbVar16,pbVar2,sVar20);
      if (iVar11 == 0) {
        if (pbVar16 == pbVar1) {
          return;
        }
        do {
          uVar14 = (long)pbVar16 - (long)pbVar21;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_00e176b8:
          while( true ) {
            std::string::erase(0x43aeec0,uVar14);
            bVar10 = (_DAT_043aeec0 & 1) != 0;
            uVar14 = _DAT_043aeec0 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043aeec8;
            }
            sVar20 = CONCAT26(_DAT_043aef06,CONCAT51(_DAT_043aef01,DAT_043aeef9._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043aef08._7_1_,
                                      CONCAT16(DAT_043aef08._6_1_,
                                               CONCAT51(DAT_043aef08._1_5_,(char)DAT_043aef08)));
            pbVar21 = DAT_043aeed0;
            if (!bVar10) {
              pbVar21 = &DAT_043aeec1;
            }
            if ((DAT_043aeef8 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043aeef9;
              sVar20 = (ulong)(DAT_043aeef8 >> 1);
            }
            if (sVar20 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar20) {
            return;
          }
          bVar3 = *pbVar2;
          pbVar1 = pbVar21 + uVar14;
          pbVar16 = pbVar21;
          while( true ) {
            if (0xfffffffffffffffe < uVar14 - sVar20) {
              return;
            }
            pbVar16 = memchr(pbVar16,(uint)bVar3,(uVar14 - sVar20) + 1);
            if (pbVar16 == (byte *)0x0) {
              return;
            }
            iVar11 = memcmp(pbVar16,pbVar2,sVar20);
            if (iVar11 == 0) break;
            pbVar16 = pbVar16 + 1;
            uVar14 = (long)pbVar1 - (long)pbVar16;
            if ((long)uVar14 < (long)sVar20) {
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
    } while ((long)sVar20 <= (long)uVar13);
  }
  return;
}


