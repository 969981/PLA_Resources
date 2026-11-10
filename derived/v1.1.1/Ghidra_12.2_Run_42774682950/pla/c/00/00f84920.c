/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f84920; name: FUN_00f84920
 */


/* WARNING: Removing unreachable block (ram,0x00f85034) */
/* WARNING: Removing unreachable block (ram,0x00f850d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f84920(void)

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
  
  if (((DAT_043b6268 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b6268), iVar7 != 0)) {
    DAT_043b6238 = 0x16;
    DAT_043b6248 = (byte *)0x0;
    _DAT_043b6244 = 0;
    DAT_043b6239._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b6240 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b6250 = 0x2a;
    DAT_043b6260._7_1_ = 0;
    DAT_043b6260._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b6260._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b6260._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b6260._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b6260._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b6259 = s__anonymous_namespace__039071f8[8];
    DAT_043b6259_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b6259_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b6259_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b6259_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b625e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b6260._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b6251._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b6251._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b6260._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b6238,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b6268);
  }
  plVar5 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar12 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  puVar8 = (undefined1 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x3a0,8);
  _DAT_043b6218 = 0x3a1;
  DAT_043b6220 = 0x392;
  DAT_043b6228 = puVar8;
  memcpy(puVar8,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<gfl::anm2::StateComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6>, char const (&)[14], unsigned int (gfl::anm2::StateComponent::*)() const, char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:63:21), char const (&)[14], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:64:22), char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:68:21), char const (&)[11], void (gfl::anm2::StateComponent::*)(), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x392);
  puVar8[0x392] = 0;
  std::string::find('\x18',0x5b);
  uVar9 = std::string::find('\x18',0x3d);
  uVar10 = std::string::rfind('\x18',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043b6218 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b6218 >> 1);
    }
    else {
      uVar10 = DAT_043b6220;
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
    if ((_DAT_043b6218 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b6218 >> 1);
    }
    else {
      uVar9 = DAT_043b6220;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b6218,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043b6218);
  if ((_DAT_043b6218 & 1) != 0) {
    *DAT_043b6228 = 0;
    plVar5 = DAT_043f1798;
    puVar8 = DAT_043b6228;
    DAT_043b6220 = 0;
    if (((_DAT_043b6218 & 1) != 0) && (DAT_043b6228 != (undefined1 *)0x0)) {
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
          goto LAB_00f84b30;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0,8);
    }
  }
LAB_00f84b30:
  uVar10 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  _DAT_043b6218 = local_78;
  DAT_043b6220 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar10;
    pbVar20 = &DAT_043b6219;
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043b6228 = local_68;
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
              std::string::erase(0x43b6218,(ulong)(pbVar14 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)DAT_043b6218;
              uVar19 = DAT_043b6218 & 1;
              uVar10 = (ulong)(DAT_043b6218 >> 1);
            }
            goto LAB_00f84c04;
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
LAB_00f84c04:
  uVar9 = DAT_043b6220;
  uVar13 = uVar10;
  if (uVar19 != 0) {
    uVar13 = DAT_043b6220;
  }
  if (uVar13 != 0) {
    pbVar20 = &DAT_043b6219;
    if (uVar19 != 0) {
      pbVar20 = DAT_043b6228;
    }
    iVar7 = isblank((uint)*pbVar20);
    if (iVar7 == 0) {
      uVar19 = uVar18 & 1;
      uVar10 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        std::string::erase(0x43b6218,0);
        uVar9 = DAT_043b6220;
        uVar18 = (uint)DAT_043b6218;
        uVar10 = (ulong)(DAT_043b6218 >> 1);
        uVar19 = DAT_043b6218 & 1;
        uVar13 = uVar10;
        if ((_DAT_043b6218 & 1) != 0) {
          uVar13 = DAT_043b6220;
        }
        if (uVar13 == 0) break;
        pbVar20 = &DAT_043b6219;
        if ((_DAT_043b6218 & 1) != 0) {
          pbVar20 = DAT_043b6228;
        }
        iVar7 = isblank((uint)*pbVar20);
      } while (iVar7 != 0);
    }
  }
  bVar6 = uVar19 == 0;
  uVar13 = uVar9;
  if (uVar19 == 0) {
    uVar13 = uVar10;
  }
  if (uVar13 != 0) {
    do {
      while( true ) {
        uVar10 = (ulong)(uVar18 >> 1);
        uVar13 = uVar10;
        pbVar20 = &DAT_043b6219;
        if (!bVar6) {
          uVar13 = uVar9;
          pbVar20 = DAT_043b6228;
        }
        iVar7 = isblank((uint)pbVar20[uVar13 - 1]);
        if (iVar7 == 0) goto LAB_00f84cec;
        FUN_00f69b60(&DAT_043b6218);
        uVar18 = (uint)DAT_043b6218;
        bVar6 = (_DAT_043b6218 & 1) == 0;
        uVar10 = (ulong)(DAT_043b6218 >> 1);
        uVar9 = DAT_043b6220;
        if ((_DAT_043b6218 & 1) != 0) break;
        if (uVar10 == 0) goto LAB_00f84cec;
      }
    } while (DAT_043b6220 != 0);
LAB_00f84cec:
    uVar19 = uVar18 & 1;
  }
  if (uVar19 != 0) {
    uVar10 = uVar9;
  }
  pbVar20 = &DAT_043b6219;
  if (uVar19 != 0) {
    pbVar20 = DAT_043b6228;
  }
  sVar1 = CONCAT44(_DAT_043b6244,ram0x043b6240);
  if ((DAT_043b6238 & 1) == 0) {
    sVar1 = (ulong)(DAT_043b6238 >> 1);
    pbVar14 = (byte *)&DAT_043b6239;
  }
  else {
    pbVar14 = DAT_043b6248;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
LAB_00f84e64:
    do {
      while( true ) {
        std::string::erase(0x43b6218,uVar9);
        sVar1 = CONCAT44(_DAT_043b6244,ram0x043b6240);
        if ((_DAT_043b6218 & 1) == 0) {
          uVar10 = _DAT_043b6218 >> 1 & 0x7f;
          pbVar20 = &DAT_043b6219;
        }
        else {
          uVar10 = DAT_043b6220;
          pbVar20 = DAT_043b6228;
        }
        if ((DAT_043b6238 & 1) == 0) {
          sVar1 = (ulong)(DAT_043b6238 >> 1);
          pbVar14 = (byte *)&DAT_043b6239;
        }
        else {
          pbVar14 = DAT_043b6248;
        }
        if (sVar1 != 0) break;
        uVar9 = 0;
      }
      if ((long)uVar10 < (long)sVar1) goto LAB_00f84d4c;
      bVar2 = *pbVar14;
      pbVar11 = pbVar20;
      uVar9 = uVar10;
      while( true ) {
        if ((0xfffffffffffffffe < uVar9 - sVar1) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar1) + 1), pbVar11 == (byte *)0x0))
        goto LAB_00f84d4c;
        iVar7 = memcmp(pbVar11,pbVar14,sVar1);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar9 = (long)(pbVar20 + uVar10) - (long)pbVar11;
        if ((long)uVar9 < (long)sVar1) goto LAB_00f84d4c;
      }
      if ((pbVar11 == pbVar20 + uVar10) ||
         (uVar9 = (long)pbVar11 - (long)pbVar20, uVar9 == 0xffffffffffffffff)) goto LAB_00f84d4c;
    } while( true );
  }
  if ((long)sVar1 <= (long)uVar10) {
    bVar2 = *pbVar14;
    pbVar11 = pbVar20;
    uVar9 = uVar10;
    do {
      if ((0xfffffffffffffffe < uVar9 - sVar1) ||
         (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar1) + 1), pbVar11 == (byte *)0x0)) break;
      iVar7 = memcmp(pbVar11,pbVar14,sVar1);
      if (iVar7 == 0) {
        if ((pbVar11 != pbVar20 + uVar10) &&
           (uVar9 = (long)pbVar11 - (long)pbVar20, uVar9 != 0xffffffffffffffff)) goto LAB_00f84e64;
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)(pbVar20 + uVar10) - (long)pbVar11;
    } while ((long)sVar1 <= (long)uVar9);
  }
LAB_00f84d4c:
  sVar1 = CONCAT26(_DAT_043b625e,CONCAT51(_DAT_043b6259,DAT_043b6251._7_1_));
  pbVar14 = (byte *)CONCAT17(DAT_043b6260._7_1_,
                             CONCAT16(DAT_043b6260._6_1_,
                                      CONCAT51(DAT_043b6260._1_5_,(char)DAT_043b6260)));
  if ((DAT_043b6250 & 1) == 0) {
    pbVar14 = (byte *)&DAT_043b6251;
    sVar1 = (ulong)(DAT_043b6250 >> 1);
  }
  if (sVar1 == 0) {
    uVar10 = 0;
    goto LAB_00f84f10;
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
        do {
          if (pbVar11 == pbVar17) {
            return;
          }
          uVar10 = (long)pbVar11 - (long)pbVar20;
          if (uVar10 == 0xffffffffffffffff) {
            return;
          }
LAB_00f84f10:
          while( true ) {
            std::string::erase(0x43b6218,uVar10);
            bVar6 = (_DAT_043b6218 & 1) != 0;
            uVar10 = _DAT_043b6218 >> 1 & 0x7f;
            if (bVar6) {
              uVar10 = DAT_043b6220;
            }
            sVar1 = CONCAT26(_DAT_043b625e,CONCAT51(_DAT_043b6259,DAT_043b6251._7_1_));
            pbVar14 = (byte *)CONCAT17(DAT_043b6260._7_1_,
                                       CONCAT16(DAT_043b6260._6_1_,
                                                CONCAT51(DAT_043b6260._1_5_,(char)DAT_043b6260)));
            pbVar20 = DAT_043b6228;
            if (!bVar6) {
              pbVar20 = &DAT_043b6219;
            }
            if ((DAT_043b6250 & 1) == 0) {
              pbVar14 = (byte *)&DAT_043b6251;
              sVar1 = (ulong)(DAT_043b6250 >> 1);
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
        } while( true );
      }
      pbVar11 = pbVar11 + 1;
      uVar10 = (long)pbVar17 - (long)pbVar11;
    } while ((long)sVar1 <= (long)uVar10);
  }
  return;
}


