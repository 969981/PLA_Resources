/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e355c0; name: FUN_00e355c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e355c0(void)

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
  
  if (((DAT_043af8b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043af8b0), iVar8 != 0)) {
    DAT_043af880 = 0x16;
    DAT_043af890 = 0;
    DAT_043af881._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043af888 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043af898 = 0x2a;
    _DAT_043af88c = 0;
    DAT_043af8a8._7_1_ = 0;
    DAT_043af8a8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043af8a8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043af8a8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043af8a8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043af8a8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043af8a1 = s__anonymous_namespace__039071f8[8];
    DAT_043af8a1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043af8a1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043af8a1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043af8a1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043af8a6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043af8a8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043af899._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043af899._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043af8a8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043af880,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043af8b0);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1d0,8);
  _DAT_043af860 = 0x1d1;
  DAT_043af868 = 0x1cc;
  DAT_043af870 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<savedata::io::MyDressup, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3>, char const (&)[13], void (savedata::io::MyDressup::*)(unsigned char, gfl::FnvHash64), char const (&)[13], gfl::FnvHash64 (savedata::io::MyDressup::*)(unsigned char), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x1cc);
  *(undefined1 *)((long)__dest + 0x1cc) = 0;
  std::string::find('`',0x5b);
  uVar9 = std::string::find('`',0x3d);
  uVar10 = std::string::rfind('`',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043af860 & 1) == 0) {
      uVar10 = (ulong)(DAT_043af860 >> 1);
    }
    else {
      uVar10 = DAT_043af868;
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
    if ((_DAT_043af860 & 1) == 0) {
      uVar9 = (ulong)(DAT_043af860 >> 1);
    }
    else {
      uVar9 = DAT_043af868;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043af860,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043af860);
  FUN_00e32720(&DAT_043af860);
  _DAT_043af860 = local_78;
  DAT_043af868 = uStack_70;
  DAT_043af870 = local_68;
  lVar11 = FUN_00e325f8(&DAT_043af860);
  if (lVar11 != -1) {
    std::string::erase(0x43af860,lVar11 - 2);
  }
  bVar7 = (_DAT_043af860 & 1) == 0;
  uVar9 = (ulong)(DAT_043af860 >> 1);
  uVar13 = _DAT_043af860;
  uVar5 = DAT_043af868;
  pbVar3 = DAT_043af870;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043af868;
  }
  while( true ) {
    bVar4 = DAT_043af860 & 1;
    _DAT_043af860 = uVar13;
    DAT_043af868 = uVar5;
    DAT_043af870 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043af861;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043af861;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43af860,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043af860 & 1) == 0;
    uVar9 = (ulong)(DAT_043af860 >> 1);
    uVar13 = _DAT_043af860;
    uVar5 = DAT_043af868;
    pbVar3 = DAT_043af870;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043af868;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043af861;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043af870;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_00e32614(&DAT_043af860);
    bVar7 = (_DAT_043af860 & 1) == 0;
    uVar5 = DAT_043af868;
    uVar9 = _DAT_043af860 >> 1 & 0x7f;
    uVar13 = _DAT_043af860;
    if (!bVar7) {
      uVar9 = DAT_043af868;
    }
  }
  uVar10 = FUN_00e32654(&DAT_043af860,&DAT_043af880);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43af860,uVar10);
      uVar10 = FUN_00e32654(&DAT_043af860,&DAT_043af880);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_00e32654(&DAT_043af860,&DAT_043af898);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43af860,uVar10);
      uVar10 = FUN_00e32654(&DAT_043af860,&DAT_043af898);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


