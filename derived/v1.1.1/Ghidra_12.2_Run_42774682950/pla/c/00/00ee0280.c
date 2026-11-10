/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ee0280; name: FUN_00ee0280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee0280(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  size_t sVar19;
  uint uVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b2880 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b2880), iVar6 != 0)) {
    DAT_043b2850 = 0x16;
    DAT_043b2860 = (byte *)0x0;
    _DAT_043b285c = 0;
    DAT_043b2851._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b2858 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b2868 = 0x2a;
    DAT_043b2878._7_1_ = 0;
    DAT_043b2878._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b2878._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b2878._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b2878._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b2878._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b2871 = s__anonymous_namespace__039071f8[8];
    DAT_043b2871_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b2871_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b2871_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b2871_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b2876 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b2878._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b2869._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b2869._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b2878._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b2850,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b2880);
  }
  plVar4 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar11 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar11 = plVar4;
  }
  puVar7 = (undefined1 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x90,8);
  _DAT_043b2830 = 0x91;
  DAT_043b2838 = 0x84;
  DAT_043b2840 = puVar7;
  memcpy(puVar7,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<common::lua::command::Global>, seperator_mark = int]"
         ,0x84);
  puVar7[0x84] = 0;
  std::string::find('0',0x5b);
  uVar8 = std::string::find('0',0x3d);
  uVar9 = std::string::rfind('0',0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043b2830 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b2830 >> 1);
    }
    else {
      uVar9 = DAT_043b2838;
    }
    uVar12 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar12 = uVar8;
    }
    uVar8 = uVar9;
  }
  else {
    uVar12 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar12 = uVar8;
    }
    if ((_DAT_043b2830 & 1) == 0) {
      uVar8 = (ulong)(DAT_043b2830 >> 1);
    }
    else {
      uVar8 = DAT_043b2838;
    }
  }
  if (uVar12 < uVar8 - 1) {
    uVar12 = uVar12 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b2830,uVar12,uVar9 - uVar12,
                      (allocator *)&DAT_043b2830);
  if ((_DAT_043b2830 & 1) != 0) {
    *DAT_043b2840 = 0;
    plVar4 = DAT_043f1798;
    puVar7 = DAT_043b2840;
    DAT_043b2838 = 0;
    if (((_DAT_043b2830 & 1) != 0) && (DAT_043b2840 != (undefined1 *)0x0)) {
      plVar11 = *(long **)(lVar14 + 0x20);
      if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
        *(long **)(lVar14 + 0x20) = DAT_043f1798;
        plVar11 = plVar4;
      }
      uVar9 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar11,puVar7,0,8);
          goto LAB_00ee0484;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,0,8);
    }
  }
LAB_00ee0484:
  uVar18 = (uint)local_78 & 0xff;
  uVar20 = (uint)local_78 & 1;
  uVar9 = local_78 >> 1 & 0x7f;
  _DAT_043b2830 = local_78;
  DAT_043b2838 = uStack_70;
  DAT_043b2840 = local_68;
  if ((local_78 & 1) == 0) {
    local_68 = &DAT_043b2831;
    uStack_70 = uVar9;
    if (uVar9 < 0xe) goto LAB_00ee0554;
  }
  else if ((long)uStack_70 < 0xe) goto LAB_00ee0554;
  pbVar13 = local_68 + uStack_70;
  lVar14 = 1;
  while (uStack_70 != 0xd) {
    uStack_70 = uStack_70 - 1;
    if (local_68[uStack_70] == 0x6b) {
      lVar15 = 0;
      do {
        if (lVar15 == -0xd) {
          if ((lVar14 != -0xd) && (pbVar13 + (~(ulong)local_68 - 0xd) != (byte *)0xffffffffffffffff)
             ) {
            std::string::erase(0x43b2830,(ulong)(pbVar13 + (~(ulong)local_68 - 0xd) + -2));
            uVar18 = (uint)DAT_043b2830;
            uVar20 = DAT_043b2830 & 1;
            uVar9 = (ulong)(DAT_043b2830 >> 1);
          }
          goto LAB_00ee0554;
        }
        lVar2 = lVar15 + -2;
        lVar3 = lVar15 + 0xc;
        lVar15 = lVar15 + -1;
      } while (pbVar13[lVar2] == "seperator_mark"[lVar3]);
    }
    pbVar13 = pbVar13 + -1;
    lVar14 = lVar14 + 1;
  }
LAB_00ee0554:
  pbVar13 = DAT_043b2840;
  uVar12 = DAT_043b2838;
  bVar5 = uVar20 == 0;
  uVar8 = uVar9;
  if (!bVar5) {
    uVar8 = DAT_043b2838;
  }
  if (uVar8 != 0) {
    pbVar16 = &DAT_043b2831;
    if (uVar20 != 0) {
      pbVar16 = DAT_043b2840;
    }
    iVar6 = isblank((uint)*pbVar16);
    if (iVar6 == 0) {
      uVar20 = uVar18 & 1;
      uVar9 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        pbVar10 = &DAT_043b2831;
        if (!bVar5) {
          pbVar10 = pbVar13;
        }
        std::string::erase(0x43b2830,(long)pbVar10 - (long)pbVar16);
        pbVar13 = DAT_043b2840;
        uVar12 = DAT_043b2838;
        uVar18 = (uint)DAT_043b2830;
        bVar5 = (_DAT_043b2830 & 1) == 0;
        uVar9 = (ulong)(DAT_043b2830 >> 1);
        uVar20 = DAT_043b2830 & 1;
        uVar8 = uVar9;
        if (!bVar5) {
          uVar8 = DAT_043b2838;
        }
        if (uVar8 == 0) break;
        pbVar16 = &DAT_043b2831;
        if ((_DAT_043b2830 & 1) != 0) {
          pbVar16 = DAT_043b2840;
        }
        iVar6 = isblank((uint)*pbVar16);
      } while (iVar6 != 0);
    }
  }
  bVar5 = uVar20 == 0;
  uVar8 = uVar9;
  if (!bVar5) {
    uVar8 = uVar12;
  }
  while (uVar8 != 0) {
    uVar9 = (ulong)(uVar18 >> 1);
    uVar8 = uVar9;
    pbVar13 = &DAT_043b2831;
    if (!bVar5) {
      uVar8 = uVar12;
      pbVar13 = DAT_043b2840;
    }
    iVar6 = isblank((uint)pbVar13[uVar8 - 1]);
    if (iVar6 == 0) {
      uVar20 = uVar18 & 1;
      break;
    }
    FUN_00ee01e0(&DAT_043b2830);
    uVar18 = (uint)DAT_043b2830;
    bVar5 = (_DAT_043b2830 & 1) == 0;
    uVar20 = DAT_043b2830 & 1;
    uVar9 = (ulong)(DAT_043b2830 >> 1);
    uVar12 = DAT_043b2838;
    uVar8 = uVar9;
    if (!bVar5) {
      uVar8 = DAT_043b2838;
    }
  }
  if (uVar20 != 0) {
    uVar9 = uVar12;
  }
  pbVar13 = &DAT_043b2831;
  if (uVar20 != 0) {
    pbVar13 = DAT_043b2840;
  }
  sVar19 = CONCAT44(_DAT_043b285c,ram0x043b2858);
  pbVar16 = DAT_043b2860;
  if ((DAT_043b2850 & 1) == 0) {
    sVar19 = (size_t)(DAT_043b2850 >> 1);
    pbVar16 = (byte *)&DAT_043b2851;
  }
  if (sVar19 == 0) {
    uVar8 = 0;
    goto LAB_00ee07c8;
  }
  if ((long)sVar19 <= (long)uVar9) {
    bVar1 = *pbVar16;
    pbVar17 = pbVar13 + uVar9;
    pbVar10 = pbVar13;
    uVar8 = uVar9;
    do {
      if ((0xfffffffffffffffe < uVar8 - sVar19) ||
         (pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar8 - sVar19) + 1), pbVar10 == (byte *)0x0))
      break;
      iVar6 = memcmp(pbVar10,pbVar16,sVar19);
      if (iVar6 == 0) goto LAB_00ee0988;
      pbVar10 = pbVar10 + 1;
      uVar8 = (long)pbVar17 - (long)pbVar10;
    } while ((long)sVar19 <= (long)uVar8);
  }
LAB_00ee0678:
  sVar19 = CONCAT26(_DAT_043b2876,CONCAT51(_DAT_043b2871,DAT_043b2869._7_1_));
  pbVar16 = (byte *)CONCAT17(DAT_043b2878._7_1_,
                             CONCAT16(DAT_043b2878._6_1_,
                                      CONCAT51(DAT_043b2878._1_5_,(char)DAT_043b2878)));
  if ((DAT_043b2868 & 1) == 0) {
    pbVar16 = (byte *)&DAT_043b2869;
    sVar19 = (ulong)(DAT_043b2868 >> 1);
  }
  if (sVar19 == 0) {
    uVar9 = 0;
    goto LAB_00ee08cc;
  }
  if ((long)sVar19 <= (long)uVar9) {
    bVar1 = *pbVar16;
    pbVar17 = pbVar13 + uVar9;
    pbVar10 = pbVar13;
    do {
      if (0xfffffffffffffffe < uVar9 - sVar19) {
        return;
      }
      pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar9 - sVar19) + 1);
      if (pbVar10 == (byte *)0x0) {
        return;
      }
      iVar6 = memcmp(pbVar10,pbVar16,sVar19);
      if (iVar6 == 0) {
        if (pbVar10 == pbVar17) {
          return;
        }
        do {
          uVar9 = (long)pbVar10 - (long)pbVar13;
          if (uVar9 == 0xffffffffffffffff) {
            return;
          }
LAB_00ee08cc:
          while( true ) {
            std::string::erase(0x43b2830,uVar9);
            bVar5 = (_DAT_043b2830 & 1) != 0;
            uVar9 = _DAT_043b2830 >> 1 & 0x7f;
            if (bVar5) {
              uVar9 = DAT_043b2838;
            }
            sVar19 = CONCAT26(_DAT_043b2876,CONCAT51(_DAT_043b2871,DAT_043b2869._7_1_));
            pbVar16 = (byte *)CONCAT17(DAT_043b2878._7_1_,
                                       CONCAT16(DAT_043b2878._6_1_,
                                                CONCAT51(DAT_043b2878._1_5_,(char)DAT_043b2878)));
            pbVar13 = DAT_043b2840;
            if (!bVar5) {
              pbVar13 = &DAT_043b2831;
            }
            if ((DAT_043b2868 & 1) == 0) {
              pbVar16 = (byte *)&DAT_043b2869;
              sVar19 = (ulong)(DAT_043b2868 >> 1);
            }
            if (sVar19 != 0) break;
            uVar9 = 0;
          }
          if ((long)uVar9 < (long)sVar19) {
            return;
          }
          bVar1 = *pbVar16;
          pbVar17 = pbVar13 + uVar9;
          pbVar10 = pbVar13;
          while( true ) {
            if (0xfffffffffffffffe < uVar9 - sVar19) {
              return;
            }
            pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar9 - sVar19) + 1);
            if (pbVar10 == (byte *)0x0) {
              return;
            }
            iVar6 = memcmp(pbVar10,pbVar16,sVar19);
            if (iVar6 == 0) break;
            pbVar10 = pbVar10 + 1;
            uVar9 = (long)pbVar17 - (long)pbVar10;
            if ((long)uVar9 < (long)sVar19) {
              return;
            }
          }
          if (pbVar10 == pbVar17) {
            return;
          }
        } while( true );
      }
      pbVar10 = pbVar10 + 1;
      uVar9 = (long)pbVar17 - (long)pbVar10;
    } while ((long)sVar19 <= (long)uVar9);
  }
  return;
LAB_00ee0988:
  if (pbVar10 == pbVar17) goto LAB_00ee0678;
  uVar8 = (long)pbVar10 - (long)pbVar13;
  while( true ) {
    if (uVar8 == 0xffffffffffffffff) goto LAB_00ee0678;
LAB_00ee07c8:
    std::string::erase(0x43b2830,uVar8);
    sVar19 = CONCAT44(_DAT_043b285c,ram0x043b2858);
    if ((_DAT_043b2830 & 1) == 0) {
      uVar9 = _DAT_043b2830 >> 1 & 0x7f;
      pbVar13 = &DAT_043b2831;
    }
    else {
      uVar9 = DAT_043b2838;
      pbVar13 = DAT_043b2840;
    }
    if ((DAT_043b2850 & 1) == 0) {
      sVar19 = (ulong)(DAT_043b2850 >> 1);
      pbVar16 = (byte *)&DAT_043b2851;
    }
    else {
      pbVar16 = DAT_043b2860;
    }
    if (sVar19 != 0) break;
    uVar8 = 0;
  }
  if ((long)uVar9 < (long)sVar19) goto LAB_00ee0678;
  bVar1 = *pbVar16;
  pbVar17 = pbVar13 + uVar9;
  pbVar10 = pbVar13;
  uVar8 = uVar9;
  while( true ) {
    if ((0xfffffffffffffffe < uVar8 - sVar19) ||
       (pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar8 - sVar19) + 1), pbVar10 == (byte *)0x0))
    goto LAB_00ee0678;
    iVar6 = memcmp(pbVar10,pbVar16,sVar19);
    if (iVar6 == 0) break;
    pbVar10 = pbVar10 + 1;
    uVar8 = (long)pbVar17 - (long)pbVar10;
    if ((long)uVar8 < (long)sVar19) goto LAB_00ee0678;
  }
  goto LAB_00ee0988;
}


