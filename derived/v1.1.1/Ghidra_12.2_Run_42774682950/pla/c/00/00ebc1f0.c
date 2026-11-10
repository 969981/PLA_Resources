/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ebc1f0; name: FUN_00ebc1f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ebc1f0(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
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
  byte *pbVar14;
  ulong uVar15;
  size_t sVar16;
  uint uVar17;
  byte *pbVar18;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b1da0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b1da0), iVar7 != 0)) {
    DAT_043b1d70 = 0x16;
    DAT_043b1d80 = (byte *)0x0;
    _DAT_043b1d7c = 0;
    DAT_043b1d71._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b1d78 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b1d88 = 0x2a;
    DAT_043b1d98._7_1_ = 0;
    DAT_043b1d98._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b1d98._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b1d98._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b1d98._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b1d98._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b1d91 = s__anonymous_namespace__039071f8[8];
    DAT_043b1d91_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b1d91_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b1d91_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b1d91_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b1d96 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b1d98._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b1d89._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b1d89._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b1d98._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b1d70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b1da0);
  }
  plVar5 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar12 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  _DAT_043b1d50 = 0x91;
  DAT_043b1d58 = 0x8b;
  DAT_043b1d60 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<common::lua::command::CommonCommand>, seperator_mark = int]"
         ,0x8b);
  *(undefined1 *)((long)__dest + 0x8b) = 0;
  std::string::find('P',0x5b);
  uVar8 = std::string::find('P',0x3d);
  uVar9 = std::string::rfind('P',0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043b1d50 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b1d50 >> 1);
    }
    else {
      uVar9 = DAT_043b1d58;
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
    if ((_DAT_043b1d50 & 1) == 0) {
      uVar8 = (ulong)(DAT_043b1d50 >> 1);
    }
    else {
      uVar8 = DAT_043b1d58;
    }
  }
  if (uVar13 < uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b1d50,uVar13,uVar9 - uVar13,
                      (allocator *)&DAT_043b1d50);
  FUN_00ebbf98(&DAT_043b1d50);
  _DAT_043b1d50 = local_78;
  DAT_043b1d58 = uStack_70;
  DAT_043b1d60 = local_68;
  lVar10 = FUN_00ebbf3c(&DAT_043b1d50);
  if (lVar10 != -1) {
    std::string::erase(0x43b1d50,lVar10 - 2);
  }
  uVar9 = (ulong)(DAT_043b1d50 >> 1);
  uVar8 = DAT_043b1d58;
  pbVar18 = DAT_043b1d60;
  uVar13 = uVar9;
  if ((_DAT_043b1d50 & 1) != 0) {
    uVar13 = DAT_043b1d58;
  }
  while( true ) {
    bVar2 = DAT_043b1d50 & 1;
    bVar4 = DAT_043b1d50 & 1;
    uVar17 = DAT_043b1d50 & 1;
    uVar15 = _DAT_043b1d50 & 0xff;
    DAT_043b1d58 = uVar8;
    DAT_043b1d60 = pbVar18;
    if (uVar13 == 0) break;
    bVar3 = DAT_043b1d50 & 1;
    pbVar1 = &DAT_043b1d51;
    if ((DAT_043b1d50 & 1) != 0) {
      pbVar1 = pbVar18;
    }
    iVar7 = isblank((uint)*pbVar1);
    if (iVar7 == 0) break;
    pbVar11 = &DAT_043b1d51;
    if (bVar3 != 0) {
      pbVar11 = pbVar18;
    }
    std::string::erase(0x43b1d50,(long)pbVar11 - (long)pbVar1);
    uVar9 = (ulong)(DAT_043b1d50 >> 1);
    uVar8 = DAT_043b1d58;
    pbVar18 = DAT_043b1d60;
    uVar13 = uVar9;
    if ((_DAT_043b1d50 & 1) != 0) {
      uVar13 = DAT_043b1d58;
    }
  }
  bVar6 = bVar4 == 0;
  uVar13 = uVar8;
  if (bVar2 == 0) {
    uVar13 = uVar9;
  }
  while( true ) {
    if (uVar13 == 0) break;
    while( true ) {
      uVar9 = (ulong)((uint)uVar15 >> 1);
      uVar13 = uVar9;
      pbVar18 = &DAT_043b1d51;
      if (!bVar6) {
        uVar13 = uVar8;
        pbVar18 = DAT_043b1d60;
      }
      iVar7 = isblank((uint)pbVar18[uVar13 - 1]);
      if (iVar7 == 0) {
        uVar17 = (uint)uVar15 & 1;
        goto LAB_00ebc420;
      }
      FUN_00ebbf58(&DAT_043b1d50);
      uVar15 = _DAT_043b1d50 & 0xff;
      bVar6 = (_DAT_043b1d50 & 1) == 0;
      uVar9 = (ulong)(DAT_043b1d50 >> 1);
      uVar17 = DAT_043b1d50 & 1;
      uVar8 = DAT_043b1d58;
      uVar13 = DAT_043b1d58;
      if ((_DAT_043b1d50 & 1) != 0) break;
      if (uVar9 == 0) goto LAB_00ebc420;
    }
  }
LAB_00ebc420:
  if (uVar17 != 0) {
    uVar9 = uVar8;
  }
  pbVar18 = &DAT_043b1d51;
  if (uVar17 != 0) {
    pbVar18 = DAT_043b1d60;
  }
  sVar16 = CONCAT44(_DAT_043b1d7c,ram0x043b1d78);
  pbVar1 = DAT_043b1d80;
  if ((DAT_043b1d70 & 1) == 0) {
    sVar16 = (size_t)(DAT_043b1d70 >> 1);
    pbVar1 = (byte *)&DAT_043b1d71;
  }
  if (sVar16 == 0) {
    uVar8 = 0;
    goto LAB_00ebc650;
  }
  if ((long)sVar16 <= (long)uVar9) {
    bVar2 = *pbVar1;
    pbVar11 = pbVar18;
    uVar8 = uVar9;
    do {
      if ((0xfffffffffffffffe < uVar8 - sVar16) ||
         (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar8 - sVar16) + 1), pbVar11 == (byte *)0x0))
      break;
      iVar7 = memcmp(pbVar11,pbVar1,sVar16);
      if (iVar7 == 0) {
        if (pbVar11 != pbVar18 + uVar9) {
          uVar8 = (long)pbVar11 - (long)pbVar18;
          goto joined_r0x00ebc724;
        }
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar8 = (long)(pbVar18 + uVar9) - (long)pbVar11;
    } while ((long)sVar16 <= (long)uVar8);
  }
  goto LAB_00ebc478;
joined_r0x00ebc724:
  if (uVar8 != 0xffffffffffffffff) {
LAB_00ebc650:
    std::string::erase(0x43b1d50,uVar8);
    bVar6 = (_DAT_043b1d50 & 1) == 0;
    pbVar18 = DAT_043b1d60;
    if (bVar6) {
      pbVar18 = &DAT_043b1d51;
    }
    sVar16 = CONCAT44(_DAT_043b1d7c,ram0x043b1d78);
    uVar9 = _DAT_043b1d50 >> 1 & 0x7f;
    if (!bVar6) {
      uVar9 = DAT_043b1d58;
    }
    if ((DAT_043b1d70 & 1) == 0) {
      sVar16 = (ulong)(DAT_043b1d70 >> 1);
      pbVar1 = (byte *)&DAT_043b1d71;
    }
    else {
      pbVar1 = DAT_043b1d80;
    }
    if (sVar16 == 0) {
      uVar8 = 0;
    }
    else {
      if ((long)uVar9 < (long)sVar16) goto LAB_00ebc478;
      bVar2 = *pbVar1;
      pbVar11 = pbVar18;
      uVar8 = uVar9;
      while( true ) {
        if ((0xfffffffffffffffe < uVar8 - sVar16) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar8 - sVar16) + 1), pbVar11 == (byte *)0x0))
        goto LAB_00ebc478;
        iVar7 = memcmp(pbVar11,pbVar1,sVar16);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar8 = (long)(pbVar18 + uVar9) - (long)pbVar11;
        if ((long)uVar8 < (long)sVar16) goto LAB_00ebc478;
      }
      if (pbVar11 == pbVar18 + uVar9) goto LAB_00ebc478;
      uVar8 = (long)pbVar11 - (long)pbVar18;
    }
    goto joined_r0x00ebc724;
  }
LAB_00ebc478:
  sVar16 = CONCAT26(_DAT_043b1d96,CONCAT51(_DAT_043b1d91,DAT_043b1d89._7_1_));
  pbVar1 = (byte *)CONCAT17(DAT_043b1d98._7_1_,
                            CONCAT16(DAT_043b1d98._6_1_,
                                     CONCAT51(DAT_043b1d98._1_5_,(char)DAT_043b1d98)));
  if ((DAT_043b1d88 & 1) == 0) {
    pbVar1 = (byte *)&DAT_043b1d89;
    sVar16 = (ulong)(DAT_043b1d88 >> 1);
  }
  if (sVar16 == 0) {
    uVar9 = 0;
    goto LAB_00ebc554;
  }
  if ((long)sVar16 <= (long)uVar9) {
    bVar2 = *pbVar1;
    pbVar14 = pbVar18 + uVar9;
    pbVar11 = pbVar18;
    do {
      if (0xfffffffffffffffe < uVar9 - sVar16) {
        return;
      }
      pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar16) + 1);
      if (pbVar11 == (byte *)0x0) {
        return;
      }
      iVar7 = memcmp(pbVar11,pbVar1,sVar16);
      if (iVar7 == 0) {
        do {
          if (pbVar11 == pbVar14) {
            return;
          }
          uVar9 = (long)pbVar11 - (long)pbVar18;
          if (uVar9 == 0xffffffffffffffff) {
            return;
          }
LAB_00ebc554:
          while( true ) {
            std::string::erase(0x43b1d50,uVar9);
            bVar6 = (_DAT_043b1d50 & 1) != 0;
            uVar9 = _DAT_043b1d50 >> 1 & 0x7f;
            if (bVar6) {
              uVar9 = DAT_043b1d58;
            }
            sVar16 = CONCAT26(_DAT_043b1d96,CONCAT51(_DAT_043b1d91,DAT_043b1d89._7_1_));
            pbVar1 = (byte *)CONCAT17(DAT_043b1d98._7_1_,
                                      CONCAT16(DAT_043b1d98._6_1_,
                                               CONCAT51(DAT_043b1d98._1_5_,(char)DAT_043b1d98)));
            pbVar18 = DAT_043b1d60;
            if (!bVar6) {
              pbVar18 = &DAT_043b1d51;
            }
            if ((DAT_043b1d88 & 1) == 0) {
              pbVar1 = (byte *)&DAT_043b1d89;
              sVar16 = (ulong)(DAT_043b1d88 >> 1);
            }
            if (sVar16 != 0) break;
            uVar9 = 0;
          }
          if ((long)uVar9 < (long)sVar16) {
            return;
          }
          bVar2 = *pbVar1;
          pbVar14 = pbVar18 + uVar9;
          pbVar11 = pbVar18;
          while( true ) {
            if (0xfffffffffffffffe < uVar9 - sVar16) {
              return;
            }
            pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar16) + 1);
            if (pbVar11 == (byte *)0x0) {
              return;
            }
            iVar7 = memcmp(pbVar11,pbVar1,sVar16);
            if (iVar7 == 0) break;
            pbVar11 = pbVar11 + 1;
            uVar9 = (long)pbVar14 - (long)pbVar11;
            if ((long)uVar9 < (long)sVar16) {
              return;
            }
          }
        } while( true );
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)pbVar14 - (long)pbVar11;
    } while ((long)sVar16 <= (long)uVar9);
  }
  return;
}


