/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01024440; name: FUN_01024440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01024440(void)

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
  
  if (((DAT_043b8980 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b8980), iVar3 != 0)) {
    DAT_043b8950 = 0x16;
    DAT_043b8960 = 0;
    DAT_043b8951._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b8958 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b8968 = 0x2a;
    _DAT_043b895c = 0;
    DAT_043b8978._7_1_ = 0;
    DAT_043b8978._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b8978._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b8978._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b8978._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b8978._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b8971 = s__anonymous_namespace__039071f8[8];
    DAT_043b8971_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b8971_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b8971_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b8971_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b8976 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b8978._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b8969._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b8969._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b8978._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b8950,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8980);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0xa00,8);
  _DAT_043b8930 = 0xa01;
  DAT_043b8938 = 0x9f2;
  DAT_043b8940 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<gfl::math::Vector4, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25>, char const (&)[5], float (gfl::math::Vector4::*)() const, char const (&)[5], float (gfl::math::Vector4::*)() const, char const (&)[5], float (gfl::math::Vector4::*)() const, char const (&)[5], float (gfl::math::Vector4::*)() const, char const (&)[5], void (gfl::math::Vector4::*)(float), char const (&)[5], void (gfl::math::Vector4::*)(float), char const (&)[5], void (gfl::math::Vector4::*)(float), char const (&)[5], void (gfl::math::Vector4::*)(float), char const (&)[4], void (gfl::math::Vector4::*)(float, float, float, float), char const (&)[10], bool (gfl::math::Vector4::*)(), char const (&)[4], float (gfl::math::Vector4::*)(const gfl::math::Vector4 &) const, char const (&)[7], float (gfl::math::Vector4::*)() const, char const (&)[14], float (gfl::math::Vector4::*)() const, char const (&)[12], gfl::math::Vector4 (*)(const gfl::math::Vector4 &), char const (&)[6], float (*)(const gfl::math::Vector4 &, const gfl::math::Vector4 &), char const (&)[9], float (*)(const gfl::math::Vector4 &, const gfl::math::Vector4 &), char const (&)[16], float (*)(const gfl::math::Vector4 &, const gfl::math::Vector4 &), char const (&)[5], gfl::math::Vector4 (*)(const gfl::math::Vector4 &, const gfl::math::Vector4 &, float), char const (&)[5], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_math_functions.cpp:98:13), char const (&)[4], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_math_functions.cpp:99:12), char const (&)[6], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/lua_gfl_bind_math_functions.cpp:100:14), char const (&)[6], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/gfl_bind/..." /* TRUNCATED STRING LITERAL */
         ,0x9f2);
  *(undefined1 *)((long)__dest + 0x9f2) = 0;
  std::string::find('0',0x5b);
  uVar4 = std::string::find('0',0x3d);
  uVar5 = std::string::rfind('0',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043b8930 & 1) == 0) {
      uVar5 = (ulong)(DAT_043b8930 >> 1);
    }
    else {
      uVar5 = DAT_043b8938;
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
    if ((_DAT_043b8930 & 1) == 0) {
      uVar4 = (ulong)(DAT_043b8930 >> 1);
    }
    else {
      uVar4 = DAT_043b8938;
    }
  }
  if (uVar11 < uVar4 - 1) {
    uVar11 = uVar11 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043b8930,uVar11,uVar5 - uVar11,
                      (allocator *)&DAT_043b8930);
  FUN_0100cb28(&DAT_043b8930);
  _DAT_043b8930 = local_58;
  DAT_043b8938 = uStack_50;
  DAT_043b8940 = local_48;
  lVar6 = FUN_0100ca04(&DAT_043b8930);
  if (lVar6 != -1) {
    std::string::erase(0x43b8930,lVar6 - 2);
  }
  uVar5 = _DAT_043b8930 & 0xff;
  uVar11 = (ulong)(DAT_043b8930 >> 1);
  bVar10 = DAT_043b8930 & 1;
  uVar4 = uVar11;
  if ((_DAT_043b8930 & 1) != 0) {
    uVar4 = DAT_043b8938;
  }
  uVar9 = DAT_043b8938;
  if (uVar4 != 0) {
    if ((_DAT_043b8930 & 1) == 0) {
      pbVar8 = &DAT_043b8931;
    }
    else {
      pbVar8 = DAT_043b8940;
    }
    while( true ) {
      uVar9 = DAT_043b8938;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43b8930,0);
      uVar5 = _DAT_043b8930 & 0xff;
      uVar11 = (ulong)(DAT_043b8930 >> 1);
      bVar10 = DAT_043b8930 & 1;
      uVar4 = uVar11;
      if ((_DAT_043b8930 & 1) != 0) {
        uVar4 = DAT_043b8938;
      }
      uVar9 = DAT_043b8938;
      if (uVar4 == 0) break;
      pbVar8 = &DAT_043b8931;
      if ((_DAT_043b8930 & 1) != 0) {
        pbVar8 = DAT_043b8940;
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
      pbVar8 = &DAT_043b8931;
      if (!bVar2) {
        uVar5 = uVar9;
        pbVar8 = DAT_043b8940;
      }
      iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
      if (iVar3 == 0) goto LAB_0102467c;
      FUN_0100ca20(&DAT_043b8930);
      uVar5 = _DAT_043b8930 & 0xff;
      bVar2 = (_DAT_043b8930 & 1) == 0;
      uVar9 = DAT_043b8938;
      uVar4 = DAT_043b8938;
      if ((_DAT_043b8930 & 1) != 0) break;
      if (DAT_043b8930 >> 1 == 0) goto LAB_0102467c;
    }
  }
LAB_0102467c:
  uVar5 = FUN_0100ca60(&DAT_043b8930,&DAT_043b8950);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b8930,uVar5);
      uVar5 = FUN_0100ca60(&DAT_043b8930,&DAT_043b8950);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_0100ca60(&DAT_043b8930,&DAT_043b8968);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b8930,uVar5);
      uVar5 = FUN_0100ca60(&DAT_043b8930,&DAT_043b8968);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


