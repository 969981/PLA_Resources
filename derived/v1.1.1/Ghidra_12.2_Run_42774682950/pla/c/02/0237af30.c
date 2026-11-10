/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0237af30; name: FUN_0237af30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0237af30(void)

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
  
  if (((DAT_043e2898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e2898), iVar3 != 0)) {
    DAT_043e2868 = 0x16;
    DAT_043e2878 = 0;
    DAT_043e2869._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e2870 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e2880 = 0x2a;
    _DAT_043e2874 = 0;
    DAT_043e2890._7_1_ = 0;
    DAT_043e2890._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e2890._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e2890._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e2890._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e2890._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e2889 = s__anonymous_namespace__039071f8[8];
    DAT_043e2889_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e2889_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e2889_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e2889_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e288e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e2890._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e2881._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e2881._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e2890._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e2868,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2898);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0xf00,8);
  _DAT_043e2848 = 0xf01;
  DAT_043e2850 = 0xef4;
  DAT_043e2858 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::player::PlayerStateContext, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27>, char const (&)[33], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/player_state_context_glue.cpp:25:42), char const (&)[38], bool (field::player::PlayerStateContext::*)() const, char const (&)[10], field::player::PlayerInputInfo field::player::PlayerStateContext::*, char const (&)[39], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/player_state_context_glue.cpp:28:48), char const (&)[29], bool (field::player::PlayerStateContext::*)() const, char const (&)[31], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/player_state_context_glue.cpp:30:40), char const (&)[31], bool (field::player::PlayerStateContext::*)() const, char const (&)[31], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/player_state_context_glue.cpp:32:40), char const (&)[45], bool (field::player::PlayerStateContext::*)() const, char const (&)[38], bool (field::player::PlayerStateContext::*)() const, char const (&)[33], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/player_state_context_glue.cpp:35:42), char const (&)[46], bool (field::player::PlayerStateContext::*)() const, char const (&)[41], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/player_state_context_glue.cpp:37:50), char const (&)[37], bool (field::player::PlayerStateContext::*)() const, char const (&)[32], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/player_state_context_glue.cpp:39:41), char const (&)[30..." /* TRUNCATED STRING LITERAL */
         ,0xef4);
  *(undefined1 *)((long)__dest + 0xef4) = 0;
  std::string::find('H',0x5b);
  uVar4 = std::string::find('H',0x3d);
  uVar5 = std::string::rfind('H',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043e2848 & 1) == 0) {
      uVar5 = (ulong)(DAT_043e2848 >> 1);
    }
    else {
      uVar5 = DAT_043e2850;
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
    if ((_DAT_043e2848 & 1) == 0) {
      uVar4 = (ulong)(DAT_043e2848 >> 1);
    }
    else {
      uVar4 = DAT_043e2850;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043e2848,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043e2848);
  FUN_02370ce4(&DAT_043e2848);
  _DAT_043e2848 = local_58;
  DAT_043e2850 = uStack_50;
  DAT_043e2858 = local_48;
  lVar6 = FUN_02370bbc(&DAT_043e2848);
  if (lVar6 != -1) {
    std::string::erase(0x43e2848,lVar6 - 2);
  }
  uVar9 = _DAT_043e2848 & 0xff;
  uVar4 = (ulong)(DAT_043e2848 >> 1);
  bVar11 = DAT_043e2848 & 1;
  uVar5 = uVar4;
  if ((_DAT_043e2848 & 1) != 0) {
    uVar5 = DAT_043e2850;
  }
  uVar10 = DAT_043e2850;
  if (uVar5 != 0) {
    if ((_DAT_043e2848 & 1) == 0) {
      pbVar8 = &DAT_043e2849;
    }
    else {
      pbVar8 = DAT_043e2858;
    }
    while( true ) {
      uVar10 = DAT_043e2850;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43e2848,0);
      uVar9 = _DAT_043e2848 & 0xff;
      uVar4 = (ulong)(DAT_043e2848 >> 1);
      bVar11 = DAT_043e2848 & 1;
      uVar5 = uVar4;
      if ((_DAT_043e2848 & 1) != 0) {
        uVar5 = DAT_043e2850;
      }
      uVar10 = DAT_043e2850;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043e2849;
      if ((_DAT_043e2848 & 1) != 0) {
        pbVar8 = DAT_043e2858;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043e2849;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043e2858;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_02370bd8(&DAT_043e2848);
    uVar9 = _DAT_043e2848 & 0xff;
    bVar2 = (_DAT_043e2848 & 1) == 0;
    uVar10 = DAT_043e2850;
    uVar4 = _DAT_043e2848 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043e2850;
    }
  }
  uVar5 = FUN_02370c18(&DAT_043e2848,&DAT_043e2868);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2848,uVar5);
      uVar5 = FUN_02370c18(&DAT_043e2848,&DAT_043e2868);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_02370c18(&DAT_043e2848,&DAT_043e2880);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2848,uVar5);
      uVar5 = FUN_02370c18(&DAT_043e2848,&DAT_043e2880);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


