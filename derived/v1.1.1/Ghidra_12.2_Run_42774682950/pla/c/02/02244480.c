/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02244480; name: FUN_02244480
 */


/* WARNING: Removing unreachable block (ram,0x022449a8) */
/* WARNING: Removing unreachable block (ram,0x022449b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02244480(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043df2b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df2b8), iVar7 != 0)) {
    DAT_043df288 = 0x16;
    DAT_043df298 = (byte *)0x0;
    _DAT_043df294 = 0;
    DAT_043df289._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043df290 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043df2a0 = 0x2a;
    DAT_043df2b0._7_1_ = 0;
    DAT_043df2b0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043df2b0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043df2b0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043df2b0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043df2b0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043df2a9 = s__anonymous_namespace__039071f8[8];
    DAT_043df2a9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043df2a9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043df2a9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043df2a9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043df2ae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043df2b0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043df2a1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043df2a1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043df2b0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043df288,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df2b8);
  }
  plVar5 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar12 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x480,8);
  _DAT_043df268 = 0x481;
  DAT_043df270 = 0x477;
  DAT_043df278 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::BallInWarpDesc, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12>, char const (&)[12], gfl::math::Vector3 field::content::BallInWarpDesc::*, char const (&)[12], float field::content::BallInWarpDesc::*, char const (&)[12], float field::content::BallInWarpDesc::*, char const (&)[5], field::content::BallInWarpMode field::content::BallInWarpDesc::*, char const (&)[15], int field::content::BallInWarpDesc::*, char const (&)[13], int field::content::BallInWarpDesc::*, char const (&)[16], int field::content::BallInWarpDesc::*, char const (&)[8], bool field::content::BallInWarpDesc::*, char const (&)[23], gfl::math::Vector3 field::content::BallInWarpDesc::*, char const (&)[22], gfl::math::Vector3 field::content::BallInWarpDesc::*, char const (&)[41], void (field::content::BallInWarpDesc::*)(field::content::FieldCharacterComponent *, const char *, const gfl::math::Vector3 &), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x477);
  *(undefined1 *)((long)__dest + 0x477) = 0;
  std::string::find('h',0x5b);
  uVar8 = std::string::find('h',0x3d);
  uVar9 = std::string::rfind('h',0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043df268 & 1) == 0) {
      uVar9 = (ulong)(DAT_043df268 >> 1);
    }
    else {
      uVar9 = DAT_043df270;
    }
    uVar13 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar13 = uVar8;
    }
    uVar8 = uVar9;
  }
  else {
    uVar13 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar13 = uVar8;
    }
    if ((_DAT_043df268 & 1) == 0) {
      uVar8 = (ulong)(DAT_043df268 >> 1);
    }
    else {
      uVar8 = DAT_043df270;
    }
  }
  if (uVar13 < uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043df268,uVar13,uVar9 - uVar13,
                      (allocator *)&DAT_043df268);
  FUN_02238ff4(&DAT_043df268);
  _DAT_043df268 = local_78;
  DAT_043df270 = uStack_70;
  DAT_043df278 = local_68;
  lVar10 = FUN_02238f98(&DAT_043df268);
  if (lVar10 != -1) {
    std::string::erase(0x43df268,lVar10 - 2);
  }
  bVar6 = (_DAT_043df268 & 1) == 0;
  uVar8 = (ulong)(DAT_043df268 >> 1);
  uVar13 = DAT_043df270;
  pbVar16 = DAT_043df278;
  uVar9 = uVar8;
  if (!bVar6) {
    uVar9 = DAT_043df270;
  }
  while( true ) {
    uVar14 = (uint)DAT_043df268;
    bVar4 = DAT_043df268 & 1;
    uVar15 = _DAT_043df268 & 0xff;
    DAT_043df270 = uVar13;
    DAT_043df278 = pbVar16;
    if (uVar9 == 0) break;
    pbVar3 = &DAT_043df269;
    if ((DAT_043df268 & 1) != 0) {
      pbVar3 = pbVar16;
    }
    iVar7 = isblank((uint)*pbVar3);
    if (iVar7 == 0) break;
    pbVar11 = &DAT_043df269;
    if (!bVar6) {
      pbVar11 = pbVar16;
    }
    std::string::erase(0x43df268,(long)pbVar11 - (long)pbVar3);
    bVar6 = (_DAT_043df268 & 1) == 0;
    uVar8 = (ulong)(DAT_043df268 >> 1);
    uVar13 = DAT_043df270;
    pbVar16 = DAT_043df278;
    uVar9 = uVar8;
    if (!bVar6) {
      uVar9 = DAT_043df270;
    }
  }
  bVar6 = bVar4 == 0;
  uVar9 = uVar8;
  if (!bVar6) {
    uVar9 = uVar13;
  }
  while (uVar9 != 0) {
    uVar14 = (uint)uVar15;
    uVar8 = (ulong)(uVar14 >> 1);
    uVar9 = uVar8;
    pbVar16 = &DAT_043df269;
    if (!bVar6) {
      uVar9 = uVar13;
      pbVar16 = DAT_043df278;
    }
    iVar7 = isblank((uint)pbVar16[uVar9 - 1]);
    if (iVar7 == 0) break;
    FUN_02238fb4(&DAT_043df268);
    uVar15 = _DAT_043df268 & 0xff;
    uVar14 = (uint)uVar15;
    bVar6 = (_DAT_043df268 & 1) == 0;
    uVar8 = _DAT_043df268 >> 1 & 0x7f;
    uVar13 = DAT_043df270;
    uVar9 = uVar8;
    if (!bVar6) {
      uVar9 = DAT_043df270;
    }
  }
  bVar6 = (uVar14 & 1) != 0;
  if (bVar6) {
    uVar8 = uVar13;
  }
  pbVar16 = &DAT_043df269;
  if (bVar6) {
    pbVar16 = DAT_043df278;
  }
  sVar2 = CONCAT44(_DAT_043df294,ram0x043df290);
  if ((DAT_043df288 & 1) == 0) {
    sVar2 = (ulong)(DAT_043df288 >> 1);
    pbVar3 = (byte *)&DAT_043df289;
  }
  else {
    pbVar3 = DAT_043df298;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
LAB_022447c4:
    do {
      while( true ) {
        std::string::erase(0x43df268,uVar9);
        sVar2 = CONCAT44(_DAT_043df294,ram0x043df290);
        if ((_DAT_043df268 & 1) == 0) {
          uVar8 = _DAT_043df268 >> 1 & 0x7f;
          pbVar16 = &DAT_043df269;
        }
        else {
          uVar8 = DAT_043df270;
          pbVar16 = DAT_043df278;
        }
        if ((DAT_043df288 & 1) == 0) {
          sVar2 = (ulong)(DAT_043df288 >> 1);
          pbVar3 = (byte *)&DAT_043df289;
        }
        else {
          pbVar3 = DAT_043df298;
        }
        if (sVar2 != 0) break;
        uVar9 = 0;
      }
      if ((long)uVar8 < (long)sVar2) goto LAB_02244734;
      bVar4 = *pbVar3;
      pbVar11 = pbVar16;
      uVar9 = uVar8;
      while( true ) {
        if ((0xfffffffffffffffe < uVar9 - sVar2) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1), pbVar11 == (byte *)0x0))
        goto LAB_02244734;
        iVar7 = memcmp(pbVar11,pbVar3,sVar2);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
        if ((long)uVar9 < (long)sVar2) goto LAB_02244734;
      }
      if ((pbVar11 == pbVar16 + uVar8) ||
         (uVar9 = (long)pbVar11 - (long)pbVar16, uVar9 == 0xffffffffffffffff)) goto LAB_02244734;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar8) {
    bVar4 = *pbVar3;
    pbVar11 = pbVar16;
    uVar9 = uVar8;
    do {
      if ((0xfffffffffffffffe < uVar9 - sVar2) ||
         (pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1), pbVar11 == (byte *)0x0)) break;
      iVar7 = memcmp(pbVar11,pbVar3,sVar2);
      if (iVar7 == 0) {
        if ((pbVar11 != pbVar16 + uVar8) &&
           (uVar9 = (long)pbVar11 - (long)pbVar16, uVar9 != 0xffffffffffffffff)) goto LAB_022447c4;
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
    } while ((long)sVar2 <= (long)uVar9);
  }
LAB_02244734:
  sVar2 = CONCAT26(_DAT_043df2ae,CONCAT51(_DAT_043df2a9,DAT_043df2a1._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043df2b0._7_1_,
                            CONCAT16(DAT_043df2b0._6_1_,
                                     CONCAT51(DAT_043df2b0._1_5_,(char)DAT_043df2b0)));
  if ((DAT_043df2a0 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043df2a1;
    sVar2 = (ulong)(DAT_043df2a0 >> 1);
  }
  if (sVar2 == 0) {
    uVar9 = 0;
    goto LAB_02244870;
  }
  if ((long)sVar2 <= (long)uVar8) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar16 + uVar8;
    pbVar11 = pbVar16;
    do {
      if (0xfffffffffffffffe < uVar8 - sVar2) {
        return;
      }
      pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar8 - sVar2) + 1);
      if (pbVar11 == (byte *)0x0) {
        return;
      }
      iVar7 = memcmp(pbVar11,pbVar3,sVar2);
      if (iVar7 == 0) {
        if (pbVar11 == pbVar1) {
          return;
        }
        do {
          uVar9 = (long)pbVar11 - (long)pbVar16;
          if (uVar9 == 0xffffffffffffffff) {
            return;
          }
LAB_02244870:
          while( true ) {
            std::string::erase(0x43df268,uVar9);
            bVar6 = (_DAT_043df268 & 1) != 0;
            uVar9 = _DAT_043df268 >> 1 & 0x7f;
            if (bVar6) {
              uVar9 = DAT_043df270;
            }
            sVar2 = CONCAT26(_DAT_043df2ae,CONCAT51(_DAT_043df2a9,DAT_043df2a1._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043df2b0._7_1_,
                                      CONCAT16(DAT_043df2b0._6_1_,
                                               CONCAT51(DAT_043df2b0._1_5_,(char)DAT_043df2b0)));
            pbVar16 = DAT_043df278;
            if (!bVar6) {
              pbVar16 = &DAT_043df269;
            }
            if ((DAT_043df2a0 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043df2a1;
              sVar2 = (ulong)(DAT_043df2a0 >> 1);
            }
            if (sVar2 != 0) break;
            uVar9 = 0;
          }
          if ((long)uVar9 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar16 + uVar9;
          pbVar11 = pbVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar9 - sVar2) {
              return;
            }
            pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1);
            if (pbVar11 == (byte *)0x0) {
              return;
            }
            iVar7 = memcmp(pbVar11,pbVar3,sVar2);
            if (iVar7 == 0) break;
            pbVar11 = pbVar11 + 1;
            uVar9 = (long)pbVar1 - (long)pbVar11;
            if ((long)uVar9 < (long)sVar2) {
              return;
            }
          }
          if (pbVar11 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar11 = pbVar11 + 1;
      uVar8 = (long)pbVar1 - (long)pbVar11;
    } while ((long)sVar2 <= (long)uVar8);
  }
  return;
}


