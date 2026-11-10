/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023bc560; name: FUN_023bc560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023bc560(void)

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
  
  if (((DAT_043e3388 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e3388), iVar3 != 0)) {
    DAT_043e3358 = 0x16;
    DAT_043e3368 = 0;
    DAT_043e3359._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e3360 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e3370 = 0x2a;
    _DAT_043e3364 = 0;
    DAT_043e3380._7_1_ = 0;
    DAT_043e3380._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e3380._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e3380._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e3380._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e3380._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e3379 = s__anonymous_namespace__039071f8[8];
    DAT_043e3379_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e3379_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e3379_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e3379_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e337e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e3380._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e3371._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e3371._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e3380._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e3358,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e3388);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x6c0,8);
  _DAT_043e3338 = 0x6c1;
  DAT_043e3340 = 0x6bd;
  DAT_043e3348 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::RideBasuraoControllerComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15>, const sol::base_list<> &, sol::base_list<field::ride::RidePokemonControllerComponent, field::CharacterControllerComponent>, char const (&)[44], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_basurao_controller_component_glue.cpp:15:53), char const (&)[13], void (field::ride::RideBasuraoControllerComponent::*)(gfl::math::Vector3, float), char const (&)[13], void (field::ride::RideBasuraoControllerComponent::*)(), char const (&)[16], void (field::ride::RideBasuraoControllerComponent::*)(), char const (&)[13], void (field::ride::RideBasuraoControllerComponent::*)(), char const (&)[18], bool (field::ride::RideBasuraoControllerComponent::*)() const, char const (&)[13], void (field::ride::RideBasuraoControllerComponent::*)(gfl::math::Vector3), char const (&)[10], void (field::ride::RideBasuraoControllerComponent::*)(gfl::math::Vector3), char const (&)[18], bool (field::ride::RideBasuraoControllerComponent::*)() const, char const (&)[25], void (field::ride::RideBasuraoControllerComponent::*)(gfl::math::Vector3), char const (&)[15], bool (field::ride::RideBasuraoControllerComponent::*)() const, char const (&)[14], void (field::ride::RideBasuraoControllerComponent::*)(gfl::math::Vector3, float), char const (&)[21], void (field::ride::RideBasuraoControllerComponent::*)(), char const (&)[22], void (field::ride::RideBasuraoControllerComponent::*)(), char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x6bd);
  *(undefined1 *)((long)__dest + 0x6bd) = 0;
  std::string::find('8',0x5b);
  uVar4 = std::string::find('8',0x3d);
  uVar5 = std::string::rfind('8',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043e3338 & 1) == 0) {
      uVar5 = (ulong)(DAT_043e3338 >> 1);
    }
    else {
      uVar5 = DAT_043e3340;
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
    if ((_DAT_043e3338 & 1) == 0) {
      uVar4 = (ulong)(DAT_043e3338 >> 1);
    }
    else {
      uVar4 = DAT_043e3340;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043e3338,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043e3338);
  FUN_023b9e68(&DAT_043e3338);
  _DAT_043e3338 = local_58;
  DAT_043e3340 = uStack_50;
  DAT_043e3348 = local_48;
  lVar6 = FUN_023b9d40(&DAT_043e3338);
  if (lVar6 != -1) {
    std::string::erase(0x43e3338,lVar6 - 2);
  }
  uVar9 = _DAT_043e3338 & 0xff;
  uVar4 = (ulong)(DAT_043e3338 >> 1);
  bVar11 = DAT_043e3338 & 1;
  uVar5 = uVar4;
  if ((_DAT_043e3338 & 1) != 0) {
    uVar5 = DAT_043e3340;
  }
  uVar10 = DAT_043e3340;
  if (uVar5 != 0) {
    if ((_DAT_043e3338 & 1) == 0) {
      pbVar8 = &DAT_043e3339;
    }
    else {
      pbVar8 = DAT_043e3348;
    }
    while( true ) {
      uVar10 = DAT_043e3340;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43e3338,0);
      uVar9 = _DAT_043e3338 & 0xff;
      uVar4 = (ulong)(DAT_043e3338 >> 1);
      bVar11 = DAT_043e3338 & 1;
      uVar5 = uVar4;
      if ((_DAT_043e3338 & 1) != 0) {
        uVar5 = DAT_043e3340;
      }
      uVar10 = DAT_043e3340;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043e3339;
      if ((_DAT_043e3338 & 1) != 0) {
        pbVar8 = DAT_043e3348;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043e3339;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043e3348;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_023b9d5c(&DAT_043e3338);
    uVar9 = _DAT_043e3338 & 0xff;
    bVar2 = (_DAT_043e3338 & 1) == 0;
    uVar10 = DAT_043e3340;
    uVar4 = _DAT_043e3338 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043e3340;
    }
  }
  uVar5 = FUN_023b9d9c(&DAT_043e3338,&DAT_043e3358);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e3338,uVar5);
      uVar5 = FUN_023b9d9c(&DAT_043e3338,&DAT_043e3358);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_023b9d9c(&DAT_043e3338,&DAT_043e3370);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e3338,uVar5);
      uVar5 = FUN_023b9d9c(&DAT_043e3338,&DAT_043e3370);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


