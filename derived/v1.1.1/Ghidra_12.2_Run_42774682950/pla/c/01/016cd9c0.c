/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016cd9c0; name: FUN_016cd9c0
 */


/* WARNING: Removing unreachable block (ram,0x016cdf28) */
/* WARNING: Removing unreachable block (ram,0x016cdf38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016cd9c0(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
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
  ulong uVar20;
  byte *pbVar21;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043cca48 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cca48), iVar11 != 0)) {
    DAT_043cca18 = 0x16;
    DAT_043cca28 = (byte *)0x0;
    _DAT_043cca24 = 0;
    DAT_043cca19._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043cca20 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043cca30 = 0x2a;
    DAT_043cca40._7_1_ = 0;
    DAT_043cca40._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043cca40._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043cca40._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043cca40._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043cca40._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043cca39 = s__anonymous_namespace__039071f8[8];
    DAT_043cca39_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043cca39_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043cca39_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043cca39_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043cca3e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043cca40._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043cca31._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043cca31._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043cca40._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043cca18,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cca48);
  }
  plVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar17 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar17 = plVar9;
  }
  pcVar12 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
  uVar5 = s_std__string_sol__detail__ctti_ge_038a5e36._104_8_;
  _DAT_043cc9f8 = 0x81;
  DAT_043cca00 = 0x7e;
  DAT_043cca08 = (byte *)pcVar12;
  *(undefined8 *)(pcVar12 + 0x60) = s_std__string_sol__detail__ctti_ge_038a5e36._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar5;
  uVar5 = CONCAT62(s_std__string_sol__detail__ctti_ge_038a5e36._120_6_,
                   s_std__string_sol__detail__ctti_ge_038a5e36._118_2_);
  *(ulong *)(pcVar12 + 0x70) =
       CONCAT26(s_std__string_sol__detail__ctti_ge_038a5e36._118_2_,
                s_std__string_sol__detail__ctti_ge_038a5e36._112_6_);
  uVar8 = s_std__string_sol__detail__ctti_ge_038a5e36._88_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038a5e36._80_8_;
  *(undefined8 *)(pcVar12 + 0x76) = uVar5;
  uVar6 = s_std__string_sol__detail__ctti_ge_038a5e36._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038a5e36._64_8_;
  *(undefined8 *)(pcVar12 + 0x50) = uVar7;
  *(undefined8 *)(pcVar12 + 0x58) = uVar8;
  *(undefined8 *)(pcVar12 + 0x40) = uVar5;
  *(undefined8 *)(pcVar12 + 0x48) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_038a5e36._56_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038a5e36._48_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038a5e36._40_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_std__string_sol__detail__ctti_ge_038a5e36._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar5;
  *(undefined8 *)(pcVar12 + 0x30) = uVar6;
  *(undefined8 *)(pcVar12 + 0x38) = uVar7;
  uVar8 = s_std__string_sol__detail__ctti_ge_038a5e36._24_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_038a5e36._16_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_038a5e36._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038a5e36._0_8_;
  pcVar12[0x7e] = '\0';
  *(undefined8 *)pcVar12 = uVar5;
  *(undefined8 *)(pcVar12 + 8) = uVar6;
  *(undefined8 *)(pcVar12 + 0x10) = uVar7;
  *(undefined8 *)(pcVar12 + 0x18) = uVar8;
  std::string::find(-8,0x5b);
  uVar13 = std::string::find(-8,0x3d);
  uVar14 = std::string::rfind(-8,0x5d);
  if (uVar14 == 0xffffffffffffffff) {
    if ((_DAT_043cc9f8 & 1) == 0) {
      uVar14 = (ulong)(DAT_043cc9f8 >> 1);
    }
    else {
      uVar14 = DAT_043cca00;
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
    if ((_DAT_043cc9f8 & 1) == 0) {
      uVar13 = (ulong)(DAT_043cc9f8 >> 1);
    }
    else {
      uVar13 = DAT_043cca00;
    }
  }
  if (uVar18 < uVar13 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043cc9f8,uVar18,uVar14 - uVar18,
                      (allocator *)&DAT_043cc9f8);
  FUN_016cb7a8(&DAT_043cc9f8);
  _DAT_043cc9f8 = local_78;
  DAT_043cca00 = uStack_70;
  DAT_043cca08 = local_68;
  lVar15 = FUN_016cb74c(&DAT_043cc9f8);
  if (lVar15 != -1) {
    std::string::erase(0x43cc9f8,lVar15 - 2);
  }
  bVar10 = (_DAT_043cc9f8 & 1) == 0;
  uVar13 = (ulong)(DAT_043cc9f8 >> 1);
  uVar18 = DAT_043cca00;
  pbVar21 = DAT_043cca08;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = DAT_043cca00;
  }
  while( true ) {
    uVar19 = (uint)DAT_043cc9f8;
    bVar4 = DAT_043cc9f8 & 1;
    uVar20 = _DAT_043cc9f8 & 0xff;
    DAT_043cca00 = uVar18;
    DAT_043cca08 = pbVar21;
    if (uVar14 == 0) break;
    pbVar3 = &DAT_043cc9f9;
    if ((DAT_043cc9f8 & 1) != 0) {
      pbVar3 = pbVar21;
    }
    iVar11 = isblank((uint)*pbVar3);
    if (iVar11 == 0) break;
    pbVar16 = &DAT_043cc9f9;
    if (!bVar10) {
      pbVar16 = pbVar21;
    }
    std::string::erase(0x43cc9f8,(long)pbVar16 - (long)pbVar3);
    bVar10 = (_DAT_043cc9f8 & 1) == 0;
    uVar13 = (ulong)(DAT_043cc9f8 >> 1);
    uVar18 = DAT_043cca00;
    pbVar21 = DAT_043cca08;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043cca00;
    }
  }
  bVar10 = bVar4 == 0;
  uVar14 = uVar13;
  if (!bVar10) {
    uVar14 = uVar18;
  }
  while (uVar14 != 0) {
    uVar19 = (uint)uVar20;
    uVar13 = (ulong)(uVar19 >> 1);
    uVar14 = uVar13;
    pbVar21 = &DAT_043cc9f9;
    if (!bVar10) {
      uVar14 = uVar18;
      pbVar21 = DAT_043cca08;
    }
    iVar11 = isblank((uint)pbVar21[uVar14 - 1]);
    if (iVar11 == 0) break;
    FUN_016cb768(&DAT_043cc9f8);
    uVar20 = _DAT_043cc9f8 & 0xff;
    uVar19 = (uint)uVar20;
    bVar10 = (_DAT_043cc9f8 & 1) == 0;
    uVar13 = _DAT_043cc9f8 >> 1 & 0x7f;
    uVar18 = DAT_043cca00;
    uVar14 = uVar13;
    if (!bVar10) {
      uVar14 = DAT_043cca00;
    }
  }
  bVar10 = (uVar19 & 1) != 0;
  if (bVar10) {
    uVar13 = uVar18;
  }
  pbVar21 = &DAT_043cc9f9;
  if (bVar10) {
    pbVar21 = DAT_043cca08;
  }
  sVar2 = CONCAT44(_DAT_043cca24,ram0x043cca20);
  if ((DAT_043cca18 & 1) == 0) {
    sVar2 = (ulong)(DAT_043cca18 >> 1);
    pbVar3 = (byte *)&DAT_043cca19;
  }
  else {
    pbVar3 = DAT_043cca28;
  }
  if (sVar2 == 0) {
    uVar14 = 0;
LAB_016cdd44:
    do {
      while( true ) {
        std::string::erase(0x43cc9f8,uVar14);
        sVar2 = CONCAT44(_DAT_043cca24,ram0x043cca20);
        if ((_DAT_043cc9f8 & 1) == 0) {
          uVar13 = _DAT_043cc9f8 >> 1 & 0x7f;
          pbVar21 = &DAT_043cc9f9;
        }
        else {
          uVar13 = DAT_043cca00;
          pbVar21 = DAT_043cca08;
        }
        if ((DAT_043cca18 & 1) == 0) {
          sVar2 = (ulong)(DAT_043cca18 >> 1);
          pbVar3 = (byte *)&DAT_043cca19;
        }
        else {
          pbVar3 = DAT_043cca28;
        }
        if (sVar2 != 0) break;
        uVar14 = 0;
      }
      if ((long)uVar13 < (long)sVar2) goto LAB_016cdcb4;
      bVar4 = *pbVar3;
      pbVar16 = pbVar21;
      uVar14 = uVar13;
      while( true ) {
        if ((0xfffffffffffffffe < uVar14 - sVar2) ||
           (pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar14 - sVar2) + 1), pbVar16 == (byte *)0x0))
        goto LAB_016cdcb4;
        iVar11 = memcmp(pbVar16,pbVar3,sVar2);
        if (iVar11 == 0) break;
        pbVar16 = pbVar16 + 1;
        uVar14 = (long)(pbVar21 + uVar13) - (long)pbVar16;
        if ((long)uVar14 < (long)sVar2) goto LAB_016cdcb4;
      }
      if ((pbVar16 == pbVar21 + uVar13) ||
         (uVar14 = (long)pbVar16 - (long)pbVar21, uVar14 == 0xffffffffffffffff)) goto LAB_016cdcb4;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar13) {
    bVar4 = *pbVar3;
    pbVar16 = pbVar21;
    uVar14 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar14 - sVar2) ||
         (pbVar16 = memchr(pbVar16,(uint)bVar4,(uVar14 - sVar2) + 1), pbVar16 == (byte *)0x0))
      break;
      iVar11 = memcmp(pbVar16,pbVar3,sVar2);
      if (iVar11 == 0) {
        if ((pbVar16 != pbVar21 + uVar13) &&
           (uVar14 = (long)pbVar16 - (long)pbVar21, uVar14 != 0xffffffffffffffff))
        goto LAB_016cdd44;
        break;
      }
      pbVar16 = pbVar16 + 1;
      uVar14 = (long)(pbVar21 + uVar13) - (long)pbVar16;
    } while ((long)sVar2 <= (long)uVar14);
  }
LAB_016cdcb4:
  sVar2 = CONCAT26(_DAT_043cca3e,CONCAT51(_DAT_043cca39,DAT_043cca31._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043cca40._7_1_,
                            CONCAT16(DAT_043cca40._6_1_,
                                     CONCAT51(DAT_043cca40._1_5_,(char)DAT_043cca40)));
  if ((DAT_043cca30 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043cca31;
    sVar2 = (ulong)(DAT_043cca30 >> 1);
  }
  if (sVar2 == 0) {
    uVar14 = 0;
    goto LAB_016cddf0;
  }
  if ((long)sVar2 <= (long)uVar13) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar21 + uVar13;
    pbVar16 = pbVar21;
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
          uVar14 = (long)pbVar16 - (long)pbVar21;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_016cddf0:
          while( true ) {
            std::string::erase(0x43cc9f8,uVar14);
            bVar10 = (_DAT_043cc9f8 & 1) != 0;
            uVar14 = _DAT_043cc9f8 >> 1 & 0x7f;
            if (bVar10) {
              uVar14 = DAT_043cca00;
            }
            sVar2 = CONCAT26(_DAT_043cca3e,CONCAT51(_DAT_043cca39,DAT_043cca31._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043cca40._7_1_,
                                      CONCAT16(DAT_043cca40._6_1_,
                                               CONCAT51(DAT_043cca40._1_5_,(char)DAT_043cca40)));
            pbVar21 = DAT_043cca08;
            if (!bVar10) {
              pbVar21 = &DAT_043cc9f9;
            }
            if ((DAT_043cca30 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043cca31;
              sVar2 = (ulong)(DAT_043cca30 >> 1);
            }
            if (sVar2 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar21 + uVar14;
          pbVar16 = pbVar21;
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


