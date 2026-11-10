/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd6720; name: FUN_00fd6720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fd6720(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b77e0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b77e0), iVar8 != 0)) {
    DAT_043b77b0 = 0x16;
    DAT_043b77c0 = (byte *)0x0;
    _DAT_043b77bc = 0;
    DAT_043b77b1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b77b8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b77c8 = 0x2a;
    DAT_043b77d8._7_1_ = 0;
    DAT_043b77d8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b77d8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b77d8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b77d8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b77d8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b77d1 = s__anonymous_namespace__039071f8[8];
    DAT_043b77d1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b77d1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b77d1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b77d1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b77d6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b77d8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b77c9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b77c9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b77d8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b77b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b77e0);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar13 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,0x90,8);
  _DAT_043b7790 = 0x91;
  DAT_043b7798 = 0x83;
  DAT_043b77a0 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<gfl::ai::havok::AiComponent>, seperator_mark = int]"
         ,0x83);
  *(undefined1 *)((long)__dest + 0x83) = 0;
  std::string::find(-0x70,0x5b);
  uVar9 = std::string::find(-0x70,0x3d);
  uVar10 = std::string::rfind(-0x70,0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043b7790 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b7790 >> 1);
    }
    else {
      uVar10 = DAT_043b7798;
    }
    uVar14 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar14 = uVar9;
    }
    uVar9 = uVar10;
  }
  else {
    uVar14 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar14 = uVar9;
    }
    if ((_DAT_043b7790 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b7790 >> 1);
    }
    else {
      uVar9 = DAT_043b7798;
    }
  }
  if (uVar14 < uVar9 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b7790,uVar14,uVar10 - uVar14,
                      (allocator *)&DAT_043b7790);
  FUN_00fd64bc(&DAT_043b7790);
  _DAT_043b7790 = local_78;
  DAT_043b7798 = uStack_70;
  DAT_043b77a0 = local_68;
  lVar11 = FUN_00fd6460(&DAT_043b7790);
  if (lVar11 != -1) {
    std::string::erase(0x43b7790,lVar11 - 2);
  }
  bVar7 = (_DAT_043b7790 & 1) == 0;
  uVar9 = (ulong)(DAT_043b7790 >> 1);
  uVar14 = _DAT_043b7790;
  uVar5 = DAT_043b7798;
  pbVar16 = DAT_043b77a0;
  uVar10 = uVar9;
  bVar4 = DAT_043b7790;
  if (!bVar7) {
    uVar10 = DAT_043b7798;
  }
  while( true ) {
    _DAT_043b7790 = uVar14;
    DAT_043b7798 = uVar5;
    DAT_043b77a0 = pbVar16;
    if (uVar10 == 0) break;
    pbVar3 = &DAT_043b7791;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar16;
    }
    iVar8 = isblank((uint)*pbVar3);
    if (iVar8 == 0) break;
    pbVar12 = &DAT_043b7791;
    if (!bVar7) {
      pbVar12 = pbVar16;
    }
    std::string::erase(0x43b7790,(long)pbVar12 - (long)pbVar3);
    bVar7 = (_DAT_043b7790 & 1) == 0;
    uVar9 = (ulong)(DAT_043b7790 >> 1);
    uVar14 = _DAT_043b7790;
    uVar5 = DAT_043b7798;
    pbVar16 = DAT_043b77a0;
    uVar10 = uVar9;
    bVar4 = DAT_043b7790;
    if (!bVar7) {
      uVar10 = DAT_043b7798;
    }
  }
  bVar7 = (bVar4 & 1) == 0;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = uVar5;
  }
  while (uVar15 = (uint)bVar4, uVar10 != 0) {
    uVar15 = (uint)uVar14;
    uVar9 = (ulong)((uVar15 & 0xff) >> 1);
    uVar10 = uVar9;
    pbVar16 = &DAT_043b7791;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar16 = DAT_043b77a0;
    }
    iVar8 = isblank((uint)pbVar16[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_00fd647c(&DAT_043b7790);
    bVar7 = (_DAT_043b7790 & 1) == 0;
    uVar9 = (ulong)(DAT_043b7790 >> 1);
    uVar14 = _DAT_043b7790;
    uVar5 = DAT_043b7798;
    uVar10 = uVar9;
    bVar4 = DAT_043b7790;
    if (!bVar7) {
      uVar10 = DAT_043b7798;
    }
  }
  bVar7 = (uVar15 & 1) != 0;
  if (bVar7) {
    uVar9 = uVar5;
  }
  pbVar16 = &DAT_043b7791;
  if (bVar7) {
    pbVar16 = DAT_043b77a0;
  }
  sVar2 = CONCAT44(_DAT_043b77bc,ram0x043b77b8);
  if ((DAT_043b77b0 & 1) == 0) {
    sVar2 = (ulong)(DAT_043b77b0 >> 1);
    pbVar3 = (byte *)&DAT_043b77b1;
  }
  else {
    pbVar3 = DAT_043b77c0;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
LAB_00fd6a60:
    do {
      while( true ) {
        std::string::erase(0x43b7790,uVar10);
        sVar2 = CONCAT44(_DAT_043b77bc,ram0x043b77b8);
        if ((_DAT_043b7790 & 1) == 0) {
          uVar9 = _DAT_043b7790 >> 1 & 0x7f;
          pbVar16 = &DAT_043b7791;
        }
        else {
          uVar9 = DAT_043b7798;
          pbVar16 = DAT_043b77a0;
        }
        if ((DAT_043b77b0 & 1) == 0) {
          sVar2 = (ulong)(DAT_043b77b0 >> 1);
          pbVar3 = (byte *)&DAT_043b77b1;
        }
        else {
          pbVar3 = DAT_043b77c0;
        }
        if (sVar2 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar9 < (long)sVar2) goto LAB_00fd69a4;
      bVar4 = *pbVar3;
      pbVar12 = pbVar16;
      uVar10 = uVar9;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar2) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
        goto LAB_00fd69a4;
        iVar8 = memcmp(pbVar12,pbVar3,sVar2);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar16 + uVar9) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar2) goto LAB_00fd69a4;
      }
      if ((pbVar12 == pbVar16 + uVar9) ||
         (uVar10 = (long)pbVar12 - (long)pbVar16, uVar10 == 0xffffffffffffffff)) goto LAB_00fd69a4;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar9) {
    bVar4 = *pbVar3;
    pbVar12 = pbVar16;
    uVar10 = uVar9;
    do {
      if ((0xfffffffffffffffe < uVar10 - sVar2) ||
         (pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
      break;
      iVar8 = memcmp(pbVar12,pbVar3,sVar2);
      if (iVar8 == 0) {
        if ((pbVar12 != pbVar16 + uVar9) &&
           (uVar10 = (long)pbVar12 - (long)pbVar16, uVar10 != 0xffffffffffffffff))
        goto LAB_00fd6a60;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar16 + uVar9) - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar10);
  }
LAB_00fd69a4:
  sVar2 = CONCAT26(_DAT_043b77d6,CONCAT51(_DAT_043b77d1,DAT_043b77c9._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043b77d8._7_1_,
                            CONCAT16(DAT_043b77d8._6_1_,
                                     CONCAT51(DAT_043b77d8._1_5_,(char)DAT_043b77d8)));
  if ((DAT_043b77c8 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043b77c9;
    sVar2 = (ulong)(DAT_043b77c8 >> 1);
  }
  if (sVar2 == 0) {
    uVar10 = 0;
    goto LAB_00fd6b0c;
  }
  if ((long)sVar2 <= (long)uVar9) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar16 + uVar9;
    pbVar12 = pbVar16;
    do {
      if (0xfffffffffffffffe < uVar9 - sVar2) {
        return;
      }
      pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar9 - sVar2) + 1);
      if (pbVar12 == (byte *)0x0) {
        return;
      }
      iVar8 = memcmp(pbVar12,pbVar3,sVar2);
      if (iVar8 == 0) {
        if (pbVar12 == pbVar1) {
          return;
        }
        do {
          uVar10 = (long)pbVar12 - (long)pbVar16;
          if (uVar10 == 0xffffffffffffffff) {
            return;
          }
LAB_00fd6b0c:
          while( true ) {
            std::string::erase(0x43b7790,uVar10);
            bVar7 = (_DAT_043b7790 & 1) != 0;
            uVar10 = _DAT_043b7790 >> 1 & 0x7f;
            if (bVar7) {
              uVar10 = DAT_043b7798;
            }
            sVar2 = CONCAT26(_DAT_043b77d6,CONCAT51(_DAT_043b77d1,DAT_043b77c9._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043b77d8._7_1_,
                                      CONCAT16(DAT_043b77d8._6_1_,
                                               CONCAT51(DAT_043b77d8._1_5_,(char)DAT_043b77d8)));
            pbVar16 = DAT_043b77a0;
            if (!bVar7) {
              pbVar16 = &DAT_043b7791;
            }
            if ((DAT_043b77c8 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043b77c9;
              sVar2 = (ulong)(DAT_043b77c8 >> 1);
            }
            if (sVar2 != 0) break;
            uVar10 = 0;
          }
          if ((long)uVar10 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar16 + uVar10;
          pbVar12 = pbVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar10 - sVar2) {
              return;
            }
            pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar10 - sVar2) + 1);
            if (pbVar12 == (byte *)0x0) {
              return;
            }
            iVar8 = memcmp(pbVar12,pbVar3,sVar2);
            if (iVar8 == 0) break;
            pbVar12 = pbVar12 + 1;
            uVar10 = (long)pbVar1 - (long)pbVar12;
            if ((long)uVar10 < (long)sVar2) {
              return;
            }
          }
          if (pbVar12 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar12 = pbVar12 + 1;
      uVar9 = (long)pbVar1 - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar9);
  }
  return;
}


