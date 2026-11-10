/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1fe20; name: FUN_00f1fe20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1fe20(long param_1,long param_2)

{
  ulong *puVar1;
  char *pcVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  long lVar18;
  size_t sVar19;
  string *psVar20;
  void *__dest;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  byte *pbVar24;
  undefined8 uVar25;
  byte *pbVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  char *pcVar30;
  undefined1 *puVar31;
  long lVar32;
  undefined1 *local_d80;
  undefined8 uStack_d78;
  long local_d70;
  long lStack_d68;
  undefined8 local_d60;
  undefined *puStack_d58;
  undefined4 local_d50 [2];
  long local_d48;
  undefined4 local_d40;
  long local_d38;
  undefined4 local_d30 [2];
  string asStack_d28 [1072];
  undefined8 auStack_8f8 [2];
  string local_8e8;
  undefined1 auStack_8e7 [7];
  size_t local_8e0;
  undefined1 *local_8d8;
  long alStack_4b8 [2];
  char *local_4a8 [137];
  
  if (((DAT_043b4688 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b4688), iVar10 != 0)) {
    local_4a8[2] = (char *)0x0;
    local_4a8[1] = (undefined1 *)0x0;
    local_4a8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b4558 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b4558), iVar10 != 0)) {
      FUN_00f1bf40();
      FUN_00100250(PTR__string_04379718,&DAT_043b4540,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b4558);
    }
    pcVar30 = (char *)FUN_00f1b2d0(local_4a8,&DAT_043b4540);
    psVar20 = (string *)std::string::append(pcVar30);
    std::string::string((string *)&DAT_043b4670,psVar20);
    pcVar30 = local_4a8[2];
    plVar8 = DAT_043f1798;
    if ((((ulong)local_4a8[0] & 1) != 0) && ((byte *)local_4a8[2] != (byte *)0x0)) {
      lVar15 = tpidr_el0;
      plVar22 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar22 = plVar8;
      }
      uVar27 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar22,pcVar30,0,8);
          goto LAB_00f23820;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,pcVar30,0,8);
    }
LAB_00f23820:
    FUN_00100250(PTR__string_04379718,&DAT_043b4670,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4688);
  }
  std::string::string(&local_8e8,(string *)&DAT_043b4670);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b4668);
  if (((byte)local_8e8 & 1) == 0) {
    uVar27 = (ulong)((byte)local_8e8 >> 1);
  }
  else {
    uVar27 = local_8e0;
  }
  std::string::append((ulong)&local_8e8,(char)iVar10);
  if (((byte)local_8e8 & 1) == 0) {
    puVar31 = auStack_8e7;
    local_8e0 = (size_t)((byte)local_8e8 >> 1);
  }
  else {
    puVar31 = local_8d8;
  }
  snprintf(puVar31 + (uVar27 - 1),local_8e0,"%d",(ulong)DAT_043b4668);
  DAT_043b4668 = DAT_043b4668 + 1;
  if (((DAT_043b46a8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b46a8), iVar10 != 0)) {
    local_4a8[2] = (char *)0x0;
    local_4a8[1] = (undefined1 *)0x0;
    local_4a8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b4558 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b4558), iVar10 != 0)) {
      FUN_00f1bf40();
      FUN_00100250(PTR__string_04379718,&DAT_043b4540,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b4558);
    }
    pcVar30 = (char *)FUN_00f1b2d0(local_4a8,&DAT_043b4540);
    psVar20 = (string *)std::string::append(pcVar30);
    std::string::string((string *)&DAT_043b4690,psVar20);
    pcVar30 = local_4a8[2];
    plVar8 = DAT_043f1798;
    if ((((ulong)local_4a8[0] & 1) != 0) && ((byte *)local_4a8[2] != (byte *)0x0)) {
      lVar15 = tpidr_el0;
      plVar22 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar22 = plVar8;
      }
      uVar27 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar22,pcVar30,0,8);
          goto LAB_00f23974;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,pcVar30,0,8);
    }
LAB_00f23974:
    FUN_00100250(PTR__string_04379718,&DAT_043b4690,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b46a8);
  }
  puVar6 = DAT_043b46a0;
  if ((DAT_043b4690 & 1) == 0) {
    puVar6 = &DAT_043b4691;
  }
  if (((byte)local_8e8 & 1) == 0) {
    puVar31 = (undefined1 *)((ulong)&local_8e8 | 1);
  }
  else {
    puVar31 = local_8d8;
  }
  if (((DAT_043b46b8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b46b8), iVar10 != 0)) {
    DAT_043b46b0 = 0x2e0;
    __cxa_guard_release(&DAT_043b46b8);
  }
  if (((DAT_043b46c8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b46c8), iVar10 != 0)) {
    DAT_043b46c0 = 0x2e7;
    __cxa_guard_release(&DAT_043b46c8);
  }
  uVar27 = DAT_043b46b0;
  lVar15 = FUN_00153520(param_1,DAT_043b46b0);
  if ((uVar27 < ((ulong)(uint)-(int)lVar15 & 7 | 0x2e0)) ||
     (puVar21 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar27 = DAT_043b46c0;
    lVar15 = FUN_00153520(param_1,DAT_043b46c0);
    if ((uVar27 < ((ulong)(uint)-(int)lVar15 & 7 | 0x2e0)) ||
       (puVar21 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043b46e8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b46e8), iVar10 != 0)) {
        if (((DAT_043b4720 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b4720), iVar10 != 0))
        {
          DAT_043b46f0 = 0x16;
          DAT_043b4700 = 0;
          DAT_043b46f1._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043b46f8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043b4708 = 0x2a;
          _DAT_043b46fc = 0;
          DAT_043b4718._7_1_ = 0;
          DAT_043b4718._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043b4718._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043b4718._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043b4718._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043b4718._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043b4711 = s__anonymous_namespace__039071f8[8];
          DAT_043b4711_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043b4711_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043b4711_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043b4711_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043b4716 = s__anonymous_namespace__039071f8._13_2_;
          DAT_043b4718._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043b4709._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043b4709._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043b4718._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043b46f0,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043b4720);
        }
        plVar8 = DAT_043f1798;
        lVar15 = tpidr_el0;
        plVar22 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar22 = plVar8;
        }
        __dest = (void *)(**(code **)(*plVar22 + 0x10))(plVar22,0x7e0,8);
        _DAT_043b46d0 = (char *)0x7e1;
        DAT_043b46d8 = (undefined1 *)0x7d2;
        DAT_043b46e0 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<common::lua::command::PokemonCommand, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35>, char const (&)[22], void (*)(gfl::FnvHash64, int, int), char const (&)[10], MonsNo (*)(int, int), char const (&)[10], unsigned short (*)(int, int), char const (&)[6], unsigned int (*)(int, int), char const (&)[9], unsigned int (*)(int, int), char const (&)[6], void (*)(int, int, int), char const (&)[22], void (*)(), char const (&)[6], bool (*)(int, int), char const (&)[9], unsigned int (*)(int, int), char const (&)[7], unsigned int (*)(int, int), char const (&)[14], unsigned int (*)(int, int), char const (&)[8], unsigned int (*)(int, int, unsigned char), char const (&)[13], unsigned int (*)(int, int), char const (&)[9], bool (*)(int, int, WazaNo), char const (&)[10], void (*)(int, int, int), char const (&)[16], unsigned int (*)(int, int), char const (&)[15], bool (*)(int, int), char const (&)[11], void (*)(int, int, WazaNo), char const (&)[13], void (*)(int, int, unsigned short), char const (&)[20], void (*)(int, int, WazaNo), char const (&)[15], bool (*)(int, int, WazaNo), char const (&)[18], bool (*)(int, int, WazaNo), char const (&)[19], bool (*)(int, int, WazaNo), char const (&)[21], void (*)(int, int, WazaNo), char const (&)[16], const unsigned char (*)(), char const (&)[15], const WazaNo (*)(unsigned char), char const (&)[16], unsigned char (*)(int, int), char const (&)[7], bool (*)(int, int), char const (&)[7], bool (*)(int, int), char const (&)[26], bool (*)(), char const (&)[24], bool (*)(), char const (&)[19], bool (*)(savedata::io::PokedexSave::AreaID), char const (&)[25], void (*)(unsigned int), char const (&)[25], unsigned int (*)(), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
               ,0x7d2);
        *(undefined1 *)((long)__dest + 0x7d2) = 0;
        std::string::find(-0x30,0x5b);
        uVar29 = std::string::find(-0x30,0x3d);
        uVar27 = std::string::rfind(-0x30,0x5d);
        if (uVar27 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043b46d0 & 1) == 0) {
            uVar27 = (ulong)(DAT_043b46d0 >> 1);
          }
          else {
            uVar27 = (ulong)DAT_043b46d8;
          }
          uVar23 = 0;
          if (uVar29 != 0xffffffffffffffff) {
            uVar23 = uVar29;
          }
          uVar29 = uVar27;
        }
        else {
          uVar23 = 0;
          if (uVar29 != 0xffffffffffffffff) {
            uVar23 = uVar29;
          }
          if (((ulong)_DAT_043b46d0 & 1) == 0) {
            uVar29 = (ulong)(DAT_043b46d0 >> 1);
          }
          else {
            uVar29 = (ulong)DAT_043b46d8;
          }
        }
        if (uVar23 < uVar29 - 1) {
          uVar23 = uVar23 + 1;
        }
        std::string::string((string *)local_4a8,(string *)&DAT_043b46d0,uVar23,uVar27 - uVar23,
                            (allocator *)&DAT_043b46d0);
        FUN_00f1b8bc(&DAT_043b46d0);
        DAT_043b46e0 = (byte *)local_4a8[2];
        _DAT_043b46d0 = local_4a8[0];
        DAT_043b46d8 = local_4a8[1];
        lVar15 = FUN_00f1b794(&DAT_043b46d0);
        if (lVar15 != -1) {
          std::string::erase(0x43b46d0,lVar15 - 2);
        }
        bVar9 = ((ulong)_DAT_043b46d0 & 1) == 0;
        puVar5 = (undefined1 *)(ulong)(DAT_043b46d0 >> 1);
        pbVar26 = DAT_043b46e0;
        if (!bVar9) {
          puVar5 = DAT_043b46d8;
        }
        while (DAT_043b46e0 = pbVar26, puVar5 != (undefined1 *)0x0) {
          pbVar24 = &DAT_043b46d1;
          if ((DAT_043b46d0 & 1) != 0) {
            pbVar24 = pbVar26;
          }
          iVar10 = isblank((uint)*pbVar24);
          if (iVar10 == 0) {
            pbVar24 = pbVar24 + (long)puVar5;
            goto LAB_00f23e8c;
          }
          pbVar4 = &DAT_043b46d1;
          if (!bVar9) {
            pbVar4 = pbVar26;
          }
          std::string::erase(0x43b46d0,(long)pbVar4 - (long)pbVar24);
          bVar9 = ((ulong)_DAT_043b46d0 & 1) == 0;
          puVar5 = (undefined1 *)(ulong)(DAT_043b46d0 >> 1);
          pbVar26 = DAT_043b46e0;
          if (!bVar9) {
            puVar5 = DAT_043b46d8;
          }
        }
LAB_00f23ed0:
        uVar27 = FUN_00f1b7f0(&DAT_043b46d0,&DAT_043b46f0);
        if (uVar27 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43b46d0,uVar27);
            uVar27 = FUN_00f1b7f0(&DAT_043b46d0,&DAT_043b46f0);
          } while (uVar27 != 0xffffffffffffffff);
        }
        uVar27 = FUN_00f1b7f0(&DAT_043b46d0,&DAT_043b4708);
        if (uVar27 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43b46d0,uVar27);
            uVar27 = FUN_00f1b7f0(&DAT_043b46d0,&DAT_043b4708);
          } while (uVar27 != 0xffffffffffffffff);
        }
        FUN_00100250(PTR__string_04379718,&DAT_043b46d0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b46e8);
      }
      pbVar26 = DAT_043b46e0;
      if (((ulong)_DAT_043b46d0 & 1) == 0) {
        pbVar26 = &DAT_043b46d1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar26);
      puVar21 = (undefined8 *)0x0;
    }
  }
  uVar25 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar21[1] = uVar25;
  puVar21[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar15 = *(long *)(param_2 + 0x18);
  puVar21[3] = lVar15;
  lVar28 = *(long *)(param_2 + 0x20);
  puVar21[4] = lVar28;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar28 != 0) {
    uVar29 = puVar21[2];
    uVar27 = *(ulong *)(lVar15 + 8);
    if ((uVar29 & uVar29 - 1) == 0) {
      uVar27 = uVar29 - 1 & uVar27;
    }
    else if (uVar29 <= uVar27) {
      uVar23 = 0;
      if (uVar29 != 0) {
        uVar23 = uVar27 / uVar29;
      }
      uVar27 = uVar27 - uVar23 * uVar29;
    }
    *(undefined8 **)(puVar21[1] + uVar27 * 8) = puVar21 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar25 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar25;
  puVar21[7] = uVar7;
  puVar21[8] = *(undefined8 *)(param_2 + 0x40);
  puVar21[9] = *(undefined8 *)(param_2 + 0x48);
  puVar21[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar21 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar21 = &PTR_LAB_041eeae8;
  memcpy(puVar21 + 0xc,(void *)(param_2 + 0x60),0x280);
  iVar10 = FUN_00154450(param_1,puVar31);
  if (iVar10 != 0) {
    FUN_001516f0(param_1,&LAB_00f24f80,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar11 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar11);
  }
  FUN_001522a0(param_1,puVar6);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar6);
  lVar15 = FUN_001511d0(param_1,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_8e8 & 1) != 0) && (local_8d8 != (undefined1 *)0x0)) {
    lVar28 = tpidr_el0;
    plVar22 = *(long **)(lVar28 + 0x20);
    if (*(long **)(lVar28 + 0x20) == (long *)0x0) {
      *(long **)(lVar28 + 0x20) = DAT_043f1798;
      plVar22 = plVar8;
    }
    uVar27 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar28 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar28 + 0x38d488) = 1;
        *(undefined8 *)(lVar28 + 0x38d478) = 0;
        *(undefined8 *)(lVar28 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar28 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar28 + 0x38d480)) {
        FUN_02bcc824(plVar22,local_8d8,0,8);
        goto LAB_00f2020c;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,local_8d8,0,8);
  }
LAB_00f2020c:
  memset(local_4a8,0,0x440);
  pcVar30 = *(char **)(lVar15 + 0x60);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar28 = lVar15 + 8;
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  puVar31 = &LAB_00f1c604;
  if (uVar12 != 0) {
    puVar31 = &LAB_00f1c38c;
  }
  puVar1 = (ulong *)(lVar15 + 0x2d8);
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar15 + 0x30) = puVar31;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar29 = 0;
            *(undefined1 **)(lVar15 + 0x290) = puVar31;
            goto LAB_00f20374;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar31;
      }
      uVar29 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20374;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  uVar29 = 1;
  local_4a8[0] = pcVar30;
  local_4a8[1] = puVar31;
LAB_00f20374:
  pcVar30 = *(char **)(lVar15 + 0x70);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1c770;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1c63c;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f204b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f204b8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f204b8:
  pcVar30 = *(char **)(lVar15 + 0x80);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1c968;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1c7d4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f205f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f205f8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f205f8:
  pcVar30 = *(char **)(lVar15 + 0x90);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1cb38;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1c9a0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f20738;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20738;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f20738:
  pcVar30 = *(char **)(lVar15 + 0xa0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1cba8;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1cb70;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f20878;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20878;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f20878:
  pcVar30 = *(char **)(lVar15 + 0xb0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1ce08;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1cbe0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f209b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f209b8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f209b8:
  pcVar30 = *(char **)(lVar15 + 0xc0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1ce80;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1ce40;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f20af8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20af8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f20af8:
  pcVar30 = *(char **)(lVar15 + 0xd0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d05c;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1cec0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f20c38;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20c38;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f20c38:
  pcVar30 = *(char **)(lVar15 + 0xe0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d0cc;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d094;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f20d78;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20d78;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f20d78:
  pcVar30 = *(char **)(lVar15 + 0xf0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d13c;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d104;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f20eb8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20eb8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f20eb8:
  pcVar30 = *(char **)(lVar15 + 0x100);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d1ac;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d174;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f20ff8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f20ff8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f20ff8:
  pcVar30 = *(char **)(lVar15 + 0x110);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d420;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d1e4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21138;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21138;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21138:
  pcVar30 = *(char **)(lVar15 + 0x120);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d490;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d458;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21278;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21278;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21278:
  pcVar30 = *(char **)(lVar15 + 0x130);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d68c;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d4c8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f213b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f213b8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f213b8:
  pcVar30 = *(char **)(lVar15 + 0x140);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d6fc;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d6c4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f214f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f214f8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f214f8:
  pcVar30 = *(char **)(lVar15 + 0x150);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d76c;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d734;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21638;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21638;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21638:
  pcVar30 = *(char **)(lVar15 + 0x160);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d7dc;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d7a4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21778;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21778;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21778:
  pcVar30 = *(char **)(lVar15 + 0x170);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1d9c0;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d814;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f218b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f218b8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f218b8:
  pcVar30 = *(char **)(lVar15 + 0x180);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1dc18;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1d9f8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f219f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f219f8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f219f8:
  pcVar30 = *(char **)(lVar15 + 400);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1dc88;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1dc50;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21b38;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21b38;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21b38:
  pcVar30 = *(char **)(lVar15 + 0x1a0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1dcf8;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1dcc0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21c78;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21c78;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21c78:
  pcVar30 = *(char **)(lVar15 + 0x1b0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1dd68;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1dd30;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21db8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21db8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21db8:
  pcVar30 = *(char **)(lVar15 + 0x1c0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1ddd8;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1dda0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f21ef8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f21ef8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f21ef8:
  pcVar30 = *(char **)(lVar15 + 0x1d0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1de48;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1de10;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22038;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22038;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f22038:
  pcVar30 = *(char **)(lVar15 + 0x1e0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1ded0;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1de80;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22178;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22178;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f22178:
  pcVar30 = *(char **)(lVar15 + 0x1f0);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1dff8;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1df20;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f222b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f222b8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f222b8:
  pcVar30 = *(char **)(lVar15 + 0x200);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1e1c8;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e030;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f223f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f223f8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f223f8:
  pcVar30 = *(char **)(lVar15 + 0x210);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1e238;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e200;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22538;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22538;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f22538:
  pcVar30 = *(char **)(lVar15 + 0x220);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1e2a8;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e270;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22678;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22678;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f22678:
  pcVar30 = *(char **)(lVar15 + 0x230);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1e330;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e2e0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f227b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f227b8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f227b8:
  pcVar30 = *(char **)(lVar15 + 0x240);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar3 = (code *)&LAB_00f1e3fc;
  if (uVar12 != 0) {
    pcVar3 = FUN_00f1e3ac;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar10 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar10 == 0)) {
      iVar10 = (int)uVar27;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar3;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x290) = pcVar3;
            goto LAB_00f228f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f228f8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = (char *)pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00f228f8:
  iVar10 = (int)uVar29;
  pcVar30 = *(char **)(lVar15 + 0x250);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1e4bc;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e434;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar13 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar13 == 0)) {
      iVar13 = (int)uVar27;
      if (iVar13 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22a38;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22a38;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  iVar10 = iVar10 + 1;
  alStack_4b8[uVar29 * 2 + 2] = (long)pcVar30;
  local_4a8[uVar29 * 2 + 1] = pcVar2;
LAB_00f22a38:
  pcVar30 = *(char **)(lVar15 + 0x260);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1e530;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e4f4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar13 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar13 == 0)) {
      iVar13 = (int)uVar27;
      if (iVar13 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22b78;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22b78;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  lVar32 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_4b8[lVar32 * 2 + 2] = (long)pcVar30;
  local_4a8[lVar32 * 2 + 1] = pcVar2;
LAB_00f22b78:
  pcVar30 = *(char **)(lVar15 + 0x270);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1e5bc;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e56c;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar13 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar13 == 0)) {
      iVar13 = (int)uVar27;
      if (iVar13 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22cb8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22cb8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  lVar32 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_4b8[lVar32 * 2 + 2] = (long)pcVar30;
  local_4a8[lVar32 * 2 + 1] = pcVar2;
LAB_00f22cb8:
  pcVar30 = *(char **)(lVar15 + 0x280);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1fbfc;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1e60c;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar13 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar13 == 0)) {
      iVar13 = (int)uVar27;
      if (iVar13 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(char **)(lVar15 + 0x290) = pcVar2;
            goto LAB_00f22df8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f22df8;
    }
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar27 != 0x20);
  lVar32 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_4b8[lVar32 * 2 + 2] = (long)pcVar30;
  local_4a8[lVar32 * 2 + 1] = pcVar2;
LAB_00f22df8:
  pcVar30 = *(char **)(lVar15 + 0x288);
  sVar16 = strlen(pcVar30);
  sVar19 = 10;
  if (sVar16 < 0xb) {
    sVar19 = sVar16;
  }
  if (sVar19 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar30,sVar19);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar32 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f1fde8;
  if (uVar12 != 0) {
    pcVar2 = &LAB_00f1fdb0;
  }
  while( true ) {
    lVar17 = FUN_008cca50();
    pbVar26 = (byte *)(lVar17 + lVar32);
    sVar16 = strlen(pcVar30);
    sVar19 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar19 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar16 == sVar19) &&
       (iVar13 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar13 == 0)) break;
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 0x18;
    if (uVar27 == 0x20) {
LAB_00f22f38:
      lVar32 = (long)iVar10;
      iVar10 = iVar10 + 1;
      alStack_4b8[lVar32 * 2 + 2] = (long)pcVar30;
      local_4a8[lVar32 * 2 + 1] = pcVar2;
      uVar12 = (uint)*puVar1;
joined_r0x00f22f1c:
      if ((uVar12 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar12 = (uint)*puVar1;
      }
      if ((uVar12 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar12 = (uint)*puVar1;
      }
      if ((uVar12 >> 0x10 & 1) == 0) {
        lVar17 = FUN_008cca50();
        lVar32 = lVar17 + 0x181;
        if ((*(byte *)(lVar17 + 0x180) & 1) != 0) {
          lVar32 = *(long *)(lVar17 + 400);
        }
        alStack_4b8[(long)iVar10 * 2 + 2] = lVar32;
        local_4a8[(long)iVar10 * 2 + 1] = &LAB_00f1ec70;
        iVar10 = iVar10 + 1;
        uVar12 = (uint)*puVar1;
      }
      if ((uVar12 >> 0x1b & 1) == 0) {
        lVar18 = FUN_008cca50();
        lVar32 = (long)iVar10;
        iVar10 = iVar10 + 1;
        lVar17 = lVar18 + 0x289;
        if ((*(byte *)(lVar18 + 0x288) & 1) != 0) {
          lVar17 = *(long *)(lVar18 + 0x298);
        }
        alStack_4b8[lVar32 * 2 + 2] = lVar17;
        local_4a8[lVar32 * 2 + 1] = "V\x03";
        lVar32 = *(long *)(lVar15 + 0x290);
      }
      else {
        lVar32 = *(long *)(lVar15 + 0x290);
      }
      if (lVar32 != 0) {
        lVar17 = FUN_008cca50();
        lVar32 = lVar17 + 0x1c9;
        if ((*(byte *)(lVar17 + 0x1c8) & 1) != 0) {
          lVar32 = *(long *)(lVar17 + 0x1d8);
        }
        pcVar30 = *(char **)(lVar15 + 0x290);
        lVar17 = (long)iVar10;
        iVar10 = iVar10 + 1;
        alStack_4b8[lVar17 * 2 + 2] = lVar32;
        local_4a8[lVar17 * 2 + 1] = pcVar30;
      }
      alStack_4b8[(long)iVar10 * 2 + 2] = 0;
      local_4a8[(long)iVar10 * 2 + 1] = (char *)0x0;
      memcpy(&local_8e8,local_4a8,0x440);
      memcpy(asStack_d28,local_4a8,0x440);
      lVar32 = FUN_008cca50();
      lVar17 = (long)iVar10 + -1;
      pcVar30 = (char *)alStack_4b8[lVar17 * 2 + 2];
      sVar19 = strlen(pcVar30);
      if ((*(byte *)(lVar32 + 0x1c8) & 1) == 0) {
        sVar16 = (size_t)(*(byte *)(lVar32 + 0x1c8) >> 1);
      }
      else {
        sVar16 = *(size_t *)(lVar32 + 0x1d0);
      }
      if ((sVar19 == sVar16) &&
         (iVar10 = std::string::compare(lVar32 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
         iVar10 == 0)) {
        auStack_8f8[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_8e7 + lVar17 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_d28 + lVar17 * 0x10) = alStack_4b8[lVar17 * 2 + 2];
      *(undefined1 **)(asStack_d28 + (lVar17 * 2 + 1) * 8) = &LAB_00f242f0;
      FUN_00151fe0(param_1,0,2);
      local_d30[0] = FUN_0014feb0(param_1,0xffffffff);
      local_d38 = param_1;
      if (((DAT_043b4558 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043b4558), iVar10 != 0)) {
        FUN_00f1bf40();
        FUN_00100250(PTR__string_04379718,&DAT_043b4540,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b4558);
      }
      uVar11 = local_d30[0];
      if ((DAT_043b4540 & 1) == 0) {
        uVar27 = (ulong)(DAT_043b4540 >> 1);
        puVar31 = &DAT_043b4541;
      }
      else {
        uVar27 = DAT_043b4548;
        puVar31 = DAT_043b4550;
      }
      FUN_001514f0(param_1,puVar31,uVar27);
      FUN_00152550(param_1,uVar11,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_00f1eb80,0);
      FUN_00152550(param_1,uVar11,&DAT_0397bfcb);
      lVar32 = 0;
      do {
        if (lVar32 == 1) {
          psVar20 = asStack_d28;
          FUN_00f1a698();
          pbVar26 = &DAT_043b44a8;
        }
        else if (lVar32 == 0) {
          psVar20 = &local_8e8;
          FUN_00f1a4bc();
          pbVar26 = &DAT_043b4430;
        }
        else {
          psVar20 = (string *)local_4a8;
          FUN_00f1a874();
          pbVar26 = &DAT_043b4520;
        }
        pbVar24 = pbVar26 + 1;
        if ((*pbVar26 & 1) != 0) {
          pbVar24 = *(byte **)(pbVar26 + 0x10);
        }
        FUN_00154450(param_1,pbVar24);
        local_d40 = FUN_0014feb0(param_1,0xffffffff);
        local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,0x1e);
        local_d48 = param_1;
        FUN_008fe304(local_d50,param_1,&local_d80,&local_d38,local_d40);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar15);
        FUN_00155a20(param_1,psVar20,2);
        uVar11 = local_d40;
        if (*(long *)(lVar15 + 0x2c0) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar11,"class_check");
        }
        uVar11 = local_d40;
        if (*(long *)(lVar15 + 0x2c8) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar11,"class_cast");
        }
        uVar11 = local_d40;
        uVar25 = *(undefined8 *)(lVar15 + 0x2a0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar15);
        FUN_00151810(param_1,lVar28);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar11,&DAT_03955ac7);
        uVar11 = local_d40;
        uVar25 = *(undefined8 *)(lVar15 + 0x2a8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar15);
        FUN_00151810(param_1,lVar28);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar11,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,1);
          FUN_008fe304(local_d50,param_1,&local_d80,&local_d48,local_d40);
        }
        else {
          local_d50[0] = 1;
          local_d80 = &LAB_00f24340;
          uStack_d78 = 0;
          local_d70 = lVar15;
          lStack_d68 = lVar28;
          FUN_00f24fb4(param_1,local_d50,&local_d80,local_d40);
          local_d50[0] = 2;
          local_d80 = &LAB_00f24650;
          uStack_d78 = 0;
          local_d70 = lVar15;
          lStack_d68 = lVar28;
          FUN_00f24fb4(param_1,local_d50,&local_d80,local_d40);
        }
        FUN_00151fe0(param_1,0,3);
        uVar11 = FUN_0014feb0(param_1,0xffffffff);
        local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,0x1e);
        FUN_008fe304(local_d50,param_1,&local_d80,&local_d38,uVar11);
        if (*(undefined1 **)(lVar15 + 0x298) != (undefined1 *)0x0) {
          uStack_d78 = 0;
          local_d50[0] = 4;
          local_d80 = *(undefined1 **)(lVar15 + 0x298);
          local_d70 = lVar15;
          lStack_d68 = lVar28;
          FUN_00f24fb4(param_1,local_d50,&local_d80,uVar11);
        }
        if (*(char *)(lVar15 + 0x2d0) != '\0') {
          local_d50[0] = 1;
          local_d80 = &LAB_00f24340;
          uStack_d78 = 0;
          local_d70 = lVar15;
          lStack_d68 = lVar28;
          FUN_00f24fb4(param_1,local_d50,&local_d80,uVar11);
          local_d50[0] = 2;
          local_d80 = &LAB_00f24650;
          uStack_d78 = 0;
          local_d70 = lVar15;
          lStack_d68 = lVar28;
          FUN_00f24fb4(param_1,local_d50,&local_d80,uVar11);
        }
        uVar14 = local_d40;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar11);
        }
        FUN_00152ae0(param_1,uVar14);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_d48,0xfffffffe);
        lVar32 = lVar32 + 1;
      } while (lVar32 != 3);
      FUN_00f1aa9c();
      puVar6 = DAT_043b45a8;
      if ((DAT_043b4598 & 1) == 0) {
        puVar6 = &DAT_043b4599;
      }
      FUN_00154450(param_1,puVar6);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_d80._0_4_ = 0x1e;
      FUN_008fe304(&local_d48,param_1,&local_d80,&local_d38,uVar11);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar15);
      FUN_00155a20(param_1,local_4a8,2);
      FUN_00151fe0(param_1,0,3);
      uVar14 = FUN_0014feb0(param_1,0xffffffff);
      local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,0x1e);
      FUN_008fe304(&local_d48,param_1,&local_d80,&local_d38,uVar14);
      local_d80 = *(undefined1 **)(lVar15 + 0x298);
      if (local_d80 != (undefined1 *)0x0) {
        local_d48 = CONCAT44(local_d48._4_4_,4);
        uStack_d78 = 0;
        local_d70 = lVar15;
        lStack_d68 = lVar28;
        FUN_00f24fb4(param_1,&local_d48,&local_d80,uVar14);
      }
      local_d48._0_4_ = 1;
      local_d80 = &LAB_00f24960;
      uStack_d78 = 0;
      local_d60 = 0;
      puStack_d58 = &DAT_03a78890;
      local_d70 = lVar15;
      lStack_d68 = lVar28;
      FUN_00f25050(param_1,&local_d48,&local_d80,uVar14);
      local_d48 = CONCAT44(local_d48._4_4_,2);
      local_d80 = &LAB_00f24c70;
      uStack_d78 = 0;
      local_d60 = 0;
      puStack_d58 = &DAT_03a78890;
      local_d70 = lVar15;
      lStack_d68 = lVar28;
      FUN_00f25050(param_1,&local_d48,&local_d80,uVar14);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar14);
      }
      FUN_00152ae0(param_1,uVar11);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_d30[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar13 = (int)uVar27;
  if (iVar13 == 1) {
    *(char **)(lVar15 + 0x30) = pcVar2;
  }
  else {
    if (iVar13 != 2) {
      if (iVar13 == 0x13) {
        *(char **)(lVar15 + 0x290) = pcVar2;
        uVar12 = (uint)*puVar1;
        goto joined_r0x00f22f1c;
      }
      *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
      goto LAB_00f22f38;
    }
    *(char **)(lVar15 + 0x38) = pcVar2;
  }
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 0x2d8) = *(ulong *)(lVar15 + 0x2d8) | 1L << (uVar27 & 0x3f);
  uVar12 = (uint)*puVar1;
  goto joined_r0x00f22f1c;
LAB_00f23e8c:
  iVar10 = isblank((uint)pbVar24[-1]);
  if (iVar10 == 0) goto LAB_00f23ed0;
  FUN_00f1b7b0(&DAT_043b46d0);
  puVar5 = (undefined1 *)((ulong)_DAT_043b46d0 >> 1 & 0x7f);
  if (((ulong)_DAT_043b46d0 & 1) != 0) {
    puVar5 = DAT_043b46d8;
  }
  if (puVar5 == (undefined1 *)0x0) goto LAB_00f23ed0;
  pbVar24 = &DAT_043b46d1;
  if (((ulong)_DAT_043b46d0 & 1) != 0) {
    pbVar24 = DAT_043b46e0;
  }
  pbVar24 = pbVar24 + (long)puVar5;
  goto LAB_00f23e8c;
}


