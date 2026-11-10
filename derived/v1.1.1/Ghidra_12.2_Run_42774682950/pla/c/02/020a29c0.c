/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020a29c0; name: FUN_020a29c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020a29c0(void)

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
  
  if (((DAT_043d93d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d93d8), iVar3 != 0)) {
    DAT_043d93a8 = 0x16;
    DAT_043d93b8 = 0;
    DAT_043d93a9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d93b0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d93c0 = 0x2a;
    _DAT_043d93b4 = 0;
    DAT_043d93d0._7_1_ = 0;
    DAT_043d93d0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d93d0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d93d0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d93d0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d93d0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d93c9 = s__anonymous_namespace__039071f8[8];
    DAT_043d93c9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d93c9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d93c9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d93c9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d93ce = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d93d0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d93c1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d93c1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d93d0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d93a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d93d8);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x470,8);
  _DAT_043d9388 = 0x471;
  DAT_043d9390 = 0x460;
  DAT_043d9398 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::FieldCameraComponentBase, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7>, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_camera_component_base_glue.cpp:14:31)>, const sol::base_list<> &, sol::base_list<gfl::engine::Component>, char const (&)[18], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_camera_component_base_glue.cpp:17:27), char const (&)[13], void (field::content::FieldCameraComponentBase::*)(const gfl::math::Vector3 &), char const (&)[13], gfl::math::Vector3 (field::content::FieldCameraComponentBase::*)() const, char const (&)[20], gfl::math::Vector3 (field::content::FieldCameraComponentBase::*)() const, char const (&)[19], field::common::CameraParameter (field::content::FieldCameraComponentBase::*)() const, char const (&)[7], float (field::content::FieldCameraComponentBase::*)() const>, seperator_mark = int]"
         ,0x460);
  *(undefined1 *)((long)__dest + 0x460) = 0;
  std::string::find(-0x78,0x5b);
  uVar4 = std::string::find(-0x78,0x3d);
  uVar5 = std::string::rfind(-0x78,0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043d9388 & 1) == 0) {
      uVar5 = (ulong)(DAT_043d9388 >> 1);
    }
    else {
      uVar5 = DAT_043d9390;
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
    if ((_DAT_043d9388 & 1) == 0) {
      uVar4 = (ulong)(DAT_043d9388 >> 1);
    }
    else {
      uVar4 = DAT_043d9390;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043d9388,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043d9388);
  FUN_0209eba0(&DAT_043d9388);
  _DAT_043d9388 = local_58;
  DAT_043d9390 = uStack_50;
  DAT_043d9398 = local_48;
  lVar6 = FUN_0209ea78(&DAT_043d9388);
  if (lVar6 != -1) {
    std::string::erase(0x43d9388,lVar6 - 2);
  }
  uVar9 = _DAT_043d9388 & 0xff;
  uVar4 = (ulong)(DAT_043d9388 >> 1);
  bVar11 = DAT_043d9388 & 1;
  uVar5 = uVar4;
  if ((_DAT_043d9388 & 1) != 0) {
    uVar5 = DAT_043d9390;
  }
  uVar10 = DAT_043d9390;
  if (uVar5 != 0) {
    if ((_DAT_043d9388 & 1) == 0) {
      pbVar8 = &DAT_043d9389;
    }
    else {
      pbVar8 = DAT_043d9398;
    }
    while( true ) {
      uVar10 = DAT_043d9390;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43d9388,0);
      uVar9 = _DAT_043d9388 & 0xff;
      uVar4 = (ulong)(DAT_043d9388 >> 1);
      bVar11 = DAT_043d9388 & 1;
      uVar5 = uVar4;
      if ((_DAT_043d9388 & 1) != 0) {
        uVar5 = DAT_043d9390;
      }
      uVar10 = DAT_043d9390;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043d9389;
      if ((_DAT_043d9388 & 1) != 0) {
        pbVar8 = DAT_043d9398;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043d9389;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043d9398;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_0209ea94(&DAT_043d9388);
    uVar9 = _DAT_043d9388 & 0xff;
    bVar2 = (_DAT_043d9388 & 1) == 0;
    uVar10 = DAT_043d9390;
    uVar4 = _DAT_043d9388 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043d9390;
    }
  }
  uVar5 = FUN_0209ead4(&DAT_043d9388,&DAT_043d93a8);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d9388,uVar5);
      uVar5 = FUN_0209ead4(&DAT_043d9388,&DAT_043d93a8);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_0209ead4(&DAT_043d9388,&DAT_043d93c0);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d9388,uVar5);
      uVar5 = FUN_0209ead4(&DAT_043d9388,&DAT_043d93c0);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


