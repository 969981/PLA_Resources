/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02308cc0; name: FUN_02308cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02308cc0(void)

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
  
  if (((DAT_043e1750 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1750), iVar8 != 0)) {
    DAT_043e1720 = 0x16;
    DAT_043e1730 = 0;
    DAT_043e1721._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e1728 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e1738 = 0x2a;
    _DAT_043e172c = 0;
    DAT_043e1748._7_1_ = 0;
    DAT_043e1748._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e1748._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e1748._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e1748._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e1748._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e1741 = s__anonymous_namespace__039071f8[8];
    DAT_043e1741_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e1741_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e1741_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e1741_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e1746 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e1748._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e1739._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e1739._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e1748._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e1720,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1750);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x2a0,8);
  _DAT_043e1700 = 0x2a1;
  DAT_043e1708 = 0x294;
  DAT_043e1710 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::MkrgComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7>, char const (&)[10], void (field::MkrgComponent::*)(int), char const (&)[10], bool (field::MkrgComponent::*)() const, char const (&)[8], void (field::MkrgComponent::*)(), char const (&)[10], bool (field::MkrgComponent::*)() const, char const (&)[13], void (field::MkrgComponent::*)(), char const (&)[7], gfl::math::Vector3 (field::MkrgComponent::*)() const, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x294);
  *(undefined1 *)((long)__dest + 0x294) = 0;
  std::string::find('\0',0x5b);
  uVar9 = std::string::find('\0',0x3d);
  uVar10 = std::string::rfind('\0',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e1700 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e1700 >> 1);
    }
    else {
      uVar10 = DAT_043e1708;
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
    if ((_DAT_043e1700 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e1700 >> 1);
    }
    else {
      uVar9 = DAT_043e1708;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e1700,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e1700);
  FUN_02307854(&DAT_043e1700);
  _DAT_043e1700 = local_78;
  DAT_043e1708 = uStack_70;
  DAT_043e1710 = local_68;
  lVar11 = FUN_02307730(&DAT_043e1700);
  if (lVar11 != -1) {
    std::string::erase(0x43e1700,lVar11 - 2);
  }
  uVar10 = (ulong)(DAT_043e1700 >> 1);
  uVar9 = DAT_043e1708;
  pbVar4 = DAT_043e1710;
  uVar13 = uVar10;
  if ((_DAT_043e1700 & 1) != 0) {
    uVar13 = DAT_043e1708;
  }
  while( true ) {
    bVar5 = DAT_043e1700 & 1;
    uVar14 = _DAT_043e1700 & 0xff;
    DAT_043e1708 = uVar9;
    DAT_043e1710 = pbVar4;
    if (uVar13 == 0) break;
    bVar3 = DAT_043e1700 & 1;
    pbVar1 = &DAT_043e1701;
    if (bVar5 != 0) {
      pbVar1 = pbVar4;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e1701;
    if (bVar3 != 0) {
      pbVar2 = pbVar4;
    }
    std::string::erase(0x43e1700,(long)pbVar2 - (long)pbVar1);
    uVar10 = (ulong)(DAT_043e1700 >> 1);
    uVar9 = DAT_043e1708;
    pbVar4 = DAT_043e1710;
    uVar13 = uVar10;
    if ((_DAT_043e1700 & 1) != 0) {
      uVar13 = DAT_043e1708;
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
      pbVar4 = &DAT_043e1701;
      if (!bVar7) {
        uVar10 = uVar9;
        pbVar4 = DAT_043e1710;
      }
      iVar8 = isblank((uint)pbVar4[uVar10 - 1]);
      if (iVar8 == 0) goto LAB_02308f10;
      FUN_0230774c(&DAT_043e1700);
      uVar14 = _DAT_043e1700 & 0xff;
      bVar7 = (_DAT_043e1700 & 1) == 0;
      uVar9 = DAT_043e1708;
      uVar13 = DAT_043e1708;
      if ((_DAT_043e1700 & 1) != 0) break;
      if (DAT_043e1700 >> 1 == 0) goto LAB_02308f10;
    }
  }
LAB_02308f10:
  uVar10 = FUN_0230778c(&DAT_043e1700,&DAT_043e1720);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e1700,uVar10);
      uVar10 = FUN_0230778c(&DAT_043e1700,&DAT_043e1720);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_0230778c(&DAT_043e1700,&DAT_043e1738);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e1700,uVar10);
      uVar10 = FUN_0230778c(&DAT_043e1700,&DAT_043e1738);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


