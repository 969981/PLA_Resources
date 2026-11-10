/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025177f0; name: FUN_025177f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025177f0(void)

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
  ulong uVar10;
  byte bVar11;
  ulong local_58;
  ulong uStack_50;
  byte *local_48;
  
  if (((DAT_043e8b60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e8b60), iVar3 != 0)) {
    DAT_043e8b30 = 0x16;
    DAT_043e8b40 = 0;
    DAT_043e8b31._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e8b38 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e8b48 = 0x2a;
    _DAT_043e8b3c = 0;
    DAT_043e8b58._7_1_ = 0;
    DAT_043e8b58._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e8b58._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e8b58._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e8b58._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e8b58._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e8b51 = s__anonymous_namespace__039071f8[8];
    DAT_043e8b51_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e8b51_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e8b51_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e8b51_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e8b56 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e8b58._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e8b49._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e8b49._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e8b58._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e8b30,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8b60);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x1d0,8);
  _DAT_043e8b10 = 0x1d1;
  DAT_043e8b18 = 0x1c2;
  DAT_043e8b20 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::character::RootMotionAdjuster, std::__1::integer_sequence<unsigned long, 0, 1>, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/root_motion_adjuster_glue.cpp:11:31)>, char const (&)[16], void (field::character::RootMotionAdjuster::*)(bool)>, seperator_mark = int]"
         ,0x1c2);
  *(undefined1 *)((long)__dest + 0x1c2) = 0;
  std::string::find('\x10',0x5b);
  uVar4 = std::string::find('\x10',0x3d);
  uVar5 = std::string::rfind('\x10',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043e8b10 & 1) == 0) {
      uVar5 = (ulong)(DAT_043e8b10 >> 1);
    }
    else {
      uVar5 = DAT_043e8b18;
    }
    uVar9 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar9 = uVar4;
    }
    uVar4 = uVar5;
  }
  else {
    uVar9 = 0;
    if (uVar4 != 0xffffffffffffffff) {
      uVar9 = uVar4;
    }
    if ((_DAT_043e8b10 & 1) == 0) {
      uVar4 = (ulong)(DAT_043e8b10 >> 1);
    }
    else {
      uVar4 = DAT_043e8b18;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043e8b10,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043e8b10);
  FUN_02517114(&DAT_043e8b10);
  _DAT_043e8b10 = local_58;
  DAT_043e8b18 = uStack_50;
  DAT_043e8b20 = local_48;
  lVar6 = FUN_02516ff0(&DAT_043e8b10);
  if (lVar6 != -1) {
    std::string::erase(0x43e8b10,lVar6 - 2);
  }
  uVar9 = _DAT_043e8b10 & 0xff;
  uVar4 = (ulong)(DAT_043e8b10 >> 1);
  bVar11 = DAT_043e8b10 & 1;
  uVar5 = uVar4;
  if ((_DAT_043e8b10 & 1) != 0) {
    uVar5 = DAT_043e8b18;
  }
  uVar10 = DAT_043e8b18;
  if (uVar5 != 0) {
    if ((_DAT_043e8b10 & 1) == 0) {
      pbVar8 = &DAT_043e8b11;
    }
    else {
      pbVar8 = DAT_043e8b20;
    }
    while( true ) {
      uVar10 = DAT_043e8b18;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43e8b10,0);
      uVar9 = _DAT_043e8b10 & 0xff;
      uVar4 = (ulong)(DAT_043e8b10 >> 1);
      bVar11 = DAT_043e8b10 & 1;
      uVar5 = uVar4;
      if ((_DAT_043e8b10 & 1) != 0) {
        uVar5 = DAT_043e8b18;
      }
      uVar10 = DAT_043e8b18;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043e8b11;
      if ((_DAT_043e8b10 & 1) != 0) {
        pbVar8 = DAT_043e8b20;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043e8b11;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043e8b20;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_0251700c(&DAT_043e8b10);
    uVar9 = _DAT_043e8b10 & 0xff;
    bVar2 = (_DAT_043e8b10 & 1) == 0;
    uVar10 = DAT_043e8b18;
    uVar4 = _DAT_043e8b10 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043e8b18;
    }
  }
  uVar5 = FUN_0251704c(&DAT_043e8b10,&DAT_043e8b30);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e8b10,uVar5);
      uVar5 = FUN_0251704c(&DAT_043e8b10,&DAT_043e8b30);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_0251704c(&DAT_043e8b10,&DAT_043e8b48);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e8b10,uVar5);
      uVar5 = FUN_0251704c(&DAT_043e8b10,&DAT_043e8b48);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


