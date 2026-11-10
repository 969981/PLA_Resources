/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02008e00; name: FUN_02008e00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02008e00(void)

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
  
  if (((DAT_043d6398 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d6398), iVar3 != 0)) {
    DAT_043d6368 = 0x16;
    DAT_043d6378 = 0;
    DAT_043d6369._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d6370 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d6380 = 0x2a;
    _DAT_043d6374 = 0;
    DAT_043d6390._7_1_ = 0;
    DAT_043d6390._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d6390._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d6390._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d6390._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d6390._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d6389 = s__anonymous_namespace__039071f8[8];
    DAT_043d6389_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d6389_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d6389_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d6389_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d638e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d6390._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d6381._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d6381._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d6390._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d6368,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d6398);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0xa60,8);
  _DAT_043d6348 = 0xa61;
  DAT_043d6350 = 0xa51;
  DAT_043d6358 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::character::CharacterNavigatorController, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23>, char const (&)[9], bool (field::character::CharacterNavigatorController::*)() const, char const (&)[10], void (field::character::CharacterNavigatorController::*)(bool), char const (&)[21], bool (field::character::CharacterNavigatorController::*)(const gfl::math::Vector3 &) const, char const (&)[15], bool (field::character::CharacterNavigatorController::*)(const gfl::math::Vector3 &), char const (&)[13], void (field::character::CharacterNavigatorController::*)(), char const (&)[13], bool (field::character::CharacterNavigatorController::*)() const, char const (&)[17], bool (field::character::CharacterNavigatorController::*)(const gfl::math::Vector3 &, float), char const (&)[17], bool (field::character::CharacterNavigatorController::*)(const gfl::math::Vector3 &), char const (&)[15], gfl::math::Vector3 (field::character::CharacterNavigatorController::*)() const, char const (&)[14], bool (field::character::CharacterNavigatorController::*)() const, char const (&)[16], void (field::character::CharacterNavigatorController::*)(), char const (&)[18], void (field::character::CharacterNavigatorController::*)(float), char const (&)[22], void (field::character::CharacterNavigatorController::*)(field::character::controller::MoveState), char const (&)[18], void (field::character::CharacterNavigatorController::*)(float), char const (&)[20], void (field::character::CharacterNavigatorController::*)(), char const (&)[22], bool (field::character::CharacterNavigatorController::*)() const, char const (&)[23], float (field::character::CharacterNavigatorController::*)() const, char const (&)[37], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/character_navigator_controller_glue.cpp:30:46), char const (&)[27], (lambda at C:/jenk..." /* TRUNCATED STRING LITERAL */
         ,0xa51);
  *(undefined1 *)((long)__dest + 0xa51) = 0;
  std::string::find('H',0x5b);
  uVar4 = std::string::find('H',0x3d);
  uVar5 = std::string::rfind('H',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043d6348 & 1) == 0) {
      uVar5 = (ulong)(DAT_043d6348 >> 1);
    }
    else {
      uVar5 = DAT_043d6350;
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
    if ((_DAT_043d6348 & 1) == 0) {
      uVar4 = (ulong)(DAT_043d6348 >> 1);
    }
    else {
      uVar4 = DAT_043d6350;
    }
  }
  if (uVar11 < uVar4 - 1) {
    uVar11 = uVar11 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043d6348,uVar11,uVar5 - uVar11,
                      (allocator *)&DAT_043d6348);
  FUN_02002dd0(&DAT_043d6348);
  _DAT_043d6348 = local_58;
  DAT_043d6350 = uStack_50;
  DAT_043d6358 = local_48;
  lVar6 = FUN_02002cac(&DAT_043d6348);
  if (lVar6 != -1) {
    std::string::erase(0x43d6348,lVar6 - 2);
  }
  uVar5 = _DAT_043d6348 & 0xff;
  uVar11 = (ulong)(DAT_043d6348 >> 1);
  bVar10 = DAT_043d6348 & 1;
  uVar4 = uVar11;
  if ((_DAT_043d6348 & 1) != 0) {
    uVar4 = DAT_043d6350;
  }
  uVar9 = DAT_043d6350;
  if (uVar4 != 0) {
    if ((_DAT_043d6348 & 1) == 0) {
      pbVar8 = &DAT_043d6349;
    }
    else {
      pbVar8 = DAT_043d6358;
    }
    while( true ) {
      uVar9 = DAT_043d6350;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43d6348,0);
      uVar5 = _DAT_043d6348 & 0xff;
      uVar11 = (ulong)(DAT_043d6348 >> 1);
      bVar10 = DAT_043d6348 & 1;
      uVar4 = uVar11;
      if ((_DAT_043d6348 & 1) != 0) {
        uVar4 = DAT_043d6350;
      }
      uVar9 = DAT_043d6350;
      if (uVar4 == 0) break;
      pbVar8 = &DAT_043d6349;
      if ((_DAT_043d6348 & 1) != 0) {
        pbVar8 = DAT_043d6358;
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
      pbVar8 = &DAT_043d6349;
      if (!bVar2) {
        uVar5 = uVar9;
        pbVar8 = DAT_043d6358;
      }
      iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
      if (iVar3 == 0) goto LAB_0200903c;
      FUN_02002cc8(&DAT_043d6348);
      uVar5 = _DAT_043d6348 & 0xff;
      bVar2 = (_DAT_043d6348 & 1) == 0;
      uVar9 = DAT_043d6350;
      uVar4 = DAT_043d6350;
      if ((_DAT_043d6348 & 1) != 0) break;
      if (DAT_043d6348 >> 1 == 0) goto LAB_0200903c;
    }
  }
LAB_0200903c:
  uVar5 = FUN_02002d08(&DAT_043d6348,&DAT_043d6368);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d6348,uVar5);
      uVar5 = FUN_02002d08(&DAT_043d6348,&DAT_043d6368);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_02002d08(&DAT_043d6348,&DAT_043d6380);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d6348,uVar5);
      uVar5 = FUN_02002d08(&DAT_043d6348,&DAT_043d6380);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


