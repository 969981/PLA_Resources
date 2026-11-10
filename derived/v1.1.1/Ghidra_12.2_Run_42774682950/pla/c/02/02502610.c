/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02502610; name: FUN_02502610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02502610(void)

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
  
  if (((DAT_043e86f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e86f0), iVar3 != 0)) {
    DAT_043e86c0 = 0x16;
    DAT_043e86d0 = 0;
    DAT_043e86c1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e86c8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e86d8 = 0x2a;
    _DAT_043e86cc = 0;
    DAT_043e86e8._7_1_ = 0;
    DAT_043e86e8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e86e8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e86e8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e86e8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e86e8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e86e1 = s__anonymous_namespace__039071f8[8];
    DAT_043e86e1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e86e1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e86e1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e86e1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e86e6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e86e8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e86d9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e86d9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e86e8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e86c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e86f0);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x9e0,8);
  _DAT_043e86a0 = 0x9e1;
  DAT_043e86a8 = 0x9d0;
  DAT_043e86b0 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::RideWhooguruControllerComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23>, const sol::base_list<> &, sol::base_list<field::ride::RidePokemonControllerComponent, field::CharacterControllerComponent>, char const (&)[31], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_whooguru_controller_component_glue.cpp:13:40), char const (&)[8], void (field::ride::RideWhooguruControllerComponent::*)(float), char const (&)[12], void (field::ride::RideWhooguruControllerComponent::*)(const gfl::math::Vector3 &), char const (&)[20], void (field::ride::RideWhooguruControllerComponent::*)(const gfl::math::Quaternion &, float), char const (&)[15], void (field::ride::RideWhooguruControllerComponent::*)(const gfl::math::Quaternion &, float), char const (&)[16], gfl::math::Quaternion (field::ride::RideWhooguruControllerComponent::*)() const, char const (&)[15], void (field::ride::RideWhooguruControllerComponent::*)(const gfl::math::Vector3 &), char const (&)[17], void (field::ride::RideWhooguruControllerComponent::*)(), char const (&)[23], void (field::ride::RideWhooguruControllerComponent::*)(float), char const (&)[16], void (field::ride::RideWhooguruControllerComponent::*)(float), char const (&)[21], void (field::ride::RideWhooguruControllerComponent::*)(float), char const (&)[9], bool (field::ride::RideWhooguruControllerComponent::*)() const, char const (&)[11], void (field::ride::RideWhooguruControllerComponent::*)(), char const (&)[8], void (field::ride::RideWhooguruControllerComponent::*)(bool), char const (&)[9], void (field::ride::RideWhooguruControllerComponent::*)(), char const (&)[11], bool (field::ride::RideWhooguruControllerComponent::*)() const, char const (&)[20], void (field::ride::RideWhooguruControllerComponent::*)(const gfl::math::Quaternion &), char const (&)[15], bool (field::rid..." /* TRUNCATED STRING LITERAL */
         ,0x9d0);
  *(undefined1 *)((long)__dest + 0x9d0) = 0;
  std::string::find(-0x60,0x5b);
  uVar4 = std::string::find(-0x60,0x3d);
  uVar5 = std::string::rfind(-0x60,0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043e86a0 & 1) == 0) {
      uVar5 = (ulong)(DAT_043e86a0 >> 1);
    }
    else {
      uVar5 = DAT_043e86a8;
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
    if ((_DAT_043e86a0 & 1) == 0) {
      uVar4 = (ulong)(DAT_043e86a0 >> 1);
    }
    else {
      uVar4 = DAT_043e86a8;
    }
  }
  if (uVar11 < uVar4 - 1) {
    uVar11 = uVar11 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043e86a0,uVar11,uVar5 - uVar11,
                      (allocator *)&DAT_043e86a0);
  FUN_024fc564(&DAT_043e86a0);
  _DAT_043e86a0 = local_58;
  DAT_043e86a8 = uStack_50;
  DAT_043e86b0 = local_48;
  lVar6 = FUN_024fc43c(&DAT_043e86a0);
  if (lVar6 != -1) {
    std::string::erase(0x43e86a0,lVar6 - 2);
  }
  uVar5 = _DAT_043e86a0 & 0xff;
  uVar11 = (ulong)(DAT_043e86a0 >> 1);
  bVar10 = DAT_043e86a0 & 1;
  uVar4 = uVar11;
  if ((_DAT_043e86a0 & 1) != 0) {
    uVar4 = DAT_043e86a8;
  }
  uVar9 = DAT_043e86a8;
  if (uVar4 != 0) {
    if ((_DAT_043e86a0 & 1) == 0) {
      pbVar8 = &DAT_043e86a1;
    }
    else {
      pbVar8 = DAT_043e86b0;
    }
    while( true ) {
      uVar9 = DAT_043e86a8;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43e86a0,0);
      uVar5 = _DAT_043e86a0 & 0xff;
      uVar11 = (ulong)(DAT_043e86a0 >> 1);
      bVar10 = DAT_043e86a0 & 1;
      uVar4 = uVar11;
      if ((_DAT_043e86a0 & 1) != 0) {
        uVar4 = DAT_043e86a8;
      }
      uVar9 = DAT_043e86a8;
      if (uVar4 == 0) break;
      pbVar8 = &DAT_043e86a1;
      if ((_DAT_043e86a0 & 1) != 0) {
        pbVar8 = DAT_043e86b0;
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
      pbVar8 = &DAT_043e86a1;
      if (!bVar2) {
        uVar5 = uVar9;
        pbVar8 = DAT_043e86b0;
      }
      iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
      if (iVar3 == 0) goto LAB_0250284c;
      FUN_024fc458(&DAT_043e86a0);
      uVar5 = _DAT_043e86a0 & 0xff;
      bVar2 = (_DAT_043e86a0 & 1) == 0;
      uVar9 = DAT_043e86a8;
      uVar4 = DAT_043e86a8;
      if ((_DAT_043e86a0 & 1) != 0) break;
      if (DAT_043e86a0 >> 1 == 0) goto LAB_0250284c;
    }
  }
LAB_0250284c:
  uVar5 = FUN_024fc498(&DAT_043e86a0,&DAT_043e86c0);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e86a0,uVar5);
      uVar5 = FUN_024fc498(&DAT_043e86a0,&DAT_043e86c0);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_024fc498(&DAT_043e86a0,&DAT_043e86d8);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e86a0,uVar5);
      uVar5 = FUN_024fc498(&DAT_043e86a0,&DAT_043e86d8);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


