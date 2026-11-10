/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02239250; name: FUN_02239250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02239250(void)

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
  
  if (((DAT_043dedb8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dedb8), iVar8 != 0)) {
    DAT_043ded88 = 0x16;
    DAT_043ded98 = (byte *)0x0;
    _DAT_043ded94 = 0;
    DAT_043ded89._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043ded90 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043deda0 = 0x2a;
    DAT_043dedb0._7_1_ = 0;
    DAT_043dedb0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043dedb0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043dedb0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043dedb0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043dedb0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043deda9 = s__anonymous_namespace__039071f8[8];
    DAT_043deda9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043deda9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043deda9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043deda9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043dedae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043dedb0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043deda1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043deda1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043dedb0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043ded88,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dedb8);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar13 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,0x90,8);
  _DAT_043ded68 = 0x91;
  DAT_043ded70 = 0x85;
  DAT_043ded78 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::content::BallWarpParam>, seperator_mark = int]"
         ,0x85);
  *(undefined1 *)((long)__dest + 0x85) = 0;
  std::string::find('h',0x5b);
  uVar9 = std::string::find('h',0x3d);
  uVar10 = std::string::rfind('h',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043ded68 & 1) == 0) {
      uVar10 = (ulong)(DAT_043ded68 >> 1);
    }
    else {
      uVar10 = DAT_043ded70;
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
    if ((_DAT_043ded68 & 1) == 0) {
      uVar9 = (ulong)(DAT_043ded68 >> 1);
    }
    else {
      uVar9 = DAT_043ded70;
    }
  }
  if (uVar14 < uVar9 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ded68,uVar14,uVar10 - uVar14,
                      (allocator *)&DAT_043ded68);
  FUN_02238ff4(&DAT_043ded68);
  _DAT_043ded68 = local_78;
  DAT_043ded70 = uStack_70;
  DAT_043ded78 = local_68;
  lVar11 = FUN_02238f98(&DAT_043ded68);
  if (lVar11 != -1) {
    std::string::erase(0x43ded68,lVar11 - 2);
  }
  bVar7 = (_DAT_043ded68 & 1) == 0;
  uVar9 = (ulong)(DAT_043ded68 >> 1);
  uVar14 = _DAT_043ded68;
  uVar5 = DAT_043ded70;
  pbVar16 = DAT_043ded78;
  uVar10 = uVar9;
  bVar4 = DAT_043ded68;
  if (!bVar7) {
    uVar10 = DAT_043ded70;
  }
  while( true ) {
    _DAT_043ded68 = uVar14;
    DAT_043ded70 = uVar5;
    DAT_043ded78 = pbVar16;
    if (uVar10 == 0) break;
    pbVar3 = &DAT_043ded69;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar16;
    }
    iVar8 = isblank((uint)*pbVar3);
    if (iVar8 == 0) break;
    pbVar12 = &DAT_043ded69;
    if (!bVar7) {
      pbVar12 = pbVar16;
    }
    std::string::erase(0x43ded68,(long)pbVar12 - (long)pbVar3);
    bVar7 = (_DAT_043ded68 & 1) == 0;
    uVar9 = (ulong)(DAT_043ded68 >> 1);
    uVar14 = _DAT_043ded68;
    uVar5 = DAT_043ded70;
    pbVar16 = DAT_043ded78;
    uVar10 = uVar9;
    bVar4 = DAT_043ded68;
    if (!bVar7) {
      uVar10 = DAT_043ded70;
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
    pbVar16 = &DAT_043ded69;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar16 = DAT_043ded78;
    }
    iVar8 = isblank((uint)pbVar16[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_02238fb4(&DAT_043ded68);
    bVar7 = (_DAT_043ded68 & 1) == 0;
    uVar9 = (ulong)(DAT_043ded68 >> 1);
    uVar14 = _DAT_043ded68;
    uVar5 = DAT_043ded70;
    uVar10 = uVar9;
    bVar4 = DAT_043ded68;
    if (!bVar7) {
      uVar10 = DAT_043ded70;
    }
  }
  bVar7 = (uVar15 & 1) != 0;
  if (bVar7) {
    uVar9 = uVar5;
  }
  pbVar16 = &DAT_043ded69;
  if (bVar7) {
    pbVar16 = DAT_043ded78;
  }
  sVar2 = CONCAT44(_DAT_043ded94,ram0x043ded90);
  if ((DAT_043ded88 & 1) == 0) {
    sVar2 = (ulong)(DAT_043ded88 >> 1);
    pbVar3 = (byte *)&DAT_043ded89;
  }
  else {
    pbVar3 = DAT_043ded98;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
LAB_02239590:
    do {
      while( true ) {
        std::string::erase(0x43ded68,uVar10);
        sVar2 = CONCAT44(_DAT_043ded94,ram0x043ded90);
        if ((_DAT_043ded68 & 1) == 0) {
          uVar9 = _DAT_043ded68 >> 1 & 0x7f;
          pbVar16 = &DAT_043ded69;
        }
        else {
          uVar9 = DAT_043ded70;
          pbVar16 = DAT_043ded78;
        }
        if ((DAT_043ded88 & 1) == 0) {
          sVar2 = (ulong)(DAT_043ded88 >> 1);
          pbVar3 = (byte *)&DAT_043ded89;
        }
        else {
          pbVar3 = DAT_043ded98;
        }
        if (sVar2 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar9 < (long)sVar2) goto LAB_022394d4;
      bVar4 = *pbVar3;
      pbVar12 = pbVar16;
      uVar10 = uVar9;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar2) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
        goto LAB_022394d4;
        iVar8 = memcmp(pbVar12,pbVar3,sVar2);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar16 + uVar9) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar2) goto LAB_022394d4;
      }
      if ((pbVar12 == pbVar16 + uVar9) ||
         (uVar10 = (long)pbVar12 - (long)pbVar16, uVar10 == 0xffffffffffffffff)) goto LAB_022394d4;
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
        goto LAB_02239590;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar16 + uVar9) - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar10);
  }
LAB_022394d4:
  sVar2 = CONCAT26(_DAT_043dedae,CONCAT51(_DAT_043deda9,DAT_043deda1._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043dedb0._7_1_,
                            CONCAT16(DAT_043dedb0._6_1_,
                                     CONCAT51(DAT_043dedb0._1_5_,(char)DAT_043dedb0)));
  if ((DAT_043deda0 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043deda1;
    sVar2 = (ulong)(DAT_043deda0 >> 1);
  }
  if (sVar2 == 0) {
    uVar10 = 0;
    goto LAB_0223963c;
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
LAB_0223963c:
          while( true ) {
            std::string::erase(0x43ded68,uVar10);
            bVar7 = (_DAT_043ded68 & 1) != 0;
            uVar10 = _DAT_043ded68 >> 1 & 0x7f;
            if (bVar7) {
              uVar10 = DAT_043ded70;
            }
            sVar2 = CONCAT26(_DAT_043dedae,CONCAT51(_DAT_043deda9,DAT_043deda1._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043dedb0._7_1_,
                                      CONCAT16(DAT_043dedb0._6_1_,
                                               CONCAT51(DAT_043dedb0._1_5_,(char)DAT_043dedb0)));
            pbVar16 = DAT_043ded78;
            if (!bVar7) {
              pbVar16 = &DAT_043ded69;
            }
            if ((DAT_043deda0 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043deda1;
              sVar2 = (ulong)(DAT_043deda0 >> 1);
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


