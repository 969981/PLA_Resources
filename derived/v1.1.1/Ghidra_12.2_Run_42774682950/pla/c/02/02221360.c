/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02221360; name: FUN_02221360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02221360(void)

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
  
  if (((DAT_043de9c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043de9c0), iVar3 != 0)) {
    DAT_043de990 = 0x16;
    DAT_043de9a0 = 0;
    DAT_043de991._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043de998 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043de9a8 = 0x2a;
    _DAT_043de99c = 0;
    DAT_043de9b8._7_1_ = 0;
    DAT_043de9b8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043de9b8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043de9b8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043de9b8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043de9b8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043de9b1 = s__anonymous_namespace__039071f8[8];
    DAT_043de9b1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043de9b1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043de9b1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043de9b1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043de9b6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043de9b8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043de9a9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043de9a9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043de9b8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043de990,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043de9c0);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x9f0,8);
  _DAT_043de970 = 0x9f1;
  DAT_043de978 = 0x9e0;
  DAT_043de980 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::player::PlayerControllerComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24>, const sol::base_list<> &, sol::base_list<field::CharacterControllerComponent, gfl::engine::Component>, char const (&)[7], void (field::player::PlayerControllerComponent::*)(bool), char const (&)[11], void (field::player::PlayerControllerComponent::*)(gfl::math::Vector3, float), char const (&)[16], bool (field::player::PlayerControllerComponent::*)() const, char const (&)[8], void (field::player::PlayerControllerComponent::*)(), char const (&)[19], void (field::player::PlayerControllerComponent::*)(gfl::math::Vector3), char const (&)[12], void (field::player::PlayerControllerComponent::*)(gfl::math::Vector3, float), char const (&)[10], bool (field::player::PlayerControllerComponent::*)() const, char const (&)[13], void (field::player::PlayerControllerComponent::*)(field::player::PlayerAnimationController::Stance), char const (&)[15], void (field::player::PlayerControllerComponent::*)(bool), char const (&)[11], bool (field::player::PlayerControllerComponent::*)() const, char const (&)[14], bool (field::player::PlayerControllerComponent::*)() const, char const (&)[43], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_player_controller_component_glue.cpp:27:52), char const (&)[32], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_player_controller_component_glue.cpp:28:41), char const (&)[13], bool (field::player::PlayerControllerComponent::*)() const, char const (&)[31], void (field::player::PlayerControllerComponent::*)(), char const (&)[35], void (field::player::PlayerControllerComponent::*)(), char const (&)[35], void (field::player::PlayerControllerComponent::*)(), char const (&)[32], void (field::player::PlayerControllerComponent::*)(..." /* TRUNCATED STRING LITERAL */
         ,0x9e0);
  *(undefined1 *)((long)__dest + 0x9e0) = 0;
  std::string::find('p',0x5b);
  uVar4 = std::string::find('p',0x3d);
  uVar5 = std::string::rfind('p',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043de970 & 1) == 0) {
      uVar5 = (ulong)(DAT_043de970 >> 1);
    }
    else {
      uVar5 = DAT_043de978;
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
    if ((_DAT_043de970 & 1) == 0) {
      uVar4 = (ulong)(DAT_043de970 >> 1);
    }
    else {
      uVar4 = DAT_043de978;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043de970,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043de970);
  FUN_02219928(&DAT_043de970);
  _DAT_043de970 = local_58;
  DAT_043de978 = uStack_50;
  DAT_043de980 = local_48;
  lVar6 = FUN_02219800(&DAT_043de970);
  if (lVar6 != -1) {
    std::string::erase(0x43de970,lVar6 - 2);
  }
  uVar9 = _DAT_043de970 & 0xff;
  uVar4 = (ulong)(DAT_043de970 >> 1);
  bVar11 = DAT_043de970 & 1;
  uVar5 = uVar4;
  if ((_DAT_043de970 & 1) != 0) {
    uVar5 = DAT_043de978;
  }
  uVar10 = DAT_043de978;
  if (uVar5 != 0) {
    if ((_DAT_043de970 & 1) == 0) {
      pbVar8 = &DAT_043de971;
    }
    else {
      pbVar8 = DAT_043de980;
    }
    while( true ) {
      uVar10 = DAT_043de978;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43de970,0);
      uVar9 = _DAT_043de970 & 0xff;
      uVar4 = (ulong)(DAT_043de970 >> 1);
      bVar11 = DAT_043de970 & 1;
      uVar5 = uVar4;
      if ((_DAT_043de970 & 1) != 0) {
        uVar5 = DAT_043de978;
      }
      uVar10 = DAT_043de978;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043de971;
      if ((_DAT_043de970 & 1) != 0) {
        pbVar8 = DAT_043de980;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (bVar11 != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 != 0) {
    do {
      while( true ) {
        uVar5 = uVar9 >> 1;
        pbVar8 = &DAT_043de971;
        if (!bVar2) {
          uVar5 = uVar10;
          pbVar8 = DAT_043de980;
        }
        iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
        if (iVar3 == 0) goto LAB_022215a8;
        FUN_0221981c(&DAT_043de970);
        uVar9 = _DAT_043de970 & 0xff;
        bVar2 = (_DAT_043de970 & 1) == 0;
        uVar10 = DAT_043de978;
        if ((_DAT_043de970 & 1) == 0) break;
        if (DAT_043de978 == 0) goto LAB_022215a8;
      }
    } while (DAT_043de970 >> 1 != 0);
  }
LAB_022215a8:
  uVar5 = FUN_0221985c(&DAT_043de970,&DAT_043de990);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43de970,uVar5);
      uVar5 = FUN_0221985c(&DAT_043de970,&DAT_043de990);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_0221985c(&DAT_043de970,&DAT_043de9a8);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43de970,uVar5);
      uVar5 = FUN_0221985c(&DAT_043de970,&DAT_043de9a8);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


