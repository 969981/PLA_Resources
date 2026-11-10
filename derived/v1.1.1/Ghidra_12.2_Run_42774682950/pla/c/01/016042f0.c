/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016042f0; name: FUN_016042f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016042f0(void)

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
  ulong uVar10;
  byte bVar11;
  ulong local_58;
  ulong uStack_50;
  byte *local_48;
  
  if (((DAT_043cc3b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043cc3b8), iVar3 != 0)) {
    DAT_043cc388 = 0x16;
    DAT_043cc398 = 0;
    DAT_043cc389._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043cc390 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043cc3a0 = 0x2a;
    _DAT_043cc394 = 0;
    DAT_043cc3b0._7_1_ = 0;
    DAT_043cc3b0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043cc3b0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043cc3b0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043cc3b0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043cc3b0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043cc3a9 = s__anonymous_namespace__039071f8[8];
    DAT_043cc3a9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043cc3a9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043cc3a9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043cc3a9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043cc3ae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043cc3b0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043cc3a1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043cc3a1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043cc3b0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043cc388,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cc3b8);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x4a0,8);
  _DAT_043cc368 = 0x4a1;
  DAT_043cc370 = 0x491;
  DAT_043cc378 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<event_script::RealTimeEventManager, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8>, char const (&)[4], const sol::no_construction &, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/event_script/include/lua/generated/real_time_event_manager_glue.cpp:11:31)>, char const (&)[10], bool (event_script::RealTimeEventManager::*)() const, char const (&)[20], void (event_script::RealTimeEventManager::*)(bool), char const (&)[21], void (event_script::RealTimeEventManager::*)(const gfl::FnvHash64 &, field::content::FieldCharacterComponent *), char const (&)[28], void (event_script::RealTimeEventManager::*)(const gfl::FnvHash64 &, const gfl::FnvHash64 &, const gfl::FnvHash64 &, const gfl::FnvHash64 &, const gfl::FnvHash64 &, int, const gfl::FnvHash64 &), char const (&)[17], gfl::math::Vector3 (event_script::RealTimeEventManager::*)(int), char const (&)[14], bool (event_script::RealTimeEventManager::*)() const, char const (&)[19], void (event_script::RealTimeEventManager::*)(bool)>, seperator_mark = int]"
         ,0x491);
  *(undefined1 *)((long)__dest + 0x491) = 0;
  std::string::find('h',0x5b);
  uVar4 = std::string::find('h',0x3d);
  uVar5 = std::string::rfind('h',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043cc368 & 1) == 0) {
      uVar5 = (ulong)(DAT_043cc368 >> 1);
    }
    else {
      uVar5 = DAT_043cc370;
    }
    uVar9 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar9 = uVar4;
    }
    uVar4 = uVar5;
  }
  else {
    uVar9 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar9 = uVar4;
    }
    if ((_DAT_043cc368 & 1) == 0) {
      uVar4 = (ulong)(DAT_043cc368 >> 1);
    }
    else {
      uVar4 = DAT_043cc370;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043cc368,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043cc368);
  FUN_01601904(&DAT_043cc368);
  _DAT_043cc368 = local_58;
  DAT_043cc370 = uStack_50;
  DAT_043cc378 = local_48;
  lVar6 = FUN_016017dc(&DAT_043cc368);
  if (lVar6 != -1) {
    std::string::erase(0x43cc368,lVar6 - 2);
  }
  uVar9 = _DAT_043cc368 & 0xff;
  uVar4 = (ulong)(DAT_043cc368 >> 1);
  bVar11 = DAT_043cc368 & 1;
  uVar5 = uVar4;
  if ((_DAT_043cc368 & 1) != 0) {
    uVar5 = DAT_043cc370;
  }
  uVar10 = DAT_043cc370;
  if (uVar5 != 0) {
    if ((_DAT_043cc368 & 1) == 0) {
      pbVar8 = &DAT_043cc369;
    }
    else {
      pbVar8 = DAT_043cc378;
    }
    while( true ) {
      uVar10 = DAT_043cc370;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43cc368,0);
      uVar9 = _DAT_043cc368 & 0xff;
      uVar4 = (ulong)(DAT_043cc368 >> 1);
      bVar11 = DAT_043cc368 & 1;
      uVar5 = uVar4;
      if ((_DAT_043cc368 & 1) != 0) {
        uVar5 = DAT_043cc370;
      }
      uVar10 = DAT_043cc370;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043cc369;
      if ((_DAT_043cc368 & 1) != 0) {
        pbVar8 = DAT_043cc378;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043cc369;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043cc378;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_016017f8(&DAT_043cc368);
    uVar9 = _DAT_043cc368 & 0xff;
    bVar2 = (_DAT_043cc368 & 1) == 0;
    uVar10 = DAT_043cc370;
    uVar4 = _DAT_043cc368 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043cc370;
    }
  }
  uVar5 = FUN_01601838(&DAT_043cc368,&DAT_043cc388);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43cc368,uVar5);
      uVar5 = FUN_01601838(&DAT_043cc368,&DAT_043cc388);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_01601838(&DAT_043cc368,&DAT_043cc3a0);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43cc368,uVar5);
      uVar5 = FUN_01601838(&DAT_043cc368,&DAT_043cc3a0);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


