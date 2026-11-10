/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020c8500; name: FUN_020c8500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020c8500(void)

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
  
  if (((DAT_043d9738 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d9738), iVar3 != 0)) {
    DAT_043d9708 = 0x16;
    DAT_043d9718 = 0;
    DAT_043d9709._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d9710 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d9720 = 0x2a;
    _DAT_043d9714 = 0;
    DAT_043d9730._7_1_ = 0;
    DAT_043d9730._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d9730._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d9730._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d9730._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d9730._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d9729 = s__anonymous_namespace__039071f8[8];
    DAT_043d9729_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d9729_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d9729_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d9729_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d972e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d9730._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d9721._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d9721._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d9730._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d9708,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d9738);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x1670,8);
  _DAT_043d96e8 = 0x1671;
  DAT_043d96f0 = 0x1664;
  DAT_043d96f8 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::CharacterAnimationController, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65>, char const (&)[9], bool (field::CharacterAnimationController::*)() const, char const (&)[10], void (field::CharacterAnimationController::*)(bool), char const (&)[14], void (field::CharacterAnimationController::*)(), char const (&)[14], void (field::CharacterAnimationController::*)(), char const (&)[13], void (field::CharacterAnimationController::*)(), char const (&)[13], void (field::CharacterAnimationController::*)(), char const (&)[14], void (field::CharacterAnimationController::*)(), char const (&)[14], void (field::CharacterAnimationController::*)(), char const (&)[10], void (field::CharacterAnimationController::*)(), char const (&)[10], void (field::CharacterAnimationController::*)(), char const (&)[14], float (field::CharacterAnimationController::*)() const, char const (&)[16], void (field::CharacterAnimationController::*)(float), char const (&)[14], void (field::CharacterAnimationController::*)(float), char const (&)[17], void (field::CharacterAnimationController::*)(float), char const (&)[13], void (field::CharacterAnimationController::*)(float), char const (&)[18], void (field::CharacterAnimationController::*)(float), char const (&)[16], void (field::CharacterAnimationController::*)(float), char const (&)[19], void (field::CharacterAnimationController::*)(float), char const (&)[5], void (field::CharacterAnimationController::*)(float), char const (&)[19], bool (field::CharacterAnimationController::*)() const, char const (&)[13], void (field::CharacterAnimationController::*)(float), char const (&)[10], bool (field::CharacterAnimationController::*)() const, char const (&)[13], bool (field::CharacterAnimati..." /* TRUNCATED STRING LITERAL */
         ,0x1664);
  *(undefined1 *)((long)__dest + 0x1664) = 0;
  std::string::find(-0x18,0x5b);
  uVar4 = std::string::find(-0x18,0x3d);
  uVar5 = std::string::rfind(-0x18,0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043d96e8 & 1) == 0) {
      uVar5 = (ulong)(DAT_043d96e8 >> 1);
    }
    else {
      uVar5 = DAT_043d96f0;
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
    if ((_DAT_043d96e8 & 1) == 0) {
      uVar4 = (ulong)(DAT_043d96e8 >> 1);
    }
    else {
      uVar4 = DAT_043d96f0;
    }
  }
  if (uVar11 < uVar4 - 1) {
    uVar11 = uVar11 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043d96e8,uVar11,uVar5 - uVar11,
                      (allocator *)&DAT_043d96e8);
  FUN_020bcc24(&DAT_043d96e8);
  _DAT_043d96e8 = local_58;
  DAT_043d96f0 = uStack_50;
  DAT_043d96f8 = local_48;
  lVar6 = FUN_020bcafc(&DAT_043d96e8);
  if (lVar6 != -1) {
    std::string::erase(0x43d96e8,lVar6 - 2);
  }
  uVar5 = _DAT_043d96e8 & 0xff;
  uVar11 = (ulong)(DAT_043d96e8 >> 1);
  bVar10 = DAT_043d96e8 & 1;
  uVar4 = uVar11;
  if ((_DAT_043d96e8 & 1) != 0) {
    uVar4 = DAT_043d96f0;
  }
  uVar9 = DAT_043d96f0;
  if (uVar4 != 0) {
    if ((_DAT_043d96e8 & 1) == 0) {
      pbVar8 = &DAT_043d96e9;
    }
    else {
      pbVar8 = DAT_043d96f8;
    }
    while( true ) {
      uVar9 = DAT_043d96f0;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43d96e8,0);
      uVar5 = _DAT_043d96e8 & 0xff;
      uVar11 = (ulong)(DAT_043d96e8 >> 1);
      bVar10 = DAT_043d96e8 & 1;
      uVar4 = uVar11;
      if ((_DAT_043d96e8 & 1) != 0) {
        uVar4 = DAT_043d96f0;
      }
      uVar9 = DAT_043d96f0;
      if (uVar4 == 0) break;
      pbVar8 = &DAT_043d96e9;
      if ((_DAT_043d96e8 & 1) != 0) {
        pbVar8 = DAT_043d96f8;
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
      pbVar8 = &DAT_043d96e9;
      if (!bVar2) {
        uVar5 = uVar9;
        pbVar8 = DAT_043d96f8;
      }
      iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
      if (iVar3 == 0) goto LAB_020c8740;
      FUN_020bcb18(&DAT_043d96e8);
      uVar5 = _DAT_043d96e8 & 0xff;
      bVar2 = (_DAT_043d96e8 & 1) == 0;
      uVar9 = DAT_043d96f0;
      uVar4 = DAT_043d96f0;
      if ((_DAT_043d96e8 & 1) != 0) break;
      if (DAT_043d96e8 >> 1 == 0) goto LAB_020c8740;
    }
  }
LAB_020c8740:
  uVar5 = FUN_020bcb58(&DAT_043d96e8,&DAT_043d9708);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d96e8,uVar5);
      uVar5 = FUN_020bcb58(&DAT_043d96e8,&DAT_043d9708);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_020bcb58(&DAT_043d96e8,&DAT_043d9720);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43d96e8,uVar5);
      uVar5 = FUN_020bcb58(&DAT_043d96e8,&DAT_043d9720);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


