/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0218da90; name: FUN_0218da90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0218da90(void)

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
  
  if (((DAT_043dc128 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043dc128), iVar3 != 0)) {
    DAT_043dc0f8 = 0x16;
    DAT_043dc108 = 0;
    DAT_043dc0f9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043dc100 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043dc110 = 0x2a;
    _DAT_043dc104 = 0;
    DAT_043dc120._7_1_ = 0;
    DAT_043dc120._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043dc120._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043dc120._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043dc120._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043dc120._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043dc119 = s__anonymous_namespace__039071f8[8];
    DAT_043dc119_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043dc119_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043dc119_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043dc119_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043dc11e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043dc120._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043dc111._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043dc111._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043dc120._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043dc0f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dc128);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0xc60,8);
  _DAT_043dc0d8 = 0xc61;
  DAT_043dc0e0 = 0xc56;
  DAT_043dc0e8 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::ui::FieldMessageWindowManager, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26>, char const (&)[34], void (field::content::ui::FieldMessageWindowManager::*)(field::content::ui::WindowType, const gfl::FnvHash64 &, const gfl::FnvHash64 &, const gfl::FnvHash64 &, int, field::content::ui::WindowPriority), char const (&)[36], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_message_window_manager_glue.cpp:15:45), char const (&)[14], void (field::content::ui::FieldMessageWindowManager::*)(const gfl::FnvHash64 &), char const (&)[12], void (field::content::ui::FieldMessageWindowManager::*)(field::content::ui::WindowType, const gfl::FnvHash64 &, const gfl::FnvHash64 &, const gfl::FnvHash64 &, int, field::content::ui::WindowPriority), char const (&)[17], bool (field::content::ui::FieldMessageWindowManager::*)() const, char const (&)[30], void (field::content::ui::FieldMessageWindowManager::*)(bool), char const (&)[19], void (field::content::ui::FieldMessageWindowManager::*)(), char const (&)[21], bool (field::content::ui::FieldMessageWindowManager::*)() const, char const (&)[22], bool (field::content::ui::FieldMessageWindowManager::*)() const, char const (&)[15], bool (field::content::ui::FieldMessageWindowManager::*)() const, char const (&)[20], bool (field::content::ui::FieldMessageWindowManager::*)() const, char const (&)[18], void (field::content::ui::FieldMessageWindowManager::*)(const gfl::FnvHash64 &, const gfl::FnvHash64 &, field::content::ui::WindowPriority), char const (&)[15], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_message_window_manager_glue.cpp:26:24), char const (&)[18], void (field::content::ui::FieldMessageWindowManager::*)(int), char const (&)[17], void (field::content::ui::FieldMessage..." /* TRUNCATED STRING LITERAL */
         ,0xc56);
  *(undefined1 *)((long)__dest + 0xc56) = 0;
  std::string::find(-0x28,0x5b);
  uVar4 = std::string::find(-0x28,0x3d);
  uVar5 = std::string::rfind(-0x28,0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043dc0d8 & 1) == 0) {
      uVar5 = (ulong)(DAT_043dc0d8 >> 1);
    }
    else {
      uVar5 = DAT_043dc0e0;
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
    if ((_DAT_043dc0d8 & 1) == 0) {
      uVar4 = (ulong)(DAT_043dc0d8 >> 1);
    }
    else {
      uVar4 = DAT_043dc0e0;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043dc0d8,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043dc0d8);
  FUN_02185b7c(&DAT_043dc0d8);
  _DAT_043dc0d8 = local_58;
  DAT_043dc0e0 = uStack_50;
  DAT_043dc0e8 = local_48;
  lVar6 = FUN_02185a58(&DAT_043dc0d8);
  if (lVar6 != -1) {
    std::string::erase(0x43dc0d8,lVar6 - 2);
  }
  uVar9 = _DAT_043dc0d8 & 0xff;
  uVar4 = (ulong)(DAT_043dc0d8 >> 1);
  bVar11 = DAT_043dc0d8 & 1;
  uVar5 = uVar4;
  if ((_DAT_043dc0d8 & 1) != 0) {
    uVar5 = DAT_043dc0e0;
  }
  uVar10 = DAT_043dc0e0;
  if (uVar5 != 0) {
    if ((_DAT_043dc0d8 & 1) == 0) {
      pbVar8 = &DAT_043dc0d9;
    }
    else {
      pbVar8 = DAT_043dc0e8;
    }
    while( true ) {
      uVar10 = DAT_043dc0e0;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43dc0d8,0);
      uVar9 = _DAT_043dc0d8 & 0xff;
      uVar4 = (ulong)(DAT_043dc0d8 >> 1);
      bVar11 = DAT_043dc0d8 & 1;
      uVar5 = uVar4;
      if ((_DAT_043dc0d8 & 1) != 0) {
        uVar5 = DAT_043dc0e0;
      }
      uVar10 = DAT_043dc0e0;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043dc0d9;
      if ((_DAT_043dc0d8 & 1) != 0) {
        pbVar8 = DAT_043dc0e8;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043dc0d9;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043dc0e8;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_02185a74(&DAT_043dc0d8);
    uVar9 = _DAT_043dc0d8 & 0xff;
    bVar2 = (_DAT_043dc0d8 & 1) == 0;
    uVar10 = DAT_043dc0e0;
    uVar4 = _DAT_043dc0d8 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043dc0e0;
    }
  }
  uVar5 = FUN_02185ab4(&DAT_043dc0d8,&DAT_043dc0f8);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43dc0d8,uVar5);
      uVar5 = FUN_02185ab4(&DAT_043dc0d8,&DAT_043dc0f8);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_02185ab4(&DAT_043dc0d8,&DAT_043dc110);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43dc0d8,uVar5);
      uVar5 = FUN_02185ab4(&DAT_043dc0d8,&DAT_043dc110);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


