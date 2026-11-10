/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01778a80; name: FUN_01778a80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01778a80(void)

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
  
  if (((DAT_043cf7e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043cf7e8), iVar3 != 0)) {
    DAT_043cf7b8 = 0x16;
    DAT_043cf7c8 = 0;
    DAT_043cf7b9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043cf7c0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043cf7d0 = 0x2a;
    _DAT_043cf7c4 = 0;
    DAT_043cf7e0._7_1_ = 0;
    DAT_043cf7e0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043cf7e0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043cf7e0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043cf7e0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043cf7e0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043cf7d9 = s__anonymous_namespace__039071f8[8];
    DAT_043cf7d9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043cf7d9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043cf7d9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043cf7d9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043cf7de = s__anonymous_namespace__039071f8._13_2_;
    DAT_043cf7e0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043cf7d1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043cf7d1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043cf7e0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043cf7b8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cf7e8);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x1d0,8);
  _DAT_043cf798 = 0x1d1;
  DAT_043cf7a0 = 0x1cc;
  DAT_043cf7a8 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<event_script::QuestListManager, std::__1::integer_sequence<unsigned long, 0, 1, 2>, char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/event_script/source/lua/generated/quest_list_manager_glue.cpp:12:22), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x1cc);
  *(undefined1 *)((long)__dest + 0x1cc) = 0;
  std::string::find(-0x68,0x5b);
  uVar4 = std::string::find(-0x68,0x3d);
  uVar5 = std::string::rfind(-0x68,0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043cf798 & 1) == 0) {
      uVar5 = (ulong)(DAT_043cf798 >> 1);
    }
    else {
      uVar5 = DAT_043cf7a0;
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
    if ((_DAT_043cf798 & 1) == 0) {
      uVar4 = (ulong)(DAT_043cf798 >> 1);
    }
    else {
      uVar4 = DAT_043cf7a0;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043cf798,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043cf798);
  FUN_01777778(&DAT_043cf798);
  _DAT_043cf798 = local_58;
  DAT_043cf7a0 = uStack_50;
  DAT_043cf7a8 = local_48;
  lVar6 = FUN_01777654(&DAT_043cf798);
  if (lVar6 != -1) {
    std::string::erase(0x43cf798,lVar6 - 2);
  }
  uVar9 = _DAT_043cf798 & 0xff;
  uVar4 = (ulong)(DAT_043cf798 >> 1);
  bVar11 = DAT_043cf798 & 1;
  uVar5 = uVar4;
  if ((_DAT_043cf798 & 1) != 0) {
    uVar5 = DAT_043cf7a0;
  }
  uVar10 = DAT_043cf7a0;
  if (uVar5 != 0) {
    if ((_DAT_043cf798 & 1) == 0) {
      pbVar8 = &DAT_043cf799;
    }
    else {
      pbVar8 = DAT_043cf7a8;
    }
    while( true ) {
      uVar10 = DAT_043cf7a0;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43cf798,0);
      uVar9 = _DAT_043cf798 & 0xff;
      uVar4 = (ulong)(DAT_043cf798 >> 1);
      bVar11 = DAT_043cf798 & 1;
      uVar5 = uVar4;
      if ((_DAT_043cf798 & 1) != 0) {
        uVar5 = DAT_043cf7a0;
      }
      uVar10 = DAT_043cf7a0;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043cf799;
      if ((_DAT_043cf798 & 1) != 0) {
        pbVar8 = DAT_043cf7a8;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043cf799;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043cf7a8;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_01777670(&DAT_043cf798);
    uVar9 = _DAT_043cf798 & 0xff;
    bVar2 = (_DAT_043cf798 & 1) == 0;
    uVar10 = DAT_043cf7a0;
    uVar4 = _DAT_043cf798 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043cf7a0;
    }
  }
  uVar5 = FUN_017776b0(&DAT_043cf798,&DAT_043cf7b8);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43cf798,uVar5);
      uVar5 = FUN_017776b0(&DAT_043cf798,&DAT_043cf7b8);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_017776b0(&DAT_043cf798,&DAT_043cf7d0);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43cf798,uVar5);
      uVar5 = FUN_017776b0(&DAT_043cf798,&DAT_043cf7d0);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


