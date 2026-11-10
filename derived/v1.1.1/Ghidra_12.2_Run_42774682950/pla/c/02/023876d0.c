/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023876d0; name: FUN_023876d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023876d0(void)

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
  
  if (((DAT_043e2998 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2998), iVar8 != 0)) {
    DAT_043e2968 = 0x16;
    DAT_043e2978 = 0;
    DAT_043e2969._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043e2970 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043e2980 = 0x2a;
    _DAT_043e2974 = 0;
    DAT_043e2990._7_1_ = 0;
    DAT_043e2990._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043e2990._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043e2990._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043e2990._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043e2990._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043e2989 = s__anonymous_namespace__039071f8[8];
    DAT_043e2989_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043e2989_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043e2989_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043e2989_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043e298e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043e2990._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043e2981._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043e2981._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043e2990._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043e2968,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2998);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar12 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar12 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x9d0,8);
  _DAT_043e2948 = 0x9d1;
  DAT_043e2950 = 0x9cf;
  DAT_043e2958 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::player::PlayerInputInfo, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35>, char const (&)[10], bool field::player::PlayerInputInfo::*, char const (&)[20], bool field::player::PlayerInputInfo::*, char const (&)[18], bool field::player::PlayerInputInfo::*, char const (&)[22], bool field::player::PlayerInputInfo::*, char const (&)[20], bool field::player::PlayerInputInfo::*, char const (&)[17], bool field::player::PlayerInputInfo::*, char const (&)[20], bool field::player::PlayerInputInfo::*, char const (&)[16], bool field::player::PlayerInputInfo::*, char const (&)[19], bool field::player::PlayerInputInfo::*, char const (&)[25], bool field::player::PlayerInputInfo::*, char const (&)[26], bool field::player::PlayerInputInfo::*, char const (&)[30], bool field::player::PlayerInputInfo::*, char const (&)[22], bool field::player::PlayerInputInfo::*, char const (&)[14], bool field::player::PlayerInputInfo::*, char const (&)[18], bool field::player::PlayerInputInfo::*, char const (&)[15], bool field::player::PlayerInputInfo::*, char const (&)[15], bool field::player::PlayerInputInfo::*, char const (&)[12], bool field::player::PlayerInputInfo::*, char const (&)[26], bool field::player::PlayerInputInfo::*, char const (&)[14], bool field::player::PlayerInputInfo::*, char const (&)[20], bool field::player::PlayerInputInfo::*, char const (&)[24], bool field::player::PlayerInputInfo::*, char const (&)[21], bool field::player::PlayerInputInfo::*, char const (&)[15], bool field::player::PlayerInputInfo::*, char const (&)[20], bool field::player::PlayerInputInfo::*, char const (&)[27], bool field::player::PlayerInputInfo::*, char const (&)[26], bool field::player::PlayerInputInfo::*, char const (&)[25], bool field::player::PlayerInputInfo::*, char const (&)[18], bool field::player::PlayerInputInfo::*, char const (&)[15], bool..." /* TRUNCATED STRING LITERAL */
         ,0x9cf);
  *(undefined1 *)((long)__dest + 0x9cf) = 0;
  std::string::find('H',0x5b);
  uVar9 = std::string::find('H',0x3d);
  uVar10 = std::string::rfind('H',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043e2948 & 1) == 0) {
      uVar10 = (ulong)(DAT_043e2948 >> 1);
    }
    else {
      uVar10 = DAT_043e2950;
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
    if ((_DAT_043e2948 & 1) == 0) {
      uVar9 = (ulong)(DAT_043e2948 >> 1);
    }
    else {
      uVar9 = DAT_043e2950;
    }
  }
  if (uVar13 < uVar9 - 1) {
    uVar13 = uVar13 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043e2948,uVar13,uVar10 - uVar13,
                      (allocator *)&DAT_043e2948);
  FUN_0238637c(&DAT_043e2948);
  _DAT_043e2948 = local_78;
  DAT_043e2950 = uStack_70;
  DAT_043e2958 = local_68;
  lVar11 = FUN_02386258(&DAT_043e2948);
  if (lVar11 != -1) {
    std::string::erase(0x43e2948,lVar11 - 2);
  }
  bVar7 = (_DAT_043e2948 & 1) == 0;
  uVar9 = (ulong)(DAT_043e2948 >> 1);
  uVar13 = _DAT_043e2948;
  uVar5 = DAT_043e2950;
  pbVar3 = DAT_043e2958;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = DAT_043e2950;
  }
  while( true ) {
    bVar4 = DAT_043e2948 & 1;
    _DAT_043e2948 = uVar13;
    DAT_043e2950 = uVar5;
    DAT_043e2958 = pbVar3;
    if (uVar10 == 0) break;
    pbVar1 = &DAT_043e2949;
    if (bVar4 != 0) {
      pbVar1 = pbVar3;
    }
    iVar8 = isblank((uint)*pbVar1);
    if (iVar8 == 0) break;
    pbVar2 = &DAT_043e2949;
    if (!bVar7) {
      pbVar2 = pbVar3;
    }
    std::string::erase(0x43e2948,(long)pbVar2 - (long)pbVar1);
    bVar7 = (_DAT_043e2948 & 1) == 0;
    uVar9 = (ulong)(DAT_043e2948 >> 1);
    uVar13 = _DAT_043e2948;
    uVar5 = DAT_043e2950;
    pbVar3 = DAT_043e2958;
    uVar10 = uVar9;
    if (!bVar7) {
      uVar10 = DAT_043e2950;
    }
  }
  bVar7 = bVar4 == 0;
  if (!bVar7) {
    uVar9 = uVar5;
  }
  while (uVar9 != 0) {
    uVar10 = (uVar13 & 0xff) >> 1;
    pbVar3 = &DAT_043e2949;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar3 = DAT_043e2958;
    }
    iVar8 = isblank((uint)pbVar3[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_02386274(&DAT_043e2948);
    bVar7 = (_DAT_043e2948 & 1) == 0;
    uVar5 = DAT_043e2950;
    uVar9 = _DAT_043e2948 >> 1 & 0x7f;
    uVar13 = _DAT_043e2948;
    if (!bVar7) {
      uVar9 = DAT_043e2950;
    }
  }
  uVar10 = FUN_023862b4(&DAT_043e2948,&DAT_043e2968);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2948,uVar10);
      uVar10 = FUN_023862b4(&DAT_043e2948,&DAT_043e2968);
    } while (uVar10 != 0xffffffffffffffff);
  }
  uVar10 = FUN_023862b4(&DAT_043e2948,&DAT_043e2980);
  if (uVar10 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43e2948,uVar10);
      uVar10 = FUN_023862b4(&DAT_043e2948,&DAT_043e2980);
    } while (uVar10 != 0xffffffffffffffff);
  }
  return;
}


