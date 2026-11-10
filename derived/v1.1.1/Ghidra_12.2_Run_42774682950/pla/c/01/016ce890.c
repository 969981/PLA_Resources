/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ce890; name: FUN_016ce890
 */


/* WARNING: Removing unreachable block (ram,0x016cedb8) */
/* WARNING: Removing unreachable block (ram,0x016cedc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ce890(void)

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
  
  if (((DAT_043ccb08 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ccb08), iVar7 != 0)) {
    DAT_043ccad8 = 0x16;
    DAT_043ccae8 = (byte *)0x0;
    _DAT_043ccae4 = 0;
    DAT_043ccad9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043ccae0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043ccaf0 = 0x2a;
    DAT_043ccb00._7_1_ = 0;
    DAT_043ccb00._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043ccb00._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043ccb00._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043ccb00._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043ccb00._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043ccaf9 = s__anonymous_namespace__039071f8[8];
    DAT_043ccaf9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043ccaf9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043ccaf9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043ccaf9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043ccafe = s__anonymous_namespace__039071f8._13_2_;
    DAT_043ccb00._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043ccaf1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043ccaf1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043ccb00._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043ccad8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ccb08);
  }
  plVar5 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar12 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1c0,8);
  _DAT_043ccab8 = 0x1c1;
  DAT_043ccac0 = 0x1ba;
  DAT_043ccac8 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<event_script::GinkgoProductInfo, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3>, char const (&)[12], gfl::FnvHash64 event_script::GinkgoProductInfo::*, char const (&)[7], unsigned char event_script::GinkgoProductInfo::*, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x1ba);
  *(undefined1 *)((long)__dest + 0x1ba) = 0;
  std::string::find(-0x48,0x5b);
  uVar8 = std::string::find(-0x48,0x3d);
  uVar9 = std::string::rfind(-0x48,0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043ccab8 & 1) == 0) {
      uVar9 = (ulong)(DAT_043ccab8 >> 1);
    }
    else {
      uVar9 = DAT_043ccac0;
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
    if ((_DAT_043ccab8 & 1) == 0) {
      uVar8 = (ulong)(DAT_043ccab8 >> 1);
    }
    else {
      uVar8 = DAT_043ccac0;
    }
  }
  if (uVar13 < uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ccab8,uVar13,uVar9 - uVar13,
                      (allocator *)&DAT_043ccab8);
  FUN_016cb7a8(&DAT_043ccab8);
  _DAT_043ccab8 = local_78;
  DAT_043ccac0 = uStack_70;
  DAT_043ccac8 = local_68;
  lVar10 = FUN_016cb74c(&DAT_043ccab8);
  if (lVar10 != -1) {
    std::string::erase(0x43ccab8,lVar10 - 2);
  }
  bVar6 = (_DAT_043ccab8 & 1) == 0;
  uVar8 = (ulong)(DAT_043ccab8 >> 1);
  uVar13 = DAT_043ccac0;
  pbVar16 = DAT_043ccac8;
  uVar9 = uVar8;
  if (!bVar6) {
    uVar9 = DAT_043ccac0;
  }
  while( true ) {
    uVar14 = (uint)DAT_043ccab8;
    bVar4 = DAT_043ccab8 & 1;
    uVar15 = _DAT_043ccab8 & 0xff;
    DAT_043ccac0 = uVar13;
    DAT_043ccac8 = pbVar16;
    if (uVar9 == 0) break;
    pbVar3 = &DAT_043ccab9;
    if ((DAT_043ccab8 & 1) != 0) {
      pbVar3 = pbVar16;
    }
    iVar7 = isblank((uint)*pbVar3);
    if (iVar7 == 0) break;
    pbVar11 = &DAT_043ccab9;
    if (!bVar6) {
      pbVar11 = pbVar16;
    }
    std::string::erase(0x43ccab8,(long)pbVar11 - (long)pbVar3);
    bVar6 = (_DAT_043ccab8 & 1) == 0;
    uVar8 = (ulong)(DAT_043ccab8 >> 1);
    uVar13 = DAT_043ccac0;
    pbVar16 = DAT_043ccac8;
    uVar9 = uVar8;
    if (!bVar6) {
      uVar9 = DAT_043ccac0;
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
    pbVar16 = &DAT_043ccab9;
    if (!bVar6) {
      uVar9 = uVar13;
      pbVar16 = DAT_043ccac8;
    }
    iVar7 = isblank((uint)pbVar16[uVar9 - 1]);
    if (iVar7 == 0) break;
    FUN_016cb768(&DAT_043ccab8);
    uVar15 = _DAT_043ccab8 & 0xff;
    uVar14 = (uint)uVar15;
    bVar6 = (_DAT_043ccab8 & 1) == 0;
    uVar8 = _DAT_043ccab8 >> 1 & 0x7f;
    uVar13 = DAT_043ccac0;
    uVar9 = uVar8;
    if (!bVar6) {
      uVar9 = DAT_043ccac0;
    }
  }
  bVar6 = (uVar14 & 1) != 0;
  if (bVar6) {
    uVar8 = uVar13;
  }
  pbVar16 = &DAT_043ccab9;
  if (bVar6) {
    pbVar16 = DAT_043ccac8;
  }
  sVar2 = CONCAT44(_DAT_043ccae4,ram0x043ccae0);
  if ((DAT_043ccad8 & 1) == 0) {
    sVar2 = (ulong)(DAT_043ccad8 >> 1);
    pbVar3 = (byte *)&DAT_043ccad9;
  }
  else {
    pbVar3 = DAT_043ccae8;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
LAB_016cebd4:
    do {
      while( true ) {
        std::string::erase(0x43ccab8,uVar9);
        sVar2 = CONCAT44(_DAT_043ccae4,ram0x043ccae0);
        if ((_DAT_043ccab8 & 1) == 0) {
          uVar8 = _DAT_043ccab8 >> 1 & 0x7f;
          pbVar16 = &DAT_043ccab9;
        }
        else {
          uVar8 = DAT_043ccac0;
          pbVar16 = DAT_043ccac8;
        }
        if ((DAT_043ccad8 & 1) == 0) {
          sVar2 = (ulong)(DAT_043ccad8 >> 1);
          pbVar3 = (byte *)&DAT_043ccad9;
        }
        else {
          pbVar3 = DAT_043ccae8;
        }
        if (sVar2 != 0) break;
        uVar9 = 0;
      }
      if ((long)uVar8 < (long)sVar2) goto LAB_016ceb44;
      bVar4 = *pbVar3;
      pbVar11 = pbVar16;
      uVar9 = uVar8;
      while( true ) {
        if ((0xfffffffffffffffe < uVar9 - sVar2) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1), pbVar11 == (byte *)0x0))
        goto LAB_016ceb44;
        iVar7 = memcmp(pbVar11,pbVar3,sVar2);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
        if ((long)uVar9 < (long)sVar2) goto LAB_016ceb44;
      }
      if ((pbVar11 == pbVar16 + uVar8) ||
         (uVar9 = (long)pbVar11 - (long)pbVar16, uVar9 == 0xffffffffffffffff)) goto LAB_016ceb44;
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
           (uVar9 = (long)pbVar11 - (long)pbVar16, uVar9 != 0xffffffffffffffff)) goto LAB_016cebd4;
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
    } while ((long)sVar2 <= (long)uVar9);
  }
LAB_016ceb44:
  sVar2 = CONCAT26(_DAT_043ccafe,CONCAT51(_DAT_043ccaf9,DAT_043ccaf1._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043ccb00._7_1_,
                            CONCAT16(DAT_043ccb00._6_1_,
                                     CONCAT51(DAT_043ccb00._1_5_,(char)DAT_043ccb00)));
  if ((DAT_043ccaf0 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043ccaf1;
    sVar2 = (ulong)(DAT_043ccaf0 >> 1);
  }
  if (sVar2 == 0) {
    uVar9 = 0;
    goto LAB_016cec80;
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
LAB_016cec80:
          while( true ) {
            std::string::erase(0x43ccab8,uVar9);
            bVar6 = (_DAT_043ccab8 & 1) != 0;
            uVar9 = _DAT_043ccab8 >> 1 & 0x7f;
            if (bVar6) {
              uVar9 = DAT_043ccac0;
            }
            sVar2 = CONCAT26(_DAT_043ccafe,CONCAT51(_DAT_043ccaf9,DAT_043ccaf1._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043ccb00._7_1_,
                                      CONCAT16(DAT_043ccb00._6_1_,
                                               CONCAT51(DAT_043ccb00._1_5_,(char)DAT_043ccb00)));
            pbVar16 = DAT_043ccac8;
            if (!bVar6) {
              pbVar16 = &DAT_043ccab9;
            }
            if ((DAT_043ccaf0 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043ccaf1;
              sVar2 = (ulong)(DAT_043ccaf0 >> 1);
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


