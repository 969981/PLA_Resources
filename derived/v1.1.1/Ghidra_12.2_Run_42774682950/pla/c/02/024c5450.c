/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024c5450; name: FUN_024c5450
 */


/* WARNING: Removing unreachable block (ram,0x024c5bf4) */
/* WARNING: Removing unreachable block (ram,0x024c5be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024c5450(void)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long *plVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043e7890 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e7890), iVar7 != 0)) {
    DAT_043e7860 = 0x16;
    DAT_043e7870 = (byte *)0x0;
    DAT_043e7861._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e7868 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e7878 = 0x2a;
    _DAT_043e786c = 0;
    DAT_043e7888._7_1_ = 0;
    DAT_043e7888._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e7888._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e7888._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e7888._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e7888._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e7881 = s__anonymous_namespace__039071f8[8];
    DAT_043e7881_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e7881_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e7881_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e7881_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e7886 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e7888._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e7879._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e7879._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e7888._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e7860,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7890);
  }
  plVar5 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar12 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  puVar8 = (undefined1 *)(**(code **)(*plVar12 + 0x10))(plVar12,400,8);
  _DAT_043e7840 = 0x191;
  DAT_043e7848 = 0x18e;
  DAT_043e7850 = puVar8;
  memcpy(puVar8,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::WhooguruSettingParam, std::__1::integer_sequence<unsigned long, 0, 1, 2>, char const (&)[26], field::ride::CameraaInterpolationParam field::ride::WhooguruSettingParam::*, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x18e);
  puVar8[0x18e] = 0;
  std::string::find('@',0x5b);
  uVar9 = std::string::find('@',0x3d);
  uVar10 = std::string::rfind('@',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e7840 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e7840 >> 1);
    }
    else {
      uVar10 = DAT_043e7848;
    }
    uVar13 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar13 = uVar9;
    }
    uVar9 = uVar10;
  }
  else {
    uVar13 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar13 = uVar9;
    }
    if ((_DAT_043e7840 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e7840 >> 1);
    }
    else {
      uVar9 = DAT_043e7848;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e7840,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e7840);
  if ((_DAT_043e7840 & 1) != 0) {
    *DAT_043e7850 = 0;
    plVar5 = DAT_043f1798;
    puVar8 = DAT_043e7850;
    DAT_043e7848 = 0;
    if (((_DAT_043e7840 & 1) != 0) && (DAT_043e7850 != (undefined1 *)0x0)) {
      plVar12 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar12 = plVar5;
      }
      uVar10 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar10 & 1) != 0) {
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar12,puVar8,0,8);
          goto LAB_024c5658;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0,8);
    }
  }
LAB_024c5658:
  uVar10 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  _DAT_043e7840 = local_78;
  DAT_043e7848 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar10;
    pbVar20 = &DAT_043e7841;
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043e7850 = local_68;
  if (0xd < (long)uStack_70) {
    pbVar14 = pbVar20 + uStack_70;
    lVar15 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (pbVar20[uStack_70] == 0x6b) {
        lVar16 = 0;
        do {
          if (lVar16 == -0xd) {
            if ((lVar15 != -0xd) &&
               (pbVar14 + (~(ulong)pbVar20 - 0xd) != (byte *)0xffffffffffffffff)) {
              std::string::erase(0x43e7840,(ulong)(pbVar14 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)DAT_043e7840;
              uVar19 = DAT_043e7840 & 1;
              uVar10 = (ulong)(DAT_043e7840 >> 1);
            }
            goto LAB_024c572c;
          }
          lVar3 = lVar16 + -2;
          lVar4 = lVar16 + 0xc;
          lVar16 = lVar16 + -1;
        } while (pbVar14[lVar3] == "seperator_mark"[lVar4]);
      }
      pbVar14 = pbVar14 + -1;
      lVar15 = lVar15 + 1;
    }
  }
LAB_024c572c:
  pbVar20 = DAT_043e7850;
  uVar13 = DAT_043e7848;
  bVar6 = uVar19 == 0;
  uVar9 = uVar10;
  if (!bVar6) {
    uVar9 = DAT_043e7848;
  }
  if (uVar9 != 0) {
    pbVar14 = &DAT_043e7841;
    if (uVar19 != 0) {
      pbVar14 = DAT_043e7850;
    }
    iVar7 = isblank((uint)*pbVar14);
    if (iVar7 == 0) {
      uVar19 = uVar18 & 1;
      uVar10 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        pbVar11 = &DAT_043e7841;
        if (!bVar6) {
          pbVar11 = pbVar20;
        }
        std::string::erase(0x43e7840,(long)pbVar11 - (long)pbVar14);
        pbVar20 = DAT_043e7850;
        uVar13 = DAT_043e7848;
        uVar18 = (uint)DAT_043e7840;
        bVar6 = (_DAT_043e7840 & 1) == 0;
        uVar10 = (ulong)(DAT_043e7840 >> 1);
        uVar19 = DAT_043e7840 & 1;
        uVar9 = uVar10;
        if (!bVar6) {
          uVar9 = DAT_043e7848;
        }
        if (uVar9 == 0) break;
        pbVar14 = &DAT_043e7841;
        if ((_DAT_043e7840 & 1) != 0) {
          pbVar14 = DAT_043e7850;
        }
        iVar7 = isblank((uint)*pbVar14);
      } while (iVar7 != 0);
    }
  }
  bVar6 = uVar19 == 0;
  uVar9 = uVar10;
  if (!bVar6) {
    uVar9 = uVar13;
  }
  if (uVar9 != 0) {
    do {
      uVar10 = (ulong)(uVar18 >> 1);
      uVar9 = uVar10;
      pbVar20 = &DAT_043e7841;
      if (!bVar6) {
        uVar9 = uVar13;
        pbVar20 = DAT_043e7850;
      }
      iVar7 = isblank((uint)pbVar20[uVar9 - 1]);
      if (iVar7 == 0) break;
      FUN_024a7ca8(&DAT_043e7840);
      uVar18 = (uint)DAT_043e7840;
      bVar6 = (_DAT_043e7840 & 1) == 0;
      uVar10 = (ulong)(DAT_043e7840 >> 1);
      uVar9 = uVar10;
      if (!bVar6) {
        uVar9 = DAT_043e7848;
      }
      uVar13 = DAT_043e7848;
    } while (uVar9 != 0);
    uVar19 = uVar18 & 1;
  }
  if (uVar19 != 0) {
    uVar10 = uVar13;
  }
  pbVar20 = &DAT_043e7841;
  if (uVar19 != 0) {
    pbVar20 = DAT_043e7850;
  }
  sVar1 = CONCAT44(_DAT_043e786c,ram0x043e7868);
  if ((DAT_043e7860 & 1) == 0) {
    sVar1 = (ulong)(DAT_043e7860 >> 1);
    pbVar14 = (byte *)&DAT_043e7861;
  }
  else {
    pbVar14 = DAT_043e7870;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
    goto LAB_024c5980;
  }
  if ((long)sVar1 <= (long)uVar10) {
    bVar2 = *pbVar14;
    pbVar17 = pbVar20 + uVar10;
    pbVar11 = pbVar20;
    uVar9 = uVar10;
    do {
      if ((0xfffffffffffffffe < uVar9 - sVar1) ||
         (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar1) + 1), pbVar11 == (byte *)0x0)) break;
      iVar7 = memcmp(pbVar11,pbVar14,sVar1);
      if (iVar7 == 0) goto LAB_024c5bf8;
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)pbVar17 - (long)pbVar11;
    } while ((long)sVar1 <= (long)uVar9);
  }
LAB_024c5888:
  sVar1 = CONCAT26(_DAT_043e7886,CONCAT51(_DAT_043e7881,DAT_043e7879._7_1_));
  pbVar14 = (byte *)CONCAT17(DAT_043e7888._7_1_,
                             CONCAT16(DAT_043e7888._6_1_,
                                      CONCAT51(DAT_043e7888._1_5_,(char)DAT_043e7888)));
  if ((DAT_043e7878 & 1) == 0) {
    pbVar14 = (byte *)&DAT_043e7879;
    sVar1 = (ulong)(DAT_043e7878 >> 1);
  }
  if (sVar1 == 0) {
    uVar10 = 0;
    goto LAB_024c5a30;
  }
  if ((long)sVar1 <= (long)uVar10) {
    bVar2 = *pbVar14;
    pbVar17 = pbVar20 + uVar10;
    pbVar11 = pbVar20;
    do {
      if (0xfffffffffffffffe < uVar10 - sVar1) {
        return;
      }
      pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar10 - sVar1) + 1);
      if (pbVar11 == (byte *)0x0) {
        return;
      }
      iVar7 = memcmp(pbVar11,pbVar14,sVar1);
      if (iVar7 == 0) {
        if (pbVar11 == pbVar17) {
          return;
        }
        do {
          uVar10 = (long)pbVar11 - (long)pbVar20;
          if (uVar10 == 0xffffffffffffffff) {
            return;
          }
LAB_024c5a30:
          while( true ) {
            std::string::erase(0x43e7840,uVar10);
            bVar6 = (_DAT_043e7840 & 1) != 0;
            uVar10 = _DAT_043e7840 >> 1 & 0x7f;
            if (bVar6) {
              uVar10 = DAT_043e7848;
            }
            sVar1 = CONCAT26(_DAT_043e7886,CONCAT51(_DAT_043e7881,DAT_043e7879._7_1_));
            pbVar14 = (byte *)CONCAT17(DAT_043e7888._7_1_,
                                       CONCAT16(DAT_043e7888._6_1_,
                                                CONCAT51(DAT_043e7888._1_5_,(char)DAT_043e7888)));
            pbVar20 = DAT_043e7850;
            if (!bVar6) {
              pbVar20 = &DAT_043e7841;
            }
            if ((DAT_043e7878 & 1) == 0) {
              pbVar14 = (byte *)&DAT_043e7879;
              sVar1 = (ulong)(DAT_043e7878 >> 1);
            }
            if (sVar1 != 0) break;
            uVar10 = 0;
          }
          if ((long)uVar10 < (long)sVar1) {
            return;
          }
          bVar2 = *pbVar14;
          pbVar17 = pbVar20 + uVar10;
          pbVar11 = pbVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar10 - sVar1) {
              return;
            }
            pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar10 - sVar1) + 1);
            if (pbVar11 == (byte *)0x0) {
              return;
            }
            iVar7 = memcmp(pbVar11,pbVar14,sVar1);
            if (iVar7 == 0) break;
            pbVar11 = pbVar11 + 1;
            uVar10 = (long)pbVar17 - (long)pbVar11;
            if ((long)uVar10 < (long)sVar1) {
              return;
            }
          }
          if (pbVar11 == pbVar17) {
            return;
          }
        } while( true );
      }
      pbVar11 = pbVar11 + 1;
      uVar10 = (long)pbVar17 - (long)pbVar11;
    } while ((long)sVar1 <= (long)uVar10);
  }
  return;
LAB_024c5bf8:
  if ((pbVar11 == pbVar17) || (uVar9 = (long)pbVar11 - (long)pbVar20, uVar9 == 0xffffffffffffffff))
  goto LAB_024c5888;
LAB_024c5980:
  while( true ) {
    std::string::erase(0x43e7840,uVar9);
    bVar6 = (_DAT_043e7840 & 1) == 0;
    pbVar20 = DAT_043e7850;
    if (bVar6) {
      pbVar20 = &DAT_043e7841;
    }
    sVar1 = CONCAT44(_DAT_043e786c,ram0x043e7868);
    uVar10 = _DAT_043e7840 >> 1 & 0x7f;
    if (!bVar6) {
      uVar10 = DAT_043e7848;
    }
    if ((DAT_043e7860 & 1) == 0) {
      sVar1 = (ulong)(DAT_043e7860 >> 1);
      pbVar14 = (byte *)&DAT_043e7861;
    }
    else {
      pbVar14 = DAT_043e7870;
    }
    if (sVar1 != 0) break;
    uVar9 = 0;
  }
  if ((long)uVar10 < (long)sVar1) goto LAB_024c5888;
  bVar2 = *pbVar14;
  pbVar17 = pbVar20 + uVar10;
  pbVar11 = pbVar20;
  uVar9 = uVar10;
  while( true ) {
    if ((0xfffffffffffffffe < uVar9 - sVar1) ||
       (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar1) + 1), pbVar11 == (byte *)0x0))
    goto LAB_024c5888;
    iVar7 = memcmp(pbVar11,pbVar14,sVar1);
    if (iVar7 == 0) break;
    pbVar11 = pbVar11 + 1;
    uVar9 = (long)pbVar17 - (long)pbVar11;
    if ((long)uVar9 < (long)sVar1) goto LAB_024c5888;
  }
  goto LAB_024c5bf8;
}


