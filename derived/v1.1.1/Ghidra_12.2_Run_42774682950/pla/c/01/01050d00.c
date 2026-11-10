/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01050d00; name: FUN_01050d00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01050d00(void)

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
  
  if (((DAT_043b90c8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b90c8), iVar7 != 0)) {
    DAT_043b9098 = 0x16;
    DAT_043b90a8 = (byte *)0x0;
    DAT_043b9099._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b90a0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b90b0 = 0x2a;
    _DAT_043b90a4 = 0;
    DAT_043b90c0._7_1_ = 0;
    DAT_043b90c0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b90c0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b90c0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b90c0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b90c0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b90b9 = s__anonymous_namespace__039071f8[8];
    DAT_043b90b9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b90b9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b90b9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b90b9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b90be = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b90c0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b90b1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b90b1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b90c0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b9098,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b90c8);
  }
  plVar5 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar12 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  puVar8 = (undefined1 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  _DAT_043b9078 = 0x91;
  DAT_043b9080 = 0x86;
  DAT_043b9088 = puVar8;
  memcpy(puVar8,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<gfl::physics::havok::RayResult>, seperator_mark = int]"
         ,0x86);
  puVar8[0x86] = 0;
  std::string::find('x',0x5b);
  uVar9 = std::string::find('x',0x3d);
  uVar10 = std::string::rfind('x',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043b9078 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b9078 >> 1);
    }
    else {
      uVar10 = DAT_043b9080;
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
    if ((_DAT_043b9078 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b9078 >> 1);
    }
    else {
      uVar9 = DAT_043b9080;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b9078,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043b9078);
  if ((_DAT_043b9078 & 1) != 0) {
    *DAT_043b9088 = 0;
    plVar5 = DAT_043f1798;
    puVar8 = DAT_043b9088;
    DAT_043b9080 = 0;
    if (((_DAT_043b9078 & 1) != 0) && (DAT_043b9088 != (undefined1 *)0x0)) {
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
          goto LAB_01050efc;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0,8);
    }
  }
LAB_01050efc:
  uVar10 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  _DAT_043b9078 = local_78;
  DAT_043b9080 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar10;
    pbVar20 = &DAT_043b9079;
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043b9088 = local_68;
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
              std::string::erase(0x43b9078,(ulong)(pbVar14 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)DAT_043b9078;
              uVar19 = DAT_043b9078 & 1;
              uVar10 = (ulong)(DAT_043b9078 >> 1);
            }
            goto LAB_01050fd0;
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
LAB_01050fd0:
  pbVar20 = DAT_043b9088;
  uVar13 = DAT_043b9080;
  bVar6 = uVar19 == 0;
  uVar9 = uVar10;
  if (!bVar6) {
    uVar9 = DAT_043b9080;
  }
  if (uVar9 != 0) {
    pbVar14 = &DAT_043b9079;
    if (uVar19 != 0) {
      pbVar14 = DAT_043b9088;
    }
    iVar7 = isblank((uint)*pbVar14);
    if (iVar7 == 0) {
      uVar19 = uVar18 & 1;
      uVar10 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        pbVar11 = &DAT_043b9079;
        if (!bVar6) {
          pbVar11 = pbVar20;
        }
        std::string::erase(0x43b9078,(long)pbVar11 - (long)pbVar14);
        pbVar20 = DAT_043b9088;
        uVar13 = DAT_043b9080;
        uVar18 = (uint)DAT_043b9078;
        bVar6 = (_DAT_043b9078 & 1) == 0;
        uVar10 = (ulong)(DAT_043b9078 >> 1);
        uVar19 = DAT_043b9078 & 1;
        uVar9 = uVar10;
        if (!bVar6) {
          uVar9 = DAT_043b9080;
        }
        if (uVar9 == 0) break;
        pbVar14 = &DAT_043b9079;
        if ((_DAT_043b9078 & 1) != 0) {
          pbVar14 = DAT_043b9088;
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
  while (uVar9 != 0) {
    uVar10 = (ulong)(uVar18 >> 1);
    uVar9 = uVar10;
    pbVar20 = &DAT_043b9079;
    if (!bVar6) {
      uVar9 = uVar13;
      pbVar20 = DAT_043b9088;
    }
    iVar7 = isblank((uint)pbVar20[uVar9 - 1]);
    if (iVar7 == 0) {
      uVar19 = uVar18 & 1;
      break;
    }
    FUN_01050c5c(&DAT_043b9078);
    uVar18 = (uint)DAT_043b9078;
    bVar6 = (_DAT_043b9078 & 1) == 0;
    uVar19 = DAT_043b9078 & 1;
    uVar10 = (ulong)(DAT_043b9078 >> 1);
    uVar13 = DAT_043b9080;
    uVar9 = uVar10;
    if (!bVar6) {
      uVar9 = DAT_043b9080;
    }
  }
  if (uVar19 != 0) {
    uVar10 = uVar13;
  }
  pbVar20 = &DAT_043b9079;
  if (uVar19 != 0) {
    pbVar20 = DAT_043b9088;
  }
  sVar1 = CONCAT44(_DAT_043b90a4,ram0x043b90a0);
  if ((DAT_043b9098 & 1) == 0) {
    sVar1 = (ulong)(DAT_043b9098 >> 1);
    pbVar14 = (byte *)&DAT_043b9099;
  }
  else {
    pbVar14 = DAT_043b90a8;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
    goto LAB_01051238;
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
      if (iVar7 == 0) goto LAB_010513f8;
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)pbVar17 - (long)pbVar11;
    } while ((long)sVar1 <= (long)uVar9);
  }
LAB_010510fc:
  sVar1 = CONCAT26(_DAT_043b90be,CONCAT51(_DAT_043b90b9,DAT_043b90b1._7_1_));
  pbVar14 = (byte *)CONCAT17(DAT_043b90c0._7_1_,
                             CONCAT16(DAT_043b90c0._6_1_,
                                      CONCAT51(DAT_043b90c0._1_5_,(char)DAT_043b90c0)));
  if ((DAT_043b90b0 & 1) == 0) {
    pbVar14 = (byte *)&DAT_043b90b1;
    sVar1 = (ulong)(DAT_043b90b0 >> 1);
  }
  if (sVar1 == 0) {
    uVar10 = 0;
    goto LAB_010512e8;
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
LAB_010512e8:
          while( true ) {
            std::string::erase(0x43b9078,uVar10);
            bVar6 = (_DAT_043b9078 & 1) != 0;
            uVar10 = _DAT_043b9078 >> 1 & 0x7f;
            if (bVar6) {
              uVar10 = DAT_043b9080;
            }
            sVar1 = CONCAT26(_DAT_043b90be,CONCAT51(_DAT_043b90b9,DAT_043b90b1._7_1_));
            pbVar14 = (byte *)CONCAT17(DAT_043b90c0._7_1_,
                                       CONCAT16(DAT_043b90c0._6_1_,
                                                CONCAT51(DAT_043b90c0._1_5_,(char)DAT_043b90c0)));
            pbVar20 = DAT_043b9088;
            if (!bVar6) {
              pbVar20 = &DAT_043b9079;
            }
            if ((DAT_043b90b0 & 1) == 0) {
              pbVar14 = (byte *)&DAT_043b90b1;
              sVar1 = (ulong)(DAT_043b90b0 >> 1);
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
LAB_010513f8:
  if ((pbVar11 == pbVar17) || (uVar9 = (long)pbVar11 - (long)pbVar20, uVar9 == 0xffffffffffffffff))
  goto LAB_010510fc;
LAB_01051238:
  while( true ) {
    std::string::erase(0x43b9078,uVar9);
    bVar6 = (_DAT_043b9078 & 1) == 0;
    pbVar20 = DAT_043b9088;
    if (bVar6) {
      pbVar20 = &DAT_043b9079;
    }
    sVar1 = CONCAT44(_DAT_043b90a4,ram0x043b90a0);
    uVar10 = _DAT_043b9078 >> 1 & 0x7f;
    if (!bVar6) {
      uVar10 = DAT_043b9080;
    }
    if ((DAT_043b9098 & 1) == 0) {
      sVar1 = (ulong)(DAT_043b9098 >> 1);
      pbVar14 = (byte *)&DAT_043b9099;
    }
    else {
      pbVar14 = DAT_043b90a8;
    }
    if (sVar1 != 0) break;
    uVar9 = 0;
  }
  if ((long)uVar10 < (long)sVar1) goto LAB_010510fc;
  bVar2 = *pbVar14;
  pbVar17 = pbVar20 + uVar10;
  pbVar11 = pbVar20;
  uVar9 = uVar10;
  while( true ) {
    if ((0xfffffffffffffffe < uVar9 - sVar1) ||
       (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar1) + 1), pbVar11 == (byte *)0x0))
    goto LAB_010510fc;
    iVar7 = memcmp(pbVar11,pbVar14,sVar1);
    if (iVar7 == 0) break;
    pbVar11 = pbVar11 + 1;
    uVar9 = (long)pbVar17 - (long)pbVar11;
    if ((long)uVar9 < (long)sVar1) goto LAB_010510fc;
  }
  goto LAB_010513f8;
}


