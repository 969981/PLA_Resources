/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0103bf70; name: FUN_0103bf70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0103bf70(void)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong local_58;
  ulong uStack_50;
  byte *local_48;
  
  if (((DAT_043b8e50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b8e50), iVar3 != 0)) {
    DAT_043b8e20 = 0x16;
    DAT_043b8e30 = 0;
    DAT_043b8e21._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b8e28 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b8e38 = 0x2a;
    _DAT_043b8e2c = 0;
    DAT_043b8e48._7_1_ = 0;
    DAT_043b8e48._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b8e48._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b8e48._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b8e48._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b8e48._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b8e41 = s__anonymous_namespace__039071f8[8];
    DAT_043b8e41_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b8e41_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b8e41_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b8e41_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b8e46 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b8e48._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b8e39._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b8e39._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b8e48._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b8e20,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8e50);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x790,8);
  _DAT_043b8e00 = 0x791;
  DAT_043b8e08 = 0x782;
  DAT_043b8e10 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<gfl::audio::AudioComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12>, char const (&)[4], const sol::no_construction &, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:25:57)>, char const (&)[17], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:28:25), char const (&)[10], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:30:18), char const (&)[17], void (gfl::audio::AudioComponent::*)(), char const (&)[18], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:33:26), char const (&)[12], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:35:20), char const (&)[10], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:37:18), char const (&)[8], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:39:16), char const (&)[16], bool (gfl::audio::AudioComponent::*)(float), char const (&)[16], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:42:24), char const (&)[20], unsigned long (gfl::audio::AudioComponent::*)() const, char const (&)[19], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_sound_functions.cpp:45:27)>, seperator_mark = int]"
         ,0x782);
  *(undefined1 *)((long)__dest + 0x782) = 0;
  std::string::find('\0',0x5b);
  uVar4 = std::string::find('\0',0x3d);
  uVar5 = std::string::rfind('\0',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043b8e00 & 1) == 0) {
      uVar5 = (ulong)(DAT_043b8e00 >> 1);
    }
    else {
      uVar5 = DAT_043b8e08;
    }
    uVar11 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar11 = uVar4;
    }
    uVar4 = uVar5;
  }
  else {
    uVar11 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar11 = uVar4;
    }
    if ((_DAT_043b8e00 & 1) == 0) {
      uVar4 = (ulong)(DAT_043b8e00 >> 1);
    }
    else {
      uVar4 = DAT_043b8e08;
    }
  }
  if (uVar11 < uVar4 - 1) {
    uVar11 = uVar11 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043b8e00,uVar11,uVar5 - uVar11,
                      (allocator *)&DAT_043b8e00);
  FUN_0103944c(&DAT_043b8e00);
  _DAT_043b8e00 = local_58;
  DAT_043b8e08 = uStack_50;
  DAT_043b8e10 = local_48;
  lVar6 = FUN_01039324(&DAT_043b8e00);
  if (lVar6 != -1) {
    std::string::erase(0x43b8e00,lVar6 - 2);
  }
  uVar5 = _DAT_043b8e00 & 0xff;
  uVar11 = (ulong)(DAT_043b8e00 >> 1);
  bVar10 = DAT_043b8e00 & 1;
  uVar4 = uVar11;
  if ((_DAT_043b8e00 & 1) != 0) {
    uVar4 = DAT_043b8e08;
  }
  uVar9 = DAT_043b8e08;
  if (uVar4 != 0) {
    if ((_DAT_043b8e00 & 1) == 0) {
      pbVar8 = &DAT_043b8e01;
    }
    else {
      pbVar8 = DAT_043b8e10;
    }
    while( true ) {
      uVar9 = DAT_043b8e08;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43b8e00,0);
      uVar5 = _DAT_043b8e00 & 0xff;
      uVar11 = (ulong)(DAT_043b8e00 >> 1);
      bVar10 = DAT_043b8e00 & 1;
      uVar4 = uVar11;
      if ((_DAT_043b8e00 & 1) != 0) {
        uVar4 = DAT_043b8e08;
      }
      uVar9 = DAT_043b8e08;
      if (uVar4 == 0) break;
      pbVar8 = &DAT_043b8e01;
      if ((_DAT_043b8e00 & 1) != 0) {
        pbVar8 = DAT_043b8e10;
      }
    }
  }
  bVar2 = bVar10 == 0;
  uVar4 = uVar9;
  if (bVar10 == 0) {
    uVar4 = uVar11;
  }
  while (uVar4 != 0) {
    while( true ) {
      uVar5 = uVar5 >> 1;
      pbVar8 = &DAT_043b8e01;
      if (!bVar2) {
        uVar5 = uVar9;
        pbVar8 = DAT_043b8e10;
      }
      iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
      if (iVar3 == 0) goto LAB_0103c1ac;
      FUN_01039340(&DAT_043b8e00);
      uVar5 = _DAT_043b8e00 & 0xff;
      bVar2 = (_DAT_043b8e00 & 1) == 0;
      uVar9 = DAT_043b8e08;
      uVar4 = DAT_043b8e08;
      if ((_DAT_043b8e00 & 1) != 0) break;
      if (DAT_043b8e00 >> 1 == 0) goto LAB_0103c1ac;
    }
  }
LAB_0103c1ac:
  uVar5 = FUN_01039380(&DAT_043b8e00,&DAT_043b8e20);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b8e00,uVar5);
      uVar5 = FUN_01039380(&DAT_043b8e00,&DAT_043b8e20);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_01039380(&DAT_043b8e00,&DAT_043b8e38);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b8e00,uVar5);
      uVar5 = FUN_01039380(&DAT_043b8e00,&DAT_043b8e38);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


