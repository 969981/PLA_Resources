/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f9c510; name: FUN_00f9c510
 */


/* WARNING: Removing unreachable block (ram,0x00f9cc24) */
/* WARNING: Removing unreachable block (ram,0x00f9ccc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9c510(void)

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
  
  if (((DAT_043b6640 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b6640), iVar7 != 0)) {
    DAT_043b6610 = 0x16;
    DAT_043b6620 = (byte *)0x0;
    _DAT_043b661c = 0;
    DAT_043b6611._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b6618 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b6628 = 0x2a;
    DAT_043b6638._7_1_ = 0;
    DAT_043b6638._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b6638._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b6638._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b6638._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b6638._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b6631 = s__anonymous_namespace__039071f8[8];
    DAT_043b6631_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b6631_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b6631_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b6631_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b6636 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b6638._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b6629._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b6629._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b6638._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b6610,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b6640);
  }
  plVar5 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar12 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  puVar8 = (undefined1 *)(**(code **)(*plVar12 + 0x10))(plVar12,0xea0,8);
  DAT_043b65f0 = 0xea1;
  DAT_043b65f8 = 0xe92;
  DAT_043b6600 = puVar8;
  memcpy(puVar8,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<gfl::anm2::MultiParameterList, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22>, char const (&)[12], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:103:20), char const (&)[14], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:106:22), char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:109:21), char const (&)[16], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:112:24), char const (&)[12], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:115:20), char const (&)[14], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:116:22), char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:117:21), char const (&)[16], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:118:24), char const (&)[12], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:119:20), char const (&)[14], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:120:22), char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_anim_functions.cpp:121:21), char const (&)[16], (lambda at C:/jenkins/workspace/hayab..." /* TRUNCATED STRING LITERAL */
         ,0xe92);
  puVar8[0xe92] = 0;
  std::string::find(-0x10,0x5b);
  uVar9 = std::string::find(-0x10,0x3d);
  uVar10 = std::string::rfind(-0x10,0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((DAT_043b65f0 & 1) == 0) {
      uVar10 = (ulong)((byte)DAT_043b65f0 >> 1);
    }
    else {
      uVar10 = DAT_043b65f8;
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
    if ((DAT_043b65f0 & 1) == 0) {
      uVar9 = (ulong)((byte)DAT_043b65f0 >> 1);
    }
    else {
      uVar9 = DAT_043b65f8;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b65f0,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043b65f0);
  if ((DAT_043b65f0 & 1) != 0) {
    *DAT_043b6600 = 0;
    plVar5 = DAT_043f1798;
    puVar8 = DAT_043b6600;
    DAT_043b65f8 = 0;
    if (((DAT_043b65f0 & 1) != 0) && (DAT_043b6600 != (undefined1 *)0x0)) {
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
          goto LAB_00f9c720;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0,8);
    }
  }
LAB_00f9c720:
  uVar10 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  DAT_043b65f0 = local_78;
  DAT_043b65f8 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar10;
    pbVar20 = (byte *)((long)&DAT_043b65f0 + 1);
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043b6600 = local_68;
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
              std::string::erase(0x43b65f0,(ulong)(pbVar14 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)(byte)DAT_043b65f0;
              uVar19 = (byte)DAT_043b65f0 & 1;
              uVar10 = (ulong)((byte)DAT_043b65f0 >> 1);
            }
            goto LAB_00f9c7f4;
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
LAB_00f9c7f4:
  uVar9 = DAT_043b65f8;
  uVar13 = uVar10;
  if (uVar19 != 0) {
    uVar13 = DAT_043b65f8;
  }
  if (uVar13 != 0) {
    pbVar20 = (byte *)((long)&DAT_043b65f0 + 1);
    if (uVar19 != 0) {
      pbVar20 = DAT_043b6600;
    }
    iVar7 = isblank((uint)*pbVar20);
    if (iVar7 == 0) {
      uVar19 = uVar18 & 1;
      uVar10 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        std::string::erase(0x43b65f0,0);
        uVar9 = DAT_043b65f8;
        uVar18 = (uint)(byte)DAT_043b65f0;
        uVar10 = (ulong)((byte)DAT_043b65f0 >> 1);
        uVar19 = (byte)DAT_043b65f0 & 1;
        uVar13 = uVar10;
        if ((DAT_043b65f0 & 1) != 0) {
          uVar13 = DAT_043b65f8;
        }
        if (uVar13 == 0) break;
        pbVar20 = (byte *)((long)&DAT_043b65f0 + 1);
        if ((DAT_043b65f0 & 1) != 0) {
          pbVar20 = DAT_043b6600;
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
        pbVar20 = (byte *)((long)&DAT_043b65f0 + 1);
        if (!bVar6) {
          uVar13 = uVar9;
          pbVar20 = DAT_043b6600;
        }
        iVar7 = isblank((uint)pbVar20[uVar13 - 1]);
        if (iVar7 == 0) goto LAB_00f9c8dc;
        FUN_00f69b60(&DAT_043b65f0);
        uVar18 = (uint)(byte)DAT_043b65f0;
        bVar6 = (DAT_043b65f0 & 1) == 0;
        uVar10 = (ulong)((byte)DAT_043b65f0 >> 1);
        uVar9 = DAT_043b65f8;
        if ((DAT_043b65f0 & 1) != 0) break;
        if (uVar10 == 0) goto LAB_00f9c8dc;
      }
    } while (DAT_043b65f8 != 0);
LAB_00f9c8dc:
    uVar19 = uVar18 & 1;
  }
  if (uVar19 != 0) {
    uVar10 = uVar9;
  }
  pbVar20 = (byte *)((long)&DAT_043b65f0 + 1);
  if (uVar19 != 0) {
    pbVar20 = DAT_043b6600;
  }
  sVar1 = CONCAT44(_DAT_043b661c,ram0x043b6618);
  if ((DAT_043b6610 & 1) == 0) {
    sVar1 = (ulong)(DAT_043b6610 >> 1);
    pbVar14 = (byte *)&DAT_043b6611;
  }
  else {
    pbVar14 = DAT_043b6620;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
LAB_00f9ca54:
    do {
      while( true ) {
        std::string::erase(0x43b65f0,uVar9);
        sVar1 = CONCAT44(_DAT_043b661c,ram0x043b6618);
        if ((DAT_043b65f0 & 1) == 0) {
          uVar10 = DAT_043b65f0 >> 1 & 0x7f;
          pbVar20 = (byte *)((long)&DAT_043b65f0 + 1);
        }
        else {
          uVar10 = DAT_043b65f8;
          pbVar20 = DAT_043b6600;
        }
        if ((DAT_043b6610 & 1) == 0) {
          sVar1 = (ulong)(DAT_043b6610 >> 1);
          pbVar14 = (byte *)&DAT_043b6611;
        }
        else {
          pbVar14 = DAT_043b6620;
        }
        if (sVar1 != 0) break;
        uVar9 = 0;
      }
      if ((long)uVar10 < (long)sVar1) goto LAB_00f9c93c;
      bVar2 = *pbVar14;
      pbVar11 = pbVar20;
      uVar9 = uVar10;
      while( true ) {
        if ((0xfffffffffffffffe < uVar9 - sVar1) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar2,(uVar9 - sVar1) + 1), pbVar11 == (byte *)0x0))
        goto LAB_00f9c93c;
        iVar7 = memcmp(pbVar11,pbVar14,sVar1);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar9 = (long)(pbVar20 + uVar10) - (long)pbVar11;
        if ((long)uVar9 < (long)sVar1) goto LAB_00f9c93c;
      }
      if ((pbVar11 == pbVar20 + uVar10) ||
         (uVar9 = (long)pbVar11 - (long)pbVar20, uVar9 == 0xffffffffffffffff)) goto LAB_00f9c93c;
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
           (uVar9 = (long)pbVar11 - (long)pbVar20, uVar9 != 0xffffffffffffffff)) goto LAB_00f9ca54;
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)(pbVar20 + uVar10) - (long)pbVar11;
    } while ((long)sVar1 <= (long)uVar9);
  }
LAB_00f9c93c:
  sVar1 = CONCAT26(_DAT_043b6636,CONCAT51(_DAT_043b6631,DAT_043b6629._7_1_));
  pbVar14 = (byte *)CONCAT17(DAT_043b6638._7_1_,
                             CONCAT16(DAT_043b6638._6_1_,
                                      CONCAT51(DAT_043b6638._1_5_,(char)DAT_043b6638)));
  if ((DAT_043b6628 & 1) == 0) {
    pbVar14 = (byte *)&DAT_043b6629;
    sVar1 = (ulong)(DAT_043b6628 >> 1);
  }
  if (sVar1 == 0) {
    uVar10 = 0;
    goto LAB_00f9cb00;
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
LAB_00f9cb00:
          while( true ) {
            std::string::erase(0x43b65f0,uVar10);
            bVar6 = (DAT_043b65f0 & 1) != 0;
            uVar10 = DAT_043b65f0 >> 1 & 0x7f;
            if (bVar6) {
              uVar10 = DAT_043b65f8;
            }
            sVar1 = CONCAT26(_DAT_043b6636,CONCAT51(_DAT_043b6631,DAT_043b6629._7_1_));
            pbVar14 = (byte *)CONCAT17(DAT_043b6638._7_1_,
                                       CONCAT16(DAT_043b6638._6_1_,
                                                CONCAT51(DAT_043b6638._1_5_,(char)DAT_043b6638)));
            pbVar20 = DAT_043b6600;
            if (!bVar6) {
              pbVar20 = (byte *)((long)&DAT_043b65f0 + 1);
            }
            if ((DAT_043b6628 & 1) == 0) {
              pbVar14 = (byte *)&DAT_043b6629;
              sVar1 = (ulong)(DAT_043b6628 >> 1);
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


