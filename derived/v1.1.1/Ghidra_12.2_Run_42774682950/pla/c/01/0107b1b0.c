/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107b1b0; name: FUN_0107b1b0
 */


/* WARNING: Removing unreachable block (ram,0x0107b8b4) */
/* WARNING: Removing unreachable block (ram,0x0107b958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0107b1b0(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b9fd0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b9fd0), iVar8 != 0)) {
    DAT_043b9fa0 = 0x16;
    DAT_043b9fb0 = (byte *)0x0;
    _DAT_043b9fac = 0;
    DAT_043b9fa1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b9fa8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b9fb8 = 0x2a;
    DAT_043b9fc8._7_1_ = 0;
    DAT_043b9fc8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b9fc8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b9fc8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b9fc8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b9fc8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b9fc1 = s__anonymous_namespace__039071f8[8];
    DAT_043b9fc1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b9fc1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b9fc1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b9fc1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b9fc6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b9fc8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b9fb9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b9fb9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b9fc8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b9fa0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b9fd0);
  }
  plVar6 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar13 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  puVar9 = (undefined1 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x220,8);
  _DAT_043b9f80 = 0x221;
  DAT_043b9f88 = 0x216;
  DAT_043b9f90 = puVar9;
  memcpy(puVar9,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<gfl::gfx2::DebugLine3D, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4>, char const (&)[9], void (*)(float, float, float, float), char const (&)[13], void (*)(float), char const (&)[5], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/lua_gfl_bind_functions.cpp:65:13), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x216);
  puVar9[0x216] = 0;
  std::string::find(-0x80,0x5b);
  uVar10 = std::string::find(-0x80,0x3d);
  uVar11 = std::string::rfind(-0x80,0x5d);
  if (uVar11 == 0xffffffffffffffff) {
    if ((_DAT_043b9f80 & 1) == 0) {
      uVar11 = (ulong)(DAT_043b9f80 >> 1);
    }
    else {
      uVar11 = DAT_043b9f88;
    }
    uVar14 = 0;
    if (uVar10 != 0xffffffffffffffff) {
      uVar14 = uVar10;
    }
    uVar10 = uVar11;
  }
  else {
    uVar14 = 0;
    if (uVar10 != 0xffffffffffffffff) {
      uVar14 = uVar10;
    }
    if ((_DAT_043b9f80 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b9f80 >> 1);
    }
    else {
      uVar10 = DAT_043b9f88;
    }
  }
  if (uVar14 < uVar10 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b9f80,uVar14,uVar11 - uVar14,
                      (allocator *)&DAT_043b9f80);
  if ((_DAT_043b9f80 & 1) != 0) {
    *DAT_043b9f90 = 0;
    plVar6 = DAT_043f1798;
    puVar9 = DAT_043b9f90;
    DAT_043b9f88 = 0;
    if (((_DAT_043b9f80 & 1) != 0) && (DAT_043b9f90 != (undefined1 *)0x0)) {
      plVar13 = *(long **)(lVar16 + 0x20);
      if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
        *(long **)(lVar16 + 0x20) = DAT_043f1798;
        plVar13 = plVar6;
      }
      uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar11 & 1) != 0) {
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar13,puVar9,0,8);
          goto LAB_0107b3c0;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar9,0,8);
    }
  }
LAB_0107b3c0:
  uVar11 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  _DAT_043b9f80 = local_78;
  DAT_043b9f88 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar11;
    pbVar20 = &DAT_043b9f81;
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043b9f90 = local_68;
  if (0xd < (long)uStack_70) {
    pbVar15 = pbVar20 + uStack_70;
    lVar16 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (pbVar20[uStack_70] == 0x6b) {
        lVar17 = 0;
        do {
          if (lVar17 == -0xd) {
            if ((lVar16 != -0xd) &&
               (pbVar15 + (~(ulong)pbVar20 - 0xd) != (byte *)0xffffffffffffffff)) {
              std::string::erase(0x43b9f80,(ulong)(pbVar15 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)DAT_043b9f80;
              uVar19 = DAT_043b9f80 & 1;
              uVar11 = (ulong)(DAT_043b9f80 >> 1);
            }
            goto LAB_0107b494;
          }
          lVar4 = lVar17 + -2;
          lVar5 = lVar17 + 0xc;
          lVar17 = lVar17 + -1;
        } while (pbVar15[lVar4] == "seperator_mark"[lVar5]);
      }
      pbVar15 = pbVar15 + -1;
      lVar16 = lVar16 + 1;
    }
  }
LAB_0107b494:
  uVar14 = DAT_043b9f88;
  uVar10 = uVar11;
  if (uVar19 != 0) {
    uVar10 = DAT_043b9f88;
  }
  if (uVar10 != 0) {
    pbVar20 = &DAT_043b9f81;
    if (uVar19 != 0) {
      pbVar20 = DAT_043b9f90;
    }
    iVar8 = isblank((uint)*pbVar20);
    if (iVar8 == 0) {
      uVar19 = uVar18 & 1;
      uVar11 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        std::string::erase(0x43b9f80,0);
        uVar14 = DAT_043b9f88;
        uVar18 = (uint)DAT_043b9f80;
        uVar11 = (ulong)(DAT_043b9f80 >> 1);
        uVar19 = DAT_043b9f80 & 1;
        uVar10 = uVar11;
        if ((_DAT_043b9f80 & 1) != 0) {
          uVar10 = DAT_043b9f88;
        }
        if (uVar10 == 0) break;
        pbVar20 = &DAT_043b9f81;
        if ((_DAT_043b9f80 & 1) != 0) {
          pbVar20 = DAT_043b9f90;
        }
        iVar8 = isblank((uint)*pbVar20);
      } while (iVar8 != 0);
    }
  }
  bVar7 = uVar19 == 0;
  uVar10 = uVar11;
  if (!bVar7) {
    uVar10 = uVar14;
  }
  if (uVar10 != 0) {
    do {
      uVar11 = (ulong)(uVar18 >> 1);
      uVar10 = uVar11;
      pbVar20 = &DAT_043b9f81;
      if (!bVar7) {
        uVar10 = uVar14;
        pbVar20 = DAT_043b9f90;
      }
      iVar8 = isblank((uint)pbVar20[uVar10 - 1]);
      if (iVar8 == 0) break;
      FUN_01050c5c(&DAT_043b9f80);
      uVar18 = (uint)DAT_043b9f80;
      bVar7 = (_DAT_043b9f80 & 1) == 0;
      uVar11 = (ulong)(DAT_043b9f80 >> 1);
      uVar10 = uVar11;
      if (!bVar7) {
        uVar10 = DAT_043b9f88;
      }
      uVar14 = DAT_043b9f88;
    } while (uVar10 != 0);
    uVar19 = uVar18 & 1;
  }
  if (uVar19 != 0) {
    uVar11 = uVar14;
  }
  pbVar20 = &DAT_043b9f81;
  if (uVar19 != 0) {
    pbVar20 = DAT_043b9f90;
  }
  sVar2 = CONCAT44(_DAT_043b9fac,ram0x043b9fa8);
  if ((DAT_043b9fa0 & 1) == 0) {
    sVar2 = (ulong)(DAT_043b9fa0 >> 1);
    pbVar15 = (byte *)&DAT_043b9fa1;
  }
  else {
    pbVar15 = DAT_043b9fb0;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
LAB_0107b6cc:
    do {
      while( true ) {
        std::string::erase(0x43b9f80,uVar10);
        sVar2 = CONCAT44(_DAT_043b9fac,ram0x043b9fa8);
        if ((_DAT_043b9f80 & 1) == 0) {
          uVar11 = _DAT_043b9f80 >> 1 & 0x7f;
          pbVar20 = &DAT_043b9f81;
        }
        else {
          uVar11 = DAT_043b9f88;
          pbVar20 = DAT_043b9f90;
        }
        if ((DAT_043b9fa0 & 1) == 0) {
          sVar2 = (ulong)(DAT_043b9fa0 >> 1);
          pbVar15 = (byte *)&DAT_043b9fa1;
        }
        else {
          pbVar15 = DAT_043b9fb0;
        }
        if (sVar2 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar11 < (long)sVar2) goto LAB_0107b5d4;
      bVar3 = *pbVar15;
      pbVar12 = pbVar20;
      uVar10 = uVar11;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar2) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
        goto LAB_0107b5d4;
        iVar8 = memcmp(pbVar12,pbVar15,sVar2);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar20 + uVar11) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar2) goto LAB_0107b5d4;
      }
      if ((pbVar12 == pbVar20 + uVar11) ||
         (uVar10 = (long)pbVar12 - (long)pbVar20, uVar10 == 0xffffffffffffffff)) goto LAB_0107b5d4;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar11) {
    bVar3 = *pbVar15;
    pbVar12 = pbVar20;
    uVar10 = uVar11;
    do {
      if ((0xfffffffffffffffe < uVar10 - sVar2) ||
         (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
      break;
      iVar8 = memcmp(pbVar12,pbVar15,sVar2);
      if (iVar8 == 0) {
        if ((pbVar12 != pbVar20 + uVar11) &&
           (uVar10 = (long)pbVar12 - (long)pbVar20, uVar10 != 0xffffffffffffffff))
        goto LAB_0107b6cc;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar20 + uVar11) - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar10);
  }
LAB_0107b5d4:
  sVar2 = CONCAT26(_DAT_043b9fc6,CONCAT51(_DAT_043b9fc1,DAT_043b9fb9._7_1_));
  pbVar15 = (byte *)CONCAT17(DAT_043b9fc8._7_1_,
                             CONCAT16(DAT_043b9fc8._6_1_,
                                      CONCAT51(DAT_043b9fc8._1_5_,(char)DAT_043b9fc8)));
  if ((DAT_043b9fb8 & 1) == 0) {
    pbVar15 = (byte *)&DAT_043b9fb9;
    sVar2 = (ulong)(DAT_043b9fb8 >> 1);
  }
  if (sVar2 == 0) {
    uVar11 = 0;
    goto LAB_0107b778;
  }
  if ((long)sVar2 <= (long)uVar11) {
    bVar3 = *pbVar15;
    pbVar1 = pbVar20 + uVar11;
    pbVar12 = pbVar20;
    do {
      if (0xfffffffffffffffe < uVar11 - sVar2) {
        return;
      }
      pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar11 - sVar2) + 1);
      if (pbVar12 == (byte *)0x0) {
        return;
      }
      iVar8 = memcmp(pbVar12,pbVar15,sVar2);
      if (iVar8 == 0) {
        if (pbVar12 == pbVar1) {
          return;
        }
        do {
          uVar11 = (long)pbVar12 - (long)pbVar20;
          if (uVar11 == 0xffffffffffffffff) {
            return;
          }
LAB_0107b778:
          while( true ) {
            std::string::erase(0x43b9f80,uVar11);
            bVar7 = (_DAT_043b9f80 & 1) != 0;
            uVar11 = _DAT_043b9f80 >> 1 & 0x7f;
            if (bVar7) {
              uVar11 = DAT_043b9f88;
            }
            sVar2 = CONCAT26(_DAT_043b9fc6,CONCAT51(_DAT_043b9fc1,DAT_043b9fb9._7_1_));
            pbVar15 = (byte *)CONCAT17(DAT_043b9fc8._7_1_,
                                       CONCAT16(DAT_043b9fc8._6_1_,
                                                CONCAT51(DAT_043b9fc8._1_5_,(char)DAT_043b9fc8)));
            pbVar20 = DAT_043b9f90;
            if (!bVar7) {
              pbVar20 = &DAT_043b9f81;
            }
            if ((DAT_043b9fb8 & 1) == 0) {
              pbVar15 = (byte *)&DAT_043b9fb9;
              sVar2 = (ulong)(DAT_043b9fb8 >> 1);
            }
            if (sVar2 != 0) break;
            uVar11 = 0;
          }
          if ((long)uVar11 < (long)sVar2) {
            return;
          }
          bVar3 = *pbVar15;
          pbVar1 = pbVar20 + uVar11;
          pbVar12 = pbVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar11 - sVar2) {
              return;
            }
            pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar11 - sVar2) + 1);
            if (pbVar12 == (byte *)0x0) {
              return;
            }
            iVar8 = memcmp(pbVar12,pbVar15,sVar2);
            if (iVar8 == 0) break;
            pbVar12 = pbVar12 + 1;
            uVar11 = (long)pbVar1 - (long)pbVar12;
            if ((long)uVar11 < (long)sVar2) {
              return;
            }
          }
          if (pbVar12 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar12 = pbVar12 + 1;
      uVar11 = (long)pbVar1 - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar11);
  }
  return;
}


