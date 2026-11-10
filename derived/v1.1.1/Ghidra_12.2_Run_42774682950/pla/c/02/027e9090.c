/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027e9090; name: FUN_027e9090
 */


/* WARNING: Removing unreachable block (ram,0x027e95b8) */
/* WARNING: Removing unreachable block (ram,0x027e95c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e9090(void)

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
  
  if (((DAT_043ead78 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ead78), iVar7 != 0)) {
    DAT_043ead48 = 0x16;
    DAT_043ead58 = (byte *)0x0;
    _DAT_043ead54 = 0;
    DAT_043ead49._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043ead50 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043ead60 = 0x2a;
    DAT_043ead70._7_1_ = 0;
    DAT_043ead70._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043ead70._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043ead70._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043ead70._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043ead70._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043ead69 = s__anonymous_namespace__039071f8[8];
    DAT_043ead69_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043ead69_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043ead69_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043ead69_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043ead6e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043ead70._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043ead61._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043ead61._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043ead70._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043ead48,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ead78);
  }
  plVar5 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar12 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x2b0,8);
  _DAT_043ead28 = 0x2b1;
  DAT_043ead30 = 0x2a2;
  DAT_043ead38 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<ui::ui_resident::PokedexUpdateInfo, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6>, char const (&)[25], unsigned int ui::ui_resident::PokedexUpdateInfo::*, char const (&)[32], unsigned int ui::ui_resident::PokedexUpdateInfo::*, char const (&)[31], unsigned int ui::ui_resident::PokedexUpdateInfo::*, char const (&)[29], unsigned int ui::ui_resident::PokedexUpdateInfo::*, char const (&)[16], unsigned int ui::ui_resident::PokedexUpdateInfo::*, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x2a2);
  *(undefined1 *)((long)__dest + 0x2a2) = 0;
  std::string::find('(',0x5b);
  uVar8 = std::string::find('(',0x3d);
  uVar9 = std::string::rfind('(',0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043ead28 & 1) == 0) {
      uVar9 = (ulong)(DAT_043ead28 >> 1);
    }
    else {
      uVar9 = DAT_043ead30;
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
    if ((_DAT_043ead28 & 1) == 0) {
      uVar8 = (ulong)(DAT_043ead28 >> 1);
    }
    else {
      uVar8 = DAT_043ead30;
    }
  }
  if (uVar13 < uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ead28,uVar13,uVar9 - uVar13,
                      (allocator *)&DAT_043ead28);
  FUN_027e64f4(&DAT_043ead28);
  _DAT_043ead28 = local_78;
  DAT_043ead30 = uStack_70;
  DAT_043ead38 = local_68;
  lVar10 = FUN_027e6498(&DAT_043ead28);
  if (lVar10 != -1) {
    std::string::erase(0x43ead28,lVar10 - 2);
  }
  bVar6 = (_DAT_043ead28 & 1) == 0;
  uVar8 = (ulong)(DAT_043ead28 >> 1);
  uVar13 = DAT_043ead30;
  pbVar16 = DAT_043ead38;
  uVar9 = uVar8;
  if (!bVar6) {
    uVar9 = DAT_043ead30;
  }
  while( true ) {
    uVar14 = (uint)DAT_043ead28;
    bVar4 = DAT_043ead28 & 1;
    uVar15 = _DAT_043ead28 & 0xff;
    DAT_043ead30 = uVar13;
    DAT_043ead38 = pbVar16;
    if (uVar9 == 0) break;
    pbVar3 = &DAT_043ead29;
    if ((DAT_043ead28 & 1) != 0) {
      pbVar3 = pbVar16;
    }
    iVar7 = isblank((uint)*pbVar3);
    if (iVar7 == 0) break;
    pbVar11 = &DAT_043ead29;
    if (!bVar6) {
      pbVar11 = pbVar16;
    }
    std::string::erase(0x43ead28,(long)pbVar11 - (long)pbVar3);
    bVar6 = (_DAT_043ead28 & 1) == 0;
    uVar8 = (ulong)(DAT_043ead28 >> 1);
    uVar13 = DAT_043ead30;
    pbVar16 = DAT_043ead38;
    uVar9 = uVar8;
    if (!bVar6) {
      uVar9 = DAT_043ead30;
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
    pbVar16 = &DAT_043ead29;
    if (!bVar6) {
      uVar9 = uVar13;
      pbVar16 = DAT_043ead38;
    }
    iVar7 = isblank((uint)pbVar16[uVar9 - 1]);
    if (iVar7 == 0) break;
    FUN_027e64b4(&DAT_043ead28);
    uVar15 = _DAT_043ead28 & 0xff;
    uVar14 = (uint)uVar15;
    bVar6 = (_DAT_043ead28 & 1) == 0;
    uVar8 = _DAT_043ead28 >> 1 & 0x7f;
    uVar13 = DAT_043ead30;
    uVar9 = uVar8;
    if (!bVar6) {
      uVar9 = DAT_043ead30;
    }
  }
  bVar6 = (uVar14 & 1) != 0;
  if (bVar6) {
    uVar8 = uVar13;
  }
  pbVar16 = &DAT_043ead29;
  if (bVar6) {
    pbVar16 = DAT_043ead38;
  }
  sVar2 = CONCAT44(_DAT_043ead54,ram0x043ead50);
  if ((DAT_043ead48 & 1) == 0) {
    sVar2 = (ulong)(DAT_043ead48 >> 1);
    pbVar3 = (byte *)&DAT_043ead49;
  }
  else {
    pbVar3 = DAT_043ead58;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
LAB_027e93d4:
    do {
      while( true ) {
        std::string::erase(0x43ead28,uVar9);
        sVar2 = CONCAT44(_DAT_043ead54,ram0x043ead50);
        if ((_DAT_043ead28 & 1) == 0) {
          uVar8 = _DAT_043ead28 >> 1 & 0x7f;
          pbVar16 = &DAT_043ead29;
        }
        else {
          uVar8 = DAT_043ead30;
          pbVar16 = DAT_043ead38;
        }
        if ((DAT_043ead48 & 1) == 0) {
          sVar2 = (ulong)(DAT_043ead48 >> 1);
          pbVar3 = (byte *)&DAT_043ead49;
        }
        else {
          pbVar3 = DAT_043ead58;
        }
        if (sVar2 != 0) break;
        uVar9 = 0;
      }
      if ((long)uVar8 < (long)sVar2) goto LAB_027e9344;
      bVar4 = *pbVar3;
      pbVar11 = pbVar16;
      uVar9 = uVar8;
      while( true ) {
        if ((0xfffffffffffffffe < uVar9 - sVar2) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1), pbVar11 == (byte *)0x0))
        goto LAB_027e9344;
        iVar7 = memcmp(pbVar11,pbVar3,sVar2);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
        if ((long)uVar9 < (long)sVar2) goto LAB_027e9344;
      }
      if ((pbVar11 == pbVar16 + uVar8) ||
         (uVar9 = (long)pbVar11 - (long)pbVar16, uVar9 == 0xffffffffffffffff)) goto LAB_027e9344;
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
           (uVar9 = (long)pbVar11 - (long)pbVar16, uVar9 != 0xffffffffffffffff)) goto LAB_027e93d4;
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
    } while ((long)sVar2 <= (long)uVar9);
  }
LAB_027e9344:
  sVar2 = CONCAT26(_DAT_043ead6e,CONCAT51(_DAT_043ead69,DAT_043ead61._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043ead70._7_1_,
                            CONCAT16(DAT_043ead70._6_1_,
                                     CONCAT51(DAT_043ead70._1_5_,(char)DAT_043ead70)));
  if ((DAT_043ead60 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043ead61;
    sVar2 = (ulong)(DAT_043ead60 >> 1);
  }
  if (sVar2 == 0) {
    uVar9 = 0;
    goto LAB_027e9480;
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
LAB_027e9480:
          while( true ) {
            std::string::erase(0x43ead28,uVar9);
            bVar6 = (_DAT_043ead28 & 1) != 0;
            uVar9 = _DAT_043ead28 >> 1 & 0x7f;
            if (bVar6) {
              uVar9 = DAT_043ead30;
            }
            sVar2 = CONCAT26(_DAT_043ead6e,CONCAT51(_DAT_043ead69,DAT_043ead61._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043ead70._7_1_,
                                      CONCAT16(DAT_043ead70._6_1_,
                                               CONCAT51(DAT_043ead70._1_5_,(char)DAT_043ead70)));
            pbVar16 = DAT_043ead38;
            if (!bVar6) {
              pbVar16 = &DAT_043ead29;
            }
            if ((DAT_043ead60 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043ead61;
              sVar2 = (ulong)(DAT_043ead60 >> 1);
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


