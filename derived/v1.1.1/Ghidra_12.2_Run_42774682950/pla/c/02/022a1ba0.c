/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022a1ba0; name: FUN_022a1ba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1ba0(void)

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
  
  if (((DAT_043e06c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e06c0), iVar8 != 0)) {
    DAT_043e0690 = 0x16;
    DAT_043e06a0 = 0;
    DAT_043e0691._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e0698 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e06a8 = 0x2a;
    _DAT_043e069c = 0;
    DAT_043e06b8._7_1_ = 0;
    DAT_043e06b8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e06b8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e06b8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e06b8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e06b8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e06b1 = s__anonymous_namespace__039071f8[8];
    DAT_043e06b1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e06b1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e06b1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e06b1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e06b6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e06b8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e06a9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e06a9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e06b8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e0690,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e06c0);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x2b0,8);
  _DAT_043e0670 = 0x2b1;
  DAT_043e0678 = 0x2aa;
  DAT_043e0680 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::ThrowableComponentInfo, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5>, char const (&)[14], field::content::ThrowStyleWeightType (field::content::ThrowableComponentInfo::*)() const, char const (&)[12], field::content::ThrowStyleSizeType (field::content::ThrowableComponentInfo::*)() const, char const (&)[12], bool (field::content::ThrowableComponentInfo::*)() const, char const (&)[6], void (field::content::ThrowableComponentInfo::*)(), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x2aa);
  *(undefined1 *)((long)__dest + 0x2aa) = 0;
  std::string::find('p',0x5b);
  uVar9 = std::string::find('p',0x3d);
  uVar10 = std::string::rfind('p',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e0670 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e0670 >> 1);
    }
    else {
      uVar10 = DAT_043e0678;
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
    if ((_DAT_043e0670 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e0670 >> 1);
    }
    else {
      uVar9 = DAT_043e0678;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e0670,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e0670);
  FUN_0229f0c4(&DAT_043e0670);
  _DAT_043e0670 = local_78;
  DAT_043e0678 = uStack_70;
  DAT_043e0680 = local_68;
  lVar11 = FUN_0229ef9c(&DAT_043e0670);
  if (lVar11 != -1) {
    std::string::erase(0x43e0670,lVar11 - 2);
  }
  bVar7 = (_DAT_043e0670 & 1) == 0;
  uVar9 = (ulong)(DAT_043e0670 >> 1);
  uVar13 = _DAT_043e0670;
  uVar5 = DAT_043e0678;
  pbVar3 = DAT_043e0680;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043e0678;
  }
  while( true ) {
    bVar4 = DAT_043e0670 & 1;
    _DAT_043e0670 = uVar13;
    DAT_043e0678 = uVar5;
    DAT_043e0680 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043e0671;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e0671;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43e0670,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043e0670 & 1) == 0;
    uVar9 = (ulong)(DAT_043e0670 >> 1);
    uVar13 = _DAT_043e0670;
    uVar5 = DAT_043e0678;
    pbVar3 = DAT_043e0680;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043e0678;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043e0671;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043e0680;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_0229efb8(&DAT_043e0670);
    bVar7 = (_DAT_043e0670 & 1) == 0;
    uVar5 = DAT_043e0678;
    uVar9 = _DAT_043e0670 >> 1 & 0x7f;
    uVar13 = _DAT_043e0670;
    if (!bVar7) {
      uVar9 = DAT_043e0678;
    }
  }
  uVar10 = FUN_0229eff8(&DAT_043e0670,&DAT_043e0690);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e0670,uVar10);
      uVar10 = FUN_0229eff8(&DAT_043e0670,&DAT_043e0690);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_0229eff8(&DAT_043e0670,&DAT_043e06a8);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e0670,uVar10);
      uVar10 = FUN_0229eff8(&DAT_043e0670,&DAT_043e06a8);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


