/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd8e60; name: FUN_00fd8e60
 */


/* WARNING: Removing unreachable block (ram,0x00fd93c0) */
/* WARNING: Removing unreachable block (ram,0x00fd93d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fd8e60(void)

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
  
  if (((DAT_043b79a8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b79a8), iVar10 != 0)) {
    DAT_043b7978 = 0x16;
    DAT_043b7988 = (byte *)0x0;
    _DAT_043b7984 = 0;
    DAT_043b7979._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b7980 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b7990 = 0x2a;
    DAT_043b79a0._7_1_ = 0;
    DAT_043b79a0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b79a0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b79a0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b79a0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b79a0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b7999 = s__anonymous_namespace__039071f8[8];
    DAT_043b7999_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b7999_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b7999_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b7999_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b799e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b79a0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b7991._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b7991._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b79a0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b7978,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b79a8);
  }
  plVar8 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar16 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar16 = plVar8;
  }
  pcVar11 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_038cb50d._88_8_;
  _DAT_043b7958 = 0x81;
  DAT_043b7960 = 0x78;
  DAT_043b7968 = (byte *)pcVar11;
  *(undefined8 *)(pcVar11 + 0x50) = s_std__string_sol__detail__ctti_ge_038cb50d._80_8_;
  *(undefined8 *)(pcVar11 + 0x58) = uVar5;
  uVar6 = s_std__string_sol__detail__ctti_ge_038cb50d._104_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038cb50d._96_8_;
  *(undefined8 *)(pcVar11 + 0x70) = s_std__string_sol__detail__ctti_ge_038cb50d._112_8_;
  *(undefined8 *)(pcVar11 + 0x60) = uVar5;
  *(undefined8 *)(pcVar11 + 0x68) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_038cb50d._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038cb50d._64_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038cb50d._56_8_;
  *(undefined8 *)(pcVar11 + 0x30) = s_std__string_sol__detail__ctti_ge_038cb50d._48_8_;
  *(undefined8 *)(pcVar11 + 0x38) = uVar5;
  *(undefined8 *)(pcVar11 + 0x40) = uVar6;
  *(undefined8 *)(pcVar11 + 0x48) = uVar7;
  uVar7 = s_std__string_sol__detail__ctti_ge_038cb50d._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038cb50d._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038cb50d._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_std__string_sol__detail__ctti_ge_038cb50d._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar5;
  *(undefined8 *)(pcVar11 + 0x20) = uVar6;
  *(undefined8 *)(pcVar11 + 0x28) = uVar7;
  uVar6 = s_std__string_sol__detail__ctti_ge_038cb50d._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038cb50d._0_8_;
  pcVar11[0x78] = '\0';
  *(undefined8 *)pcVar11 = uVar5;
  *(undefined8 *)(pcVar11 + 8) = uVar6;
  std::string::find('X',0x5b);
  uVar12 = std::string::find('X',0x3d);
  uVar13 = std::string::rfind('X',0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043b7958 & 1) == 0) {
      uVar13 = (ulong)(DAT_043b7958 >> 1);
    }
    else {
      uVar13 = DAT_043b7960;
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
    if ((_DAT_043b7958 & 1) == 0) {
      uVar12 = (ulong)(DAT_043b7958 >> 1);
    }
    else {
      uVar12 = DAT_043b7960;
    }
  }
  if (uVar17 < uVar12 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b7958,uVar17,uVar13 - uVar17,
                      (allocator *)&DAT_043b7958);
  FUN_00fd64bc(&DAT_043b7958);
  _DAT_043b7958 = local_78;
  DAT_043b7960 = uStack_70;
  DAT_043b7968 = local_68;
  lVar14 = FUN_00fd6460(&DAT_043b7958);
  if (lVar14 != -1) {
    std::string::erase(0x43b7958,lVar14 - 2);
  }
  bVar9 = (_DAT_043b7958 & 1) == 0;
  uVar12 = (ulong)(DAT_043b7958 >> 1);
  uVar17 = DAT_043b7960;
  pbVar20 = DAT_043b7968;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = DAT_043b7960;
  }
  while( true ) {
    uVar18 = (uint)DAT_043b7958;
    bVar4 = DAT_043b7958 & 1;
    uVar19 = _DAT_043b7958 & 0xff;
    DAT_043b7960 = uVar17;
    DAT_043b7968 = pbVar20;
    if (uVar13 == 0) break;
    pbVar3 = &DAT_043b7959;
    if ((DAT_043b7958 & 1) != 0) {
      pbVar3 = pbVar20;
    }
    iVar10 = isblank((uint)*pbVar3);
    if (iVar10 == 0) break;
    pbVar15 = &DAT_043b7959;
    if (!bVar9) {
      pbVar15 = pbVar20;
    }
    std::string::erase(0x43b7958,(long)pbVar15 - (long)pbVar3);
    bVar9 = (_DAT_043b7958 & 1) == 0;
    uVar12 = (ulong)(DAT_043b7958 >> 1);
    uVar17 = DAT_043b7960;
    pbVar20 = DAT_043b7968;
    uVar13 = uVar12;
    if (!bVar9) {
      uVar13 = DAT_043b7960;
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
    pbVar20 = &DAT_043b7959;
    if (!bVar9) {
      uVar13 = uVar17;
      pbVar20 = DAT_043b7968;
    }
    iVar10 = isblank((uint)pbVar20[uVar13 - 1]);
    if (iVar10 == 0) break;
    FUN_00fd647c(&DAT_043b7958);
    uVar19 = _DAT_043b7958 & 0xff;
    uVar18 = (uint)uVar19;
    bVar9 = (_DAT_043b7958 & 1) == 0;
    uVar12 = _DAT_043b7958 >> 1 & 0x7f;
    uVar17 = DAT_043b7960;
    uVar13 = uVar12;
    if (!bVar9) {
      uVar13 = DAT_043b7960;
    }
  }
  bVar9 = (uVar18 & 1) != 0;
  if (bVar9) {
    uVar12 = uVar17;
  }
  pbVar20 = &DAT_043b7959;
  if (bVar9) {
    pbVar20 = DAT_043b7968;
  }
  sVar2 = CONCAT44(_DAT_043b7984,ram0x043b7980);
  if ((DAT_043b7978 & 1) == 0) {
    sVar2 = (ulong)(DAT_043b7978 >> 1);
    pbVar3 = (byte *)&DAT_043b7979;
  }
  else {
    pbVar3 = DAT_043b7988;
  }
  if (sVar2 == 0) {
    uVar13 = 0;
LAB_00fd91dc:
    do {
      while( true ) {
        std::string::erase(0x43b7958,uVar13);
        sVar2 = CONCAT44(_DAT_043b7984,ram0x043b7980);
        if ((_DAT_043b7958 & 1) == 0) {
          uVar12 = _DAT_043b7958 >> 1 & 0x7f;
          pbVar20 = &DAT_043b7959;
        }
        else {
          uVar12 = DAT_043b7960;
          pbVar20 = DAT_043b7968;
        }
        if ((DAT_043b7978 & 1) == 0) {
          sVar2 = (ulong)(DAT_043b7978 >> 1);
          pbVar3 = (byte *)&DAT_043b7979;
        }
        else {
          pbVar3 = DAT_043b7988;
        }
        if (sVar2 != 0) break;
        uVar13 = 0;
      }
      if ((long)uVar12 < (long)sVar2) goto LAB_00fd914c;
      bVar4 = *pbVar3;
      pbVar15 = pbVar20;
      uVar13 = uVar12;
      while( true ) {
        if ((0xfffffffffffffffe < uVar13 - sVar2) ||
           (pbVar15 = memchr(pbVar15,(uint)bVar4,(uVar13 - sVar2) + 1), pbVar15 == (byte *)0x0))
        goto LAB_00fd914c;
        iVar10 = memcmp(pbVar15,pbVar3,sVar2);
        if (iVar10 == 0) break;
        pbVar15 = pbVar15 + 1;
        uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
        if ((long)uVar13 < (long)sVar2) goto LAB_00fd914c;
      }
      if ((pbVar15 == pbVar20 + uVar12) ||
         (uVar13 = (long)pbVar15 - (long)pbVar20, uVar13 == 0xffffffffffffffff)) goto LAB_00fd914c;
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
        goto LAB_00fd91dc;
        break;
      }
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
    } while ((long)sVar2 <= (long)uVar13);
  }
LAB_00fd914c:
  sVar2 = CONCAT26(_DAT_043b799e,CONCAT51(_DAT_043b7999,DAT_043b7991._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043b79a0._7_1_,
                            CONCAT16(DAT_043b79a0._6_1_,
                                     CONCAT51(DAT_043b79a0._1_5_,(char)DAT_043b79a0)));
  if ((DAT_043b7990 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043b7991;
    sVar2 = (ulong)(DAT_043b7990 >> 1);
  }
  if (sVar2 == 0) {
    uVar13 = 0;
    goto LAB_00fd9288;
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
LAB_00fd9288:
          while( true ) {
            std::string::erase(0x43b7958,uVar13);
            bVar9 = (_DAT_043b7958 & 1) != 0;
            uVar13 = _DAT_043b7958 >> 1 & 0x7f;
            if (bVar9) {
              uVar13 = DAT_043b7960;
            }
            sVar2 = CONCAT26(_DAT_043b799e,CONCAT51(_DAT_043b7999,DAT_043b7991._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043b79a0._7_1_,
                                      CONCAT16(DAT_043b79a0._6_1_,
                                               CONCAT51(DAT_043b79a0._1_5_,(char)DAT_043b79a0)));
            pbVar20 = DAT_043b7968;
            if (!bVar9) {
              pbVar20 = &DAT_043b7959;
            }
            if ((DAT_043b7990 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043b7991;
              sVar2 = (ulong)(DAT_043b7990 >> 1);
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


