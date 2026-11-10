/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009189d0; name: FUN_009189d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009189d0(void)

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
  
  if (((DAT_043a84a8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043a84a8), iVar8 != 0)) {
    DAT_043a8478 = 0x16;
    DAT_043a8488 = 0;
    DAT_043a8479._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043a8480 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043a8490 = 0x2a;
    _DAT_043a8484 = 0;
    DAT_043a84a0._7_1_ = 0;
    DAT_043a84a0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043a84a0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043a84a0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043a84a0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043a84a0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043a8499 = s__anonymous_namespace__039071f8[8];
    DAT_043a8499_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043a8499_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043a8499_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043a8499_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043a849e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043a84a0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043a8491._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043a8491._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043a84a0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043a8478,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a84a8);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x740,8);
  _DAT_043a8458 = 0x741;
  DAT_043a8460 = 0x739;
  DAT_043a8468 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<ha_btl::AiWazaData, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32>, char const (&)[11], int ha_btl::AiWazaData::*, char const (&)[15], int ha_btl::AiWazaData::*, char const (&)[16], int ha_btl::AiWazaData::*, char const (&)[20], int ha_btl::AiWazaData::*, char const (&)[19], int ha_btl::AiWazaData::*, char const (&)[10], int ha_btl::AiWazaData::*, char const (&)[9], int ha_btl::AiWazaData::*, char const (&)[8], int ha_btl::AiWazaData::*, char const (&)[5], int ha_btl::AiWazaData::*, char const (&)[9], int ha_btl::AiWazaData::*, char const (&)[11], int ha_btl::AiWazaData::*, char const (&)[16], int ha_btl::AiWazaData::*, char const (&)[13], int ha_btl::AiWazaData::*, char const (&)[13], int ha_btl::AiWazaData::*, char const (&)[13], int ha_btl::AiWazaData::*, char const (&)[19], int ha_btl::AiWazaData::*, char const (&)[19], int ha_btl::AiWazaData::*, char const (&)[19], int ha_btl::AiWazaData::*, char const (&)[16], int ha_btl::AiWazaData::*, char const (&)[16], int ha_btl::AiWazaData::*, char const (&)[16], int ha_btl::AiWazaData::*, char const (&)[6], int ha_btl::AiWazaData::*, char const (&)[7], int ha_btl::AiWazaData::*, char const (&)[12], int ha_btl::AiWazaData::*, char const (&)[8], int ha_btl::AiWazaData::*, char const (&)[8], bool ha_btl::AiWazaData::*, char const (&)[12], bool ha_btl::AiWazaData::*, char const (&)[15], bool ha_btl::AiWazaData::*, char const (&)[13], int ha_btl::AiWazaData::*, char const (&)[8], int ha_btl::AiWazaData::*, char const (&)[9], int ha_btl::AiWazaData::*, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x739);
  *(undefined1 *)((long)__dest + 0x739) = 0;
  std::string::find('X',0x5b);
  uVar9 = std::string::find('X',0x3d);
  uVar10 = std::string::rfind('X',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043a8458 & 1) == 0) {
      uVar10 = (ulong)(DAT_043a8458 >> 1);
    }
    else {
      uVar10 = DAT_043a8460;
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
    if ((_DAT_043a8458 & 1) == 0) {
      uVar9 = (ulong)(DAT_043a8458 >> 1);
    }
    else {
      uVar9 = DAT_043a8460;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043a8458,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043a8458);
  FUN_00902998(&DAT_043a8458);
  _DAT_043a8458 = local_78;
  DAT_043a8460 = uStack_70;
  DAT_043a8468 = local_68;
  lVar11 = FUN_00902874(&DAT_043a8458);
  if (lVar11 != -1) {
    std::string::erase(0x43a8458,lVar11 - 2);
  }
  bVar7 = (_DAT_043a8458 & 1) == 0;
  uVar9 = (ulong)(DAT_043a8458 >> 1);
  uVar13 = _DAT_043a8458;
  uVar5 = DAT_043a8460;
  pbVar3 = DAT_043a8468;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043a8460;
  }
  while( true ) {
    bVar4 = DAT_043a8458 & 1;
    _DAT_043a8458 = uVar13;
    DAT_043a8460 = uVar5;
    DAT_043a8468 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043a8459;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043a8459;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43a8458,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043a8458 & 1) == 0;
    uVar9 = (ulong)(DAT_043a8458 >> 1);
    uVar13 = _DAT_043a8458;
    uVar5 = DAT_043a8460;
    pbVar3 = DAT_043a8468;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043a8460;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043a8459;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043a8468;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_00902890(&DAT_043a8458);
    bVar7 = (_DAT_043a8458 & 1) == 0;
    uVar5 = DAT_043a8460;
    uVar9 = _DAT_043a8458 >> 1 & 0x7f;
    uVar13 = _DAT_043a8458;
    if (!bVar7) {
      uVar9 = DAT_043a8460;
    }
  }
  uVar10 = FUN_009028d0(&DAT_043a8458,&DAT_043a8478);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43a8458,uVar10);
      uVar10 = FUN_009028d0(&DAT_043a8458,&DAT_043a8478);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_009028d0(&DAT_043a8458,&DAT_043a8490);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43a8458,uVar10);
      uVar10 = FUN_009028d0(&DAT_043a8458,&DAT_043a8490);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


