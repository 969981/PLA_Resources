/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023ce9f0; name: FUN_023ce9f0
 */


/* WARNING: Removing unreachable block (ram,0x023cef1c) */
/* WARNING: Removing unreachable block (ram,0x023cef2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023ce9f0(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
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
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043e39e0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e39e0), iVar7 != 0)) {
    DAT_043e39b0 = 0x16;
    DAT_043e39c0 = (byte *)0x0;
    _DAT_043e39bc = 0;
    DAT_043e39b1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e39b8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e39c8 = 0x2a;
    DAT_043e39d8._7_1_ = 0;
    DAT_043e39d8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e39d8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e39d8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e39d8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e39d8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e39d1 = s__anonymous_namespace__039071f8[8];
    DAT_043e39d1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e39d1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e39d1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e39d1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e39d6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e39d8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e39c9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e39c9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e39d8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e39b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e39e0);
  }
  plVar5 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar12 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar12 = plVar5;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x790,8);
  _DAT_043e3990 = 0x791;
  DAT_043e3998 = 0x78e;
  DAT_043e39a0 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::RideBasuraoStateContext, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13>, char const (&)[10], field::player::PlayerInputInfo field::ride::RideBasuraoStateContext::*, char const (&)[24], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_basurao_state_context_glue.cpp:18:33), char const (&)[33], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_basurao_state_context_glue.cpp:19:42), char const (&)[35], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_basurao_state_context_glue.cpp:20:44), char const (&)[29], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_basurao_state_context_glue.cpp:21:38), char const (&)[29], bool (field::ride::RideBasuraoStateContext::*)() const, char const (&)[39], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_basurao_state_context_glue.cpp:23:48), char const (&)[17], gfl::math::Vector3 (field::ride::RideBasuraoStateContext::*)() const, char const (&)[14], gfl::math::Vector3 (field::ride::RideBasuraoStateContext::*)() const, char const (&)[19], field::player::PlayerStateContext field::ride::RideBasuraoStateContext::*, char const (&)[40], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_basurao_state_context_glue.cpp:27:49), char const (&)[38], field::ride::RidePokemonComponent *(field::ride::RideBasuraoStateContext::*)() const, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x78e);
  *(undefined1 *)((long)__dest + 0x78e) = 0;
  std::string::find(-0x70,0x5b);
  uVar8 = std::string::find(-0x70,0x3d);
  uVar9 = std::string::rfind(-0x70,0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043e3990 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e3990 >> 1);
    }
    else {
      uVar9 = DAT_043e3998;
    }
    uVar16 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar16 = uVar8;
    }
    uVar8 = uVar9;
  }
  else {
    uVar16 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar16 = uVar8;
    }
    if ((_DAT_043e3990 & 1) == 0) {
      uVar8 = (ulong)(DAT_043e3990 >> 1);
    }
    else {
      uVar8 = DAT_043e3998;
    }
  }
  if (uVar16 < uVar8 - 1) {
    uVar16 = uVar16 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e3990,uVar16,uVar9 - uVar16,
                      (allocator *)&DAT_043e3990);
  FUN_023c6bac(&DAT_043e3990);
  _DAT_043e3990 = local_78;
  DAT_043e3998 = uStack_70;
  DAT_043e39a0 = local_68;
  lVar10 = FUN_023c6b50(&DAT_043e3990);
  if (lVar10 != -1) {
    std::string::erase(0x43e3990,lVar10 - 2);
  }
  uVar16 = _DAT_043e3990 & 0xff;
  uVar8 = (ulong)(DAT_043e3990 >> 1);
  uVar15 = DAT_043e3990 & 1;
  uVar9 = uVar8;
  if ((_DAT_043e3990 & 1) != 0) {
    uVar9 = DAT_043e3998;
  }
  uVar14 = DAT_043e3998;
  if (uVar9 != 0) {
    if ((_DAT_043e3990 & 1) == 0) {
      pbVar13 = &DAT_043e3991;
    }
    else {
      pbVar13 = DAT_043e39a0;
    }
    while( true ) {
      uVar14 = DAT_043e3998;
      iVar7 = isblank((uint)*pbVar13);
      if (iVar7 == 0) break;
      std::string::erase(0x43e3990,0);
      uVar16 = _DAT_043e3990 & 0xff;
      uVar8 = (ulong)(DAT_043e3990 >> 1);
      uVar15 = DAT_043e3990 & 1;
      uVar9 = uVar8;
      if ((_DAT_043e3990 & 1) != 0) {
        uVar9 = DAT_043e3998;
      }
      uVar14 = DAT_043e3998;
      if (uVar9 == 0) break;
      pbVar13 = &DAT_043e3991;
      if ((_DAT_043e3990 & 1) != 0) {
        pbVar13 = DAT_043e39a0;
      }
    }
  }
  bVar6 = uVar15 == 0;
  uVar9 = uVar8;
  if (!bVar6) {
    uVar9 = uVar14;
  }
  if (uVar9 != 0) {
    do {
      uVar15 = (uint)uVar16;
      uVar8 = (ulong)(uVar15 >> 1);
      uVar9 = uVar8;
      pbVar13 = &DAT_043e3991;
      if (!bVar6) {
        uVar9 = uVar14;
        pbVar13 = DAT_043e39a0;
      }
      iVar7 = isblank((uint)pbVar13[uVar9 - 1]);
      if (iVar7 == 0) break;
      FUN_023c6b6c(&DAT_043e3990);
      uVar16 = _DAT_043e3990 & 0xff;
      uVar15 = (uint)uVar16;
      bVar6 = (_DAT_043e3990 & 1) == 0;
      uVar8 = _DAT_043e3990 >> 1 & 0x7f;
      uVar9 = uVar8;
      if (!bVar6) {
        uVar9 = DAT_043e3998;
      }
      uVar14 = DAT_043e3998;
    } while (uVar9 != 0);
    uVar15 = uVar15 & 1;
  }
  if (uVar15 != 0) {
    uVar8 = uVar14;
  }
  pbVar13 = &DAT_043e3991;
  if (uVar15 != 0) {
    pbVar13 = DAT_043e39a0;
  }
  sVar2 = CONCAT44(_DAT_043e39bc,ram0x043e39b8);
  if ((DAT_043e39b0 & 1) == 0) {
    sVar2 = (ulong)(DAT_043e39b0 >> 1);
    pbVar3 = (byte *)&DAT_043e39b1;
  }
  else {
    pbVar3 = DAT_043e39c0;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
LAB_023ced30:
    do {
      while( true ) {
        std::string::erase(0x43e3990,uVar9);
        sVar2 = CONCAT44(_DAT_043e39bc,ram0x043e39b8);
        if ((_DAT_043e3990 & 1) == 0) {
          uVar8 = _DAT_043e3990 >> 1 & 0x7f;
          pbVar13 = &DAT_043e3991;
        }
        else {
          uVar8 = DAT_043e3998;
          pbVar13 = DAT_043e39a0;
        }
        if ((DAT_043e39b0 & 1) == 0) {
          sVar2 = (ulong)(DAT_043e39b0 >> 1);
          pbVar3 = (byte *)&DAT_043e39b1;
        }
        else {
          pbVar3 = DAT_043e39c0;
        }
        if (sVar2 != 0) break;
        uVar9 = 0;
      }
      if ((long)uVar8 < (long)sVar2) goto LAB_023ceca0;
      bVar4 = *pbVar3;
      pbVar11 = pbVar13;
      uVar9 = uVar8;
      while( true ) {
        if ((0xfffffffffffffffe < uVar9 - sVar2) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1), pbVar11 == (byte *)0x0))
        goto LAB_023ceca0;
        iVar7 = memcmp(pbVar11,pbVar3,sVar2);
        if (iVar7 == 0) break;
        pbVar11 = pbVar11 + 1;
        uVar9 = (long)(pbVar13 + uVar8) - (long)pbVar11;
        if ((long)uVar9 < (long)sVar2) goto LAB_023ceca0;
      }
      if ((pbVar11 == pbVar13 + uVar8) ||
         (uVar9 = (long)pbVar11 - (long)pbVar13, uVar9 == 0xffffffffffffffff)) goto LAB_023ceca0;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar8) {
    bVar4 = *pbVar3;
    pbVar11 = pbVar13;
    uVar9 = uVar8;
    do {
      if ((0xfffffffffffffffe < uVar9 - sVar2) ||
         (pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1), pbVar11 == (byte *)0x0)) break;
      iVar7 = memcmp(pbVar11,pbVar3,sVar2);
      if (iVar7 == 0) {
        if ((pbVar11 != pbVar13 + uVar8) &&
           (uVar9 = (long)pbVar11 - (long)pbVar13, uVar9 != 0xffffffffffffffff)) goto LAB_023ced30;
        break;
      }
      pbVar11 = pbVar11 + 1;
      uVar9 = (long)(pbVar13 + uVar8) - (long)pbVar11;
    } while ((long)sVar2 <= (long)uVar9);
  }
LAB_023ceca0:
  sVar2 = CONCAT26(_DAT_043e39d6,CONCAT51(_DAT_043e39d1,DAT_043e39c9._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043e39d8._7_1_,
                            CONCAT16(DAT_043e39d8._6_1_,
                                     CONCAT51(DAT_043e39d8._1_5_,(char)DAT_043e39d8)));
  if ((DAT_043e39c8 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043e39c9;
    sVar2 = (ulong)(DAT_043e39c8 >> 1);
  }
  if (sVar2 == 0) {
    uVar9 = 0;
    goto LAB_023ceddc;
  }
  if ((long)sVar2 <= (long)uVar8) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar13 + uVar8;
    pbVar11 = pbVar13;
    do {
      if (0xfffffffffffffffe < uVar8 - sVar2) {
        return;
      }
      pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar8 - sVar2) + 1);
      if (pbVar11 == (byte *)0x0) {
        return;
      }
      iVar7 = memcmp(pbVar11,pbVar3,sVar2);
      if (iVar7 == 0) {
        if (pbVar11 == pbVar1) {
          return;
        }
        do {
          uVar9 = (long)pbVar11 - (long)pbVar13;
          if (uVar9 == 0xffffffffffffffff) {
            return;
          }
LAB_023ceddc:
          while( true ) {
            std::string::erase(0x43e3990,uVar9);
            bVar6 = (_DAT_043e3990 & 1) != 0;
            uVar9 = _DAT_043e3990 >> 1 & 0x7f;
            if (bVar6) {
              uVar9 = DAT_043e3998;
            }
            sVar2 = CONCAT26(_DAT_043e39d6,CONCAT51(_DAT_043e39d1,DAT_043e39c9._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043e39d8._7_1_,
                                      CONCAT16(DAT_043e39d8._6_1_,
                                               CONCAT51(DAT_043e39d8._1_5_,(char)DAT_043e39d8)));
            pbVar13 = DAT_043e39a0;
            if (!bVar6) {
              pbVar13 = &DAT_043e3991;
            }
            if ((DAT_043e39c8 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043e39c9;
              sVar2 = (ulong)(DAT_043e39c8 >> 1);
            }
            if (sVar2 != 0) break;
            uVar9 = 0;
          }
          if ((long)uVar9 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar13 + uVar9;
          pbVar11 = pbVar13;
          while( true ) {
            if (0xfffffffffffffffe < uVar9 - sVar2) {
              return;
            }
            pbVar11 = memchr(pbVar11,(uint)bVar4,(uVar9 - sVar2) + 1);
            if (pbVar11 == (byte *)0x0) {
              return;
            }
            iVar7 = memcmp(pbVar11,pbVar3,sVar2);
            if (iVar7 == 0) break;
            pbVar11 = pbVar11 + 1;
            uVar9 = (long)pbVar1 - (long)pbVar11;
            if ((long)uVar9 < (long)sVar2) {
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
    } while ((long)sVar2 <= (long)uVar8);
  }
  return;
}


