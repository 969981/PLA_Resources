/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023a64d0; name: FUN_023a64d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023a64d0(void)

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
  
  if (((DAT_043e2c48 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2c48), iVar8 != 0)) {
    DAT_043e2c18 = 0x16;
    DAT_043e2c28 = 0;
    DAT_043e2c19._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e2c20 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e2c30 = 0x2a;
    _DAT_043e2c24 = 0;
    DAT_043e2c40._7_1_ = 0;
    DAT_043e2c40._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e2c40._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e2c40._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e2c40._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e2c40._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e2c39 = s__anonymous_namespace__039071f8[8];
    DAT_043e2c39_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e2c39_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e2c39_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e2c39_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e2c3e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e2c40._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e2c31._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e2c31._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e2c40._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e2c18,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2c48);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  _DAT_043e2bf8 = 0x91;
  DAT_043e2c00 = 0x8c;
  DAT_043e2c08 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::ride::RideAnimationController>, seperator_mark = int]"
         ,0x8c);
  *(undefined1 *)((long)__dest + 0x8c) = 0;
  std::string::find(-8,0x5b);
  uVar9 = std::string::find(-8,0x3d);
  uVar10 = std::string::rfind(-8,0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e2bf8 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e2bf8 >> 1);
    }
    else {
      uVar10 = DAT_043e2c00;
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
    if ((_DAT_043e2bf8 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e2bf8 >> 1);
    }
    else {
      uVar9 = DAT_043e2c00;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e2bf8,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e2bf8);
  FUN_023a6270(&DAT_043e2bf8);
  _DAT_043e2bf8 = local_78;
  DAT_043e2c00 = uStack_70;
  DAT_043e2c08 = local_68;
  lVar11 = FUN_023a6148(&DAT_043e2bf8);
  if (lVar11 != -1) {
    std::string::erase(0x43e2bf8,lVar11 - 2);
  }
  bVar7 = (_DAT_043e2bf8 & 1) == 0;
  uVar9 = (ulong)(DAT_043e2bf8 >> 1);
  uVar13 = _DAT_043e2bf8;
  uVar5 = DAT_043e2c00;
  pbVar3 = DAT_043e2c08;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043e2c00;
  }
  while( true ) {
    bVar4 = DAT_043e2bf8 & 1;
    _DAT_043e2bf8 = uVar13;
    DAT_043e2c00 = uVar5;
    DAT_043e2c08 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043e2bf9;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e2bf9;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43e2bf8,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043e2bf8 & 1) == 0;
    uVar9 = (ulong)(DAT_043e2bf8 >> 1);
    uVar13 = _DAT_043e2bf8;
    uVar5 = DAT_043e2c00;
    pbVar3 = DAT_043e2c08;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043e2c00;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043e2bf9;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043e2c08;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_023a6164(&DAT_043e2bf8);
    bVar7 = (_DAT_043e2bf8 & 1) == 0;
    uVar13 = _DAT_043e2bf8;
    uVar5 = DAT_043e2c00;
    uVar9 = _DAT_043e2bf8 >> 1 & 0x7f;
    if (!bVar7) {
      uVar9 = DAT_043e2c00;
    }
  }
  uVar10 = FUN_023a61a4(&DAT_043e2bf8,&DAT_043e2c18);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2bf8,uVar10);
      uVar10 = FUN_023a61a4(&DAT_043e2bf8,&DAT_043e2c18);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_023a61a4(&DAT_043e2bf8,&DAT_043e2c30);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2bf8,uVar10);
      uVar10 = FUN_023a61a4(&DAT_043e2bf8,&DAT_043e2c30);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


