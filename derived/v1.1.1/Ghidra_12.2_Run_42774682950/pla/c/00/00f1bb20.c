/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1bb20; name: FUN_00f1bb20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1bb20(void)

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
  
  if (((DAT_043b4518 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4518), iVar8 != 0)) {
    DAT_043b44e8 = 0x16;
    DAT_043b44f8 = 0;
    DAT_043b44e9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b44f0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b4500 = 0x2a;
    _DAT_043b44f4 = 0;
    DAT_043b4510._7_1_ = 0;
    DAT_043b4510._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b4510._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b4510._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b4510._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b4510._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b4509 = s__anonymous_namespace__039071f8[8];
    DAT_043b4509_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b4509_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b4509_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b4509_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b450e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b4510._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b4501._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b4501._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b4510._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b44e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4518);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
  _DAT_043b44c8 = 0x91;
  DAT_043b44d0 = 0x8c;
  DAT_043b44d8 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<common::lua::command::PokemonCommand>, seperator_mark = int]"
         ,0x8c);
  *(undefined1 *)((long)__dest + 0x8c) = 0;
  std::string::find(-0x38,0x5b);
  uVar9 = std::string::find(-0x38,0x3d);
  uVar10 = std::string::rfind(-0x38,0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043b44c8 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b44c8 >> 1);
    }
    else {
      uVar10 = DAT_043b44d0;
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
    if ((_DAT_043b44c8 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b44c8 >> 1);
    }
    else {
      uVar9 = DAT_043b44d0;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b44c8,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043b44c8);
  FUN_00f1b8bc(&DAT_043b44c8);
  _DAT_043b44c8 = local_78;
  DAT_043b44d0 = uStack_70;
  DAT_043b44d8 = local_68;
  lVar11 = FUN_00f1b794(&DAT_043b44c8);
  if (lVar11 != -1) {
    std::string::erase(0x43b44c8,lVar11 - 2);
  }
  uVar10 = (ulong)(DAT_043b44c8 >> 1);
  uVar9 = DAT_043b44d0;
  pbVar4 = DAT_043b44d8;
  uVar13 = uVar10;
  if ((_DAT_043b44c8 & 1) != 0) {
    uVar13 = DAT_043b44d0;
  }
  while( true ) {
    bVar5 = DAT_043b44c8 & 1;
    uVar14 = _DAT_043b44c8 & 0xff;
    DAT_043b44d0 = uVar9;
    DAT_043b44d8 = pbVar4;
    if (uVar13 == 0) break;
    bVar3 = DAT_043b44c8 & 1;
    pbVar1 = &DAT_043b44c9;
    if (bVar5 != 0) {
      pbVar1 = pbVar4;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043b44c9;
    if (bVar3 != 0) {
      pbVar2 = pbVar4;
    }
    std::string::erase(0x43b44c8,(long)pbVar2 - (long)pbVar1);
    uVar10 = (ulong)(DAT_043b44c8 >> 1);
    uVar9 = DAT_043b44d0;
    pbVar4 = DAT_043b44d8;
    uVar13 = uVar10;
    if ((_DAT_043b44c8 & 1) != 0) {
      uVar13 = DAT_043b44d0;
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
      pbVar4 = &DAT_043b44c9;
      if (!bVar7) {
        uVar10 = uVar9;
        pbVar4 = DAT_043b44d8;
      }
      iVar8 = isblank((uint)pbVar4[uVar10 - 1]);
      if (iVar8 == 0) goto LAB_00f1bd40;
      FUN_00f1b7b0(&DAT_043b44c8);
      uVar14 = _DAT_043b44c8 & 0xff;
      bVar7 = (_DAT_043b44c8 & 1) == 0;
      uVar9 = DAT_043b44d0;
      uVar13 = DAT_043b44d0;
      if ((_DAT_043b44c8 & 1) != 0) break;
      if (DAT_043b44c8 >> 1 == 0) goto LAB_00f1bd40;
    }
  }
LAB_00f1bd40:
  uVar10 = FUN_00f1b7f0(&DAT_043b44c8,&DAT_043b44e8);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b44c8,uVar10);
      uVar10 = FUN_00f1b7f0(&DAT_043b44c8,&DAT_043b44e8);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_00f1b7f0(&DAT_043b44c8,&DAT_043b4500);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b44c8,uVar10);
      uVar10 = FUN_00f1b7f0(&DAT_043b44c8,&DAT_043b4500);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


