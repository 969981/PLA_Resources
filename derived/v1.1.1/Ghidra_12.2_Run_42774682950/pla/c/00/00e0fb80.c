/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e0fb80; name: FUN_00e0fb80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e0fb80(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
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
  size_t sVar15;
  byte *pbVar16;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043aeba0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043aeba0), iVar7 != 0)) {
    DAT_043aeb70 = 0x16;
    DAT_043aeb80 = (byte *)0x0;
    _DAT_043aeb7c = 0;
    DAT_043aeb71._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043aeb78 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043aeb88 = 0x2a;
    DAT_043aeb98._7_1_ = 0;
    DAT_043aeb98._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043aeb98._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043aeb98._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043aeb98._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043aeb98._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043aeb91 = s__anonymous_namespace__039071f8[8];
    DAT_043aeb91_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043aeb91_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043aeb91_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043aeb91_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043aeb96 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043aeb98._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043aeb89._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043aeb89._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043aeb98._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043aeb70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aeba0);
  }
  plVar5 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar12 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0xa0,8);
  _DAT_043aeb50 = 0xa1;
  DAT_043aeb58 = 0x91;
  DAT_043aeb60 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<common::lua::command::NsRematchDispResult>, seperator_mark = int]"
         ,0x91);
  *(undefined1 *)((long)__dest + 0x91) = 0;
  std::string::find('P',0x5b);
  uVar8 = std::string::find('P',0x3d);
  uVar9 = std::string::rfind('P',0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043aeb50 & 1) == 0) {
      uVar9 = (ulong)(DAT_043aeb50 >> 1);
    }
    else {
      uVar9 = DAT_043aeb58;
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
    if ((_DAT_043aeb50 & 1) == 0) {
      uVar8 = (ulong)(DAT_043aeb50 >> 1);
    }
    else {
      uVar8 = DAT_043aeb58;
    }
  }
  if (uVar13 < uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043aeb50,uVar13,uVar9 - uVar13,
                      (allocator *)&DAT_043aeb50);
  FUN_00e0f920(&DAT_043aeb50);
  _DAT_043aeb50 = local_78;
  DAT_043aeb58 = uStack_70;
  DAT_043aeb60 = local_68;
  lVar10 = FUN_00e0f8c4(&DAT_043aeb50);
  if (lVar10 != -1) {
    std::string::erase(0x43aeb50,lVar10 - 2);
  }
  bVar6 = (_DAT_043aeb50 & 1) == 0;
  uVar8 = (ulong)(DAT_043aeb50 >> 1);
  uVar13 = _DAT_043aeb50;
  uVar4 = DAT_043aeb58;
  pbVar16 = DAT_043aeb60;
  uVar9 = uVar8;
  bVar3 = DAT_043aeb50;
  if (!bVar6) {
    uVar9 = DAT_043aeb58;
  }
  while( true ) {
    _DAT_043aeb50 = uVar13;
    DAT_043aeb58 = uVar4;
    DAT_043aeb60 = pbVar16;
    if (uVar9 == 0) break;
    pbVar2 = &DAT_043aeb51;
    if ((bVar3 & 1) != 0) {
      pbVar2 = pbVar16;
    }
    iVar7 = isblank((uint)*pbVar2);
    if (iVar7 == 0) break;
    pbVar11 = &DAT_043aeb51;
    if (!bVar6) {
      pbVar11 = pbVar16;
    }
    std::string::erase(0x43aeb50,(long)pbVar11 - (long)pbVar2);
    bVar6 = (_DAT_043aeb50 & 1) == 0;
    uVar8 = (ulong)(DAT_043aeb50 >> 1);
    uVar13 = _DAT_043aeb50;
    uVar4 = DAT_043aeb58;
    pbVar16 = DAT_043aeb60;
    uVar9 = uVar8;
    bVar3 = DAT_043aeb50;
    if (!bVar6) {
      uVar9 = DAT_043aeb58;
    }
  }
  bVar6 = (bVar3 & 1) == 0;
  uVar9 = uVar8;
  if (!bVar6) {
    uVar9 = uVar4;
  }
  while (uVar14 = (uint)bVar3, uVar9 != 0) {
    uVar14 = (uint)uVar13;
    uVar8 = (ulong)((uVar14 & 0xff) >> 1);
    uVar9 = uVar8;
    pbVar16 = &DAT_043aeb51;
    if (!bVar6) {
      uVar9 = uVar4;
      pbVar16 = DAT_043aeb60;
    }
    iVar7 = isblank((uint)pbVar16[uVar9 - 1]);
    if (iVar7 == 0) break;
    FUN_00e0f8e0(&DAT_043aeb50);
    bVar6 = (_DAT_043aeb50 & 1) == 0;
    uVar8 = (ulong)(DAT_043aeb50 >> 1);
    uVar13 = _DAT_043aeb50;
    uVar4 = DAT_043aeb58;
    uVar9 = uVar8;
    bVar3 = DAT_043aeb50;
    if (!bVar6) {
      uVar9 = DAT_043aeb58;
    }
  }
  bVar6 = (uVar14 & 1) != 0;
  if (bVar6) {
    uVar8 = uVar4;
  }
  pbVar16 = &DAT_043aeb51;
  if (bVar6) {
    pbVar16 = DAT_043aeb60;
  }
  sVar15 = CONCAT44(_DAT_043aeb7c,ram0x043aeb78);
  pbVar2 = DAT_043aeb80;
  if ((DAT_043aeb70 & 1) == 0) {
    sVar15 = (size_t)(DAT_043aeb70 >> 1);
    pbVar2 = (byte *)&DAT_043aeb71;
  }
  if (sVar15 == 0) {
    uVar9 = 0;
    goto LAB_00e0fec8;
  }
  if ((long)sVar15 <= (long)uVar8) {
    bVar3 = *pbVar2;
    pbVar11 = pbVar16;
    uVar9 = uVar8;
    do {
      if ((0xfffffffffffffffe < uVar9 - sVar15) ||
         (pbVar11 = memchr(pbVar11,(uint)bVar3,(uVar9 - sVar15) + 1), pbVar11 == (byte *)0x0))
      break;
      iVar7 = memcmp(pbVar11,pbVar2,sVar15);
      if (iVar7 == 0) {
        if (pbVar11 != pbVar16 + uVar8) {
          uVar9 = (long)pbVar11 - (long)pbVar16;
          goto joined_r0x00e10088;
        }
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
    } while ((long)sVar15 <= (long)uVar9);
  }
  goto LAB_00e0fe00;
joined_r0x00e10088:
  if (uVar9 != 0xffffffffffffffff) {
LAB_00e0fec8:
    std::string::erase(0x43aeb50,uVar9);
    bVar6 = (_DAT_043aeb50 & 1) == 0;
    pbVar16 = DAT_043aeb60;
    if (bVar6) {
      pbVar16 = &DAT_043aeb51;
    }
    sVar15 = CONCAT44(_DAT_043aeb7c,ram0x043aeb78);
    uVar8 = _DAT_043aeb50 >> 1 & 0x7f;
    if (!bVar6) {
      uVar8 = DAT_043aeb58;
    }
    if ((DAT_043aeb70 & 1) == 0) {
      sVar15 = (ulong)(DAT_043aeb70 >> 1);
      pbVar2 = (byte *)&DAT_043aeb71;
    }
    else {
      pbVar2 = DAT_043aeb80;
    }
    if (sVar15 == 0) {
      uVar9 = 0;
    }
    else {
      if ((long)uVar8 < (long)sVar15) goto LAB_00e0fe00;
      bVar3 = *pbVar2;
      pbVar11 = pbVar16;
      uVar9 = uVar8;
      while( true ) {
        if ((0xfffffffffffffffe < uVar9 - sVar15) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar3,(uVar9 - sVar15) + 1), pbVar11 == (byte *)0x0))
        goto LAB_00e0fe00;
        iVar7 = memcmp(pbVar11,pbVar2,sVar15);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar9 = (long)(pbVar16 + uVar8) - (long)pbVar11;
        if ((long)uVar9 < (long)sVar15) goto LAB_00e0fe00;
      }
      if (pbVar11 == pbVar16 + uVar8) goto LAB_00e0fe00;
      uVar9 = (long)pbVar11 - (long)pbVar16;
    }
    goto joined_r0x00e10088;
  }
LAB_00e0fe00:
  sVar15 = CONCAT26(_DAT_043aeb96,CONCAT51(_DAT_043aeb91,DAT_043aeb89._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043aeb98._7_1_,
                            CONCAT16(DAT_043aeb98._6_1_,
                                     CONCAT51(DAT_043aeb98._1_5_,(char)DAT_043aeb98)));
  if ((DAT_043aeb88 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043aeb89;
    sVar15 = (ulong)(DAT_043aeb88 >> 1);
  }
  if (sVar15 == 0) {
    uVar9 = 0;
    goto LAB_00e0ffc0;
  }
  if ((long)sVar15 <= (long)uVar8) {
    bVar3 = *pbVar2;
    pbVar1 = pbVar16 + uVar8;
    pbVar11 = pbVar16;
    do {
      if (0xfffffffffffffffe < uVar8 - sVar15) {
        return;
      }
      pbVar11 = memchr(pbVar11,(uint)bVar3,(uVar8 - sVar15) + 1);
      if (pbVar11 == (byte *)0x0) {
        return;
      }
      iVar7 = memcmp(pbVar11,pbVar2,sVar15);
      if (iVar7 == 0) {
        if (pbVar11 == pbVar1) {
          return;
        }
        do {
          uVar9 = (long)pbVar11 - (long)pbVar16;
          if (uVar9 == 0xffffffffffffffff) {
            return;
          }
LAB_00e0ffc0:
          while( true ) {
            std::string::erase(0x43aeb50,uVar9);
            bVar6 = (_DAT_043aeb50 & 1) != 0;
            uVar9 = _DAT_043aeb50 >> 1 & 0x7f;
            if (bVar6) {
              uVar9 = DAT_043aeb58;
            }
            sVar15 = CONCAT26(_DAT_043aeb96,CONCAT51(_DAT_043aeb91,DAT_043aeb89._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043aeb98._7_1_,
                                      CONCAT16(DAT_043aeb98._6_1_,
                                               CONCAT51(DAT_043aeb98._1_5_,(char)DAT_043aeb98)));
            pbVar16 = DAT_043aeb60;
            if (!bVar6) {
              pbVar16 = &DAT_043aeb51;
            }
            if ((DAT_043aeb88 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043aeb89;
              sVar15 = (ulong)(DAT_043aeb88 >> 1);
            }
            if (sVar15 != 0) break;
            uVar9 = 0;
          }
          if ((long)uVar9 < (long)sVar15) {
            return;
          }
          bVar3 = *pbVar2;
          pbVar1 = pbVar16 + uVar9;
          pbVar11 = pbVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar9 - sVar15) {
              return;
            }
            pbVar11 = memchr(pbVar11,(uint)bVar3,(uVar9 - sVar15) + 1);
            if (pbVar11 == (byte *)0x0) {
              return;
            }
            iVar7 = memcmp(pbVar11,pbVar2,sVar15);
            if (iVar7 == 0) break;
            pbVar11 = pbVar11 + 1;
            uVar9 = (long)pbVar1 - (long)pbVar11;
            if ((long)uVar9 < (long)sVar15) {
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
    } while ((long)sVar15 <= (long)uVar8);
  }
  return;
}


