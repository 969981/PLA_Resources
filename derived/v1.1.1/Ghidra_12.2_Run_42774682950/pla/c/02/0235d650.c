/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0235d650; name: FUN_0235d650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0235d650(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043e23c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e23c8), iVar8 != 0)) {
    DAT_043e2398 = 0x16;
    DAT_043e23a8 = 0;
    DAT_043e2399._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e23a0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e23b0 = 0x2a;
    _DAT_043e23a4 = 0;
    DAT_043e23c0._7_1_ = 0;
    DAT_043e23c0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e23c0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e23c0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e23c0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e23c0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e23b9 = s__anonymous_namespace__039071f8[8];
    DAT_043e23b9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e23b9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e23b9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e23b9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e23be = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e23c0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e23b1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e23b1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e23c0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e2398,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e23c8);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1c0,8);
  _DAT_043e2378 = 0x1c1;
  DAT_043e2380 = 0x1bd;
  DAT_043e2388 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::IPlayerInputInfoHandler, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3>, char const (&)[9], bool (field::IPlayerInputInfoHandler::*)() const, char const (&)[17], bool (field::IPlayerInputInfoHandler::*)() const, char const (&)[12], void (field::IPlayerInputInfoHandler::*)(), char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x1bd);
  *(undefined1 *)((long)__dest + 0x1bd) = 0;
  std::string::find('x',0x5b);
  uVar9 = std::string::find('x',0x3d);
  uVar10 = std::string::rfind('x',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e2378 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e2378 >> 1);
    }
    else {
      uVar10 = DAT_043e2380;
    }
    uVar13 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar13 = uVar9;
    }
    uVar9 = uVar10;
  }
  else {
    uVar13 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar13 = uVar9;
    }
    if ((_DAT_043e2378 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e2378 >> 1);
    }
    else {
      uVar9 = DAT_043e2380;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e2378,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e2378);
  FUN_0235c984(&DAT_043e2378);
  _DAT_043e2378 = local_78;
  DAT_043e2380 = uStack_70;
  DAT_043e2388 = local_68;
  lVar11 = FUN_0235c85c(&DAT_043e2378);
  if (lVar11 != -1) {
    std::string::erase(0x43e2378,lVar11 - 2);
  }
  bVar7 = (_DAT_043e2378 & 1) == 0;
  uVar9 = (ulong)(DAT_043e2378 >> 1);
  uVar13 = _DAT_043e2378;
  uVar5 = DAT_043e2380;
  pbVar3 = DAT_043e2388;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043e2380;
  }
  while( true ) {
    bVar4 = DAT_043e2378 & 1;
    _DAT_043e2378 = uVar13;
    DAT_043e2380 = uVar5;
    DAT_043e2388 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043e2379;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e2379;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43e2378,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043e2378 & 1) == 0;
    uVar9 = (ulong)(DAT_043e2378 >> 1);
    uVar13 = _DAT_043e2378;
    uVar5 = DAT_043e2380;
    pbVar3 = DAT_043e2388;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043e2380;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043e2379;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043e2388;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_0235c878(&DAT_043e2378);
    bVar7 = (_DAT_043e2378 & 1) == 0;
    uVar5 = DAT_043e2380;
    uVar9 = _DAT_043e2378 >> 1 & 0x7f;
    uVar13 = _DAT_043e2378;
    if (!bVar7) {
      uVar9 = DAT_043e2380;
    }
  }
  uVar10 = FUN_0235c8b8(&DAT_043e2378,&DAT_043e2398);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2378,uVar10);
      uVar10 = FUN_0235c8b8(&DAT_043e2378,&DAT_043e2398);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_0235c8b8(&DAT_043e2378,&DAT_043e23b0);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2378,uVar10);
      uVar10 = FUN_0235c8b8(&DAT_043e2378,&DAT_043e23b0);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


