/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023a0120; name: FUN_023a0120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023a0120(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043e2b58 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2b58), iVar8 != 0)) {
    DAT_043e2b28 = 0x16;
    DAT_043e2b38 = 0;
    DAT_043e2b29._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e2b30 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e2b40 = 0x2a;
    _DAT_043e2b34 = 0;
    DAT_043e2b50._7_1_ = 0;
    DAT_043e2b50._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e2b50._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e2b50._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e2b50._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e2b50._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e2b49 = s__anonymous_namespace__039071f8[8];
    DAT_043e2b49_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e2b49_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e2b49_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e2b49_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e2b4e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e2b50._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e2b41._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e2b41._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e2b50._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e2b28,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2b58);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0xf40,8);
  _DAT_043e2b08 = 0xf41;
  DAT_043e2b10 = 0xf3b;
  DAT_043e2b18 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::pokemon::PokemonAnimationController, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39>, const sol::base_list<> &, sol::base_list<field::CharacterAnimationController>, char const (&)[19], void (field::pokemon::PokemonAnimationController::*)(bool), char const (&)[16], bool (field::pokemon::PokemonAnimationController::*)() const, char const (&)[32], bool (field::pokemon::PokemonAnimationController::*)() const, char const (&)[16], void (field::pokemon::PokemonAnimationController::*)(field::pokemon::PokemonAnimationController::OneEmotionType), char const (&)[17], void (field::pokemon::PokemonAnimationController::*)(), char const (&)[22], bool (field::pokemon::PokemonAnimationController::*)() const, char const (&)[15], bool (field::pokemon::PokemonAnimationController::*)() const, char const (&)[17], void (field::pokemon::PokemonAnimationController::*)(field::pokemon::PokemonAnimationController::LoopEmotionType), char const (&)[15], void (field::pokemon::PokemonAnimationController::*)(bool), char const (&)[17], bool (field::pokemon::PokemonAnimationController::*)() const, char const (&)[14], bool (field::pokemon::PokemonAnimationController::*)(field::pokemon::PokemonAnimationController::LoopEmotionType) const, char const (&)[7], void (field::pokemon::PokemonAnimationController::*)(field::pokemon::PokemonAnimationController::OneAttackType), char const (&)[16], void (field::pokemon::PokemonAnimationController::*)(field::pokemon::PokemonAnimationController::LoopAttackType), char const (&)[23], void (field::pokemon::PokemonAnimationController::*)(field::pokemon::PokemonAnimationController::BattleIdleType), char const (&)[12], bool (field::pokemon::PokemonAnimationController::*)() const, char const (&)[13], void (field::pokemon::PokemonAnimationController::*)(), char const (&)[13], void (field::pokemon::P..." /* TRUNCATED STRING LITERAL */
         ,0xf3b);
  *(undefined1 *)((long)__dest + 0xf3b) = 0;
  std::string::find('\b',0x5b);
  uVar9 = std::string::find('\b',0x3d);
  uVar10 = std::string::rfind('\b',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e2b08 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e2b08 >> 1);
    }
    else {
      uVar10 = DAT_043e2b10;
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
    if ((_DAT_043e2b08 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e2b08 >> 1);
    }
    else {
      uVar9 = DAT_043e2b10;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e2b08,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e2b08);
  FUN_02398aa4(&DAT_043e2b08);
  _DAT_043e2b08 = local_78;
  DAT_043e2b10 = uStack_70;
  DAT_043e2b18 = local_68;
  lVar11 = FUN_02398980(&DAT_043e2b08);
  if (lVar11 != -1) {
    std::string::erase(0x43e2b08,lVar11 - 2);
  }
  uVar10 = (ulong)(DAT_043e2b08 >> 1);
  uVar9 = DAT_043e2b10;
  pbVar4 = DAT_043e2b18;
  uVar13 = uVar10;
  if ((_DAT_043e2b08 & 1) != 0) {
    uVar13 = DAT_043e2b10;
  }
  while( true ) {
    bVar5 = DAT_043e2b08 & 1;
    uVar14 = _DAT_043e2b08 & 0xff;
    DAT_043e2b10 = uVar9;
    DAT_043e2b18 = pbVar4;
    if (uVar13 == 0) break;
    bVar3 = DAT_043e2b08 & 1;
    pbVar1 = &DAT_043e2b09;
    if (bVar5 != 0) {
      pbVar1 = pbVar4;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e2b09;
    if (bVar3 != 0) {
      pbVar2 = pbVar4;
    }
    std::string::erase(0x43e2b08,(long)pbVar2 - (long)pbVar1);
    uVar10 = (ulong)(DAT_043e2b08 >> 1);
    uVar9 = DAT_043e2b10;
    pbVar4 = DAT_043e2b18;
    uVar13 = uVar10;
    if ((_DAT_043e2b08 & 1) != 0) {
      uVar13 = DAT_043e2b10;
    }
  }
  bVar7 = bVar5 == 0;
  uVar13 = uVar9;
  if (bVar5 == 0) {
    uVar13 = uVar10;
  }
  while (uVar13 != 0) {
    while( true ) {
      uVar10 = uVar14 >> 1;
      pbVar4 = &DAT_043e2b09;
      if (!bVar7) {
        uVar10 = uVar9;
        pbVar4 = DAT_043e2b18;
      }
      iVar8 = isblank((uint)pbVar4[uVar10 - 1]);
      if (iVar8 == 0) goto LAB_023a0370;
      FUN_0239899c(&DAT_043e2b08);
      uVar14 = _DAT_043e2b08 & 0xff;
      bVar7 = (_DAT_043e2b08 & 1) == 0;
      uVar9 = DAT_043e2b10;
      uVar13 = DAT_043e2b10;
      if ((_DAT_043e2b08 & 1) != 0) break;
      if (DAT_043e2b08 >> 1 == 0) goto LAB_023a0370;
    }
  }
LAB_023a0370:
  uVar10 = FUN_023989dc(&DAT_043e2b08,&DAT_043e2b28);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2b08,uVar10);
      uVar10 = FUN_023989dc(&DAT_043e2b08,&DAT_043e2b28);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_023989dc(&DAT_043e2b08,&DAT_043e2b40);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2b08,uVar10);
      uVar10 = FUN_023989dc(&DAT_043e2b08,&DAT_043e2b40);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


