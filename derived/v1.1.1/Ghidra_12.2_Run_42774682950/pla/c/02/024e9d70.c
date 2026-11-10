/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024e9d70; name: FUN_024e9d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024e9d70(void)

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
  
  if (((DAT_043e8390 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8390), iVar8 != 0)) {
    DAT_043e8360 = 0x16;
    DAT_043e8370 = 0;
    DAT_043e8361._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e8368 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e8378 = 0x2a;
    _DAT_043e836c = 0;
    DAT_043e8388._7_1_ = 0;
    DAT_043e8388._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e8388._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e8388._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e8388._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e8388._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e8381 = s__anonymous_namespace__039071f8[8];
    DAT_043e8381_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e8381_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e8381_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e8381_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e8386 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e8388._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e8379._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e8379._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e8388._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e8360,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8390);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x330,8);
  _DAT_043e8340 = 0x331;
  DAT_043e8348 = 0x321;
  DAT_043e8350 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::StaminaData, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9>, char const (&)[7], int (field::ride::StaminaData::*)() const, char const (&)[7], void (field::ride::StaminaData::*)(int), char const (&)[11], int (field::ride::StaminaData::*)() const, char const (&)[11], int (field::ride::StaminaData::*)(int), char const (&)[4], int (field::ride::StaminaData::*)(int), char const (&)[5], int (field::ride::StaminaData::*)(), char const (&)[7], bool (field::ride::StaminaData::*)() const, char const (&)[14], float (field::ride::StaminaData::*)() const, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x321);
  *(undefined1 *)((long)__dest + 0x321) = 0;
  std::string::find('@',0x5b);
  uVar9 = std::string::find('@',0x3d);
  uVar10 = std::string::rfind('@',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e8340 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e8340 >> 1);
    }
    else {
      uVar10 = DAT_043e8348;
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
    if ((_DAT_043e8340 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e8340 >> 1);
    }
    else {
      uVar9 = DAT_043e8348;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e8340,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e8340);
  FUN_024e7f14(&DAT_043e8340);
  _DAT_043e8340 = local_78;
  DAT_043e8348 = uStack_70;
  DAT_043e8350 = local_68;
  lVar11 = FUN_024e7df0(&DAT_043e8340);
  if (lVar11 != -1) {
    std::string::erase(0x43e8340,lVar11 - 2);
  }
  uVar10 = (ulong)(DAT_043e8340 >> 1);
  uVar9 = DAT_043e8348;
  pbVar4 = DAT_043e8350;
  uVar13 = uVar10;
  if ((_DAT_043e8340 & 1) != 0) {
    uVar13 = DAT_043e8348;
  }
  while( true ) {
    bVar5 = DAT_043e8340 & 1;
    uVar14 = _DAT_043e8340 & 0xff;
    DAT_043e8348 = uVar9;
    DAT_043e8350 = pbVar4;
    if (uVar13 == 0) break;
    bVar3 = DAT_043e8340 & 1;
    pbVar1 = &DAT_043e8341;
    if (bVar5 != 0) {
      pbVar1 = pbVar4;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e8341;
    if (bVar3 != 0) {
      pbVar2 = pbVar4;
    }
    std::string::erase(0x43e8340,(long)pbVar2 - (long)pbVar1);
    uVar10 = (ulong)(DAT_043e8340 >> 1);
    uVar9 = DAT_043e8348;
    pbVar4 = DAT_043e8350;
    uVar13 = uVar10;
    if ((_DAT_043e8340 & 1) != 0) {
      uVar13 = DAT_043e8348;
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
      pbVar4 = &DAT_043e8341;
      if (!bVar7) {
        uVar10 = uVar9;
        pbVar4 = DAT_043e8350;
      }
      iVar8 = isblank((uint)pbVar4[uVar10 - 1]);
      if (iVar8 == 0) goto LAB_024e9fc0;
      FUN_024e7e0c(&DAT_043e8340);
      uVar14 = _DAT_043e8340 & 0xff;
      bVar7 = (_DAT_043e8340 & 1) == 0;
      uVar9 = DAT_043e8348;
      uVar13 = DAT_043e8348;
      if ((_DAT_043e8340 & 1) != 0) break;
      if (DAT_043e8340 >> 1 == 0) goto LAB_024e9fc0;
    }
  }
LAB_024e9fc0:
  uVar10 = FUN_024e7e4c(&DAT_043e8340,&DAT_043e8360);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e8340,uVar10);
      uVar10 = FUN_024e7e4c(&DAT_043e8340,&DAT_043e8360);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_024e7e4c(&DAT_043e8340,&DAT_043e8378);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e8340,uVar10);
      uVar10 = FUN_024e7e4c(&DAT_043e8340,&DAT_043e8378);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


