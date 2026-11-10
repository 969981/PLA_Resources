/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020afe80; name: FUN_020afe80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020afe80(void)

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
  
  if (((DAT_043d94b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d94b8), iVar3 != 0)) {
    DAT_043d9488 = 0x16;
    DAT_043d9498 = 0;
    DAT_043d9489._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d9490 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d94a0 = 0x2a;
    _DAT_043d9494 = 0;
    DAT_043d94b0._7_1_ = 0;
    DAT_043d94b0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d94b0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d94b0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d94b0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d94b0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d94a9 = s__anonymous_namespace__039071f8[8];
    DAT_043d94a9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d94a9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d94a9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d94a9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d94ae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d94b0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d94a1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d94a1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d94b0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d9488,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d94b8);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x9d0,8);
  _DAT_043d9468 = 0x9d1;
  DAT_043d9470 = 0x9c5;
  DAT_043d9478 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::FieldCameraComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23>, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_camera_component_glue.cpp:11:31)>, const sol::base_list<> &, sol::base_list<field::content::FieldCameraComponentBase, gfl::engine::Component>, char const (&)[16], void (field::content::FieldCameraComponent::*)(float, field::common::CameraInterpolationType, int, float), char const (&)[14], void (field::content::FieldCameraComponent::*)(), char const (&)[13], bool (field::content::FieldCameraComponent::*)() const, char const (&)[16], void (field::content::FieldCameraComponent::*)(const field::camera::OrbitCameraType &, float, field::common::CameraInterpolationType, float, float), char const (&)[19], void (field::content::FieldCameraComponent::*)(const field::camera::OrbitCameraType &, float, float), char const (&)[21], void (field::content::FieldCameraComponent::*)(const field::camera::OrbitCameraType &, float, field::common::CameraInterpolationType, float, float), char const (&)[11], void (field::content::FieldCameraComponent::*)(), char const (&)[13], void (field::content::FieldCameraComponent::*)(float, int), char const (&)[15], void (field::content::FieldCameraComponent::*)(float), char const (&)[23], void (field::content::FieldCameraComponent::*)(float, float), char const (&)[16], bool (field::content::FieldCameraComponent::*)() const, char const (&)[13], gfl::math::Vector3 (field::content::FieldCameraComponent::*)() const, char const (&)[26], void (field::content::FieldCameraComponent::*)(), char const (&)[10], void (field::content::FieldCameraComponent::*)(), char const (&)[9], bool (field::content::FieldCameraComponent::*)() const, char const (&)[19], bool (field::content::FieldCameraComponent::*)() const, char co..." /* TRUNCATED STRING LITERAL */
         ,0x9c5);
  *(undefined1 *)((long)__dest + 0x9c5) = 0;
  std::string::find('h',0x5b);
  uVar4 = std::string::find('h',0x3d);
  uVar5 = std::string::rfind('h',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043d9468 & 1) == 0) {
      uVar5 = (ulong)(DAT_043d9468 >> 1);
    }
    else {
      uVar5 = DAT_043d9470;
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
    if ((_DAT_043d9468 & 1) == 0) {
      uVar4 = (ulong)(DAT_043d9468 >> 1);
    }
    else {
      uVar4 = DAT_043d9470;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043d9468,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043d9468);
  FUN_020aa6fc(&DAT_043d9468);
  _DAT_043d9468 = local_58;
  DAT_043d9470 = uStack_50;
  DAT_043d9478 = local_48;
  lVar6 = FUN_020aa5d8(&DAT_043d9468);
  if (lVar6 != -1) {
    std::string::erase(0x43d9468,lVar6 - 2);
  }
  uVar9 = _DAT_043d9468 & 0xff;
  uVar4 = (ulong)(DAT_043d9468 >> 1);
  bVar11 = DAT_043d9468 & 1;
  uVar5 = uVar4;
  if ((_DAT_043d9468 & 1) != 0) {
    uVar5 = DAT_043d9470;
  }
  uVar10 = DAT_043d9470;
  if (uVar5 != 0) {
    if ((_DAT_043d9468 & 1) == 0) {
      pbVar8 = &DAT_043d9469;
    }
    else {
      pbVar8 = DAT_043d9478;
    }
    while( true ) {
      uVar10 = DAT_043d9470;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43d9468,0);
      uVar9 = _DAT_043d9468 & 0xff;
      uVar4 = (ulong)(DAT_043d9468 >> 1);
      bVar11 = DAT_043d9468 & 1;
      uVar5 = uVar4;
      if ((_DAT_043d9468 & 1) != 0) {
        uVar5 = DAT_043d9470;
      }
      uVar10 = DAT_043d9470;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043d9469;
      if ((_DAT_043d9468 & 1) != 0) {
        pbVar8 = DAT_043d9478;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043d9469;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043d9478;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_020aa5f4(&DAT_043d9468);
    uVar9 = _DAT_043d9468 & 0xff;
    bVar2 = (_DAT_043d9468 & 1) == 0;
    uVar10 = DAT_043d9470;
    uVar4 = _DAT_043d9468 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043d9470;
    }
  }
  uVar5 = FUN_020aa634(&DAT_043d9468,&DAT_043d9488);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d9468,uVar5);
      uVar5 = FUN_020aa634(&DAT_043d9468,&DAT_043d9488);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_020aa634(&DAT_043d9468,&DAT_043d94a0);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d9468,uVar5);
      uVar5 = FUN_020aa634(&DAT_043d9468,&DAT_043d94a0);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


