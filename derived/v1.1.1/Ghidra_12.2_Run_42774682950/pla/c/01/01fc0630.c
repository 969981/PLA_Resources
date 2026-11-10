/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fc0630; name: FUN_01fc0630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fc0630(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
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
  
  if (((DAT_043d4ee8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043d4ee8), iVar12 != 0)) {
    DAT_043d4eb8 = 0x16;
    DAT_043d4ec8 = (byte *)0x0;
    _DAT_043d4ec4 = 0;
    DAT_043d4eb9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d4ec0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d4ed0 = 0x2a;
    DAT_043d4ee0._7_1_ = 0;
    DAT_043d4ee0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d4ee0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d4ee0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d4ee0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d4ee0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d4ed9 = s__anonymous_namespace__039071f8[8];
    DAT_043d4ed9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d4ed9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d4ed9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d4ed9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d4ede = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d4ee0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d4ed1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d4ed1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d4ee0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d4eb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d4ee8);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar18 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar18 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x70,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_0390a800._72_8_;
  _DAT_043d4e98 = 0x71;
  DAT_043d4ea0 = 0x68;
  DAT_043d4ea8 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_0390a800._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390a800._88_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390a800._80_8_;
  *(undefined8 *)(pcVar13 + 0x60) = s_std__string_sol__detail__ctti_ge_0390a800._96_8_;
  *(undefined8 *)(pcVar13 + 0x50) = uVar6;
  *(undefined8 *)(pcVar13 + 0x58) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_0390a800._56_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390a800._48_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390a800._40_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_0390a800._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar6;
  *(undefined8 *)(pcVar13 + 0x30) = uVar7;
  *(undefined8 *)(pcVar13 + 0x38) = uVar8;
  uVar9 = s_std__string_sol__detail__ctti_ge_0390a800._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0390a800._16_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390a800._8_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390a800._0_8_;
  pcVar13[0x68] = '\0';
  *(undefined8 *)pcVar13 = uVar6;
  *(undefined8 *)(pcVar13 + 8) = uVar7;
  *(undefined8 *)(pcVar13 + 0x10) = uVar8;
  *(undefined8 *)(pcVar13 + 0x18) = uVar9;
  std::string::find(-0x68,0x5b);
  uVar14 = std::string::find(-0x68,0x3d);
  uVar15 = std::string::rfind(-0x68,0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043d4e98 & 1) == 0) {
      uVar15 = (ulong)(DAT_043d4e98 >> 1);
    }
    else {
      uVar15 = DAT_043d4ea0;
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
    if ((_DAT_043d4e98 & 1) == 0) {
      uVar14 = (ulong)(DAT_043d4e98 >> 1);
    }
    else {
      uVar14 = DAT_043d4ea0;
    }
  }
  if (uVar19 < uVar14 - 1) {
    uVar19 = uVar19 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043d4e98,uVar19,uVar15 - uVar19,
                      (allocator *)&DAT_043d4e98);
  FUN_01fc0cbc(&DAT_043d4e98);
  _DAT_043d4e98 = local_78;
  DAT_043d4ea0 = uStack_70;
  DAT_043d4ea8 = local_68;
  lVar16 = FUN_01fc0c60(&DAT_043d4e98);
  if (lVar16 != -1) {
    std::string::erase(0x43d4e98,lVar16 - 2);
  }
  bVar11 = (_DAT_043d4e98 & 1) == 0;
  uVar14 = (ulong)(DAT_043d4e98 >> 1);
  uVar19 = _DAT_043d4e98;
  uVar5 = DAT_043d4ea0;
  pbVar21 = DAT_043d4ea8;
  uVar15 = uVar14;
  bVar4 = DAT_043d4e98;
  if (!bVar11) {
    uVar15 = DAT_043d4ea0;
  }
  while( true ) {
    _DAT_043d4e98 = uVar19;
    DAT_043d4ea0 = uVar5;
    DAT_043d4ea8 = pbVar21;
    if (uVar15 == 0) break;
    pbVar3 = &DAT_043d4e99;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar21;
    }
    iVar12 = isblank((uint)*pbVar3);
    if (iVar12 == 0) break;
    pbVar17 = &DAT_043d4e99;
    if (!bVar11) {
      pbVar17 = pbVar21;
    }
    std::string::erase(0x43d4e98,(long)pbVar17 - (long)pbVar3);
    bVar11 = (_DAT_043d4e98 & 1) == 0;
    uVar14 = (ulong)(DAT_043d4e98 >> 1);
    uVar19 = _DAT_043d4e98;
    uVar5 = DAT_043d4ea0;
    pbVar21 = DAT_043d4ea8;
    uVar15 = uVar14;
    bVar4 = DAT_043d4e98;
    if (!bVar11) {
      uVar15 = DAT_043d4ea0;
    }
  }
  bVar11 = (bVar4 & 1) == 0;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = uVar5;
  }
  while (uVar20 = (uint)bVar4, uVar15 != 0) {
    uVar20 = (uint)uVar19;
    uVar14 = (ulong)((uVar20 & 0xff) >> 1);
    uVar15 = uVar14;
    pbVar21 = &DAT_043d4e99;
    if (!bVar11) {
      uVar15 = uVar5;
      pbVar21 = DAT_043d4ea8;
    }
    iVar12 = isblank((uint)pbVar21[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_01fc0c7c(&DAT_043d4e98);
    bVar11 = (_DAT_043d4e98 & 1) == 0;
    uVar14 = (ulong)(DAT_043d4e98 >> 1);
    uVar19 = _DAT_043d4e98;
    uVar5 = DAT_043d4ea0;
    uVar15 = uVar14;
    bVar4 = DAT_043d4e98;
    if (!bVar11) {
      uVar15 = DAT_043d4ea0;
    }
  }
  bVar11 = (uVar20 & 1) != 0;
  if (bVar11) {
    uVar14 = uVar5;
  }
  pbVar21 = &DAT_043d4e99;
  if (bVar11) {
    pbVar21 = DAT_043d4ea8;
  }
  sVar2 = CONCAT44(_DAT_043d4ec4,ram0x043d4ec0);
  if ((DAT_043d4eb8 & 1) == 0) {
    sVar2 = (ulong)(DAT_043d4eb8 >> 1);
    pbVar3 = (byte *)&DAT_043d4eb9;
  }
  else {
    pbVar3 = DAT_043d4ec8;
  }
  if (sVar2 == 0) {
    uVar15 = 0;
LAB_01fc09ac:
    do {
      while( true ) {
        std::string::erase(0x43d4e98,uVar15);
        sVar2 = CONCAT44(_DAT_043d4ec4,ram0x043d4ec0);
        if ((_DAT_043d4e98 & 1) == 0) {
          uVar14 = _DAT_043d4e98 >> 1 & 0x7f;
          pbVar21 = &DAT_043d4e99;
        }
        else {
          uVar14 = DAT_043d4ea0;
          pbVar21 = DAT_043d4ea8;
        }
        if ((DAT_043d4eb8 & 1) == 0) {
          sVar2 = (ulong)(DAT_043d4eb8 >> 1);
          pbVar3 = (byte *)&DAT_043d4eb9;
        }
        else {
          pbVar3 = DAT_043d4ec8;
        }
        if (sVar2 != 0) break;
        uVar15 = 0;
      }
      if ((long)uVar14 < (long)sVar2) goto LAB_01fc08e4;
      bVar4 = *pbVar3;
      pbVar17 = pbVar21;
      uVar15 = uVar14;
      while( true ) {
        if ((0xfffffffffffffffe < uVar15 - sVar2) ||
           (pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1), pbVar17 == (byte *)0x0))
        goto LAB_01fc08e4;
        iVar12 = memcmp(pbVar17,pbVar3,sVar2);
        if (iVar12 == 0) break;
        pbVar17 = pbVar17 + 1;
        uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
        if ((long)uVar15 < (long)sVar2) goto LAB_01fc08e4;
      }
      if ((pbVar17 == pbVar21 + uVar14) ||
         (uVar15 = (long)pbVar17 - (long)pbVar21, uVar15 == 0xffffffffffffffff)) goto LAB_01fc08e4;
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
        goto LAB_01fc09ac;
        break;
      }
      pbVar17 = pbVar17 + 1;
      uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
    } while ((long)sVar2 <= (long)uVar15);
  }
LAB_01fc08e4:
  sVar2 = CONCAT26(_DAT_043d4ede,CONCAT51(_DAT_043d4ed9,DAT_043d4ed1._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043d4ee0._7_1_,
                            CONCAT16(DAT_043d4ee0._6_1_,
                                     CONCAT51(DAT_043d4ee0._1_5_,(char)DAT_043d4ee0)));
  if ((DAT_043d4ed0 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043d4ed1;
    sVar2 = (ulong)(DAT_043d4ed0 >> 1);
  }
  if (sVar2 == 0) {
    uVar15 = 0;
    goto LAB_01fc0a58;
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
LAB_01fc0a58:
          while( true ) {
            std::string::erase(0x43d4e98,uVar15);
            bVar11 = (_DAT_043d4e98 & 1) != 0;
            uVar15 = _DAT_043d4e98 >> 1 & 0x7f;
            if (bVar11) {
              uVar15 = DAT_043d4ea0;
            }
            sVar2 = CONCAT26(_DAT_043d4ede,CONCAT51(_DAT_043d4ed9,DAT_043d4ed1._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043d4ee0._7_1_,
                                      CONCAT16(DAT_043d4ee0._6_1_,
                                               CONCAT51(DAT_043d4ee0._1_5_,(char)DAT_043d4ee0)));
            pbVar21 = DAT_043d4ea8;
            if (!bVar11) {
              pbVar21 = &DAT_043d4e99;
            }
            if ((DAT_043d4ed0 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043d4ed1;
              sVar2 = (ulong)(DAT_043d4ed0 >> 1);
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


