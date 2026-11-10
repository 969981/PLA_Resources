/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02339cb4; name: FUN_02339cb4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02339cb4(long param_1,long param_2)

{
  ulong *puVar1;
  char *pcVar2;
  size_t sVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
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
  long *plVar22;
  ulong uVar23;
  undefined8 uVar24;
  byte *pbVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  char *pcVar29;
  undefined1 *puVar30;
  long lVar31;
  undefined1 *local_1020;
  undefined8 uStack_1018;
  long local_1010;
  long lStack_1008;
  undefined8 local_1000;
  undefined *puStack_ff8;
  undefined4 local_ff0 [2];
  long local_fe8;
  undefined4 local_fe0;
  long local_fd8;
  undefined4 local_fd0 [2];
  string asStack_fc8 [1296];
  undefined8 auStack_ab8 [2];
  string local_aa8;
  undefined1 auStack_aa7 [7];
  size_t local_aa0;
  undefined1 *local_a98;
  long alStack_598 [2];
  char *local_588 [165];
  
  if (((DAT_043e1e10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e1e10), iVar11 != 0)) {
    local_588[2] = (char *)0x0;
    local_588[1] = (undefined1 *)0x0;
    local_588[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383cd8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04383cd8);
      puVar6 = PTR_DAT_04383ce0;
      if (iVar11 != 0) {
        FUN_0203e480(PTR_DAT_04383ce0);
        FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383cd8);
      }
    }
    pcVar29 = (char *)FUN_02336528(local_588,PTR_DAT_04383ce0);
    psVar20 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043e1df8,psVar20);
    pcVar29 = local_588[2];
    plVar9 = DAT_043f1798;
    if ((((ulong)local_588[0] & 1) != 0) && ((byte *)local_588[2] != (byte *)0x0)) {
      lVar16 = tpidr_el0;
      plVar22 = *(long **)(lVar16 + 0x20);
      if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
        *(long **)(lVar16 + 0x20) = DAT_043f1798;
        plVar22 = plVar9;
      }
      uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar26 & 1) != 0) {
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar22,pcVar29,0,8);
          goto LAB_0233e728;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,pcVar29,0,8);
    }
LAB_0233e728:
    FUN_00100250(PTR__string_04379718,&DAT_043e1df8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1e10);
  }
  std::string::string(&local_aa8,(string *)&DAT_043e1df8);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e1df0);
  sVar3 = (ulong)((byte)local_aa8 >> 1);
  if (((byte)local_aa8 & 1) != 0) {
    sVar3 = local_aa0;
  }
  std::string::append((ulong)&local_aa8,(char)iVar11);
  if (((byte)local_aa8 & 1) == 0) {
    puVar30 = auStack_aa7;
    local_aa0 = (size_t)((byte)local_aa8 >> 1);
  }
  else {
    puVar30 = local_a98;
  }
  snprintf(puVar30 + (sVar3 - 1),local_aa0,"%d",(ulong)DAT_043e1df0);
  DAT_043e1df0 = DAT_043e1df0 + 1;
  if (((DAT_043e1e30 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e1e30), iVar11 != 0)) {
    local_588[2] = (char *)0x0;
    local_588[1] = (undefined1 *)0x0;
    local_588[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383cd8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04383cd8);
      puVar6 = PTR_DAT_04383ce0;
      if (iVar11 != 0) {
        FUN_0203e480(PTR_DAT_04383ce0);
        FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383cd8);
      }
    }
    pcVar29 = (char *)FUN_02336528(local_588,PTR_DAT_04383ce0);
    psVar20 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043e1e18,psVar20);
    pcVar29 = local_588[2];
    plVar9 = DAT_043f1798;
    if ((((ulong)local_588[0] & 1) != 0) && ((byte *)local_588[2] != (byte *)0x0)) {
      lVar16 = tpidr_el0;
      plVar22 = *(long **)(lVar16 + 0x20);
      if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
        *(long **)(lVar16 + 0x20) = DAT_043f1798;
        plVar22 = plVar9;
      }
      uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar26 & 1) != 0) {
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar22,pcVar29,0,8);
          goto LAB_0233e87c;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,pcVar29,0,8);
    }
LAB_0233e87c:
    FUN_00100250(PTR__string_04379718,&DAT_043e1e18,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1e30);
  }
  puVar6 = DAT_043e1e28;
  if ((DAT_043e1e18 & 1) == 0) {
    puVar6 = &DAT_043e1e19;
  }
  if (((byte)local_aa8 & 1) == 0) {
    puVar30 = (undefined1 *)((ulong)&local_aa8 | 1);
  }
  else {
    puVar30 = local_a98;
  }
  if (((DAT_043e1e40 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e1e40), iVar11 != 0)) {
    DAT_043e1e38 = 0x538;
    __cxa_guard_release(&DAT_043e1e40);
  }
  if (((DAT_043e1e50 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e1e50), iVar11 != 0)) {
    DAT_043e1e48 = 0x53f;
    __cxa_guard_release(&DAT_043e1e50);
  }
  uVar26 = DAT_043e1e38;
  lVar16 = FUN_00153520(param_1,DAT_043e1e38);
  if ((uVar26 < ((ulong)(uint)-(int)lVar16 & 7 | 0x538)) ||
     (puVar21 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar26 = DAT_043e1e48;
    lVar16 = FUN_00153520(param_1,DAT_043e1e48);
    if ((uVar26 < ((ulong)(uint)-(int)lVar16 & 7 | 0x538)) ||
       (puVar21 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043e1e70 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e1e70), iVar11 != 0)) {
        if (((DAT_043e1ea8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e1ea8), iVar11 != 0))
        {
          DAT_043e1e78 = 0x16;
          DAT_043e1e88 = 0;
          DAT_043e1e79._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043e1e80 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043e1e90 = 0x2a;
          _DAT_043e1e84 = 0;
          DAT_043e1ea0._7_1_ = 0;
          DAT_043e1ea0._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043e1ea0._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043e1ea0._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043e1ea0._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043e1ea0._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043e1e99 = s__anonymous_namespace__039071f8[8];
          DAT_043e1e99_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043e1e99_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043e1e99_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043e1e99_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043e1e9e = s__anonymous_namespace__039071f8._13_2_;
          DAT_043e1ea0._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043e1e91._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043e1e91._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043e1ea0._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043e1e78,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043e1ea8);
        }
        plVar9 = DAT_043f1798;
        lVar16 = tpidr_el0;
        plVar22 = *(long **)(lVar16 + 0x20);
        if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
          *(long **)(lVar16 + 0x20) = DAT_043f1798;
          plVar22 = plVar9;
        }
        __dest = (void *)(**(code **)(*plVar22 + 0x10))(plVar22,0x1320,8);
        _DAT_043e1e58 = (char *)0x1321;
        DAT_043e1e60 = (undefined1 *)0x1317;
        DAT_043e1e68 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::player::PlayerAnimationController, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49>, const sol::base_list<> &, sol::base_list<field::content::HumanAnimationController, field::CharacterAnimationController>, char const (&)[11], void (field::player::PlayerAnimationController::*)(float, float), char const (&)[13], void (field::player::PlayerAnimationController::*)(field::player::PlayerAnimationController::Stance), char const (&)[15], bool (field::player::PlayerAnimationController::*)() const, char const (&)[6], void (field::player::PlayerAnimationController::*)(bool), char const (&)[13], void (field::player::PlayerAnimationController::*)(), char const (&)[19], bool (field::player::PlayerAnimationController::*)() const, char const (&)[11], void (field::player::PlayerAnimationController::*)(), char const (&)[16], bool (field::player::PlayerAnimationController::*)() const, char const (&)[16], bool (field::player::PlayerAnimationController::*)() const, char const (&)[16], bool (field::player::PlayerAnimationController::*)() const, char const (&)[9], void (field::player::PlayerAnimationController::*)(), char const (&)[16], bool (field::player::PlayerAnimationController::*)() const, char const (&)[8], void (field::player::PlayerAnimationController::*)(), char const (&)[19], bool (field::player::PlayerAnimationController::*)() const, char const (&)[10], bool (field::player::PlayerAnimationController::*)() const, char const (&)[7], void (field::player::PlayerAnimationController::*)(field::player::PlayerAnimationController::PlayerOneActionType), char const (&)[24], bool (field::player::PlayerAnimationController::*)() const, char const (&)[15], bool (field::player::PlayerAnimationController::*)() const, char const (&)[11], void (field::player::PlayerAnimationControll..." /* TRUNCATED STRING LITERAL */
               ,0x1317);
        *(undefined1 *)((long)__dest + 0x1317) = 0;
        std::string::find('X',0x5b);
        uVar28 = std::string::find('X',0x3d);
        uVar26 = std::string::rfind('X',0x5d);
        if (uVar26 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043e1e58 & 1) == 0) {
            uVar26 = (ulong)(DAT_043e1e58 >> 1);
          }
          else {
            uVar26 = (ulong)DAT_043e1e60;
          }
          uVar23 = 0;
          if (uVar28 != 0xffffffffffffffff) {
            uVar23 = uVar28;
          }
          uVar28 = uVar26;
        }
        else {
          uVar23 = 0;
          if (uVar28 != 0xffffffffffffffff) {
            uVar23 = uVar28;
          }
          if (((ulong)_DAT_043e1e58 & 1) == 0) {
            uVar28 = (ulong)(DAT_043e1e58 >> 1);
          }
          else {
            uVar28 = (ulong)DAT_043e1e60;
          }
        }
        if (uVar23 < uVar28 - 1) {
          uVar23 = uVar23 + 1;
        }
        std::string::string((string *)local_588,(string *)&DAT_043e1e58,uVar23,uVar26 - uVar23,
                            (allocator *)&DAT_043e1e58);
        FUN_02336668(&DAT_043e1e58);
        DAT_043e1e68 = (byte *)local_588[2];
        _DAT_043e1e58 = local_588[0];
        DAT_043e1e60 = local_588[1];
        lVar16 = FUN_02336544(&DAT_043e1e58);
        if (lVar16 != -1) {
          std::string::erase(0x43e1e58,lVar16 - 2);
        }
        bVar10 = ((ulong)_DAT_043e1e58 & 1) == 0;
        puVar5 = (undefined1 *)(ulong)(DAT_043e1e58 >> 1);
        pbVar19 = DAT_043e1e68;
        if (!bVar10) {
          puVar5 = DAT_043e1e60;
        }
        while (DAT_043e1e68 = pbVar19, puVar5 != (undefined1 *)0x0) {
          pbVar25 = &DAT_043e1e59;
          if ((DAT_043e1e58 & 1) != 0) {
            pbVar25 = pbVar19;
          }
          iVar11 = isblank((uint)*pbVar25);
          if (iVar11 == 0) {
            pbVar25 = pbVar25 + (long)puVar5;
            goto LAB_0233ee80;
          }
          pbVar4 = &DAT_043e1e59;
          if (!bVar10) {
            pbVar4 = pbVar19;
          }
          std::string::erase(0x43e1e58,(long)pbVar4 - (long)pbVar25);
          bVar10 = ((ulong)_DAT_043e1e58 & 1) == 0;
          puVar5 = (undefined1 *)(ulong)(DAT_043e1e58 >> 1);
          pbVar19 = DAT_043e1e68;
          if (!bVar10) {
            puVar5 = DAT_043e1e60;
          }
        }
LAB_0233eec4:
        uVar26 = FUN_023365a0(&DAT_043e1e58,&DAT_043e1e78);
        if (uVar26 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43e1e58,uVar26);
            uVar26 = FUN_023365a0(&DAT_043e1e58,&DAT_043e1e78);
          } while (uVar26 != 0xffffffffffffffff);
        }
        uVar26 = FUN_023365a0(&DAT_043e1e58,&DAT_043e1e90);
        if (uVar26 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43e1e58,uVar26);
            uVar26 = FUN_023365a0(&DAT_043e1e58,&DAT_043e1e90);
          } while (uVar26 != 0xffffffffffffffff);
        }
        FUN_00100250(PTR__string_04379718,&DAT_043e1e58,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e1e70);
      }
      pbVar19 = DAT_043e1e68;
      if (((ulong)_DAT_043e1e58 & 1) == 0) {
        pbVar19 = &DAT_043e1e59;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar19);
      puVar21 = (undefined8 *)0x0;
    }
  }
  uVar24 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar21[1] = uVar24;
  puVar21[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar16 = *(long *)(param_2 + 0x18);
  puVar21[3] = lVar16;
  lVar27 = *(long *)(param_2 + 0x20);
  puVar21[4] = lVar27;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar27 != 0) {
    uVar28 = puVar21[2];
    uVar26 = *(ulong *)(lVar16 + 8);
    if ((uVar28 & uVar28 - 1) == 0) {
      uVar26 = uVar28 - 1 & uVar26;
    }
    else if (uVar28 <= uVar26) {
      uVar23 = 0;
      if (uVar28 != 0) {
        uVar23 = uVar26 / uVar28;
      }
      uVar26 = uVar26 - uVar23 * uVar28;
    }
    *(undefined8 **)(puVar21[1] + uVar26 * 8) = puVar21 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar24 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar24;
  puVar21[7] = uVar7;
  puVar21[8] = *(undefined8 *)(param_2 + 0x40);
  puVar21[9] = *(undefined8 *)(param_2 + 0x48);
  puVar21[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar21 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar21 = &PTR_LAB_0425bc40;
  memcpy(puVar21 + 0xc,(void *)(param_2 + 0x60),0x4d8);
  iVar11 = FUN_00154450(param_1,puVar30);
  if (iVar11 != 0) {
    FUN_001516f0(param_1,&LAB_02340020,0);
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
  FUN_001522a0(param_1,puVar6);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar6);
  lVar16 = FUN_001511d0(param_1,0xffffffff);
  lVar16 = lVar16 + ((ulong)(uint)-(int)lVar16 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar9 = DAT_043f1798;
  if ((((byte)local_aa8 & 1) != 0) && (local_a98 != (undefined1 *)0x0)) {
    lVar27 = tpidr_el0;
    plVar22 = *(long **)(lVar27 + 0x20);
    if (*(long **)(lVar27 + 0x20) == (long *)0x0) {
      *(long **)(lVar27 + 0x20) = DAT_043f1798;
      plVar22 = plVar9;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar27 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar27 + 0x38d488) = 1;
        *(undefined8 *)(lVar27 + 0x38d478) = 0;
        *(undefined8 *)(lVar27 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar27 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar27 + 0x38d480)) {
        FUN_02bcc824(plVar22,local_a98,0,8);
        goto LAB_0233a0a8;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,local_a98,0,8);
  }
LAB_0233a0a8:
  memset(local_588,0,0x520);
  puVar8 = PTR_DAT_043865d8;
  *(undefined1 *)(lVar16 + 0x58) = 1;
  puVar6 = PTR_DAT_043847e0;
  *puVar8 = 1;
  *puVar6 = 1;
  *(undefined1 **)(lVar16 + 0x518) = &LAB_02340054;
  pcVar29 = *(char **)(lVar16 + 0x60);
  *(undefined1 **)(lVar16 + 0x520) = &LAB_02340110;
  *(undefined1 **)(lVar16 + 0x508) = &LAB_023402f0;
  *(undefined1 **)(lVar16 + 0x510) = &LAB_02340500;
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  lVar27 = lVar16 + 8;
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  puVar30 = &LAB_023369c0;
  if (uVar13 != 0) {
    puVar30 = &LAB_0233689c;
  }
  puVar1 = (ulong *)(lVar16 + 0x530);
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(undefined1 **)(lVar16 + 0x30) = puVar30;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            uVar28 = 0;
            *(undefined1 **)(lVar16 + 0x4e8) = puVar30;
            goto LAB_0233a264;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar16 + 0x38) = puVar30;
      }
      uVar28 = 0;
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233a264;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  uVar28 = 1;
  local_588[0] = pcVar29;
  local_588[1] = puVar30;
LAB_0233a264:
  pcVar29 = *(char **)(lVar16 + 0x78);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02336c2c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02336ae4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233a3a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233a3a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233a3a4:
  pcVar29 = *(char **)(lVar16 + 0x90);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02336e20;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02336d14;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233a4e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233a4e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233a4e4:
  pcVar29 = *(char **)(lVar16 + 0xa8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337080;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02336f2c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233a624;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233a624;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233a624:
  pcVar29 = *(char **)(lVar16 + 0xc0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337264;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337168;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233a764;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233a764;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233a764:
  pcVar29 = *(char **)(lVar16 + 0xd8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023373c0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337388;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233a8a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233a8a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233a8a4:
  pcVar29 = *(char **)(lVar16 + 0xf0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337430;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023373f8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233a9e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233a9e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233a9e4:
  pcVar29 = *(char **)(lVar16 + 0x108);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023374a0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337468;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233ab24;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233ab24;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233ab24:
  pcVar29 = *(char **)(lVar16 + 0x120);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337510;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023374d8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233ac64;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233ac64;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233ac64:
  pcVar29 = *(char **)(lVar16 + 0x138);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337580;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337548;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233ada4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233ada4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233ada4:
  pcVar29 = *(char **)(lVar16 + 0x150);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023375f0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023375b8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233aee4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233aee4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233aee4:
  pcVar29 = *(char **)(lVar16 + 0x168);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337660;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337628;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b024;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b024;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b024:
  pcVar29 = *(char **)(lVar16 + 0x180);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023376d0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337698;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b164;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b164;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b164:
  pcVar29 = *(char **)(lVar16 + 0x198);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337740;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337708;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b2a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b2a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b2a4:
  pcVar29 = *(char **)(lVar16 + 0x1b0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023377b0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337778;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b3e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b3e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b3e4:
  pcVar29 = *(char **)(lVar16 + 0x1c8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023378cc;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023377e8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b524;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b524;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b524:
  pcVar29 = *(char **)(lVar16 + 0x1e0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337a08;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023379d0;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b664;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b664;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b664:
  pcVar29 = *(char **)(lVar16 + 0x1f8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337a78;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337a40;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b7a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b7a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b7a4:
  pcVar29 = *(char **)(lVar16 + 0x210);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337bb4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337ab0;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233b8e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233b8e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233b8e4:
  pcVar29 = *(char **)(lVar16 + 0x228);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337d0c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337cd4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233ba24;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233ba24;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233ba24:
  pcVar29 = *(char **)(lVar16 + 0x240);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337d7c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337d44;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233bb64;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233bb64;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233bb64:
  pcVar29 = *(char **)(lVar16 + 600);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337dec;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337db4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233bca4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233bca4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233bca4:
  pcVar29 = *(char **)(lVar16 + 0x270);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02337f64;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02337e24;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233bde4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233bde4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233bde4:
  pcVar29 = *(char **)(lVar16 + 0x288);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338084;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0233804c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233bf24;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233bf24;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233bf24:
  pcVar29 = *(char **)(lVar16 + 0x2a0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023380f4;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023380bc;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c064;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c064;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233c064:
  pcVar29 = *(char **)(lVar16 + 0x2b8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023382b0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_0233812c;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c1a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c1a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233c1a4:
  pcVar29 = *(char **)(lVar16 + 0x2d0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023383d0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338398;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c2e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c2e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233c2e4:
  pcVar29 = *(char **)(lVar16 + 0x2e8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338440;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338408;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c424;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c424;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233c424:
  pcVar29 = *(char **)(lVar16 + 0x300);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023384b0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338478;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c564;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c564;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233c564:
  pcVar29 = *(char **)(lVar16 + 0x318);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338520;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023384e8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c6a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c6a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233c6a4:
  pcVar29 = *(char **)(lVar16 + 0x330);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338590;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338558;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar26;
      if (iVar11 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c7e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c7e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_0233c7e4:
  iVar11 = (int)uVar28;
  pcVar29 = *(char **)(lVar16 + 0x348);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338600;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023385c8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233c924;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233c924;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  iVar11 = iVar11 + 1;
  alStack_598[uVar28 * 2 + 2] = (long)pcVar29;
  local_588[uVar28 * 2 + 1] = pcVar2;
LAB_0233c924:
  pcVar29 = *(char **)(lVar16 + 0x360);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338670;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338638;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233ca64;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233ca64;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233ca64:
  pcVar29 = *(char **)(lVar16 + 0x378);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023386e0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023386a8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233cba4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233cba4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233cba4:
  pcVar29 = *(char **)(lVar16 + 0x390);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338750;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338718;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233cce4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233cce4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233cce4:
  pcVar29 = *(char **)(lVar16 + 0x3a8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023387c0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338788;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233ce24;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233ce24;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233ce24:
  pcVar29 = *(char **)(lVar16 + 0x3c0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023388e0;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023387f8;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233cf64;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233cf64;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233cf64:
  pcVar29 = *(char **)(lVar16 + 0x3d8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338a1c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023389e4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d0a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d0a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d0a4:
  pcVar29 = *(char **)(lVar16 + 0x3f0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338b8c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338a54;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d1e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d1e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d1e4:
  pcVar29 = *(char **)(lVar16 + 0x408);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338cac;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338c74;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d324;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d324;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d324:
  pcVar29 = *(char **)(lVar16 + 0x420);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02338e3c;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338ce4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d464;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d464;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d464:
  pcVar29 = *(char **)(lVar16 + 0x438);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02339140;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02338f24;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d5a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d5a4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d5a4:
  pcVar29 = *(char **)(lVar16 + 0x450);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02339260;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02339228;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d6e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d6e4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d6e4:
  pcVar29 = *(char **)(lVar16 + 0x468);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02339388;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02339298;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d824;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d824;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d824:
  pcVar29 = *(char **)(lVar16 + 0x480);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023395bc;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02339478;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233d964;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233d964;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233d964:
  pcVar29 = *(char **)(lVar16 + 0x498);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_023396dc;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023396a4;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233daa4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233daa4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233daa4:
  pcVar29 = *(char **)(lVar16 + 0x4b0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02339914;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02339714;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233dbe4;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233dbe4;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233dbe4:
  pcVar29 = *(char **)(lVar16 + 0x4c8);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02339a34;
  if (uVar13 != 0) {
    pcVar2 = &LAB_023399fc;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) {
      iVar14 = (int)uVar26;
      if (iVar14 == 1) {
        *(char **)(lVar16 + 0x30) = pcVar2;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 == 0x13) {
            *(char **)(lVar16 + 0x4e8) = pcVar2;
            goto LAB_0233dd24;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(char **)(lVar16 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
      goto LAB_0233dd24;
    }
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar26 != 0x20);
  lVar31 = (long)iVar11;
  iVar11 = iVar11 + 1;
  alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
  local_588[lVar31 * 2 + 1] = pcVar2;
LAB_0233dd24:
  pcVar29 = *(char **)(lVar16 + 0x4e0);
  sVar17 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar17 < 0xb) {
    sVar3 = sVar17;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar10) {
    uVar13 = (uint)(sVar17 < 10);
  }
  lVar31 = 0;
  uVar26 = 0;
  pcVar2 = &LAB_02339c80;
  if (uVar13 != 0) {
    pcVar2 = &LAB_02339a6c;
  }
  while( true ) {
    lVar18 = FUN_008cca50();
    pbVar19 = (byte *)(lVar18 + lVar31);
    sVar17 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar17 == sVar3) &&
       (iVar14 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar14 == 0)) break;
    uVar26 = uVar26 + 1;
    lVar31 = lVar31 + 0x18;
    if (uVar26 == 0x20) {
LAB_0233de64:
      lVar31 = (long)iVar11;
      iVar11 = iVar11 + 1;
      alStack_598[lVar31 * 2 + 2] = (long)pcVar29;
      local_588[lVar31 * 2 + 1] = pcVar2;
      uVar13 = (uint)*puVar1;
joined_r0x0233de48:
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
        lVar31 = lVar18 + 0x181;
        if ((*(byte *)(lVar18 + 0x180) & 1) != 0) {
          lVar31 = *(long *)(lVar18 + 400);
        }
        lVar18 = (long)iVar11;
        iVar11 = iVar11 + 1;
        alStack_598[lVar18 * 2 + 2] = lVar31;
        local_588[lVar18 * 2 + 1] = PTR_LAB_04383cb0;
        uVar13 = (uint)*puVar1;
      }
      if ((uVar13 >> 0x1b & 1) == 0) {
        lVar18 = FUN_008cca50();
        lVar31 = lVar18 + 0x289;
        if ((*(byte *)(lVar18 + 0x288) & 1) != 0) {
          lVar31 = *(long *)(lVar18 + 0x298);
        }
        lVar18 = (long)iVar11;
        iVar11 = iVar11 + 1;
        alStack_598[lVar18 * 2 + 2] = lVar31;
        local_588[lVar18 * 2 + 1] = PTR_LAB_04383cb8;
        lVar31 = *(long *)(lVar16 + 0x4e8);
      }
      else {
        lVar31 = *(long *)(lVar16 + 0x4e8);
      }
      if (lVar31 != 0) {
        lVar18 = FUN_008cca50();
        lVar31 = lVar18 + 0x1c9;
        if ((*(byte *)(lVar18 + 0x1c8) & 1) != 0) {
          lVar31 = *(long *)(lVar18 + 0x1d8);
        }
        pcVar29 = *(char **)(lVar16 + 0x4e8);
        lVar18 = (long)iVar11;
        iVar11 = iVar11 + 1;
        alStack_598[lVar18 * 2 + 2] = lVar31;
        local_588[lVar18 * 2 + 1] = pcVar29;
      }
      alStack_598[(long)iVar11 * 2 + 2] = 0;
      local_588[(long)iVar11 * 2 + 1] = (char *)0x0;
      memcpy(&local_aa8,local_588,0x520);
      memcpy(asStack_fc8,local_588,0x520);
      lVar31 = FUN_008cca50();
      lVar18 = (long)iVar11 + -1;
      pcVar29 = (char *)alStack_598[lVar18 * 2 + 2];
      sVar17 = strlen(pcVar29);
      sVar3 = (ulong)(*(byte *)(lVar31 + 0x1c8) >> 1);
      if ((*(byte *)(lVar31 + 0x1c8) & 1) != 0) {
        sVar3 = *(size_t *)(lVar31 + 0x1d0);
      }
      if ((sVar17 == sVar3) &&
         (iVar11 = std::string::compare(lVar31 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
         iVar11 == 0)) {
        auStack_ab8[lVar18 * 2 + 2] = 0;
        *(undefined8 *)(auStack_aa7 + lVar18 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_fc8 + lVar18 * 0x10) = alStack_598[lVar18 * 2 + 2];
      *(undefined1 **)(asStack_fc8 + (lVar18 * 2 + 1) * 8) = &LAB_0233f340;
      FUN_00151fe0(param_1,0,2);
      local_fd0[0] = FUN_0014feb0(param_1,0xffffffff);
      local_fd8 = param_1;
      if ((*PTR_DAT_04383cd8 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04383cd8);
        puVar6 = PTR_DAT_04383ce0;
        if (iVar11 != 0) {
          FUN_0203e480(PTR_DAT_04383ce0);
          FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04383cd8);
        }
      }
      uVar12 = local_fd0[0];
      uVar26 = *(ulong *)(PTR_DAT_04383ce0 + 8);
      puVar6 = *(undefined **)(PTR_DAT_04383ce0 + 0x10);
      if ((*PTR_DAT_04383ce0 & 1) == 0) {
        puVar6 = PTR_DAT_04383ce0 + 1;
        uVar26 = (ulong)((byte)*PTR_DAT_04383ce0 >> 1);
      }
      FUN_001514f0(param_1,puVar6,uVar26);
      FUN_00152550(param_1,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_0233f390,0);
      FUN_00152550(param_1,uVar12,&DAT_0397bfcb);
      lVar31 = 0;
      do {
        if (lVar31 == 1) {
          psVar20 = asStack_fc8;
          pbVar19 = (byte *)FUN_0203ec90();
        }
        else if (lVar31 == 0) {
          psVar20 = &local_aa8;
          pbVar19 = (byte *)FUN_0203cdb8();
        }
        else {
          psVar20 = (string *)local_588;
          pbVar19 = (byte *)FUN_0203e224();
        }
        pbVar25 = *(byte **)(pbVar19 + 0x10);
        if ((*pbVar19 & 1) == 0) {
          pbVar25 = pbVar19 + 1;
        }
        FUN_00154450(param_1,pbVar25);
        local_fe0 = FUN_0014feb0(param_1,0xffffffff);
        local_1020 = (undefined1 *)CONCAT44(local_1020._4_4_,0x1e);
        local_fe8 = param_1;
        FUN_008fe304(local_ff0,param_1,&local_1020,&local_fd8,local_fe0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar16);
        FUN_00155a20(param_1,psVar20,2);
        uVar12 = local_fe0;
        if (*(long *)(lVar16 + 0x518) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar12,"class_check");
        }
        uVar12 = local_fe0;
        if (*(long *)(lVar16 + 0x520) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar12,"class_cast");
        }
        uVar12 = local_fe0;
        uVar24 = *(undefined8 *)(lVar16 + 0x4f8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar16);
        FUN_00151810(param_1,lVar27);
        FUN_001516f0(param_1,uVar24,3);
        FUN_00152550(param_1,uVar12,&DAT_03955ac7);
        uVar12 = local_fe0;
        uVar24 = *(undefined8 *)(lVar16 + 0x500);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar16);
        FUN_00151810(param_1,lVar27);
        FUN_001516f0(param_1,uVar24,3);
        FUN_00152550(param_1,uVar12,&DAT_0397c077);
        if (*(char *)(lVar16 + 0x58) == '\0') {
          local_1020 = (undefined1 *)CONCAT44(local_1020._4_4_,1);
          FUN_008fe304(local_ff0,param_1,&local_1020,&local_fe8,local_fe0);
        }
        else {
          local_ff0[0] = 1;
          local_1020 = &LAB_0233f3e0;
          uStack_1018 = 0;
          local_1010 = lVar16;
          lStack_1008 = lVar27;
          FUN_02340958(param_1,local_ff0,&local_1020,local_fe0);
          local_ff0[0] = 2;
          local_1020 = &LAB_0233f6f0;
          uStack_1018 = 0;
          local_1010 = lVar16;
          lStack_1008 = lVar27;
          FUN_02340958(param_1,local_ff0,&local_1020,local_fe0);
        }
        FUN_00151fe0(param_1,0,3);
        uVar12 = FUN_0014feb0(param_1,0xffffffff);
        local_1020 = (undefined1 *)CONCAT44(local_1020._4_4_,0x1e);
        FUN_008fe304(local_ff0,param_1,&local_1020,&local_fd8,uVar12);
        if (*(undefined1 **)(lVar16 + 0x4f0) != (undefined1 *)0x0) {
          uStack_1018 = 0;
          local_ff0[0] = 4;
          local_1020 = *(undefined1 **)(lVar16 + 0x4f0);
          local_1010 = lVar16;
          lStack_1008 = lVar27;
          FUN_02340958(param_1,local_ff0,&local_1020,uVar12);
        }
        if (*(char *)(lVar16 + 0x528) != '\0') {
          local_ff0[0] = 1;
          local_1020 = &LAB_0233f3e0;
          uStack_1018 = 0;
          local_1010 = lVar16;
          lStack_1008 = lVar27;
          FUN_02340958(param_1,local_ff0,&local_1020,uVar12);
          local_ff0[0] = 2;
          local_1020 = &LAB_0233f6f0;
          uStack_1018 = 0;
          local_1010 = lVar16;
          lStack_1008 = lVar27;
          FUN_02340958(param_1,local_ff0,&local_1020,uVar12);
        }
        uVar15 = local_fe0;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar12);
        }
        FUN_00152ae0(param_1,uVar15);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_fe8,0xfffffffe);
        lVar31 = lVar31 + 1;
      } while (lVar31 != 3);
      FUN_02335cec();
      puVar6 = DAT_043e1de0;
      if ((DAT_043e1dd0 & 1) == 0) {
        puVar6 = &DAT_043e1dd1;
      }
      FUN_00154450(param_1,puVar6);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_1020._0_4_ = 0x1e;
      FUN_008fe304(&local_fe8,param_1,&local_1020,&local_fd8,uVar12);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar16);
      FUN_00155a20(param_1,local_588,2);
      FUN_00151fe0(param_1,0,3);
      uVar15 = FUN_0014feb0(param_1,0xffffffff);
      local_1020 = (undefined1 *)CONCAT44(local_1020._4_4_,0x1e);
      FUN_008fe304(&local_fe8,param_1,&local_1020,&local_fd8,uVar15);
      local_1020 = *(undefined1 **)(lVar16 + 0x4f0);
      if (local_1020 != (undefined1 *)0x0) {
        local_fe8 = CONCAT44(local_fe8._4_4_,4);
        uStack_1018 = 0;
        local_1010 = lVar16;
        lStack_1008 = lVar27;
        FUN_02340958(param_1,&local_fe8,&local_1020,uVar15);
      }
      local_fe8._0_4_ = 1;
      local_1020 = &LAB_0233fa00;
      uStack_1018 = 0;
      local_1000 = 0;
      puStack_ff8 = &DAT_03a7d4b0;
      local_1010 = lVar16;
      lStack_1008 = lVar27;
      FUN_023409f4(param_1,&local_fe8,&local_1020,uVar15);
      local_fe8 = CONCAT44(local_fe8._4_4_,2);
      local_1020 = &LAB_0233fd10;
      uStack_1018 = 0;
      local_1000 = 0;
      puStack_ff8 = &DAT_03a7d4b0;
      local_1010 = lVar16;
      lStack_1008 = lVar27;
      FUN_023409f4(param_1,&local_fe8,&local_1020,uVar15);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar15);
      }
      FUN_00152ae0(param_1,uVar12);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_fd0[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar14 = (int)uVar26;
  if (iVar14 == 1) {
    *(char **)(lVar16 + 0x30) = pcVar2;
  }
  else {
    if (iVar14 != 2) {
      if (iVar14 == 0x13) {
        *(char **)(lVar16 + 0x4e8) = pcVar2;
        uVar13 = (uint)*puVar1;
        goto joined_r0x0233de48;
      }
      *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
      goto LAB_0233de64;
    }
    *(char **)(lVar16 + 0x38) = pcVar2;
  }
  *(undefined1 *)(lVar16 + 0x58) = 1;
  *(ulong *)(lVar16 + 0x530) = *(ulong *)(lVar16 + 0x530) | 1L << (uVar26 & 0x3f);
  uVar13 = (uint)*puVar1;
  goto joined_r0x0233de48;
LAB_0233ee80:
  iVar11 = isblank((uint)pbVar25[-1]);
  if (iVar11 == 0) goto LAB_0233eec4;
  FUN_02336560(&DAT_043e1e58);
  puVar5 = (undefined1 *)((ulong)_DAT_043e1e58 >> 1 & 0x7f);
  if (((ulong)_DAT_043e1e58 & 1) != 0) {
    puVar5 = DAT_043e1e60;
  }
  if (puVar5 == (undefined1 *)0x0) goto LAB_0233eec4;
  pbVar25 = &DAT_043e1e59;
  if (((ulong)_DAT_043e1e58 & 1) != 0) {
    pbVar25 = DAT_043e1e68;
  }
  pbVar25 = pbVar25 + (long)puVar5;
  goto LAB_0233ee80;
}


