/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e9c8d0; name: FUN_00e9c8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9c8d0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
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
  size_t sVar19;
  byte *pbVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b14d0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b14d0), iVar10 != 0)) {
    DAT_043b14a0 = 0x16;
    DAT_043b14b0 = (byte *)0x0;
    _DAT_043b14ac = 0;
    DAT_043b14a1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b14a8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b14b8 = 0x2a;
    DAT_043b14c8._7_1_ = 0;
    DAT_043b14c8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b14c8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b14c8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b14c8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b14c8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b14c1 = s__anonymous_namespace__039071f8[8];
    DAT_043b14c1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b14c1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b14c1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b14c1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b14c6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b14c8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b14b9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b14b9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b14c8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b14a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b14d0);
  }
  plVar8 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar16 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar16 = plVar8;
  }
  pcVar11 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x60,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_03960563._56_8_;
  _DAT_043b1480 = 0x61;
  DAT_043b1488 = 0x55;
  DAT_043b1490 = (byte *)pcVar11;
  *(undefined8 *)(pcVar11 + 0x30) = s_std__string_sol__detail__ctti_ge_03960563._48_8_;
  *(undefined8 *)(pcVar11 + 0x38) = uVar4;
  uVar5 = CONCAT53(s_std__string_sol__detail__ctti_ge_03960563._80_5_,
                   s_std__string_sol__detail__ctti_ge_03960563._77_3_);
  uVar4 = CONCAT35(s_std__string_sol__detail__ctti_ge_03960563._77_3_,
                   s_std__string_sol__detail__ctti_ge_03960563._72_5_);
  *(undefined8 *)(pcVar11 + 0x40) = s_std__string_sol__detail__ctti_ge_03960563._64_8_;
  *(undefined8 *)(pcVar11 + 0x48) = uVar4;
  *(undefined8 *)(pcVar11 + 0x4d) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_03960563._40_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03960563._32_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03960563._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_std__string_sol__detail__ctti_ge_03960563._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar4;
  *(undefined8 *)(pcVar11 + 0x20) = uVar5;
  *(undefined8 *)(pcVar11 + 0x28) = uVar7;
  uVar5 = s_std__string_sol__detail__ctti_ge_03960563._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_03960563._0_8_;
  pcVar11[0x55] = '\0';
  *(undefined8 *)pcVar11 = uVar4;
  *(undefined8 *)(pcVar11 + 8) = uVar5;
  std::string::find(-0x80,0x5b);
  uVar12 = std::string::find(-0x80,0x3d);
  uVar13 = std::string::rfind(-0x80,0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043b1480 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b1480 >> 1);
    }
    else {
      uVar13 = DAT_043b1488;
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
    if ((_DAT_043b1480 & 1) == 0) {
      uVar12 = (ulong)(DAT_043b1480 >> 1);
    }
    else {
      uVar12 = DAT_043b1488;
    }
  }
  if (uVar17 < uVar12 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b1480,uVar17,uVar13 - uVar17,
                      (allocator *)&DAT_043b1480);
  FUN_00e9cf50(&DAT_043b1480);
  _DAT_043b1480 = local_78;
  DAT_043b1488 = uStack_70;
  DAT_043b1490 = local_68;
  lVar14 = FUN_00e9cef4(&DAT_043b1480);
  if (lVar14 != -1) {
    std::string::erase(0x43b1480,lVar14 - 2);
  }
  bVar9 = (_DAT_043b1480 & 1) == 0;
  uVar12 = (ulong)(DAT_043b1480 >> 1);
  uVar17 = _DAT_043b1480;
  uVar6 = DAT_043b1488;
  pbVar20 = DAT_043b1490;
  uVar13 = uVar12;
  bVar3 = DAT_043b1480;
  if (!bVar9) {
    uVar13 = DAT_043b1488;
  }
  while( true ) {
    _DAT_043b1480 = uVar17;
    DAT_043b1488 = uVar6;
    DAT_043b1490 = pbVar20;
    if (uVar13 == 0) break;
    pbVar2 = &DAT_043b1481;
    if ((bVar3 & 1) != 0) {
      pbVar2 = pbVar20;
    }
    iVar10 = isblank((uint)*pbVar2);
    if (iVar10 == 0) break;
    if (bVar9) {
      pbVar20 = &DAT_043b1481;
    }
    std::string::erase(0x43b1480,(long)pbVar20 - (long)pbVar2);
    bVar9 = (_DAT_043b1480 & 1) == 0;
    uVar12 = (ulong)(DAT_043b1480 >> 1);
    uVar17 = _DAT_043b1480;
    uVar6 = DAT_043b1488;
    pbVar20 = DAT_043b1490;
    uVar13 = uVar12;
    bVar3 = DAT_043b1480;
    if (!bVar9) {
      uVar13 = DAT_043b1488;
    }
  }
  bVar9 = (bVar3 & 1) == 0;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = uVar6;
  }
  while (uVar18 = (uint)bVar3, uVar13 != 0) {
    uVar18 = (uint)uVar17;
    uVar12 = (ulong)((uVar18 & 0xff) >> 1);
    uVar13 = uVar12;
    pbVar20 = &DAT_043b1481;
    if (!bVar9) {
      uVar13 = uVar6;
      pbVar20 = DAT_043b1490;
    }
    iVar10 = isblank((uint)pbVar20[uVar13 - 1]);
    if (iVar10 == 0) break;
    FUN_00e9cf10(&DAT_043b1480);
    bVar9 = (_DAT_043b1480 & 1) == 0;
    uVar12 = (ulong)(DAT_043b1480 >> 1);
    uVar17 = _DAT_043b1480;
    uVar6 = DAT_043b1488;
    uVar13 = uVar12;
    bVar3 = DAT_043b1480;
    if (!bVar9) {
      uVar13 = DAT_043b1488;
    }
  }
  bVar9 = (uVar18 & 1) != 0;
  if (bVar9) {
    uVar12 = uVar6;
  }
  pbVar20 = &DAT_043b1481;
  if (bVar9) {
    pbVar20 = DAT_043b1490;
  }
  sVar19 = CONCAT44(_DAT_043b14ac,ram0x043b14a8);
  pbVar2 = DAT_043b14b0;
  if ((DAT_043b14a0 & 1) == 0) {
    sVar19 = (size_t)(DAT_043b14a0 >> 1);
    pbVar2 = (byte *)&DAT_043b14a1;
  }
  if (sVar19 == 0) {
    uVar13 = 0;
    goto LAB_00e9cd44;
  }
  if ((long)sVar19 <= (long)uVar12) {
    bVar3 = *pbVar2;
    pbVar15 = pbVar20;
    uVar13 = uVar12;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar19) ||
         (pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar19) + 1), pbVar15 == (byte *)0x0))
      break;
      iVar10 = memcmp(pbVar15,pbVar2,sVar19);
      if (iVar10 == 0) {
        if (pbVar15 != pbVar20 + uVar12) {
          uVar13 = (long)pbVar15 - (long)pbVar20;
          goto joined_r0x00e9ce00;
        }
        break;
      }
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
    } while ((long)sVar19 <= (long)uVar13);
  }
  goto LAB_00e9cb78;
joined_r0x00e9ce00:
  if (uVar13 != 0xffffffffffffffff) {
LAB_00e9cd44:
    std::string::erase(0x43b1480,uVar13);
    bVar9 = (_DAT_043b1480 & 1) == 0;
    pbVar20 = DAT_043b1490;
    if (bVar9) {
      pbVar20 = &DAT_043b1481;
    }
    sVar19 = CONCAT44(_DAT_043b14ac,ram0x043b14a8);
    uVar12 = _DAT_043b1480 >> 1 & 0x7f;
    if (!bVar9) {
      uVar12 = DAT_043b1488;
    }
    if ((DAT_043b14a0 & 1) == 0) {
      sVar19 = (ulong)(DAT_043b14a0 >> 1);
      pbVar2 = (byte *)&DAT_043b14a1;
    }
    else {
      pbVar2 = DAT_043b14b0;
    }
    if (sVar19 == 0) {
      uVar13 = 0;
    }
    else {
      if ((long)uVar12 < (long)sVar19) goto LAB_00e9cb78;
      bVar3 = *pbVar2;
      pbVar15 = pbVar20;
      uVar13 = uVar12;
      while( true ) {
        if ((0xfffffffffffffffe < uVar13 - sVar19) ||
           (pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar19) + 1), pbVar15 == (byte *)0x0))
        goto LAB_00e9cb78;
        iVar10 = memcmp(pbVar15,pbVar2,sVar19);
        if (iVar10 == 0) break;
        pbVar15 = pbVar15 + 1;
        uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
        if ((long)uVar13 < (long)sVar19) goto LAB_00e9cb78;
      }
      if (pbVar15 == pbVar20 + uVar12) goto LAB_00e9cb78;
      uVar13 = (long)pbVar15 - (long)pbVar20;
    }
    goto joined_r0x00e9ce00;
  }
LAB_00e9cb78:
  sVar19 = CONCAT26(_DAT_043b14c6,CONCAT51(_DAT_043b14c1,DAT_043b14b9._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043b14c8._7_1_,
                            CONCAT16(DAT_043b14c8._6_1_,
                                     CONCAT51(DAT_043b14c8._1_5_,(char)DAT_043b14c8)));
  if ((DAT_043b14b8 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043b14b9;
    sVar19 = (ulong)(DAT_043b14b8 >> 1);
  }
  if (sVar19 == 0) {
    uVar13 = 0;
    goto LAB_00e9cc34;
  }
  if ((long)sVar19 <= (long)uVar12) {
    bVar3 = *pbVar2;
    pbVar1 = pbVar20 + uVar12;
    pbVar15 = pbVar20;
    do {
      if (0xfffffffffffffffe < uVar12 - sVar19) {
        return;
      }
      pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar12 - sVar19) + 1);
      if (pbVar15 == (byte *)0x0) {
        return;
      }
      iVar10 = memcmp(pbVar15,pbVar2,sVar19);
      if (iVar10 == 0) {
        if (pbVar15 == pbVar1) {
          return;
        }
        do {
          uVar13 = (long)pbVar15 - (long)pbVar20;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_00e9cc34:
          while( true ) {
            std::string::erase(0x43b1480,uVar13);
            bVar9 = (_DAT_043b1480 & 1) != 0;
            uVar13 = _DAT_043b1480 >> 1 & 0x7f;
            if (bVar9) {
              uVar13 = DAT_043b1488;
            }
            sVar19 = CONCAT26(_DAT_043b14c6,CONCAT51(_DAT_043b14c1,DAT_043b14b9._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043b14c8._7_1_,
                                      CONCAT16(DAT_043b14c8._6_1_,
                                               CONCAT51(DAT_043b14c8._1_5_,(char)DAT_043b14c8)));
            pbVar20 = DAT_043b1490;
            if (!bVar9) {
              pbVar20 = &DAT_043b1481;
            }
            if ((DAT_043b14b8 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043b14b9;
              sVar19 = (ulong)(DAT_043b14b8 >> 1);
            }
            if (sVar19 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar19) {
            return;
          }
          bVar3 = *pbVar2;
          pbVar1 = pbVar20 + uVar13;
          pbVar15 = pbVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar19) {
              return;
            }
            pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar19) + 1);
            if (pbVar15 == (byte *)0x0) {
              return;
            }
            iVar10 = memcmp(pbVar15,pbVar2,sVar19);
            if (iVar10 == 0) break;
            pbVar15 = pbVar15 + 1;
            uVar13 = (long)pbVar1 - (long)pbVar15;
            if ((long)uVar13 < (long)sVar19) {
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
    } while ((long)sVar19 <= (long)uVar12);
  }
  return;
}


