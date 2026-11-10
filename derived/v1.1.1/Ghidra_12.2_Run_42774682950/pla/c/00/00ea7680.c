/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea7680; name: FUN_00ea7680
 */


/* WARNING: Removing unreachable block (ram,0x00ea7bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ea7680(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
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
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  ulong uVar17;
  size_t sVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b1898 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b1898), iVar10 != 0)) {
    DAT_043b1868 = 0x16;
    DAT_043b1878 = (byte *)0x0;
    _DAT_043b1874 = 0;
    DAT_043b1869._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b1870 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b1880 = 0x2a;
    DAT_043b1890._7_1_ = 0;
    DAT_043b1890._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b1890._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b1890._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b1890._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b1890._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b1889 = s__anonymous_namespace__039071f8[8];
    DAT_043b1889_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b1889_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b1889_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b1889_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b188e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b1890._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b1881._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b1881._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b1890._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b1868,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b1898);
  }
  plVar8 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar16 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar16 = plVar8;
  }
  pcVar11 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x70,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_039605b9._72_8_;
  _DAT_043b1848 = 0x71;
  DAT_043b1850 = 0x68;
  DAT_043b1858 = (byte *)pcVar11;
  *(undefined8 *)(pcVar11 + 0x40) = s_std__string_sol__detail__ctti_ge_039605b9._64_8_;
  *(undefined8 *)(pcVar11 + 0x48) = uVar4;
  uVar5 = s_std__string_sol__detail__ctti_ge_039605b9._88_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_039605b9._80_8_;
  *(undefined8 *)(pcVar11 + 0x60) = s_std__string_sol__detail__ctti_ge_039605b9._96_8_;
  *(undefined8 *)(pcVar11 + 0x50) = uVar4;
  *(undefined8 *)(pcVar11 + 0x58) = uVar5;
  uVar6 = s_std__string_sol__detail__ctti_ge_039605b9._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039605b9._48_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_039605b9._40_8_;
  *(undefined8 *)(pcVar11 + 0x20) = s_std__string_sol__detail__ctti_ge_039605b9._32_8_;
  *(undefined8 *)(pcVar11 + 0x28) = uVar4;
  *(undefined8 *)(pcVar11 + 0x30) = uVar5;
  *(undefined8 *)(pcVar11 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_039605b9._24_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_039605b9._16_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_039605b9._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_039605b9._0_8_;
  pcVar11[0x68] = '\0';
  *(undefined8 *)pcVar11 = uVar4;
  *(undefined8 *)(pcVar11 + 8) = uVar5;
  *(undefined8 *)(pcVar11 + 0x10) = uVar6;
  *(undefined8 *)(pcVar11 + 0x18) = uVar7;
  std::string::find('H',0x5b);
  uVar12 = std::string::find('H',0x3d);
  uVar13 = std::string::rfind('H',0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043b1848 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b1848 >> 1);
    }
    else {
      uVar13 = DAT_043b1850;
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
    if ((_DAT_043b1848 & 1) == 0) {
      uVar12 = (ulong)(DAT_043b1848 >> 1);
    }
    else {
      uVar12 = DAT_043b1850;
    }
  }
  if (uVar17 < uVar12 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b1848,uVar17,uVar13 - uVar17,
                      (allocator *)&DAT_043b1848);
  FUN_00e9cf50(&DAT_043b1848);
  _DAT_043b1848 = local_78;
  DAT_043b1850 = uStack_70;
  DAT_043b1858 = local_68;
  lVar14 = FUN_00e9cef4(&DAT_043b1848);
  if (lVar14 != -1) {
    std::string::erase(0x43b1848,lVar14 - 2);
  }
  bVar9 = (_DAT_043b1848 & 1) == 0;
  uVar12 = (ulong)(DAT_043b1848 >> 1);
  uVar17 = DAT_043b1850;
  pbVar21 = DAT_043b1858;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = DAT_043b1850;
  }
  while( true ) {
    uVar19 = (uint)DAT_043b1848;
    bVar3 = DAT_043b1848 & 1;
    uVar20 = _DAT_043b1848 & 0xff;
    DAT_043b1850 = uVar17;
    DAT_043b1858 = pbVar21;
    if (uVar13 == 0) break;
    pbVar2 = &DAT_043b1849;
    if ((DAT_043b1848 & 1) != 0) {
      pbVar2 = pbVar21;
    }
    iVar10 = isblank((uint)*pbVar2);
    if (iVar10 == 0) break;
    if (bVar9) {
      pbVar21 = &DAT_043b1849;
    }
    std::string::erase(0x43b1848,(long)pbVar21 - (long)pbVar2);
    bVar9 = (_DAT_043b1848 & 1) == 0;
    uVar12 = (ulong)(DAT_043b1848 >> 1);
    uVar17 = DAT_043b1850;
    pbVar21 = DAT_043b1858;
    uVar13 = uVar12;
    if (!bVar9) {
      uVar13 = DAT_043b1850;
    }
  }
  bVar9 = bVar3 == 0;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = uVar17;
  }
  while (uVar13 != 0) {
    uVar19 = (uint)uVar20;
    uVar12 = (ulong)(uVar19 >> 1);
    uVar13 = uVar12;
    pbVar21 = &DAT_043b1849;
    if (!bVar9) {
      uVar13 = uVar17;
      pbVar21 = DAT_043b1858;
    }
    iVar10 = isblank((uint)pbVar21[uVar13 - 1]);
    if (iVar10 == 0) break;
    FUN_00e9cf10(&DAT_043b1848);
    uVar20 = _DAT_043b1848 & 0xff;
    uVar19 = (uint)uVar20;
    bVar9 = (_DAT_043b1848 & 1) == 0;
    uVar12 = _DAT_043b1848 >> 1 & 0x7f;
    uVar17 = DAT_043b1850;
    uVar13 = uVar12;
    if (!bVar9) {
      uVar13 = DAT_043b1850;
    }
  }
  bVar9 = (uVar19 & 1) != 0;
  if (bVar9) {
    uVar12 = uVar17;
  }
  pbVar21 = &DAT_043b1849;
  if (bVar9) {
    pbVar21 = DAT_043b1858;
  }
  sVar18 = CONCAT44(_DAT_043b1874,ram0x043b1870);
  pbVar2 = DAT_043b1878;
  if ((DAT_043b1868 & 1) == 0) {
    sVar18 = (size_t)(DAT_043b1868 >> 1);
    pbVar2 = (byte *)&DAT_043b1869;
  }
  if (sVar18 == 0) {
    uVar13 = 0;
    goto LAB_00ea7af4;
  }
  if ((long)sVar18 <= (long)uVar12) {
    bVar3 = *pbVar2;
    pbVar15 = pbVar21;
    uVar13 = uVar12;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar18) ||
         (pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar18) + 1), pbVar15 == (byte *)0x0))
      break;
      iVar10 = memcmp(pbVar15,pbVar2,sVar18);
      if (iVar10 == 0) {
        if (pbVar15 != pbVar21 + uVar12) {
          uVar13 = (long)pbVar15 - (long)pbVar21;
          goto joined_r0x00ea7bb0;
        }
        break;
      }
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)(pbVar21 + uVar12) - (long)pbVar15;
    } while ((long)sVar18 <= (long)uVar13);
  }
  goto LAB_00ea7960;
joined_r0x00ea7bb0:
  if (uVar13 != 0xffffffffffffffff) {
LAB_00ea7af4:
    std::string::erase(0x43b1848,uVar13);
    bVar9 = (_DAT_043b1848 & 1) == 0;
    pbVar21 = DAT_043b1858;
    if (bVar9) {
      pbVar21 = &DAT_043b1849;
    }
    sVar18 = CONCAT44(_DAT_043b1874,ram0x043b1870);
    uVar12 = _DAT_043b1848 >> 1 & 0x7f;
    if (!bVar9) {
      uVar12 = DAT_043b1850;
    }
    if ((DAT_043b1868 & 1) == 0) {
      sVar18 = (ulong)(DAT_043b1868 >> 1);
      pbVar2 = (byte *)&DAT_043b1869;
    }
    else {
      pbVar2 = DAT_043b1878;
    }
    if (sVar18 == 0) {
      uVar13 = 0;
    }
    else {
      if ((long)uVar12 < (long)sVar18) goto LAB_00ea7960;
      bVar3 = *pbVar2;
      pbVar15 = pbVar21;
      uVar13 = uVar12;
      while( true ) {
        if ((0xfffffffffffffffe < uVar13 - sVar18) ||
           (pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar18) + 1), pbVar15 == (byte *)0x0))
        goto LAB_00ea7960;
        iVar10 = memcmp(pbVar15,pbVar2,sVar18);
        if (iVar10 == 0) break;
        pbVar15 = pbVar15 + 1;
        uVar13 = (long)(pbVar21 + uVar12) - (long)pbVar15;
        if ((long)uVar13 < (long)sVar18) goto LAB_00ea7960;
      }
      if (pbVar15 == pbVar21 + uVar12) goto LAB_00ea7960;
      uVar13 = (long)pbVar15 - (long)pbVar21;
    }
    goto joined_r0x00ea7bb0;
  }
LAB_00ea7960:
  sVar18 = CONCAT26(_DAT_043b188e,CONCAT51(_DAT_043b1889,DAT_043b1881._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043b1890._7_1_,
                            CONCAT16(DAT_043b1890._6_1_,
                                     CONCAT51(DAT_043b1890._1_5_,(char)DAT_043b1890)));
  if ((DAT_043b1880 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043b1881;
    sVar18 = (ulong)(DAT_043b1880 >> 1);
  }
  if (sVar18 == 0) {
    uVar13 = 0;
    goto LAB_00ea79f0;
  }
  if ((long)sVar18 <= (long)uVar12) {
    bVar3 = *pbVar2;
    pbVar1 = pbVar21 + uVar12;
    pbVar15 = pbVar21;
    do {
      if (0xfffffffffffffffe < uVar12 - sVar18) {
        return;
      }
      pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar12 - sVar18) + 1);
      if (pbVar15 == (byte *)0x0) {
        return;
      }
      iVar10 = memcmp(pbVar15,pbVar2,sVar18);
      if (iVar10 == 0) {
        if (pbVar15 == pbVar1) {
          return;
        }
        do {
          uVar13 = (long)pbVar15 - (long)pbVar21;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_00ea79f0:
          while( true ) {
            std::string::erase(0x43b1848,uVar13);
            bVar9 = (_DAT_043b1848 & 1) != 0;
            uVar13 = _DAT_043b1848 >> 1 & 0x7f;
            if (bVar9) {
              uVar13 = DAT_043b1850;
            }
            sVar18 = CONCAT26(_DAT_043b188e,CONCAT51(_DAT_043b1889,DAT_043b1881._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043b1890._7_1_,
                                      CONCAT16(DAT_043b1890._6_1_,
                                               CONCAT51(DAT_043b1890._1_5_,(char)DAT_043b1890)));
            pbVar21 = DAT_043b1858;
            if (!bVar9) {
              pbVar21 = &DAT_043b1849;
            }
            if ((DAT_043b1880 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043b1881;
              sVar18 = (ulong)(DAT_043b1880 >> 1);
            }
            if (sVar18 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar18) {
            return;
          }
          bVar3 = *pbVar2;
          pbVar1 = pbVar21 + uVar13;
          pbVar15 = pbVar21;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar18) {
              return;
            }
            pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar18) + 1);
            if (pbVar15 == (byte *)0x0) {
              return;
            }
            iVar10 = memcmp(pbVar15,pbVar2,sVar18);
            if (iVar10 == 0) break;
            pbVar15 = pbVar15 + 1;
            uVar13 = (long)pbVar1 - (long)pbVar15;
            if ((long)uVar13 < (long)sVar18) {
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
    } while ((long)sVar18 <= (long)uVar12);
  }
  return;
}


