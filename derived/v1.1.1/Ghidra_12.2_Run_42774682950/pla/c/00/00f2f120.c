/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f2f120; name: FUN_00f2f120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f2f120(void)

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
  
  if (((DAT_043b49b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b49b8), iVar8 != 0)) {
    DAT_043b4988 = 0x16;
    DAT_043b4998 = 0;
    DAT_043b4989._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b4990 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b49a0 = 0x2a;
    _DAT_043b4994 = 0;
    DAT_043b49b0._7_1_ = 0;
    DAT_043b49b0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b49b0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b49b0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b49b0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b49b0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b49a9 = s__anonymous_namespace__039071f8[8];
    DAT_043b49a9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b49a9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b49a9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b49a9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b49ae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b49b0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b49a1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b49a1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b49b0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b4988,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b49b8);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  _DAT_043b4968 = 0x91;
  DAT_043b4970 = 0x81;
  DAT_043b4978 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<common::lua::command::SoundCommand>, seperator_mark = int]"
         ,0x81);
  *(undefined1 *)((long)__dest + 0x81) = 0;
  std::string::find('h',0x5b);
  uVar9 = std::string::find('h',0x3d);
  uVar10 = std::string::rfind('h',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043b4968 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b4968 >> 1);
    }
    else {
      uVar10 = DAT_043b4970;
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
    if ((_DAT_043b4968 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b4968 >> 1);
    }
    else {
      uVar9 = DAT_043b4970;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b4968,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043b4968);
  FUN_00f2c528(&DAT_043b4968);
  _DAT_043b4968 = local_78;
  DAT_043b4970 = uStack_70;
  DAT_043b4978 = local_68;
  lVar11 = FUN_00f2c400(&DAT_043b4968);
  if (lVar11 != -1) {
    std::string::erase(0x43b4968,lVar11 - 2);
  }
  bVar7 = (_DAT_043b4968 & 1) == 0;
  uVar9 = (ulong)(DAT_043b4968 >> 1);
  uVar13 = _DAT_043b4968;
  uVar5 = DAT_043b4970;
  pbVar3 = DAT_043b4978;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043b4970;
  }
  while( true ) {
    bVar4 = DAT_043b4968 & 1;
    _DAT_043b4968 = uVar13;
    DAT_043b4970 = uVar5;
    DAT_043b4978 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043b4969;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043b4969;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43b4968,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043b4968 & 1) == 0;
    uVar9 = (ulong)(DAT_043b4968 >> 1);
    uVar13 = _DAT_043b4968;
    uVar5 = DAT_043b4970;
    pbVar3 = DAT_043b4978;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043b4970;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043b4969;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043b4978;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_00f2c41c(&DAT_043b4968);
    bVar7 = (_DAT_043b4968 & 1) == 0;
    uVar5 = DAT_043b4970;
    uVar9 = _DAT_043b4968 >> 1 & 0x7f;
    uVar13 = _DAT_043b4968;
    if (!bVar7) {
      uVar9 = DAT_043b4970;
    }
  }
  uVar10 = FUN_00f2c45c(&DAT_043b4968,&DAT_043b4988);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4968,uVar10);
      uVar10 = FUN_00f2c45c(&DAT_043b4968,&DAT_043b4988);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_00f2c45c(&DAT_043b4968,&DAT_043b49a0);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4968,uVar10);
      uVar10 = FUN_00f2c45c(&DAT_043b4968,&DAT_043b49a0);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


