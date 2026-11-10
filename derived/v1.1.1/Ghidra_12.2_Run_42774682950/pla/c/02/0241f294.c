/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0241f294; name: FUN_0241f294
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0241f294(long param_1,long param_2)

{
  ulong *puVar1;
  char *pcVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  size_t sVar17;
  long lVar18;
  byte *pbVar19;
  string *psVar20;
  void *__dest;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte *pbVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  char *pcVar30;
  undefined1 *puVar31;
  undefined1 *local_f30;
  undefined8 uStack_f28;
  long local_f20;
  long lStack_f18;
  undefined8 local_f10;
  undefined *puStack_f08;
  long local_f00;
  undefined4 local_ef8;
  long local_ef0;
  undefined4 local_ee8 [2];
  string asStack_ee0 [1216];
  undefined8 auStack_a20 [2];
  string local_a10;
  undefined1 auStack_a0f [7];
  size_t local_a08;
  undefined1 *local_a00;
  long alStack_550 [2];
  char *local_540 [154];
  undefined1 auStack_70 [16];
  
  if (((DAT_043e5290 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e5290), iVar11 != 0)) {
    local_540[2] = (char *)0x0;
    local_540[1] = (undefined1 *)0x0;
    local_540[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043870d8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_043870d8);
      puVar5 = PTR_DAT_043870e0;
      if (iVar11 != 0) {
        FUN_0241a650(PTR_DAT_043870e0);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043870d8);
      }
    }
    pcVar30 = (char *)FUN_02419a64(local_540,PTR_DAT_043870e0);
    psVar20 = (string *)std::string::append(pcVar30);
    std::string::string((string *)&DAT_043e5278,psVar20);
    pcVar30 = local_540[2];
    plVar9 = DAT_043f1798;
    if ((((ulong)local_540[0] & 1) != 0) && ((byte *)local_540[2] != (byte *)0x0)) {
      lVar16 = tpidr_el0;
      plVar23 = *(long **)(lVar16 + 0x20);
      if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
        *(long **)(lVar16 + 0x20) = DAT_043f1798;
        plVar23 = plVar9;
      }
      uVar27 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar23,pcVar30,0,8);
          goto LAB_02423758;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,pcVar30,0,8);
    }
LAB_02423758:
    FUN_00100250(PTR__string_04379718,&DAT_043e5278,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5290);
  }
  std::string::string(&local_a10,(string *)&DAT_043e5278);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e5270);
  sVar3 = (ulong)((byte)local_a10 >> 1);
  if (((byte)local_a10 & 1) != 0) {
    sVar3 = local_a08;
  }
  std::string::append((ulong)&local_a10,(char)iVar11);
  if (((byte)local_a10 & 1) == 0) {
    puVar31 = auStack_a0f;
    local_a08 = (size_t)((byte)local_a10 >> 1);
  }
  else {
    puVar31 = local_a00;
  }
  snprintf(puVar31 + (sVar3 - 1),local_a08,"%d",(ulong)DAT_043e5270);
  DAT_043e5270 = DAT_043e5270 + 1;
  if (((DAT_043e52b0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e52b0), iVar11 != 0)) {
    local_540[2] = (char *)0x0;
    local_540[1] = (undefined1 *)0x0;
    local_540[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043870d8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_043870d8);
      puVar5 = PTR_DAT_043870e0;
      if (iVar11 != 0) {
        FUN_0241a650(PTR_DAT_043870e0);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043870d8);
      }
    }
    pcVar30 = (char *)FUN_02419a64(local_540,PTR_DAT_043870e0);
    psVar20 = (string *)std::string::append(pcVar30);
    std::string::string((string *)&DAT_043e5298,psVar20);
    pcVar30 = local_540[2];
    plVar9 = DAT_043f1798;
    if ((((ulong)local_540[0] & 1) != 0) && ((byte *)local_540[2] != (byte *)0x0)) {
      lVar16 = tpidr_el0;
      plVar23 = *(long **)(lVar16 + 0x20);
      if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
        *(long **)(lVar16 + 0x20) = DAT_043f1798;
        plVar23 = plVar9;
      }
      uVar27 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar23,pcVar30,0,8);
          goto LAB_024238ac;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,pcVar30,0,8);
    }
LAB_024238ac:
    FUN_00100250(PTR__string_04379718,&DAT_043e5298,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e52b0);
  }
  puVar5 = DAT_043e52a8;
  if ((DAT_043e5298 & 1) == 0) {
    puVar5 = &DAT_043e5299;
  }
  if (((byte)local_a10 & 1) == 0) {
    puVar31 = (undefined1 *)((ulong)&local_a10 | 1);
  }
  else {
    puVar31 = local_a00;
  }
  if (((DAT_043e52c0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e52c0), iVar11 != 0)) {
    DAT_043e52b8 = 0x4a0;
    __cxa_guard_release(&DAT_043e52c0);
  }
  if (((DAT_043e52d0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e52d0), iVar11 != 0)) {
    DAT_043e52c8 = 0x4a7;
    __cxa_guard_release(&DAT_043e52d0);
  }
  uVar27 = DAT_043e52b8;
  lVar16 = FUN_00153520(param_1,DAT_043e52b8);
  if ((uVar27 < ((ulong)(uint)-(int)lVar16 & 7 | 0x4a0)) ||
     (puVar21 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar27 = DAT_043e52c8;
    lVar16 = FUN_00153520(param_1,DAT_043e52c8);
    if ((uVar27 < ((ulong)(uint)-(int)lVar16 & 7 | 0x4a0)) ||
       (puVar21 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043e52f0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e52f0), iVar11 != 0)) {
        if (((DAT_043e5328 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e5328), iVar11 != 0))
        {
          DAT_043e52f8 = 0x16;
          DAT_043e5308 = 0;
          DAT_043e52f9._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043e5300 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043e5310 = 0x2a;
          _DAT_043e5304 = 0;
          DAT_043e5320._7_1_ = 0;
          DAT_043e5320._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043e5320._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043e5320._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043e5320._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043e5320._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043e5319 = s__anonymous_namespace__039071f8[8];
          DAT_043e5319_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043e5319_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043e5319_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043e5319_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043e531e = s__anonymous_namespace__039071f8._13_2_;
          DAT_043e5320._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043e5311._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043e5311._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043e5320._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043e52f8,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043e5328);
        }
        plVar9 = DAT_043f1798;
        lVar16 = tpidr_el0;
        plVar23 = *(long **)(lVar16 + 0x20);
        if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
          *(long **)(lVar16 + 0x20) = DAT_043f1798;
          plVar23 = plVar9;
        }
        __dest = (void *)(**(code **)(*plVar23 + 0x10))(plVar23,0x12d0,8);
        _DAT_043e52d8 = (char *)0x12d1;
        DAT_043e52e0 = (undefined1 *)0x12c5;
        DAT_043e52e8 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::RideNyuuraControllerComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44>, const sol::base_list<> &, sol::base_list<field::ride::RidePokemonControllerComponent, field::CharacterControllerComponent, gfl::engine::Component>, char const (&)[12], bool (field::ride::RideNyuuraControllerComponent::*)(), char const (&)[12], void (field::ride::RideNyuuraControllerComponent::*)(), char const (&)[19], void (field::ride::RideNyuuraControllerComponent::*)(int), char const (&)[18], bool (field::ride::RideNyuuraControllerComponent::*)() const, char const (&)[13], void (field::ride::RideNyuuraControllerComponent::*)(const gfl::math::Vector3 &), char const (&)[14], void (field::ride::RideNyuuraControllerComponent::*)(field::ride::StartClimbingType, const gfl::math::Vector3 &, bool), char const (&)[17], void (field::ride::RideNyuuraControllerComponent::*)(field::ride::StartClimbingType), char const (&)[12], void (field::ride::RideNyuuraControllerComponent::*)(field::ride::EndClimbingType), char const (&)[15], void (field::ride::RideNyuuraControllerComponent::*)(field::ride::EndClimbingType), char const (&)[12], void (field::ride::RideNyuuraControllerComponent::*)(bool), char const (&)[11], bool (field::ride::RideNyuuraControllerComponent::*)() const, char const (&)[13], void (field::ride::RideNyuuraControllerComponent::*)(gfl::math::Vector3, float), char const (&)[17], void (field::ride::RideNyuuraControllerComponent::*)(bool), char const (&)[21], gfl::math::Vector3 (field::ride::RideNyuuraControllerComponent::*)() const, char const (&)[12], void (field::ride::RideNyuuraControllerComponent::*)(const gfl::math::Vector3 &), char const (&)[20], void (field::ride::RideNyuuraControllerComponent::*)(const gfl::math::Quaternion &, float), char const (&)[15], void (field::ride::RideNyu..." /* TRUNCATED STRING LITERAL */
               ,0x12c5);
        *(undefined1 *)((long)__dest + 0x12c5) = 0;
        std::string::find(-0x28,0x5b);
        uVar29 = std::string::find(-0x28,0x3d);
        uVar27 = std::string::rfind(-0x28,0x5d);
        if (uVar27 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043e52d8 & 1) == 0) {
            uVar27 = (ulong)(DAT_043e52d8 >> 1);
          }
          else {
            uVar27 = (ulong)DAT_043e52e0;
          }
          uVar24 = 0;
          if (uVar29 != 0xffffffffffffffff) {
            uVar24 = uVar29;
          }
          uVar29 = uVar27;
        }
        else {
          uVar24 = 0;
          if (uVar29 != 0xffffffffffffffff) {
            uVar24 = uVar29;
          }
          if (((ulong)_DAT_043e52d8 & 1) == 0) {
            uVar29 = (ulong)(DAT_043e52d8 >> 1);
          }
          else {
            uVar29 = (ulong)DAT_043e52e0;
          }
        }
        if (uVar24 < uVar29 - 1) {
          uVar24 = uVar24 + 1;
        }
        std::string::string((string *)local_540,(string *)&DAT_043e52d8,uVar24,uVar27 - uVar24,
                            (allocator *)&DAT_043e52d8);
        FUN_0241a018(&DAT_043e52d8);
        DAT_043e52e8 = (byte *)local_540[2];
        _DAT_043e52d8 = local_540[0];
        DAT_043e52e0 = local_540[1];
        lVar16 = FUN_02419ef0(&DAT_043e52d8);
        if (lVar16 != -1) {
          std::string::erase(0x43e52d8,lVar16 - 2);
        }
        puVar4 = (undefined1 *)(ulong)(DAT_043e52d8 >> 1);
        if (((ulong)_DAT_043e52d8 & 1) != 0) {
          puVar4 = DAT_043e52e0;
        }
        while (puVar4 != (undefined1 *)0x0) {
          pbVar19 = &DAT_043e52d9;
          if ((DAT_043e52d8 & 1) != 0) {
            pbVar19 = DAT_043e52e8;
          }
          iVar11 = isblank((uint)*pbVar19);
          if (iVar11 == 0) {
            pbVar19 = pbVar19 + (long)puVar4;
            goto LAB_02423e44;
          }
          std::string::erase(0x43e52d8,0);
          puVar4 = (undefined1 *)(ulong)(DAT_043e52d8 >> 1);
          if (((ulong)_DAT_043e52d8 & 1) != 0) {
            puVar4 = DAT_043e52e0;
          }
        }
LAB_02423e88:
        uVar27 = FUN_02419f4c(&DAT_043e52d8,&DAT_043e52f8);
        if (uVar27 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43e52d8,uVar27);
            uVar27 = FUN_02419f4c(&DAT_043e52d8,&DAT_043e52f8);
          } while (uVar27 != 0xffffffffffffffff);
        }
        uVar27 = FUN_02419f4c(&DAT_043e52d8,&DAT_043e5310);
        if (uVar27 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43e52d8,uVar27);
            uVar27 = FUN_02419f4c(&DAT_043e52d8,&DAT_043e5310);
          } while (uVar27 != 0xffffffffffffffff);
        }
        FUN_00100250(PTR__string_04379718,&DAT_043e52d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e52f0);
      }
      pbVar19 = DAT_043e52e8;
      if (((ulong)_DAT_043e52d8 & 1) == 0) {
        pbVar19 = &DAT_043e52d9;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar19);
      puVar21 = (undefined8 *)0x0;
    }
  }
  uVar25 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar21[1] = uVar25;
  puVar21[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar16 = *(long *)(param_2 + 0x18);
  puVar21[3] = lVar16;
  lVar28 = *(long *)(param_2 + 0x20);
  puVar21[4] = lVar28;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar28 != 0) {
    uVar29 = puVar21[2];
    uVar27 = *(ulong *)(lVar16 + 8);
    if ((uVar29 & uVar29 - 1) == 0) {
      uVar27 = uVar29 - 1 & uVar27;
    }
    else if (uVar29 <= uVar27) {
      uVar24 = 0;
      if (uVar29 != 0) {
        uVar24 = uVar27 / uVar29;
      }
      uVar27 = uVar27 - uVar24 * uVar29;
    }
    *(undefined8 **)(puVar21[1] + uVar27 * 8) = puVar21 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar25 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar25;
  puVar21[7] = uVar6;
  puVar21[8] = *(undefined8 *)(param_2 + 0x40);
  puVar21[9] = *(undefined8 *)(param_2 + 0x48);
  puVar21[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar21 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar21 = &PTR_LAB_0425bf60;
  memcpy(puVar21 + 0xc,(void *)(param_2 + 0x60),0x440);
  iVar11 = FUN_00154450(param_1,puVar31);
  if (iVar11 != 0) {
    FUN_001516f0(param_1,&LAB_02425130,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar12 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar12);
  }
  FUN_001522a0(param_1,puVar5);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar5);
  lVar16 = FUN_001511d0(param_1,0xffffffff);
  lVar16 = lVar16 + ((ulong)(uint)-(int)lVar16 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar9 = DAT_043f1798;
  if ((((byte)local_a10 & 1) != 0) && (local_a00 != (undefined1 *)0x0)) {
    lVar28 = tpidr_el0;
    plVar23 = *(long **)(lVar28 + 0x20);
    if (*(long **)(lVar28 + 0x20) == (long *)0x0) {
      *(long **)(lVar28 + 0x20) = DAT_043f1798;
      plVar23 = plVar9;
    }
    uVar27 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar28 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar28 + 0x38d488) = 1;
        *(undefined8 *)(lVar28 + 0x38d478) = 0;
        *(undefined8 *)(lVar28 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar28 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar28 + 0x38d480)) {
        FUN_02bcc824(plVar23,local_a00,0,8);
        goto LAB_0241f688;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_a00,0,8);
  }
LAB_0241f688:
  memset(local_540,0,0x4d0);
  puVar8 = PTR_DAT_04386a88;
  puVar7 = PTR_DAT_043816f8;
  *(undefined1 *)(lVar16 + 0x58) = 1;
  puVar5 = PTR_DAT_0437dcc8;
  *puVar8 = 1;
  *puVar7 = 1;
  *puVar5 = 1;
  pcVar30 = *(char **)(lVar16 + 0x60);
  *(undefined1 **)(lVar16 + 0x480) = &LAB_02425164;
  *(undefined1 **)(lVar16 + 0x488) = &LAB_02425220;
  *(undefined1 **)(lVar16 + 0x470) = &LAB_02425530;
  *(undefined1 **)(lVar16 + 0x478) = &LAB_02425840;
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar22 = lVar16 + 8;
  lVar28 = 0;
  uVar27 = 0;
  puVar31 = &LAB_0241ac6c;
  if (uVar13 != 0) {
    puVar31 = &LAB_0241aa80;
  }
  puVar1 = (ulong *)(lVar16 + 0x498);
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(undefined1 **)(lVar16 + 0x30) = puVar31;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            uVar29 = 0;
            *(undefined1 **)(lVar16 + 0x450) = puVar31;
            goto LAB_0241f86c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar16 + 0x38) = puVar31;
      }
      uVar29 = 0;
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0241f86c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  uVar29 = 1;
  local_540[0] = pcVar30;
  local_540[1] = puVar31;
LAB_0241f86c:
  pcVar30 = *(char **)(lVar16 + 0x78);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241ae50;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241ad54;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0241f9b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0241f9b4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0241f9b4:
  pcVar30 = *(char **)(lVar16 + 0x90);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241b124;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241af74;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0241faf8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0241faf8;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0241faf8:
  pcVar30 = *(char **)(lVar16 + 0xa8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241b318;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241b20c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0241fc3c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0241fc3c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0241fc3c:
  pcVar30 = *(char **)(lVar16 + 0xc0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241b630;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241b424;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0241fd80;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0241fd80;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0241fd80:
  pcVar30 = *(char **)(lVar16 + 0xd8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241ba10;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241b718;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0241fec4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0241fec4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0241fec4:
  pcVar30 = *(char **)(lVar16 + 0xf0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241bc3c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241baf8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420008;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420008;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420008:
  pcVar30 = *(char **)(lVar16 + 0x108);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241be6c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241bd24;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0242014c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0242014c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0242014c:
  pcVar30 = *(char **)(lVar16 + 0x120);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241bf8c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241bf54;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420290;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420290;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420290:
  pcVar30 = *(char **)(lVar16 + 0x138);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241c0cc;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241bfc4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024203d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024203d4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_024203d4:
  pcVar30 = *(char **)(lVar16 + 0x150);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241c20c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241c1d4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420518;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420518;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420518:
  pcVar30 = *(char **)(lVar16 + 0x168);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241c3ec;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241c244;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0242065c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0242065c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0242065c:
  pcVar30 = *(char **)(lVar16 + 0x180);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241c50c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241c4d4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024207a0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024207a0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_024207a0:
  pcVar30 = *(char **)(lVar16 + 0x198);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241c680;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241c544;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024208e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024208e4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_024208e4:
  pcVar30 = *(char **)(lVar16 + 0x1b0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241c7f4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241c7bc;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420a28;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420a28;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420a28:
  pcVar30 = *(char **)(lVar16 + 0x1c8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241caa4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241c82c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420b6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420b6c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420b6c:
  pcVar30 = *(char **)(lVar16 + 0x1e0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241cbc4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241cb8c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420cb0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420cb0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420cb0:
  pcVar30 = *(char **)(lVar16 + 0x1f8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241cd6c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241cbfc;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420df4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420df4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420df4:
  pcVar30 = *(char **)(lVar16 + 0x210);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241d1b0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241ce54;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02420f38;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02420f38;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02420f38:
  pcVar30 = *(char **)(lVar16 + 0x218);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241d22c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241d1f4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0242107c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0242107c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0242107c:
  pcVar30 = *(char **)(lVar16 + 0x230);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241d604;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241d264;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024211c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024211c0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_024211c0:
  pcVar30 = *(char **)(lVar16 + 0x248);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241d724;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241d6ec;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421304;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421304;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421304:
  pcVar30 = *(char **)(lVar16 + 0x260);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241d794;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241d75c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421448;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421448;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421448:
  pcVar30 = *(char **)(lVar16 + 0x278);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241d90c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241d7cc;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_0242158c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_0242158c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_0242158c:
  pcVar30 = *(char **)(lVar16 + 0x290);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241da2c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241d9f4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024216d0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024216d0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_024216d0:
  pcVar30 = *(char **)(lVar16 + 0x2a8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241dcc0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241da64;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421814;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421814;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421814:
  pcVar30 = *(char **)(lVar16 + 0x2c0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e208;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241dda8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421958;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421958;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421958:
  pcVar30 = *(char **)(lVar16 + 0x2d8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e328;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e2f0;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421a9c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421a9c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421a9c:
  pcVar30 = *(char **)(lVar16 + 0x2f0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e398;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e360;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421be0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421be0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421be0:
  pcVar30 = *(char **)(lVar16 + 0x308);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e51c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e3d0;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421d24;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421d24;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421d24:
  pcVar30 = *(char **)(lVar16 + 800);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e63c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e604;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar11 == 0)) {
      iVar11 = (int)uVar27;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421e68;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421e68;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_02421e68:
  iVar11 = (int)uVar29;
  pcVar30 = *(char **)(lVar16 + 0x338);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e6ac;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e674;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02421fac;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02421fac;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  iVar11 = iVar11 + 1;
  alStack_550[uVar29 * 2 + 2] = (long)pcVar30;
  local_540[uVar29 * 2 + 1] = pcVar2;
LAB_02421fac:
  pcVar30 = *(char **)(lVar16 + 0x350);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e71c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e6e4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024220f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024220f0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_024220f0:
  pcVar30 = *(char **)(lVar16 + 0x368);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241e78c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e754;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422234;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422234;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422234:
  pcVar30 = *(char **)(lVar16 + 0x380);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241ea50;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241e7c4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422378;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422378;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422378:
  pcVar30 = *(char **)(lVar16 + 0x398);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241eb70;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241eb38;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024224bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024224bc;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_024224bc:
  pcVar30 = *(char **)(lVar16 + 0x3b0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241ebe0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241eba8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422600;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422600;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422600:
  pcVar30 = *(char **)(lVar16 + 0x3c8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241ec50;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241ec18;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422744;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422744;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422744:
  pcVar30 = *(char **)(lVar16 + 0x3e0);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241edc4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241ec88;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422888;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422888;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422888:
  pcVar30 = *(char **)(lVar16 + 0x3f8);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241eee4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241eeac;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_024229cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_024229cc;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_024229cc:
  pcVar30 = *(char **)(lVar16 + 0x410);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241ef54;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241ef1c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422b10;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422b10;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422b10:
  pcVar30 = *(char **)(lVar16 + 0x428);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241efc4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241ef8c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422c54;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422c54;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422c54:
  pcVar30 = *(char **)(lVar16 + 0x440);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241f1b0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241effc;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) {
      iVar14 = (int)uVar27;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x450) = pcVar2;
            goto LAB_02422d98;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
      goto LAB_02422d98;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  lVar28 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
  local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422d98:
  pcVar30 = *(char **)(lVar16 + 0x448);
  sVar17 = strlen(pcVar30);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar30,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0241f244;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0241f1f4;
  }
  while( true ) {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar28);
    sVar17 = strlen(pcVar30);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar14 == 0)) break;
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar27 == 0x20) {
LAB_02422ef4:
      lVar28 = (long)iVar11;
      iVar11 = iVar11 + 1;
      alStack_550[lVar28 * 2 + 2] = (long)pcVar30;
      local_540[lVar28 * 2 + 1] = pcVar2;
LAB_02422f04:
      uVar13 = (uint)*puVar1;
joined_r0x02422e90:
      if ((uVar13 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*puVar1;
      }
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*puVar1;
      }
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar18 = FUN_008cca50();
        lVar28 = lVar18 + 0x181;
        if ((*(byte *)(lVar18 + 0x180) & 1) != 0) {
          lVar28 = *(long *)(lVar18 + 400);
        }
        lVar18 = (long)iVar11;
        iVar11 = iVar11 + 1;
        alStack_550[lVar18 * 2 + 2] = lVar28;
        local_540[lVar18 * 2 + 1] = PTR_LAB_04387158;
        uVar13 = (uint)*puVar1;
      }
      if ((uVar13 >> 0x1b & 1) == 0) {
        lVar18 = FUN_008cca50();
        lVar28 = lVar18 + 0x289;
        if ((*(byte *)(lVar18 + 0x288) & 1) != 0) {
          lVar28 = *(long *)(lVar18 + 0x298);
        }
        lVar18 = (long)iVar11;
        iVar11 = iVar11 + 1;
        alStack_550[lVar18 * 2 + 2] = lVar28;
        local_540[lVar18 * 2 + 1] = PTR_LAB_04387150;
        lVar28 = *(long *)(lVar16 + 0x450);
      }
      else {
        lVar28 = *(long *)(lVar16 + 0x450);
      }
      if (lVar28 != 0) {
        lVar18 = FUN_008cca50();
        lVar28 = lVar18 + 0x1c9;
        if ((*(byte *)(lVar18 + 0x1c8) & 1) != 0) {
          lVar28 = *(long *)(lVar18 + 0x1d8);
        }
        pcVar30 = *(char **)(lVar16 + 0x450);
        lVar18 = (long)iVar11;
        iVar11 = iVar11 + 1;
        alStack_550[lVar18 * 2 + 2] = lVar28;
        local_540[lVar18 * 2 + 1] = pcVar30;
      }
      alStack_550[(long)iVar11 * 2 + 2] = 0;
      local_540[(long)iVar11 * 2 + 1] = (char *)0x0;
      memcpy(&local_a10,local_540,0x4d0);
      memcpy(asStack_ee0,local_540,0x4d0);
      lVar28 = FUN_008cca50();
      lVar18 = (long)iVar11 + -1;
      pcVar30 = (char *)alStack_550[lVar18 * 2 + 2];
      sVar17 = strlen(pcVar30);
      sVar3 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar3 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar17 == sVar3) &&
         (iVar11 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
         iVar11 == 0)) {
        auStack_a20[lVar18 * 2 + 2] = 0;
        *(undefined8 *)(auStack_a0f + lVar18 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_ee0 + lVar18 * 0x10) = alStack_550[lVar18 * 2 + 2];
      *(undefined1 **)(asStack_ee0 + (lVar18 * 2 + 1) * 8) = &LAB_024242f0;
      FUN_00151fe0(param_1,0,2);
      local_ee8[0] = FUN_0014feb0(param_1,0xffffffff);
      local_ef0 = param_1;
      if ((*PTR_DAT_043870d8 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_043870d8);
        puVar5 = PTR_DAT_043870e0;
        if (iVar11 != 0) {
          FUN_0241a650(PTR_DAT_043870e0);
          FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_043870d8);
        }
      }
      uVar12 = local_ee8[0];
      uVar27 = *(ulong *)(PTR_DAT_043870e0 + 8);
      puVar5 = *(undefined **)(PTR_DAT_043870e0 + 0x10);
      if ((*PTR_DAT_043870e0 & 1) == 0) {
        puVar5 = PTR_DAT_043870e0 + 1;
        uVar27 = (ulong)((byte)*PTR_DAT_043870e0 >> 1);
      }
      FUN_001514f0(param_1,puVar5,uVar27);
      FUN_00152550(param_1,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_02424340,0);
      FUN_00152550(param_1,uVar12,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar20 = asStack_ee0;
          pbVar19 = (byte *)FUN_02418e1c();
        }
        else if (lVar28 == 0) {
          psVar20 = &local_a10;
          pbVar19 = (byte *)FUN_02418c3c();
        }
        else {
          psVar20 = (string *)local_540;
          pbVar19 = (byte *)FUN_02418ffc();
        }
        pbVar26 = *(byte **)(pbVar19 + 0x10);
        if ((*pbVar19 & 1) == 0) {
          pbVar26 = pbVar19 + 1;
        }
        FUN_00154450(param_1,pbVar26);
        local_ef8 = FUN_0014feb0(param_1,0xffffffff);
        local_f30 = (undefined1 *)CONCAT44(local_f30._4_4_,0x1e);
        local_f00 = param_1;
        FUN_008fe304(auStack_70,param_1,&local_f30,&local_ef0,local_ef8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar16);
        FUN_00155a20(param_1,psVar20,2);
        uVar12 = local_ef8;
        if (*(long *)(lVar16 + 0x480) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar12,"class_check");
        }
        uVar12 = local_ef8;
        if (*(long *)(lVar16 + 0x488) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar12,"class_cast");
        }
        uVar12 = local_ef8;
        uVar25 = *(undefined8 *)(lVar16 + 0x460);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar16);
        FUN_00151810(param_1,lVar22);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar12,&DAT_03955ac7);
        uVar12 = local_ef8;
        uVar25 = *(undefined8 *)(lVar16 + 0x468);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar16);
        FUN_00151810(param_1,lVar22);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar12,&DAT_0397c077);
        if (*(char *)(lVar16 + 0x58) == '\0') {
          local_f30 = (undefined1 *)CONCAT44(local_f30._4_4_,1);
          FUN_008fe304(auStack_70,param_1,&local_f30,&local_f00,local_ef8);
        }
        else {
          local_f30 = &LAB_02424430;
          uStack_f28 = 0;
          local_f20 = lVar16;
          lStack_f18 = lVar22;
          FUN_02424390(param_1,1,&local_f30,local_ef8);
          local_f30 = &LAB_02424740;
          uStack_f28 = 0;
          local_f20 = lVar16;
          lStack_f18 = lVar22;
          FUN_02424390(param_1,2,&local_f30,local_ef8);
        }
        FUN_00151fe0(param_1,0,3);
        uVar12 = FUN_0014feb0(param_1,0xffffffff);
        local_f30 = (undefined1 *)CONCAT44(local_f30._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_1,&local_f30,&local_ef0,uVar12);
        if (*(undefined1 **)(lVar16 + 0x458) != (undefined1 *)0x0) {
          uStack_f28 = 0;
          local_f30 = *(undefined1 **)(lVar16 + 0x458);
          local_f20 = lVar16;
          lStack_f18 = lVar22;
          FUN_02424390(param_1,4,&local_f30,uVar12);
        }
        if (*(char *)(lVar16 + 0x490) != '\0') {
          local_f30 = &LAB_02424430;
          uStack_f28 = 0;
          local_f20 = lVar16;
          lStack_f18 = lVar22;
          FUN_02424390(param_1,1,&local_f30,uVar12);
          local_f30 = &LAB_02424740;
          uStack_f28 = 0;
          local_f20 = lVar16;
          lStack_f18 = lVar22;
          FUN_02424390(param_1,2,&local_f30,uVar12);
        }
        uVar15 = local_ef8;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar12);
        }
        FUN_00152ae0(param_1,uVar15);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_f00,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_02419234();
      puVar5 = DAT_043e5248;
      if ((DAT_043e5238 & 1) == 0) {
        puVar5 = &DAT_043e5239;
      }
      FUN_00154450(param_1,puVar5);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_f30._0_4_ = 0x1e;
      FUN_008fe304(&local_f00,param_1,&local_f30,&local_ef0,uVar12);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar16);
      FUN_00155a20(param_1,local_540,2);
      FUN_00151fe0(param_1,0,3);
      uVar15 = FUN_0014feb0(param_1,0xffffffff);
      local_f30 = (undefined1 *)CONCAT44(local_f30._4_4_,0x1e);
      FUN_008fe304(&local_f00,param_1,&local_f30,&local_ef0,uVar15);
      local_f30 = *(undefined1 **)(lVar16 + 0x458);
      if (local_f30 != (undefined1 *)0x0) {
        uStack_f28 = 0;
        local_f20 = lVar16;
        lStack_f18 = lVar22;
        FUN_02424390(param_1,4,&local_f30,uVar15);
      }
      local_f30 = &LAB_02424b08;
      uStack_f28 = 0;
      local_f10 = 0;
      puStack_f08 = &DAT_03a7d550;
      local_f20 = lVar16;
      lStack_f18 = lVar22;
      FUN_02424a50(param_1,1,&local_f30,uVar15);
      local_f30 = &LAB_02424e18;
      uStack_f28 = 0;
      local_f10 = 0;
      puStack_f08 = &DAT_03a7d550;
      local_f20 = lVar16;
      lStack_f18 = lVar22;
      FUN_02424a50(param_1,2,&local_f30,uVar15);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar15);
      }
      FUN_00152ae0(param_1,uVar12);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_ee8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar14 = (int)uVar27;
  if (iVar14 == 1) {
    *(undefined1 *)(lVar16 + 0x58) = 1;
    *(char **)(lVar16 + 0x30) = pcVar2;
    *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
    goto LAB_02422f04;
  }
  if (iVar14 == 2) {
    *(undefined1 *)(lVar16 + 0x58) = 1;
    *(char **)(lVar16 + 0x38) = pcVar2;
    *(ulong *)(lVar16 + 0x498) = *(ulong *)(lVar16 + 0x498) | 1L << (uVar27 & 0x3f);
    uVar13 = (uint)*puVar1;
    goto joined_r0x02422e90;
  }
  if (iVar14 == 0x13) {
    *(char **)(lVar16 + 0x450) = pcVar2;
    uVar13 = (uint)*puVar1;
    goto joined_r0x02422e90;
  }
  *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
  goto LAB_02422ef4;
LAB_02423e44:
  iVar11 = isblank((uint)pbVar19[-1]);
  if (iVar11 == 0) goto LAB_02423e88;
  FUN_02419f0c(&DAT_043e52d8);
  puVar4 = (undefined1 *)((ulong)_DAT_043e52d8 >> 1 & 0x7f);
  if (((ulong)_DAT_043e52d8 & 1) != 0) {
    puVar4 = DAT_043e52e0;
  }
  if (puVar4 == (undefined1 *)0x0) goto LAB_02423e88;
  pbVar19 = &DAT_043e52d9;
  if (((ulong)_DAT_043e52d8 & 1) != 0) {
    pbVar19 = DAT_043e52e8;
  }
  pbVar19 = pbVar19 + (long)puVar4;
  goto LAB_02423e44;
}


