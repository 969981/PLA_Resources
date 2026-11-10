/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1f4e0; name: FUN_00f1f4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1f4e0(void)

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
  
  if (((DAT_043b4650 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4650), iVar8 != 0)) {
    DAT_043b4620 = 0x16;
    DAT_043b4630 = 0;
    DAT_043b4621._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b4628 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b4638 = 0x2a;
    _DAT_043b462c = 0;
    DAT_043b4648._7_1_ = 0;
    DAT_043b4648._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b4648._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b4648._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b4648._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b4648._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b4641 = s__anonymous_namespace__039071f8[8];
    DAT_043b4641_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b4641_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b4641_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b4641_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b4646 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b4648._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b4639._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b4639._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b4648._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b4620,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4650);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  _DAT_043b4600 = 0x91;
  DAT_043b4608 = 0x83;
  DAT_043b4610 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<common::lua::command::PokemonCommand>, seperator_mark = int]"
         ,0x83);
  *(undefined1 *)((long)__dest + 0x83) = 0;
  std::string::find('\0',0x5b);
  uVar9 = std::string::find('\0',0x3d);
  uVar10 = std::string::rfind('\0',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043b4600 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b4600 >> 1);
    }
    else {
      uVar10 = DAT_043b4608;
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
    if ((_DAT_043b4600 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b4600 >> 1);
    }
    else {
      uVar9 = DAT_043b4608;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b4600,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043b4600);
  FUN_00f1b8bc(&DAT_043b4600);
  _DAT_043b4600 = local_78;
  DAT_043b4608 = uStack_70;
  DAT_043b4610 = local_68;
  lVar11 = FUN_00f1b794(&DAT_043b4600);
  if (lVar11 != -1) {
    std::string::erase(0x43b4600,lVar11 - 2);
  }
  uVar10 = (ulong)(DAT_043b4600 >> 1);
  uVar9 = DAT_043b4608;
  pbVar4 = DAT_043b4610;
  uVar13 = uVar10;
  if ((_DAT_043b4600 & 1) != 0) {
    uVar13 = DAT_043b4608;
  }
  while( true ) {
    bVar5 = DAT_043b4600 & 1;
    uVar14 = _DAT_043b4600 & 0xff;
    DAT_043b4608 = uVar9;
    DAT_043b4610 = pbVar4;
    if (uVar13 == 0) break;
    bVar3 = DAT_043b4600 & 1;
    pbVar1 = &DAT_043b4601;
    if (bVar5 != 0) {
      pbVar1 = pbVar4;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043b4601;
    if (bVar3 != 0) {
      pbVar2 = pbVar4;
    }
    std::string::erase(0x43b4600,(long)pbVar2 - (long)pbVar1);
    uVar10 = (ulong)(DAT_043b4600 >> 1);
    uVar9 = DAT_043b4608;
    pbVar4 = DAT_043b4610;
    uVar13 = uVar10;
    if ((_DAT_043b4600 & 1) != 0) {
      uVar13 = DAT_043b4608;
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
      pbVar4 = &DAT_043b4601;
      if (!bVar7) {
        uVar10 = uVar9;
        pbVar4 = DAT_043b4610;
      }
      iVar8 = isblank((uint)pbVar4[uVar10 - 1]);
      if (iVar8 == 0) goto LAB_00f1f730;
      FUN_00f1b7b0(&DAT_043b4600);
      uVar14 = _DAT_043b4600 & 0xff;
      bVar7 = (_DAT_043b4600 & 1) == 0;
      uVar9 = DAT_043b4608;
      uVar13 = DAT_043b4608;
      if ((_DAT_043b4600 & 1) != 0) break;
      if (DAT_043b4600 >> 1 == 0) goto LAB_00f1f730;
    }
  }
LAB_00f1f730:
  uVar10 = FUN_00f1b7f0(&DAT_043b4600,&DAT_043b4620);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4600,uVar10);
      uVar10 = FUN_00f1b7f0(&DAT_043b4600,&DAT_043b4620);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_00f1b7f0(&DAT_043b4600,&DAT_043b4638);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b4600,uVar10);
      uVar10 = FUN_00f1b7f0(&DAT_043b4600,&DAT_043b4638);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


