/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0102ec60; name: FUN_0102ec60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0102ec60(void)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong local_58;
  ulong uStack_50;
  byte *local_48;
  
  if (((DAT_043b8ad8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b8ad8), iVar3 != 0)) {
    DAT_043b8aa8 = 0x16;
    DAT_043b8ab8 = 0;
    DAT_043b8aa9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b8ab0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b8ac0 = 0x2a;
    _DAT_043b8ab4 = 0;
    DAT_043b8ad0._7_1_ = 0;
    DAT_043b8ad0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b8ad0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b8ad0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b8ad0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b8ad0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b8ac9 = s__anonymous_namespace__039071f8[8];
    DAT_043b8ac9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b8ac9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b8ac9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b8ac9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b8ace = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b8ad0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b8ac1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b8ac1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b8ad0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b8aa8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8ad8);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0xe0,8);
  _DAT_043b8a88 = 0xe1;
  DAT_043b8a90 = 0xd4;
  DAT_043b8a98 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_math_functions.cpp:148:17), seperator_mark = int]"
         ,0xd4);
  *(undefined1 *)((long)__dest + 0xd4) = 0;
  std::string::find(-0x78,0x5b);
  uVar4 = std::string::find(-0x78,0x3d);
  uVar5 = std::string::rfind(-0x78,0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043b8a88 & 1) == 0) {
      uVar5 = (ulong)(DAT_043b8a88 >> 1);
    }
    else {
      uVar5 = DAT_043b8a90;
    }
    uVar11 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar11 = uVar4;
    }
    uVar4 = uVar5;
  }
  else {
    uVar11 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar11 = uVar4;
    }
    if ((_DAT_043b8a88 & 1) == 0) {
      uVar4 = (ulong)(DAT_043b8a88 >> 1);
    }
    else {
      uVar4 = DAT_043b8a90;
    }
  }
  if (uVar11 < uVar4 - 1) {
    uVar11 = uVar11 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043b8a88,uVar11,uVar5 - uVar11,
                      (allocator *)&DAT_043b8a88);
  FUN_0100cb28(&DAT_043b8a88);
  _DAT_043b8a88 = local_58;
  DAT_043b8a90 = uStack_50;
  DAT_043b8a98 = local_48;
  lVar6 = FUN_0100ca04(&DAT_043b8a88);
  if (lVar6 != -1) {
    std::string::erase(0x43b8a88,lVar6 - 2);
  }
  uVar5 = _DAT_043b8a88 & 0xff;
  uVar11 = (ulong)(DAT_043b8a88 >> 1);
  bVar10 = DAT_043b8a88 & 1;
  uVar4 = uVar11;
  if ((_DAT_043b8a88 & 1) != 0) {
    uVar4 = DAT_043b8a90;
  }
  uVar9 = DAT_043b8a90;
  if (uVar4 != 0) {
    if ((_DAT_043b8a88 & 1) == 0) {
      pbVar8 = &DAT_043b8a89;
    }
    else {
      pbVar8 = DAT_043b8a98;
    }
    while( true ) {
      uVar9 = DAT_043b8a90;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43b8a88,0);
      uVar5 = _DAT_043b8a88 & 0xff;
      uVar11 = (ulong)(DAT_043b8a88 >> 1);
      bVar10 = DAT_043b8a88 & 1;
      uVar4 = uVar11;
      if ((_DAT_043b8a88 & 1) != 0) {
        uVar4 = DAT_043b8a90;
      }
      uVar9 = DAT_043b8a90;
      if (uVar4 == 0) break;
      pbVar8 = &DAT_043b8a89;
      if ((_DAT_043b8a88 & 1) != 0) {
        pbVar8 = DAT_043b8a98;
      }
    }
  }
  bVar2 = bVar10 == 0;
  uVar4 = uVar9;
  if (bVar10 == 0) {
    uVar4 = uVar11;
  }
  while (uVar4 != 0) {
    while( true ) {
      uVar5 = uVar5 >> 1;
      pbVar8 = &DAT_043b8a89;
      if (!bVar2) {
        uVar5 = uVar9;
        pbVar8 = DAT_043b8a98;
      }
      iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
      if (iVar3 == 0) goto LAB_0102ee6c;
      FUN_0100ca20(&DAT_043b8a88);
      uVar5 = _DAT_043b8a88 & 0xff;
      bVar2 = (_DAT_043b8a88 & 1) == 0;
      uVar9 = DAT_043b8a90;
      uVar4 = DAT_043b8a90;
      if ((_DAT_043b8a88 & 1) != 0) break;
      if (DAT_043b8a88 >> 1 == 0) goto LAB_0102ee6c;
    }
  }
LAB_0102ee6c:
  uVar5 = FUN_0100ca60(&DAT_043b8a88,&DAT_043b8aa8);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b8a88,uVar5);
      uVar5 = FUN_0100ca60(&DAT_043b8a88,&DAT_043b8aa8);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_0100ca60(&DAT_043b8a88,&DAT_043b8ac0);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b8a88,uVar5);
      uVar5 = FUN_0100ca60(&DAT_043b8a88,&DAT_043b8ac0);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


