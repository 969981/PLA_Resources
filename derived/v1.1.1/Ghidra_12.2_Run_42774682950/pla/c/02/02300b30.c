/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02300b30; name: FUN_02300b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02300b30(void)

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
  
  if (((DAT_043e1650 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1650), iVar8 != 0)) {
    DAT_043e1620 = 0x16;
    DAT_043e1630 = 0;
    DAT_043e1621._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e1628 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e1638 = 0x2a;
    _DAT_043e162c = 0;
    DAT_043e1648._7_1_ = 0;
    DAT_043e1648._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e1648._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e1648._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e1648._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e1648._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e1641 = s__anonymous_namespace__039071f8[8];
    DAT_043e1641_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e1641_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e1641_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e1641_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e1646 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e1648._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e1639._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e1639._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e1648._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e1620,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1650);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x12c0,8);
  _DAT_043e1600 = 0x12c1;
  DAT_043e1608 = 0x12bb;
  DAT_043e1610 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::MiniGame, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80>, char const (&)[29], field::MiniGame *(*)(), char const (&)[29], void (*)(), char const (&)[30], field::MiniGame *(*)(), char const (&)[30], void (*)(), char const (&)[9], bool (field::MiniGame::*)() const, char const (&)[8], bool (field::MiniGame::*)() const, char const (&)[12], field::BalloonGameType (field::MiniGame::*)() const, char const (&)[15], bool (field::MiniGame::*)() const, char const (&)[18], bool (field::MiniGame::*)() const, char const (&)[18], bool (field::MiniGame::*)() const, char const (&)[12], void (field::MiniGame::*)(), char const (&)[14], void (field::MiniGame::*)(), char const (&)[13], void (field::MiniGame::*)(), char const (&)[21], void (field::MiniGame::*)(), char const (&)[20], void (field::MiniGame::*)(), char const (&)[13], bool (field::MiniGame::*)() const, char const (&)[20], void (field::MiniGame::*)(int), char const (&)[19], void (field::MiniGame::*)(), char const (&)[15], bool (field::MiniGame::*)() const, char const (&)[15], int (field::MiniGame::*)() const, char const (&)[17], void (field::MiniGame::*)(int), char const (&)[21], void (field::MiniGame::*)(int), char const (&)[12], int (field::MiniGame::*)(bool) const, char const (&)[9], void (field::MiniGame::*)(int), char const (&)[9], int (field::MiniGame::*)() const, char const (&)[8], void (field::MiniGame::*)(float), char const (&)[8], float (field::MiniGame::*)() const, char const (&)[14], int (field::MiniGame::*)() const, char const (&)[13], void (field::MiniGame::*)(float), char const (&)[13], float (field::MiniGame::*)() const, char const (&)[34], void (field::MiniGame::*)(int, fl..." /* TRUNCATED STRING LITERAL */
         ,0x12bb);
  *(undefined1 *)((long)__dest + 0x12bb) = 0;
  std::string::find('\0',0x5b);
  uVar9 = std::string::find('\0',0x3d);
  uVar10 = std::string::rfind('\0',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e1600 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e1600 >> 1);
    }
    else {
      uVar10 = DAT_043e1608;
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
    if ((_DAT_043e1600 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e1600 >> 1);
    }
    else {
      uVar9 = DAT_043e1608;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e1600,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e1600);
  FUN_022f3310(&DAT_043e1600);
  _DAT_043e1600 = local_78;
  DAT_043e1608 = uStack_70;
  DAT_043e1610 = local_68;
  lVar11 = FUN_022f31ec(&DAT_043e1600);
  if (lVar11 != -1) {
    std::string::erase(0x43e1600,lVar11 - 2);
  }
  bVar7 = (_DAT_043e1600 & 1) == 0;
  uVar9 = (ulong)(DAT_043e1600 >> 1);
  uVar13 = _DAT_043e1600;
  uVar5 = DAT_043e1608;
  pbVar3 = DAT_043e1610;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043e1608;
  }
  while( true ) {
    bVar4 = DAT_043e1600 & 1;
    _DAT_043e1600 = uVar13;
    DAT_043e1608 = uVar5;
    DAT_043e1610 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043e1601;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e1601;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43e1600,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043e1600 & 1) == 0;
    uVar9 = (ulong)(DAT_043e1600 >> 1);
    uVar13 = _DAT_043e1600;
    uVar5 = DAT_043e1608;
    pbVar3 = DAT_043e1610;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043e1608;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043e1601;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043e1610;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_022f3208(&DAT_043e1600);
    bVar7 = (_DAT_043e1600 & 1) == 0;
    uVar5 = DAT_043e1608;
    uVar9 = _DAT_043e1600 >> 1 & 0x7f;
    uVar13 = _DAT_043e1600;
    if (!bVar7) {
      uVar9 = DAT_043e1608;
    }
  }
  uVar10 = FUN_022f3248(&DAT_043e1600,&DAT_043e1620);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e1600,uVar10);
      uVar10 = FUN_022f3248(&DAT_043e1600,&DAT_043e1620);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_022f3248(&DAT_043e1600,&DAT_043e1638);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e1600,uVar10);
      uVar10 = FUN_022f3248(&DAT_043e1600,&DAT_043e1638);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


