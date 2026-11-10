/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008cfa30; name: FUN_008cfa30
 */


/* WARNING: Removing unreachable block (ram,0x008cff40) */
/* WARNING: Removing unreachable block (ram,0x008cff50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cfa30(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043a76b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043a76b8), iVar9 != 0)) {
    DAT_043a7688 = 0x16;
    DAT_043a7698 = (byte *)0x0;
    _DAT_043a7694 = 0;
    DAT_043a7689._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043a7690 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043a76a0 = 0x2a;
    DAT_043a76b0._7_1_ = 0;
    DAT_043a76b0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043a76b0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043a76b0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043a76b0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043a76b0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043a76a9 = s__anonymous_namespace__039071f8[8];
    DAT_043a76a9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043a76a9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043a76a9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043a76a9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043a76ae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043a76b0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043a76a1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043a76a1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043a76b0._6_1_ = 0;
    FUN_00100250(FUN_008ca31c,&DAT_043a7688,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a76b8);
  }
  pcVar10 = operator_new(0x70);
  DAT_043a7678 = (byte *)pcVar10;
  pcVar10[0x68] = '\0';
  uVar5 = s_std__string_sol__detail__ctti_ge_0390720e._8_8_;
  _DAT_043a7668 = 0x71;
  DAT_043a7670 = 0x68;
  *(undefined8 *)pcVar10 = s_std__string_sol__detail__ctti_ge_0390720e._0_8_;
  *(undefined8 *)(pcVar10 + 8) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_0390720e._72_8_;
  *(undefined8 *)(pcVar10 + 0x40) = s_std__string_sol__detail__ctti_ge_0390720e._64_8_;
  *(undefined8 *)(pcVar10 + 0x48) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_0390720e._88_8_;
  *(undefined8 *)(pcVar10 + 0x50) = s_std__string_sol__detail__ctti_ge_0390720e._80_8_;
  *(undefined8 *)(pcVar10 + 0x58) = uVar5;
  *(undefined8 *)(pcVar10 + 0x60) = s_std__string_sol__detail__ctti_ge_0390720e._96_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0390720e._40_8_;
  *(undefined8 *)(pcVar10 + 0x20) = s_std__string_sol__detail__ctti_ge_0390720e._32_8_;
  *(undefined8 *)(pcVar10 + 0x28) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_0390720e._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0390720e._24_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0390720e._16_8_;
  *(undefined8 *)(pcVar10 + 0x30) = s_std__string_sol__detail__ctti_ge_0390720e._48_8_;
  *(undefined8 *)(pcVar10 + 0x38) = uVar7;
  *(undefined8 *)(pcVar10 + 0x10) = uVar5;
  *(undefined8 *)(pcVar10 + 0x18) = uVar6;
  std::string::find('h',0x5b);
  uVar11 = std::string::find('h',0x3d);
  uVar12 = std::string::rfind('h',0x5d);
  if (uVar12 == 0xffffffffffffffff) {
    if ((_DAT_043a7668 & 1) == 0) {
      uVar12 = (ulong)(DAT_043a7668 >> 1);
    }
    else {
      uVar12 = DAT_043a7670;
    }
    uVar15 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar15 = uVar11;
    }
    uVar11 = uVar12;
  }
  else {
    uVar15 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar15 = uVar11;
    }
    if ((_DAT_043a7668 & 1) == 0) {
      uVar11 = (ulong)(DAT_043a7668 >> 1);
    }
    else {
      uVar11 = DAT_043a7670;
    }
  }
  if (uVar15 < uVar11 - 1) {
    uVar15 = uVar15 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043a7668,uVar15,uVar12 - uVar15,
                      (allocator *)&DAT_043a7668);
  FUN_008ca5fc(&DAT_043a7668);
  _DAT_043a7668 = local_78;
  DAT_043a7670 = uStack_70;
  DAT_043a7678 = local_68;
  lVar13 = FUN_008ca5a0(&DAT_043a7668);
  if (lVar13 != -1) {
    std::string::erase(0x43a7668,lVar13 - 2);
  }
  bVar8 = (_DAT_043a7668 & 1) == 0;
  uVar11 = (ulong)(DAT_043a7668 >> 1);
  uVar15 = DAT_043a7670;
  pbVar18 = DAT_043a7678;
  uVar12 = uVar11;
  if (!bVar8) {
    uVar12 = DAT_043a7670;
  }
  while( true ) {
    uVar16 = (uint)DAT_043a7668;
    bVar4 = DAT_043a7668 & 1;
    uVar17 = _DAT_043a7668 & 0xff;
    DAT_043a7670 = uVar15;
    DAT_043a7678 = pbVar18;
    if (uVar12 == 0) break;
    pbVar3 = &DAT_043a7669;
    if ((DAT_043a7668 & 1) != 0) {
      pbVar3 = pbVar18;
    }
    iVar9 = isblank((uint)*pbVar3);
    if (iVar9 == 0) break;
    pbVar14 = &DAT_043a7669;
    if (!bVar8) {
      pbVar14 = pbVar18;
    }
    std::string::erase(0x43a7668,(long)pbVar14 - (long)pbVar3);
    bVar8 = (_DAT_043a7668 & 1) == 0;
    uVar11 = (ulong)(DAT_043a7668 >> 1);
    uVar15 = DAT_043a7670;
    pbVar18 = DAT_043a7678;
    uVar12 = uVar11;
    if (!bVar8) {
      uVar12 = DAT_043a7670;
    }
  }
  bVar8 = bVar4 == 0;
  uVar12 = uVar11;
  if (!bVar8) {
    uVar12 = uVar15;
  }
  while (uVar12 != 0) {
    uVar16 = (uint)uVar17;
    uVar11 = (ulong)(uVar16 >> 1);
    uVar12 = uVar11;
    pbVar18 = &DAT_043a7669;
    if (!bVar8) {
      uVar12 = uVar15;
      pbVar18 = DAT_043a7678;
    }
    iVar9 = isblank((uint)pbVar18[uVar12 - 1]);
    if (iVar9 == 0) break;
    FUN_008ca5bc(&DAT_043a7668);
    uVar17 = _DAT_043a7668 & 0xff;
    uVar16 = (uint)uVar17;
    bVar8 = (_DAT_043a7668 & 1) == 0;
    uVar11 = _DAT_043a7668 >> 1 & 0x7f;
    uVar15 = DAT_043a7670;
    uVar12 = uVar11;
    if (!bVar8) {
      uVar12 = DAT_043a7670;
    }
  }
  bVar8 = (uVar16 & 1) != 0;
  if (bVar8) {
    uVar11 = uVar15;
  }
  pbVar18 = &DAT_043a7669;
  if (bVar8) {
    pbVar18 = DAT_043a7678;
  }
  sVar2 = CONCAT44(_DAT_043a7694,ram0x043a7690);
  if ((DAT_043a7688 & 1) == 0) {
    sVar2 = (ulong)(DAT_043a7688 >> 1);
    pbVar3 = (byte *)&DAT_043a7689;
  }
  else {
    pbVar3 = DAT_043a7698;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
LAB_008cfd5c:
    do {
      while( true ) {
        std::string::erase(0x43a7668,uVar12);
        sVar2 = CONCAT44(_DAT_043a7694,ram0x043a7690);
        if ((_DAT_043a7668 & 1) == 0) {
          uVar11 = _DAT_043a7668 >> 1 & 0x7f;
          pbVar18 = &DAT_043a7669;
        }
        else {
          uVar11 = DAT_043a7670;
          pbVar18 = DAT_043a7678;
        }
        if ((DAT_043a7688 & 1) == 0) {
          sVar2 = (ulong)(DAT_043a7688 >> 1);
          pbVar3 = (byte *)&DAT_043a7689;
        }
        else {
          pbVar3 = DAT_043a7698;
        }
        if (sVar2 != 0) break;
        uVar12 = 0;
      }
      if ((long)uVar11 < (long)sVar2) goto LAB_008cfcd0;
      bVar4 = *pbVar3;
      pbVar14 = pbVar18;
      uVar12 = uVar11;
      while( true ) {
        if ((0xfffffffffffffffe < uVar12 - sVar2) ||
           (pbVar14 = memchr(pbVar14,(uint)bVar4,(uVar12 - sVar2) + 1), pbVar14 == (byte *)0x0))
        goto LAB_008cfcd0;
        iVar9 = memcmp(pbVar14,pbVar3,sVar2);
        if (iVar9 == 0) break;
        pbVar14 = pbVar14 + 1;
        uVar12 = (long)(pbVar18 + uVar11) - (long)pbVar14;
        if ((long)uVar12 < (long)sVar2) goto LAB_008cfcd0;
      }
      if ((pbVar14 == pbVar18 + uVar11) ||
         (uVar12 = (long)pbVar14 - (long)pbVar18, uVar12 == 0xffffffffffffffff)) goto LAB_008cfcd0;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar11) {
    bVar4 = *pbVar3;
    pbVar14 = pbVar18;
    uVar12 = uVar11;
    do {
      if ((0xfffffffffffffffe < uVar12 - sVar2) ||
         (pbVar14 = memchr(pbVar14,(uint)bVar4,(uVar12 - sVar2) + 1), pbVar14 == (byte *)0x0))
      break;
      iVar9 = memcmp(pbVar14,pbVar3,sVar2);
      if (iVar9 == 0) {
        if ((pbVar14 != pbVar18 + uVar11) &&
           (uVar12 = (long)pbVar14 - (long)pbVar18, uVar12 != 0xffffffffffffffff))
        goto LAB_008cfd5c;
        break;
      }
      pbVar14 = pbVar14 + 1;
      uVar12 = (long)(pbVar18 + uVar11) - (long)pbVar14;
    } while ((long)sVar2 <= (long)uVar12);
  }
LAB_008cfcd0:
  sVar2 = CONCAT26(_DAT_043a76ae,CONCAT51(_DAT_043a76a9,DAT_043a76a1._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043a76b0._7_1_,
                            CONCAT16(DAT_043a76b0._6_1_,
                                     CONCAT51(DAT_043a76b0._1_5_,(char)DAT_043a76b0)));
  if ((DAT_043a76a0 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043a76a1;
    sVar2 = (ulong)(DAT_043a76a0 >> 1);
  }
  if (sVar2 == 0) {
    uVar12 = 0;
    goto LAB_008cfe08;
  }
  if ((long)sVar2 <= (long)uVar11) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar18 + uVar11;
    pbVar14 = pbVar18;
    do {
      if (0xfffffffffffffffe < uVar11 - sVar2) {
        return;
      }
      pbVar14 = memchr(pbVar14,(uint)bVar4,(uVar11 - sVar2) + 1);
      if (pbVar14 == (byte *)0x0) {
        return;
      }
      iVar9 = memcmp(pbVar14,pbVar3,sVar2);
      if (iVar9 == 0) {
        if (pbVar14 == pbVar1) {
          return;
        }
        do {
          uVar12 = (long)pbVar14 - (long)pbVar18;
          if (uVar12 == 0xffffffffffffffff) {
            return;
          }
LAB_008cfe08:
          while( true ) {
            std::string::erase(0x43a7668,uVar12);
            bVar8 = (_DAT_043a7668 & 1) != 0;
            uVar12 = _DAT_043a7668 >> 1 & 0x7f;
            if (bVar8) {
              uVar12 = DAT_043a7670;
            }
            sVar2 = CONCAT26(_DAT_043a76ae,CONCAT51(_DAT_043a76a9,DAT_043a76a1._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043a76b0._7_1_,
                                      CONCAT16(DAT_043a76b0._6_1_,
                                               CONCAT51(DAT_043a76b0._1_5_,(char)DAT_043a76b0)));
            pbVar18 = DAT_043a7678;
            if (!bVar8) {
              pbVar18 = &DAT_043a7669;
            }
            if ((DAT_043a76a0 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043a76a1;
              sVar2 = (ulong)(DAT_043a76a0 >> 1);
            }
            if (sVar2 != 0) break;
            uVar12 = 0;
          }
          if ((long)uVar12 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar18 + uVar12;
          pbVar14 = pbVar18;
          while( true ) {
            if (0xfffffffffffffffe < uVar12 - sVar2) {
              return;
            }
            pbVar14 = memchr(pbVar14,(uint)bVar4,(uVar12 - sVar2) + 1);
            if (pbVar14 == (byte *)0x0) {
              return;
            }
            iVar9 = memcmp(pbVar14,pbVar3,sVar2);
            if (iVar9 == 0) break;
            pbVar14 = pbVar14 + 1;
            uVar12 = (long)pbVar1 - (long)pbVar14;
            if ((long)uVar12 < (long)sVar2) {
              return;
            }
          }
          if (pbVar14 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar14 = pbVar14 + 1;
      uVar11 = (long)pbVar1 - (long)pbVar14;
    } while ((long)sVar2 <= (long)uVar11);
  }
  return;
}


