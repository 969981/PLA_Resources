/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02174ba0; name: FUN_02174ba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02174ba0(void)

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
  
  if (((DAT_043dbd10 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043dbd10), iVar3 != 0)) {
    DAT_043dbce0 = 0x16;
    DAT_043dbcf0 = 0;
    DAT_043dbce1._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043dbce8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043dbcf8 = 0x2a;
    _DAT_043dbcec = 0;
    DAT_043dbd08._7_1_ = 0;
    DAT_043dbd08._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043dbd08._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043dbd08._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043dbd08._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043dbd08._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043dbd01 = s__anonymous_namespace__039071f8[8];
    DAT_043dbd01_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043dbd01_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043dbd01_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043dbd01_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043dbd06 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043dbd08._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043dbcf9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043dbcf9._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043dbd08._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043dbce0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dbd10);
  }
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar7 = plVar1;
  }
  __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0xa30,8);
  _DAT_043dbcc0 = 0xa31;
  DAT_043dbcc8 = 0xa2c;
  DAT_043dbcd0 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::FieldLookAtComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19>, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_look_at_component_glue.cpp:10:31)>, char const (&)[18], void (field::FieldLookAtComponent::*)(field::LookAtRequestType, field::LookAtRequestDisableType, bool), char const (&)[12], void (field::FieldLookAtComponent::*)(field::LookAtRequestType, const gfl::math::Vector3 &), char const (&)[23], void (field::FieldLookAtComponent::*)(field::LookAtRequestType, const gfl::math::Vector3 &, float, float), char const (&)[35], void (field::FieldLookAtComponent::*)(field::LookAtRequestType, int, const gfl::math::Vector3 &, float, float), char const (&)[12], bool (field::FieldLookAtComponent::*)(field::LookAtRequestType, float, float), char const (&)[23], bool (field::FieldLookAtComponent::*)(field::LookAtRequestType, float, float, float, float), char const (&)[35], bool (field::FieldLookAtComponent::*)(field::LookAtRequestType, int, float, float, float, float), char const (&)[16], bool (field::FieldLookAtComponent::*)(field::LookAtRequestType, field::content::FieldCharacterComponent *), char const (&)[27], bool (field::FieldLookAtComponent::*)(field::LookAtRequestType, field::content::FieldCharacterComponent *, float, float), char const (&)[39], bool (field::FieldLookAtComponent::*)(field::LookAtRequestType, int, field::content::FieldCharacterComponent *, float, float), char const (&)[20], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_look_at_component_glue.cpp:21:29), char const (&)[31], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_look_at_component_glue.cpp:22:40), char const (&)[43], (lambda at C:/jenkins/workspace..." /* TRUNCATED STRING LITERAL */
         ,0xa2c);
  *(undefined1 *)((long)__dest + 0xa2c) = 0;
  std::string::find(-0x40,0x5b);
  uVar4 = std::string::find(-0x40,0x3d);
  uVar5 = std::string::rfind(-0x40,0x5d);
  if (uVar5 == 0xffffffffffffffff) {
    if ((_DAT_043dbcc0 & 1) == 0) {
      uVar5 = (ulong)(DAT_043dbcc0 >> 1);
    }
    else {
      uVar5 = DAT_043dbcc8;
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
    if ((_DAT_043dbcc0 & 1) == 0) {
      uVar4 = (ulong)(DAT_043dbcc0 >> 1);
    }
    else {
      uVar4 = DAT_043dbcc8;
    }
  }
  if (uVar9 < uVar4 - 1) {
    uVar9 = uVar9 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043dbcc0,uVar9,uVar5 - uVar9,
                      (allocator *)&DAT_043dbcc0);
  FUN_0216d88c(&DAT_043dbcc0);
  _DAT_043dbcc0 = local_58;
  DAT_043dbcc8 = uStack_50;
  DAT_043dbcd0 = local_48;
  lVar6 = FUN_0216d768(&DAT_043dbcc0);
  if (lVar6 != -1) {
    std::string::erase(0x43dbcc0,lVar6 - 2);
  }
  uVar9 = _DAT_043dbcc0 & 0xff;
  uVar4 = (ulong)(DAT_043dbcc0 >> 1);
  bVar11 = DAT_043dbcc0 & 1;
  uVar5 = uVar4;
  if ((_DAT_043dbcc0 & 1) != 0) {
    uVar5 = DAT_043dbcc8;
  }
  uVar10 = DAT_043dbcc8;
  if (uVar5 != 0) {
    if ((_DAT_043dbcc0 & 1) == 0) {
      pbVar8 = &DAT_043dbcc1;
    }
    else {
      pbVar8 = DAT_043dbcd0;
    }
    while( true ) {
      uVar10 = DAT_043dbcc8;
      iVar3 = isblank((uint)*pbVar8);
      if (iVar3 == 0) break;
      std::string::erase(0x43dbcc0,0);
      uVar9 = _DAT_043dbcc0 & 0xff;
      uVar4 = (ulong)(DAT_043dbcc0 >> 1);
      bVar11 = DAT_043dbcc0 & 1;
      uVar5 = uVar4;
      if ((_DAT_043dbcc0 & 1) != 0) {
        uVar5 = DAT_043dbcc8;
      }
      uVar10 = DAT_043dbcc8;
      if (uVar5 == 0) break;
      pbVar8 = &DAT_043dbcc1;
      if ((_DAT_043dbcc0 & 1) != 0) {
        pbVar8 = DAT_043dbcd0;
      }
    }
  }
  bVar2 = bVar11 == 0;
  if (!bVar2) {
    uVar4 = uVar10;
  }
  while (uVar4 != 0) {
    uVar5 = uVar9 >> 1;
    pbVar8 = &DAT_043dbcc1;
    if (!bVar2) {
      uVar5 = uVar10;
      pbVar8 = DAT_043dbcd0;
    }
    iVar3 = isblank((uint)pbVar8[uVar5 - 1]);
    if (iVar3 == 0) break;
    FUN_0216d784(&DAT_043dbcc0);
    uVar9 = _DAT_043dbcc0 & 0xff;
    bVar2 = (_DAT_043dbcc0 & 1) == 0;
    uVar10 = DAT_043dbcc8;
    uVar4 = _DAT_043dbcc0 >> 1 & 0x7f;
    if (!bVar2) {
      uVar4 = DAT_043dbcc8;
    }
  }
  uVar5 = FUN_0216d7c4(&DAT_043dbcc0,&DAT_043dbce0);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43dbcc0,uVar5);
      uVar5 = FUN_0216d7c4(&DAT_043dbcc0,&DAT_043dbce0);
    } while (uVar5 != 0xffffffffffffffff);
  }
  uVar5 = FUN_0216d7c4(&DAT_043dbcc0,&DAT_043dbcf8);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43dbcc0,uVar5);
      uVar5 = FUN_0216d7c4(&DAT_043dbcc0,&DAT_043dbcf8);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return;
}


