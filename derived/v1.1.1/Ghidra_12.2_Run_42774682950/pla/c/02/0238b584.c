/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0238b584; name: FUN_0238b584
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0238b584(long param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  size_t sVar15;
  byte *pbVar16;
  string *psVar17;
  void *__dest;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *local_8a0;
  undefined8 uStack_898;
  long local_890;
  long lStack_888;
  undefined8 local_880;
  undefined *puStack_878;
  undefined4 local_870 [2];
  long local_868;
  undefined4 local_860;
  long local_858;
  undefined4 local_850 [2];
  string asStack_848 [656];
  undefined8 auStack_5b8 [2];
  string local_5a8;
  undefined1 auStack_5a7 [7];
  size_t local_5a0;
  undefined1 *local_598;
  long alStack_318 [2];
  char *local_308 [85];
  
  if (((DAT_043e29e0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e29e0), iVar8 != 0)) {
    local_308[2] = (char *)0x0;
    local_308[1] = (undefined1 *)0x0;
    local_308[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385df0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04385df0);
      puVar4 = PTR_DAT_04385df8;
      if (iVar8 != 0) {
        FUN_02206be0(PTR_DAT_04385df8);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385df0);
      }
    }
    pcVar25 = (char *)FUN_0238eddc(local_308,PTR_DAT_04385df8);
    psVar17 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e29c8,psVar17);
    pcVar25 = local_308[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_308[0] & 1) != 0) && ((byte *)local_308[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar19 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar19 = plVar6;
      }
      uVar22 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar19,pcVar25,0,8);
          goto LAB_0238cecc;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,pcVar25,0,8);
    }
LAB_0238cecc:
    FUN_00100250(PTR__string_04379718,&DAT_043e29c8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e29e0);
  }
  std::string::string(&local_5a8,(string *)&DAT_043e29c8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e29c0);
  if (((byte)local_5a8 & 1) == 0) {
    uVar22 = (ulong)((byte)local_5a8 >> 1);
  }
  else {
    uVar22 = local_5a0;
  }
  std::string::append((ulong)&local_5a8,(char)iVar8);
  if (((byte)local_5a8 & 1) == 0) {
    puVar26 = auStack_5a7;
    local_5a0 = (size_t)((byte)local_5a8 >> 1);
  }
  else {
    puVar26 = local_598;
  }
  snprintf(puVar26 + (uVar22 - 1),local_5a0,"%d",(ulong)DAT_043e29c0);
  DAT_043e29c0 = DAT_043e29c0 + 1;
  if (((DAT_043e2a00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2a00), iVar8 != 0)) {
    local_308[2] = (char *)0x0;
    local_308[1] = (undefined1 *)0x0;
    local_308[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385df0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04385df0);
      puVar4 = PTR_DAT_04385df8;
      if (iVar8 != 0) {
        FUN_02206be0(PTR_DAT_04385df8);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385df0);
      }
    }
    pcVar25 = (char *)FUN_0238eddc(local_308,PTR_DAT_04385df8);
    psVar17 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e29e8,psVar17);
    pcVar25 = local_308[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_308[0] & 1) != 0) && ((byte *)local_308[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar19 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar19 = plVar6;
      }
      uVar22 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar19,pcVar25,0,8);
          goto LAB_0238d020;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,pcVar25,0,8);
    }
LAB_0238d020:
    FUN_00100250(PTR__string_04379718,&DAT_043e29e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2a00);
  }
  puVar4 = DAT_043e29f8;
  if ((DAT_043e29e8 & 1) == 0) {
    puVar4 = &DAT_043e29e9;
  }
  if (((byte)local_5a8 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_5a8 | 1);
  }
  else {
    puVar26 = local_598;
  }
  if (((DAT_043e2a10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2a10), iVar8 != 0)) {
    DAT_043e2a08 = 400;
    __cxa_guard_release(&DAT_043e2a10);
  }
  if (((DAT_043e2a20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2a20), iVar8 != 0)) {
    DAT_043e2a18 = 0x197;
    __cxa_guard_release(&DAT_043e2a20);
  }
  uVar22 = DAT_043e2a08;
  lVar12 = FUN_00153520(param_2,DAT_043e2a08);
  if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 400)) ||
     (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e2a18;
    lVar12 = FUN_00153520(param_2,DAT_043e2a18);
    if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 400)) ||
       (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      if (((DAT_043e2a40 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2a40), iVar8 != 0)) {
        if (((DAT_043e2a78 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2a78), iVar8 != 0)) {
          DAT_043e2a48 = 0x16;
          DAT_043e2a58 = 0;
          DAT_043e2a49._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043e2a50 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043e2a60 = 0x2a;
          _DAT_043e2a54 = 0;
          DAT_043e2a70._7_1_ = 0;
          DAT_043e2a70._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043e2a70._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043e2a70._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043e2a70._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043e2a70._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043e2a69 = s__anonymous_namespace__039071f8[8];
          DAT_043e2a69_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043e2a69_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043e2a69_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043e2a69_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043e2a6e = s__anonymous_namespace__039071f8._13_2_;
          DAT_043e2a70._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043e2a61._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043e2a61._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043e2a70._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043e2a48,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043e2a78);
        }
        plVar6 = DAT_043f1798;
        lVar12 = tpidr_el0;
        plVar19 = *(long **)(lVar12 + 0x20);
        if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
          *(long **)(lVar12 + 0x20) = DAT_043f1798;
          plVar19 = plVar6;
        }
        __dest = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,0x410,8);
        _DAT_043e2a28 = (char *)0x411;
        DAT_043e2a30 = (undefined1 *)0x40c;
        DAT_043e2a38 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::player::PlayerStatusComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9>, char const (&)[9], bool (field::player::PlayerStatusComponent::*)() const, char const (&)[7], void (field::player::PlayerStatusComponent::*)(bool), char const (&)[19], bool (field::player::PlayerStatusComponent::*)() const, char const (&)[17], bool (field::player::PlayerStatusComponent::*)() const, char const (&)[16], bool (field::player::PlayerStatusComponent::*)(field::character::CharacterBadStatus) const, char const (&)[15], void (field::player::PlayerStatusComponent::*)(), char const (&)[14], void (field::player::PlayerStatusComponent::*)(const field::player::PlayerStatusComponent::StatusInvincibleType &, bool), char const (&)[16], void (field::player::PlayerStatusComponent::*)(), char const (&)[13], bool (field::player::PlayerStatusComponent::*)() const, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
               ,0x40c);
        *(undefined1 *)((long)__dest + 0x40c) = 0;
        std::string::find('(',0x5b);
        uVar24 = std::string::find('(',0x3d);
        uVar22 = std::string::rfind('(',0x5d);
        if (uVar22 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043e2a28 & 1) == 0) {
            uVar22 = (ulong)(DAT_043e2a28 >> 1);
          }
          else {
            uVar22 = (ulong)DAT_043e2a30;
          }
          uVar28 = 0;
          if (uVar24 != 0xffffffffffffffff) {
            uVar28 = uVar24;
          }
          uVar24 = uVar22;
        }
        else {
          uVar28 = 0;
          if (uVar24 != 0xffffffffffffffff) {
            uVar28 = uVar24;
          }
          if (((ulong)_DAT_043e2a28 & 1) == 0) {
            uVar24 = (ulong)(DAT_043e2a28 >> 1);
          }
          else {
            uVar24 = (ulong)DAT_043e2a30;
          }
        }
        if (uVar28 < uVar24 - 1) {
          uVar28 = uVar28 + 1;
        }
        std::string::string((string *)local_308,(string *)&DAT_043e2a28,uVar28,uVar22 - uVar28,
                            (allocator *)&DAT_043e2a28);
        FUN_0238ef1c(&DAT_043e2a28);
        DAT_043e2a38 = (byte *)local_308[2];
        _DAT_043e2a28 = local_308[0];
        DAT_043e2a30 = local_308[1];
        lVar12 = FUN_0238edf8(&DAT_043e2a28);
        if (lVar12 != -1) {
          std::string::erase(0x43e2a28,lVar12 - 2);
        }
        bVar7 = ((ulong)_DAT_043e2a28 & 1) == 0;
        puVar3 = (undefined1 *)(ulong)(DAT_043e2a28 >> 1);
        pbVar16 = DAT_043e2a38;
        if (!bVar7) {
          puVar3 = DAT_043e2a30;
        }
        while (DAT_043e2a38 = pbVar16, puVar3 != (undefined1 *)0x0) {
          pbVar21 = &DAT_043e2a29;
          if ((DAT_043e2a28 & 1) != 0) {
            pbVar21 = pbVar16;
          }
          iVar8 = isblank((uint)*pbVar21);
          if (iVar8 == 0) {
            pbVar21 = pbVar21 + (long)puVar3;
            goto LAB_0238d3a0;
          }
          pbVar2 = &DAT_043e2a29;
          if (!bVar7) {
            pbVar2 = pbVar16;
          }
          std::string::erase(0x43e2a28,(long)pbVar2 - (long)pbVar21);
          bVar7 = ((ulong)_DAT_043e2a28 & 1) == 0;
          puVar3 = (undefined1 *)(ulong)(DAT_043e2a28 >> 1);
          pbVar16 = DAT_043e2a38;
          if (!bVar7) {
            puVar3 = DAT_043e2a30;
          }
        }
LAB_0238d3e4:
        uVar22 = FUN_0238ee54(&DAT_043e2a28,&DAT_043e2a48);
        if (uVar22 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43e2a28,uVar22);
            uVar22 = FUN_0238ee54(&DAT_043e2a28,&DAT_043e2a48);
          } while (uVar22 != 0xffffffffffffffff);
        }
        uVar22 = FUN_0238ee54(&DAT_043e2a28,&DAT_043e2a60);
        if (uVar22 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43e2a28,uVar22);
            uVar22 = FUN_0238ee54(&DAT_043e2a28,&DAT_043e2a60);
          } while (uVar22 != 0xffffffffffffffff);
        }
        FUN_00100250(PTR__string_04379718,&DAT_043e2a28,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e2a40);
      }
      pbVar16 = DAT_043e2a38;
      if (((ulong)_DAT_043e2a28 & 1) == 0) {
        pbVar16 = &DAT_043e2a29;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",pbVar16);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar20;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar28 = 0;
      if (uVar24 != 0) {
        uVar28 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar28 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar20;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425bd80;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x130);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_02391220,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar9 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar9);
  }
  FUN_001522a0(param_2,puVar4);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar4);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_5a8 & 1) != 0) && (local_598 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar19 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar19 = plVar6;
    }
    uVar22 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar19,local_598,0,8);
        goto LAB_0238b978;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,local_598,0,8);
  }
LAB_0238b978:
  memset(local_308,0,0x2a0);
  pcVar25 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar23 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  puVar26 = &LAB_0238f24c;
  if (uVar10 != 0) {
    puVar26 = &LAB_0238f11c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar26;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(undefined1 **)(lVar12 + 0x140) = puVar26;
            goto LAB_0238bad4;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar26;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238bad4;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_308[0] = pcVar25;
  local_308[1] = puVar26;
LAB_0238bad4:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238f470;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238f328;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238bc14;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238bc14;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238bc14:
  pcVar25 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238f584;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238f54c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238bd54;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238bd54;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238bd54:
  pcVar25 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238f5f4;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238f5bc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238be94;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238be94;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238be94:
  pcVar25 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238f77c;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238f62c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238bfd4;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238bfd4;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238bfd4:
  pcVar25 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238f948;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238f858;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238c114;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238c114;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238c114:
  pcVar25 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238fc54;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238fa60;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238c254;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238c254;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238c254:
  pcVar25 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238fd68;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238fd30;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238c394;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238c394;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238c394:
  pcVar25 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_0238fdd8;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238fda0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x140) = pcVar1;
            goto LAB_0238c4d4;
          }
          *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238c4d4;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
  local_308[uVar24 * 2 + 1] = pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0238c4d4:
  pcVar25 = *(char **)(lVar12 + 0x138);
  sVar13 = strlen(pcVar25);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar1 = &LAB_02390508;
  if (uVar10 != 0) {
    pcVar1 = &LAB_0238fe10;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
    if (uVar22 == 0x20) {
LAB_0238c614:
      uVar28 = (ulong)((int)uVar24 + 1);
      alStack_318[uVar24 * 2 + 2] = (long)pcVar25;
      local_308[uVar24 * 2 + 1] = pcVar1;
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x188);
joined_r0x0238c5f8:
      if ((uVar10 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x188);
      }
      if ((uVar10 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x188);
      }
      if ((uVar10 >> 0x10 & 1) == 0) {
        lVar14 = FUN_008cca50();
        lVar27 = lVar14 + 0x181;
        if ((*(byte *)(lVar14 + 0x180) & 1) != 0) {
          lVar27 = *(long *)(lVar14 + 400);
        }
        uVar22 = (ulong)((int)uVar28 + 1);
        alStack_318[uVar28 * 2 + 2] = lVar27;
        local_308[uVar28 * 2 + 1] = PTR_LAB_04385dc8;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x188);
      }
      else {
        uVar22 = uVar28;
      }
      if ((uVar10 >> 0x1b & 1) == 0) {
        lVar14 = FUN_008cca50();
        lVar27 = lVar14 + 0x289;
        if ((*(byte *)(lVar14 + 0x288) & 1) != 0) {
          lVar27 = *(long *)(lVar14 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        alStack_318[uVar22 * 2 + 2] = lVar27;
        local_308[uVar22 * 2 + 1] = PTR_LAB_04385dd0;
        lVar27 = *(long *)(lVar12 + 0x140);
      }
      else {
        lVar27 = *(long *)(lVar12 + 0x140);
        uVar24 = uVar22;
      }
      if (lVar27 != 0) {
        lVar14 = FUN_008cca50();
        lVar27 = lVar14 + 0x1c9;
        if ((*(byte *)(lVar14 + 0x1c8) & 1) != 0) {
          lVar27 = *(long *)(lVar14 + 0x1d8);
        }
        pcVar25 = *(char **)(lVar12 + 0x140);
        alStack_318[uVar24 * 2 + 2] = lVar27;
        local_308[uVar24 * 2 + 1] = pcVar25;
        uVar24 = (ulong)((int)uVar24 + 1);
      }
      alStack_318[uVar24 * 2 + 2] = 0;
      local_308[uVar24 * 2 + 1] = (char *)0x0;
      memcpy(&local_5a8,local_308,0x2a0);
      memcpy(asStack_848,local_308,0x2a0);
      lVar27 = FUN_008cca50();
      lVar14 = uVar24 - 1;
      pcVar25 = (char *)alStack_318[lVar14 * 2 + 2];
      sVar15 = strlen(pcVar25);
      if ((*(byte *)(lVar27 + 0x1c8) & 1) == 0) {
        sVar13 = (size_t)(*(byte *)(lVar27 + 0x1c8) >> 1);
      }
      else {
        sVar13 = *(size_t *)(lVar27 + 0x1d0);
      }
      if ((sVar15 == sVar13) &&
         (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
         iVar8 == 0)) {
        auStack_5b8[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_5a7 + lVar14 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_848 + lVar14 * 0x10) = alStack_318[lVar14 * 2 + 2];
      *(undefined1 **)(asStack_848 + (lVar14 * 2 + 1) * 8) = &LAB_02390540;
      FUN_00151fe0(param_2,0,2);
      local_850[0] = FUN_0014feb0(param_2,0xffffffff);
      local_858 = param_2;
      if ((*PTR_DAT_04385df0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04385df0);
        puVar4 = PTR_DAT_04385df8;
        if (iVar8 != 0) {
          FUN_02206be0(PTR_DAT_04385df8);
          FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04385df0);
        }
      }
      uVar9 = local_850[0];
      uVar22 = *(ulong *)(PTR_DAT_04385df8 + 8);
      puVar4 = *(undefined **)(PTR_DAT_04385df8 + 0x10);
      if ((*PTR_DAT_04385df8 & 1) == 0) {
        puVar4 = PTR_DAT_04385df8 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_04385df8 >> 1);
      }
      FUN_001514f0(param_2,puVar4,uVar22);
      FUN_00152550(param_2,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02390590,0);
      FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
      lVar27 = 0;
      do {
        if (lVar27 == 1) {
          psVar17 = asStack_848;
          pbVar16 = (byte *)FUN_022073b0();
        }
        else if (lVar27 == 0) {
          psVar17 = &local_5a8;
          pbVar16 = (byte *)FUN_02205560();
        }
        else {
          psVar17 = (string *)local_308;
          pbVar16 = (byte *)FUN_02206984();
        }
        pbVar21 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_860 = FUN_0014feb0(param_2,0xffffffff);
        local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
        local_868 = param_2;
        FUN_008fe304(local_870,param_2,&local_8a0,&local_858,local_860);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00155a20(param_2,psVar17,2);
        uVar9 = local_860;
        if (*(long *)(lVar12 + 0x170) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_check");
        }
        uVar9 = local_860;
        if (*(long *)(lVar12 + 0x178) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_cast");
        }
        uVar9 = local_860;
        uVar20 = *(undefined8 *)(lVar12 + 0x150);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar9,&DAT_03955ac7);
        uVar9 = local_860;
        uVar20 = *(undefined8 *)(lVar12 + 0x158);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar9,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,1);
          FUN_008fe304(local_870,param_2,&local_8a0,&local_868,local_860);
        }
        else {
          local_870[0] = 1;
          local_8a0 = &LAB_023905e0;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_023912a8(param_2,local_870,&local_8a0,local_860);
          local_870[0] = 2;
          local_8a0 = &LAB_023908f0;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_023912a8(param_2,local_870,&local_8a0,local_860);
        }
        FUN_00151fe0(param_2,0,3);
        uVar9 = FUN_0014feb0(param_2,0xffffffff);
        local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
        FUN_008fe304(local_870,param_2,&local_8a0,&local_858,uVar9);
        if (*(undefined1 **)(lVar12 + 0x148) != (undefined1 *)0x0) {
          local_870[0] = 4;
          uStack_898 = 0;
          local_8a0 = *(undefined1 **)(lVar12 + 0x148);
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_023912a8(param_2,local_870,&local_8a0,uVar9);
        }
        if (*(char *)(lVar12 + 0x180) != '\0') {
          local_870[0] = 1;
          local_8a0 = &LAB_023905e0;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_023912a8(param_2,local_870,&local_8a0,uVar9);
          local_870[0] = 2;
          local_8a0 = &LAB_023908f0;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_023912a8(param_2,local_870,&local_8a0,uVar9);
        }
        uVar11 = local_860;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar9);
        }
        FUN_00152ae0(param_2,uVar11);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_868,0xfffffffe);
        lVar27 = lVar27 + 1;
      } while (lVar27 != 3);
      FUN_0238e59c();
      puVar4 = DAT_043e29b0;
      if ((DAT_043e29a0 & 1) == 0) {
        puVar4 = &DAT_043e29a1;
      }
      FUN_00154450(param_2,puVar4);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0._0_4_ = 0x1e;
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_308,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar11);
      local_8a0 = *(undefined1 **)(lVar12 + 0x148);
      if (local_8a0 != (undefined1 *)0x0) {
        local_868 = CONCAT44(local_868._4_4_,4);
        uStack_898 = 0;
        local_890 = lVar12;
        lStack_888 = lVar23;
        FUN_023912a8(param_2,&local_868,&local_8a0,uVar11);
      }
      local_868._0_4_ = 1;
      local_8a0 = &LAB_02390c00;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d4f8;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_02391344(param_2,&local_868,&local_8a0,uVar11);
      local_868 = CONCAT44(local_868._4_4_,2);
      local_8a0 = &LAB_02390f10;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d4f8;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_02391344(param_2,&local_868,&local_8a0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_850[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar8 = (int)uVar22;
  uVar28 = uVar24;
  if (iVar8 == 1) {
    *(char **)(lVar12 + 0x30) = pcVar1;
  }
  else {
    if (iVar8 != 2) {
      if (iVar8 == 0x13) {
        *(char **)(lVar12 + 0x140) = pcVar1;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x188);
        goto joined_r0x0238c5f8;
      }
      *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
      goto LAB_0238c614;
    }
    *(char **)(lVar12 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *(ulong *)(lVar12 + 0x188) = *(ulong *)(lVar12 + 0x188) | 1L << (uVar22 & 0x3f);
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x188);
  goto joined_r0x0238c5f8;
LAB_0238d3a0:
  iVar8 = isblank((uint)pbVar21[-1]);
  if (iVar8 == 0) goto LAB_0238d3e4;
  FUN_0238ee14(&DAT_043e2a28);
  puVar3 = (undefined1 *)((ulong)_DAT_043e2a28 >> 1 & 0x7f);
  if (((ulong)_DAT_043e2a28 & 1) != 0) {
    puVar3 = DAT_043e2a30;
  }
  if (puVar3 == (undefined1 *)0x0) goto LAB_0238d3e4;
  pbVar21 = &DAT_043e2a29;
  if (((ulong)_DAT_043e2a28 & 1) != 0) {
    pbVar21 = DAT_043e2a38;
  }
  pbVar21 = pbVar21 + (long)puVar3;
  goto LAB_0238d3a0;
}


