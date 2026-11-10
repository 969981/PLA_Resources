/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015aafc0; name: FUN_015aafc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015aafc0(void)

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
  
  if (((DAT_043ca180 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043ca180), iVar8 != 0)) {
    DAT_043ca150 = 0x16;
    DAT_043ca160 = 0;
    DAT_043ca151._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043ca158 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043ca168 = 0x2a;
    _DAT_043ca15c = 0;
    DAT_043ca178._7_1_ = 0;
    DAT_043ca178._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043ca178._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043ca178._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043ca178._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043ca178._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043ca171 = s__anonymous_namespace__039071f8[8];
    DAT_043ca171_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043ca171_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043ca171_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043ca171_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043ca176 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043ca178._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043ca169._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043ca169._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043ca178._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043ca150,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ca180);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  _DAT_043ca130 = 0x91;
  DAT_043ca138 = 0x82;
  DAT_043ca140 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<event_script::FieldUtility>, seperator_mark = int]"
         ,0x82);
  *(undefined1 *)((long)__dest + 0x82) = 0;
  std::string::find('0',0x5b);
  uVar9 = std::string::find('0',0x3d);
  uVar10 = std::string::rfind('0',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043ca130 & 1) == 0) {
      uVar10 = (ulong)(DAT_043ca130 >> 1);
    }
    else {
      uVar10 = DAT_043ca138;
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
    if ((_DAT_043ca130 & 1) == 0) {
      uVar9 = (ulong)(DAT_043ca130 >> 1);
    }
    else {
      uVar9 = DAT_043ca138;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ca130,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043ca130);
  FUN_015aad60(&DAT_043ca130);
  _DAT_043ca130 = local_78;
  DAT_043ca138 = uStack_70;
  DAT_043ca140 = local_68;
  lVar11 = FUN_015aac38(&DAT_043ca130);
  if (lVar11 != -1) {
    std::string::erase(0x43ca130,lVar11 - 2);
  }
  bVar7 = (_DAT_043ca130 & 1) == 0;
  uVar9 = (ulong)(DAT_043ca130 >> 1);
  uVar13 = _DAT_043ca130;
  uVar5 = DAT_043ca138;
  pbVar3 = DAT_043ca140;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043ca138;
  }
  while( true ) {
    bVar4 = DAT_043ca130 & 1;
    _DAT_043ca130 = uVar13;
    DAT_043ca138 = uVar5;
    DAT_043ca140 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043ca131;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043ca131;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43ca130,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043ca130 & 1) == 0;
    uVar9 = (ulong)(DAT_043ca130 >> 1);
    uVar13 = _DAT_043ca130;
    uVar5 = DAT_043ca138;
    pbVar3 = DAT_043ca140;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043ca138;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043ca131;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043ca140;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_015aac54(&DAT_043ca130);
    bVar7 = (_DAT_043ca130 & 1) == 0;
    uVar13 = _DAT_043ca130;
    uVar5 = DAT_043ca138;
    uVar9 = _DAT_043ca130 >> 1 & 0x7f;
    if (!bVar7) {
      uVar9 = DAT_043ca138;
    }
  }
  uVar10 = FUN_015aac94(&DAT_043ca130,&DAT_043ca150);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ca130,uVar10);
      uVar10 = FUN_015aac94(&DAT_043ca130,&DAT_043ca150);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_015aac94(&DAT_043ca130,&DAT_043ca168);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ca130,uVar10);
      uVar10 = FUN_015aac94(&DAT_043ca130,&DAT_043ca168);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


