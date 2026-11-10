/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02512300; name: FUN_02512300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02512300(void)

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
  
  if (((DAT_043e8a80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e8a80), iVar3 != 0)) {
    DAT_043e8a50 = 0x16;
    DAT_043e8a60 = 0;
    DAT_043e8a51._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e8a58 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e8a68 = 0x2a;
    _DAT_043e8a5c = 0;
    DAT_043e8a78._7_1_ = 0;
    DAT_043e8a78._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e8a78._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e8a78._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e8a78._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e8a78._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e8a71 = s__anonymous_namespace__039071f8[8];
    DAT_043e8a71_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e8a71_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e8a71_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e8a71_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e8a76 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e8a78._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e8a69._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e8a69._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e8a78._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e8a50,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8a80);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x990,8);
  _DAT_043e8a30 = 0x991;
  DAT_043e8a38 = 0x98f;
  DAT_043e8a40 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::RideWhooguruStateContext, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19>, char const (&)[15], bool field::ride::RideWhooguruStateContext::*, char const (&)[11], bool field::ride::RideWhooguruStateContext::*, char const (&)[15], gfl::math::Vector3 field::ride::RideWhooguruStateContext::*, char const (&)[16], bool field::ride::RideWhooguruStateContext::*, char const (&)[22], int field::ride::RideWhooguruStateContext::*, char const (&)[33], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_whooguru_state_context_glue.cpp:24:42), char const (&)[36], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_whooguru_state_context_glue.cpp:25:45), char const (&)[38], bool (field::ride::RideWhooguruStateContext::*)() const, char const (&)[10], field::player::PlayerInputInfo field::ride::RideWhooguruStateContext::*, char const (&)[39], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_whooguru_state_context_glue.cpp:28:48), char const (&)[29], bool (field::ride::RideWhooguruStateContext::*)() const, char const (&)[31], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_whooguru_state_context_glue.cpp:30:40), char const (&)[31], bool (field::ride::RideWhooguruStateContext::*)() const, char const (&)[31], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_whooguru_state_context_glue.cpp:32:40), char const (&)[30], bool (field::ride::RideWhooguruStateContext::*)() const, char const (&)[29], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/ride_whooguru_state_context_glue.cpp:34:38), char const (&)[29], (l..." /* TRUNCATED STRING LITERAL */
         ,0x98f);
  *(undefined1 *)((long)__dest + 0x98f) = 0;
  std::string::find('0',0x5b);
  uVar4 = std::string::find('0',0x3d);
  uVar5 = std::string::rfind('0',0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043e8a30 & 1) == 0) {
      uVar5 = (ulong)(DAT_043e8a30 >> 1);
    }
    else {
      uVar5 = DAT_043e8a38;
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
    if ((_DAT_043e8a30 & 1) == 0) {
      uVar4 = (ulong)(DAT_043e8a30 >> 1);
    }
    else {
      uVar4 = DAT_043e8a38;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043e8a30,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043e8a30);
  FUN_0250d374(&DAT_043e8a30);
  _DAT_043e8a30 = local_58;
  DAT_043e8a38 = uStack_50;
  DAT_043e8a40 = local_48;
  lVar6 = FUN_0250d24c(&DAT_043e8a30);
  if (lVar6 != -1) {
    std::string::erase(0x43e8a30,lVar6 - 2);
  }
  uVar9 = _DAT_043e8a30 & 0xff;
  uVar4 = (ulong)(DAT_043e8a30 >> 1);
  bVar11 = DAT_043e8a30 & 1;
  uVar5 = uVar4;
  if ((_DAT_043e8a30 & 1) != 0) {
    uVar5 = DAT_043e8a38;
  }
  uVar10 = DAT_043e8a38;
  if (uVar5 != 0) {
    if ((_DAT_043e8a30 & 1) == 0) {
      pbVar8 = &DAT_043e8a31;
    }
    else {
      pbVar8 = DAT_043e8a40;
    }
    while( true ) {
      uVar10 = DAT_043e8a38;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43e8a30,0);
      uVar9 = _DAT_043e8a30 & 0xff;
      uVar4 = (ulong)(DAT_043e8a30 >> 1);
      bVar11 = DAT_043e8a30 & 1;
      uVar5 = uVar4;
      if ((_DAT_043e8a30 & 1) != 0) {
        uVar5 = DAT_043e8a38;
      }
      uVar10 = DAT_043e8a38;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043e8a31;
      if ((_DAT_043e8a30 & 1) != 0) {
        pbVar8 = DAT_043e8a40;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043e8a31;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043e8a40;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_0250d268(&DAT_043e8a30);
    uVar9 = _DAT_043e8a30 & 0xff;
    bVar2 = (_DAT_043e8a30 & 1) == 0;
    uVar10 = DAT_043e8a38;
    uVar4 = _DAT_043e8a30 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043e8a38;
    }
  }
  uVar5 = FUN_0250d2a8(&DAT_043e8a30,&DAT_043e8a50);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e8a30,uVar5);
      uVar5 = FUN_0250d2a8(&DAT_043e8a30,&DAT_043e8a50);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_0250d2a8(&DAT_043e8a30,&DAT_043e8a68);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e8a30,uVar5);
      uVar5 = FUN_0250d2a8(&DAT_043e8a30,&DAT_043e8a68);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


