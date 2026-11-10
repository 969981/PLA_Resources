/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02200a20; name: FUN_02200a20
 */


/* WARNING: Removing unreachable block (ram,0x022011c0) */
/* WARNING: Removing unreachable block (ram,0x022011b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02200a20(void)

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
  
  if (((DAT_043ddfa0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ddfa0), iVar7 != 0)) {
    DAT_043ddf70 = 0x16;
    DAT_043ddf80 = (byte *)0x0;
    DAT_043ddf71._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043ddf78 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043ddf88 = 0x2a;
    _DAT_043ddf7c = 0;
    DAT_043ddf98._7_1_ = 0;
    DAT_043ddf98._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043ddf98._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043ddf98._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043ddf98._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043ddf98._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043ddf91 = s__anonymous_namespace__039071f8[8];
    DAT_043ddf91_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043ddf91_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043ddf91_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043ddf91_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043ddf96 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043ddf98._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043ddf89._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043ddf89._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043ddf98._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043ddf70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ddfa0);
  }
  plVar5 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar12 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  puVar8 = (undefined1 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  DAT_043ddf50 = 0x91;
  DAT_043ddf58 = 0x8d;
  DAT_043ddf60 = puVar8;
  memcpy(puVar8,
         "std::string sol::detail::ctti_get_type_name() [T = gfl::engine::ObjectHandle<field::buddy::FieldBuddyPokemonComponent>, seperator_mark = int]"
         ,0x8d);
  puVar8[0x8d] = 0;
  std::string::find('P',0x5b);
  uVar9 = std::string::find('P',0x3d);
  uVar10 = std::string::rfind('P',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((DAT_043ddf50 & 1) == 0) {
      uVar10 = (ulong)((byte)DAT_043ddf50 >> 1);
    }
    else {
      uVar10 = DAT_043ddf58;
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
    if ((DAT_043ddf50 & 1) == 0) {
      uVar9 = (ulong)((byte)DAT_043ddf50 >> 1);
    }
    else {
      uVar9 = DAT_043ddf58;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ddf50,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043ddf50);
  if ((DAT_043ddf50 & 1) != 0) {
    *DAT_043ddf60 = 0;
    plVar5 = DAT_043f1798;
    puVar8 = DAT_043ddf60;
    DAT_043ddf58 = 0;
    if (((DAT_043ddf50 & 1) != 0) && (DAT_043ddf60 != (undefined1 *)0x0)) {
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
          goto LAB_02200c28;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0,8);
    }
  }
LAB_02200c28:
  uVar10 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  DAT_043ddf50 = local_78;
  DAT_043ddf58 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar10;
    pbVar20 = (byte *)((long)&DAT_043ddf50 + 1);
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043ddf60 = local_68;
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
              std::string::erase(0x43ddf50,(ulong)(pbVar14 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)(byte)DAT_043ddf50;
              uVar19 = (byte)DAT_043ddf50 & 1;
              uVar10 = (ulong)((byte)DAT_043ddf50 >> 1);
            }
            goto LAB_02200cfc;
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
LAB_02200cfc:
  pbVar20 = DAT_043ddf60;
  uVar13 = DAT_043ddf58;
  bVar6 = uVar19 == 0;
  uVar9 = uVar10;
  if (!bVar6) {
    uVar9 = DAT_043ddf58;
  }
  if (uVar9 != 0) {
    pbVar14 = (byte *)((long)&DAT_043ddf50 + 1);
    if (uVar19 != 0) {
      pbVar14 = DAT_043ddf60;
    }
    iVar7 = isblank((uint)*pbVar14);
    if (iVar7 == 0) {
      uVar19 = uVar18 & 1;
      uVar10 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        pbVar11 = (byte *)((long)&DAT_043ddf50 + 1);
        if (!bVar6) {
          pbVar11 = pbVar20;
        }
        std::string::erase(0x43ddf50,(long)pbVar11 - (long)pbVar14);
        pbVar20 = DAT_043ddf60;
        uVar13 = DAT_043ddf58;
        uVar18 = (uint)(byte)DAT_043ddf50;
        bVar6 = (DAT_043ddf50 & 1) == 0;
        uVar10 = (ulong)((byte)DAT_043ddf50 >> 1);
        uVar19 = (byte)DAT_043ddf50 & 1;
        uVar9 = uVar10;
        if (!bVar6) {
          uVar9 = DAT_043ddf58;
        }
        if (uVar9 == 0) break;
        pbVar14 = (byte *)((long)&DAT_043ddf50 + 1);
        if ((DAT_043ddf50 & 1) != 0) {
          pbVar14 = DAT_043ddf60;
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
      pbVar20 = (byte *)((long)&DAT_043ddf50 + 1);
      if (!bVar6) {
        uVar9 = uVar13;
        pbVar20 = DAT_043ddf60;
      }
      iVar7 = isblank((uint)pbVar20[uVar9 - 1]);
      if (iVar7 == 0) break;
      FUN_021f4b44(&DAT_043ddf50);
      uVar18 = (uint)(byte)DAT_043ddf50;
      bVar6 = (DAT_043ddf50 & 1) == 0;
      uVar10 = (ulong)((byte)DAT_043ddf50 >> 1);
      uVar9 = uVar10;
      if (!bVar6) {
        uVar9 = DAT_043ddf58;
      }
      uVar13 = DAT_043ddf58;
    } while (uVar9 != 0);
    uVar19 = uVar18 & 1;
  }
  if (uVar19 != 0) {
    uVar10 = uVar13;
  }
  pbVar20 = (byte *)((long)&DAT_043ddf50 + 1);
  if (uVar19 != 0) {
    pbVar20 = DAT_043ddf60;
  }
  sVar1 = CONCAT44(_DAT_043ddf7c,ram0x043ddf78);
  if ((DAT_043ddf70 & 1) == 0) {
    sVar1 = (ulong)(DAT_043ddf70 >> 1);
    pbVar14 = (byte *)&DAT_043ddf71;
  }
  else {
    pbVar14 = DAT_043ddf80;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
    goto LAB_02200f4c;
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
      if (iVar7 == 0) goto LAB_022011c4;
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)pbVar17 - (long)pbVar11;
    } while ((long)sVar1 <= (long)uVar9);
  }
LAB_02200e58:
  sVar1 = CONCAT26(_DAT_043ddf96,CONCAT51(_DAT_043ddf91,DAT_043ddf89._7_1_));
  pbVar14 = (byte *)CONCAT17(DAT_043ddf98._7_1_,
                             CONCAT16(DAT_043ddf98._6_1_,
                                      CONCAT51(DAT_043ddf98._1_5_,(char)DAT_043ddf98)));
  if ((DAT_043ddf88 & 1) == 0) {
    pbVar14 = (byte *)&DAT_043ddf89;
    sVar1 = (ulong)(DAT_043ddf88 >> 1);
  }
  if (sVar1 == 0) {
    uVar10 = 0;
    goto LAB_02200ffc;
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
LAB_02200ffc:
          while( true ) {
            std::string::erase(0x43ddf50,uVar10);
            bVar6 = (DAT_043ddf50 & 1) != 0;
            uVar10 = DAT_043ddf50 >> 1 & 0x7f;
            if (bVar6) {
              uVar10 = DAT_043ddf58;
            }
            sVar1 = CONCAT26(_DAT_043ddf96,CONCAT51(_DAT_043ddf91,DAT_043ddf89._7_1_));
            pbVar14 = (byte *)CONCAT17(DAT_043ddf98._7_1_,
                                       CONCAT16(DAT_043ddf98._6_1_,
                                                CONCAT51(DAT_043ddf98._1_5_,(char)DAT_043ddf98)));
            pbVar20 = DAT_043ddf60;
            if (!bVar6) {
              pbVar20 = (byte *)((long)&DAT_043ddf50 + 1);
            }
            if ((DAT_043ddf88 & 1) == 0) {
              pbVar14 = (byte *)&DAT_043ddf89;
              sVar1 = (ulong)(DAT_043ddf88 >> 1);
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
LAB_022011c4:
  if ((pbVar11 == pbVar17) || (uVar9 = (long)pbVar11 - (long)pbVar20, uVar9 == 0xffffffffffffffff))
  goto LAB_02200e58;
LAB_02200f4c:
  while( true ) {
    std::string::erase(0x43ddf50,uVar9);
    bVar6 = (DAT_043ddf50 & 1) == 0;
    pbVar20 = DAT_043ddf60;
    if (bVar6) {
      pbVar20 = (byte *)((long)&DAT_043ddf50 + 1);
    }
    sVar1 = CONCAT44(_DAT_043ddf7c,ram0x043ddf78);
    uVar10 = DAT_043ddf50 >> 1 & 0x7f;
    if (!bVar6) {
      uVar10 = DAT_043ddf58;
    }
    if ((DAT_043ddf70 & 1) == 0) {
      sVar1 = (ulong)(DAT_043ddf70 >> 1);
      pbVar14 = (byte *)&DAT_043ddf71;
    }
    else {
      pbVar14 = DAT_043ddf80;
    }
    if (sVar1 != 0) break;
    uVar9 = 0;
  }
  if ((long)uVar10 < (long)sVar1) goto LAB_02200e58;
  bVar2 = *pbVar14;
  pbVar17 = pbVar20 + uVar10;
  pbVar11 = pbVar20;
  uVar9 = uVar10;
  while( true ) {
    if ((0xfffffffffffffffe < uVar9 - sVar1) ||
       (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar1) + 1), pbVar11 == (byte *)0x0))
    goto LAB_02200e58;
    iVar7 = memcmp(pbVar11,pbVar14,sVar1);
    if (iVar7 == 0) break;
    pbVar11 = pbVar11 + 1;
    uVar9 = (long)pbVar17 - (long)pbVar11;
    if ((long)uVar9 < (long)sVar1) goto LAB_02200e58;
  }
  goto LAB_022011c4;
}


