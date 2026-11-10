/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e58b68; name: FUN_00e58b68
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e58b68(long param_1,long param_2)

{
  char *pcVar1;
  code *pcVar2;
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
  undefined4 uVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  byte *pbVar18;
  string *psVar19;
  void *__dest;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 uVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  ulong uVar30;
  code *local_990;
  undefined8 uStack_988;
  long local_980;
  long lStack_978;
  undefined8 local_970;
  undefined *puStack_968;
  undefined4 local_960 [2];
  long local_958;
  undefined4 local_950;
  long local_948;
  undefined4 local_940 [2];
  string asStack_938 [736];
  undefined8 auStack_658 [2];
  string local_648;
  undefined1 auStack_647 [7];
  size_t local_640;
  undefined1 *local_638;
  long alStack_368 [2];
  char *local_358 [95];
  
  puVar8 = PTR_DAT_0437c3e0;
  if (((DAT_043b03b8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b03b8), iVar11 != 0)) {
    local_358[2] = (char *)0x0;
    local_358[1] = (undefined1 *)0x0;
    local_358[0] = (char *)0x2e6c6f7308;
    if ((*puVar8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_0437c3e0);
      puVar6 = PTR_DAT_0437c3e8;
      if (iVar11 != 0) {
        FUN_00e55a90(PTR_DAT_0437c3e8);
        FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437c3e0);
      }
    }
    pcVar27 = (char *)FUN_00e54e9c(local_358,PTR_DAT_0437c3e8);
    psVar19 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b03a0,psVar19);
    pcVar27 = local_358[2];
    plVar9 = DAT_043f1798;
    if ((((ulong)local_358[0] & 1) != 0) && ((byte *)local_358[2] != (byte *)0x0)) {
      lVar15 = tpidr_el0;
      plVar21 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar21 = plVar9;
      }
      uVar24 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar21,pcVar27,0,8);
          goto LAB_00e5aaf0;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar27,0,8);
    }
LAB_00e5aaf0:
    FUN_00100250(PTR__string_04379718,&DAT_043b03a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b03b8);
  }
  std::string::string(&local_648,(string *)&DAT_043b03a0);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b0398);
  sVar3 = (ulong)((byte)local_648 >> 1);
  if (((byte)local_648 & 1) != 0) {
    sVar3 = local_640;
  }
  std::string::append((ulong)&local_648,(char)iVar11);
  if (((byte)local_648 & 1) == 0) {
    puVar28 = auStack_647;
    local_640 = (size_t)((byte)local_648 >> 1);
  }
  else {
    puVar28 = local_638;
  }
  snprintf(puVar28 + (sVar3 - 1),local_640,"%d",(ulong)DAT_043b0398);
  DAT_043b0398 = DAT_043b0398 + 1;
  if (((DAT_043b03d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b03d8), iVar11 != 0)) {
    local_358[2] = (char *)0x0;
    local_358[1] = (undefined1 *)0x0;
    local_358[0] = (char *)0x2e6c6f7308;
    if ((*puVar8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_0437c3e0);
      puVar6 = PTR_DAT_0437c3e8;
      if (iVar11 != 0) {
        FUN_00e55a90(PTR_DAT_0437c3e8);
        FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437c3e0);
      }
    }
    pcVar27 = (char *)FUN_00e54e9c(local_358,PTR_DAT_0437c3e8);
    psVar19 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b03c0,psVar19);
    pcVar27 = local_358[2];
    plVar9 = DAT_043f1798;
    if ((((ulong)local_358[0] & 1) != 0) && ((byte *)local_358[2] != (byte *)0x0)) {
      lVar15 = tpidr_el0;
      plVar21 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar21 = plVar9;
      }
      uVar24 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar21,pcVar27,0,8);
          goto LAB_00e5ac3c;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar27,0,8);
    }
LAB_00e5ac3c:
    FUN_00100250(PTR__string_04379718,&DAT_043b03c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b03d8);
  }
  puVar6 = DAT_043b03d0;
  if ((DAT_043b03c0 & 1) == 0) {
    puVar6 = &DAT_043b03c1;
  }
  if (((byte)local_648 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_648 | 1);
  }
  else {
    puVar28 = local_638;
  }
  if (((DAT_043b03e8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b03e8), iVar11 != 0)) {
    DAT_043b03e0 = 0x1f8;
    __cxa_guard_release(&DAT_043b03e8);
  }
  if (((DAT_043b03f8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b03f8), iVar11 != 0)) {
    DAT_043b03f0 = 0x1ff;
    __cxa_guard_release(&DAT_043b03f8);
  }
  uVar24 = DAT_043b03e0;
  lVar15 = FUN_00153520(param_1,DAT_043b03e0);
  if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0x1f8)) ||
     (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar24 = DAT_043b03f0;
    lVar15 = FUN_00153520(param_1,DAT_043b03f0);
    if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0x1f8)) ||
       (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043b0418 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b0418), iVar11 != 0)) {
        if (((DAT_043b0450 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043b0450), iVar11 != 0))
        {
          DAT_043b0420 = 0x16;
          DAT_043b0430 = 0;
          DAT_043b0421._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043b0428 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043b0438 = 0x2a;
          _DAT_043b042c = 0;
          DAT_043b0448._7_1_ = 0;
          DAT_043b0448._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043b0448._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043b0448._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043b0448._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043b0448._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043b0441 = s__anonymous_namespace__039071f8[8];
          DAT_043b0441_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043b0441_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043b0441_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043b0441_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043b0446 = s__anonymous_namespace__039071f8._13_2_;
          DAT_043b0448._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043b0439._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043b0439._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043b0448._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043b0420,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043b0450);
        }
        plVar9 = DAT_043f1798;
        lVar15 = tpidr_el0;
        plVar21 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar21 = plVar9;
        }
        __dest = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,0x570,8);
        _DAT_043b0400 = (char *)0x571;
        DAT_043b0408 = (undefined1 *)0x560;
        DAT_043b0410 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<savedata::io::PokedexSave, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14>, char const (&)[19], bool (savedata::io::PokedexSave::*)(savedata::io::PokedexSave::AreaID) const, char const (&)[17], bool (savedata::io::PokedexSave::*)(savedata::io::PokedexSave::AreaID) const, char const (&)[19], unsigned int (savedata::io::PokedexSave::*)(savedata::io::PokedexSave::AreaID) const, char const (&)[17], unsigned int (savedata::io::PokedexSave::*)() const, char const (&)[20], unsigned int (savedata::io::PokedexSave::*)(), char const (&)[24], unsigned int (savedata::io::PokedexSave::*)() const, char const (&)[22], unsigned int (savedata::io::PokedexSave::*)() const, char const (&)[17], unsigned int (savedata::io::PokedexSave::*)(unsigned int) const, char const (&)[16], unsigned int (savedata::io::PokedexSave::*)(MonsNo) const, char const (&)[20], unsigned short (savedata::io::PokedexSave::*)(MonsNo) const, char const (&)[23], void (savedata::io::PokedexSave::*)(MonsNo), char const (&)[23], bool (savedata::io::PokedexSave::*)(MonsNo) const, char const (&)[24], unsigned int (savedata::io::PokedexSave::*)() const, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
               ,0x560);
        *(undefined1 *)((long)__dest + 0x560) = 0;
        std::string::find('\0',0x5b);
        uVar26 = std::string::find('\0',0x3d);
        uVar24 = std::string::rfind('\0',0x5d);
        if (uVar24 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043b0400 & 1) == 0) {
            uVar24 = (ulong)(DAT_043b0400 >> 1);
          }
          else {
            uVar24 = (ulong)DAT_043b0408;
          }
          uVar30 = 0;
          if (uVar26 != 0xffffffffffffffff) {
            uVar30 = uVar26;
          }
          uVar26 = uVar24;
        }
        else {
          uVar30 = 0;
          if (uVar26 != 0xffffffffffffffff) {
            uVar30 = uVar26;
          }
          if (((ulong)_DAT_043b0400 & 1) == 0) {
            uVar26 = (ulong)(DAT_043b0400 >> 1);
          }
          else {
            uVar26 = (ulong)DAT_043b0408;
          }
        }
        if (uVar30 < uVar26 - 1) {
          uVar30 = uVar30 + 1;
        }
        std::string::string((string *)local_358,(string *)&DAT_043b0400,uVar30,uVar24 - uVar30,
                            (allocator *)&DAT_043b0400);
        FUN_00e5544c(&DAT_043b0400);
        DAT_043b0410 = (byte *)local_358[2];
        _DAT_043b0400 = local_358[0];
        DAT_043b0408 = local_358[1];
        lVar15 = FUN_00e55324(&DAT_043b0400);
        if (lVar15 != -1) {
          std::string::erase(0x43b0400,lVar15 - 2);
        }
        bVar10 = ((ulong)_DAT_043b0400 & 1) == 0;
        puVar5 = (undefined1 *)(ulong)(DAT_043b0400 >> 1);
        pbVar18 = DAT_043b0410;
        if (!bVar10) {
          puVar5 = DAT_043b0408;
        }
        while (DAT_043b0410 = pbVar18, puVar5 != (undefined1 *)0x0) {
          pbVar23 = &DAT_043b0401;
          if ((DAT_043b0400 & 1) != 0) {
            pbVar23 = pbVar18;
          }
          iVar11 = isblank((uint)*pbVar23);
          if (iVar11 == 0) {
            iVar11 = isblank((uint)pbVar23[(long)(puVar5 + -1)]);
            if (iVar11 != 0) goto LAB_00e5b03c;
            break;
          }
          pbVar4 = &DAT_043b0401;
          if (!bVar10) {
            pbVar4 = pbVar18;
          }
          std::string::erase(0x43b0400,(long)pbVar4 - (long)pbVar23);
          bVar10 = ((ulong)_DAT_043b0400 & 1) == 0;
          puVar5 = (undefined1 *)(ulong)(DAT_043b0400 >> 1);
          pbVar18 = DAT_043b0410;
          if (!bVar10) {
            puVar5 = DAT_043b0408;
          }
        }
        goto LAB_00e5b078;
      }
      goto LAB_00e58d20;
    }
  }
  goto LAB_00e58d44;
  while( true ) {
    pbVar18 = &DAT_043b0401;
    if (((ulong)_DAT_043b0400 & 1) != 0) {
      pbVar18 = DAT_043b0410;
    }
    iVar11 = isblank((uint)pbVar18[(long)(puVar5 + -1)]);
    if (iVar11 == 0) break;
LAB_00e5b03c:
    FUN_00e55340(&DAT_043b0400);
    puVar5 = (undefined1 *)((ulong)_DAT_043b0400 >> 1 & 0x7f);
    if (((ulong)_DAT_043b0400 & 1) != 0) {
      puVar5 = DAT_043b0408;
    }
    if (puVar5 == (undefined1 *)0x0) break;
  }
LAB_00e5b078:
  uVar24 = FUN_00e55380(&DAT_043b0400,&DAT_043b0420);
  if (uVar24 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b0400,uVar24);
      uVar24 = FUN_00e55380(&DAT_043b0400,&DAT_043b0420);
    } while (uVar24 != 0xffffffffffffffff);
  }
  uVar24 = FUN_00e55380(&DAT_043b0400,&DAT_043b0438);
  if (uVar24 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43b0400,uVar24);
      uVar24 = FUN_00e55380(&DAT_043b0400,&DAT_043b0438);
    } while (uVar24 != 0xffffffffffffffff);
  }
  FUN_00100250(PTR__string_04379718,&DAT_043b0400,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043b0418);
LAB_00e58d20:
  pbVar18 = DAT_043b0410;
  if (((ulong)_DAT_043b0400 & 1) == 0) {
    pbVar18 = &DAT_043b0401;
  }
  FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar18);
  puVar20 = (undefined8 *)0x0;
LAB_00e58d44:
  uVar22 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar20[1] = uVar22;
  puVar20[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar15 = *(long *)(param_2 + 0x18);
  puVar20[3] = lVar15;
  lVar25 = *(long *)(param_2 + 0x20);
  puVar20[4] = lVar25;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar20[2];
    uVar24 = *(ulong *)(lVar15 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar24 = uVar26 - 1 & uVar24;
    }
    else if (uVar26 <= uVar24) {
      uVar30 = 0;
      if (uVar26 != 0) {
        uVar30 = uVar24 / uVar26;
      }
      uVar24 = uVar24 - uVar30 * uVar26;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar22 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar22;
  puVar20[7] = uVar7;
  puVar20[8] = *(undefined8 *)(param_2 + 0x40);
  puVar20[9] = *(undefined8 *)(param_2 + 0x48);
  puVar20[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar20 = &PTR_FUN_041ee8a0;
  memcpy(puVar20 + 0xc,(void *)(param_2 + 0x60),0x198);
  iVar11 = FUN_00154450(param_1,puVar28);
  if (iVar11 != 0) {
    FUN_001516f0(param_1,&LAB_00e5c080,0);
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
  lVar15 = FUN_001511d0(param_1,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar9 = DAT_043f1798;
  if ((((byte)local_648 & 1) != 0) && (local_638 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar21 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar21 = plVar9;
    }
    uVar24 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar21,local_638,0,8);
        goto LAB_00e58f64;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,local_638,0,8);
  }
LAB_00e58f64:
  memset(local_358,0,0x2f0);
  pcVar27 = *(char **)(lVar15 + 0x60);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  lVar25 = lVar15 + 8;
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  puVar28 = &LAB_00e5607c;
  if (uVar13 != 0) {
    puVar28 = &LAB_00e55e78;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(undefined1 **)(lVar15 + 0x30) = puVar28;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            uVar26 = 0;
            *(undefined1 **)(lVar15 + 0x1a8) = puVar28;
            goto LAB_00e590e4;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar28;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e590e4;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_358[0] = pcVar27;
  local_358[1] = puVar28;
LAB_00e590e4:
  pcVar27 = *(char **)(lVar15 + 0x78);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e56190;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e56158;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e59224;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59224;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59224:
  pcVar27 = *(char **)(lVar15 + 0x90);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e5631c;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e561c8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e59364;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59364;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59364:
  pcVar27 = *(char **)(lVar15 + 0xa8);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e5652c;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e563f8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e594a4;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e594a4;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e594a4:
  pcVar27 = *(char **)(lVar15 + 0xc0);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e5673c;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e56608;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e595e4;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e595e4;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e595e4:
  pcVar27 = *(char **)(lVar15 + 0xd8);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e56850;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e56818;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e59724;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59724;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59724:
  pcVar27 = *(char **)(lVar15 + 0xf0);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e568c0;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e56888;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e59864;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59864;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59864:
  pcVar27 = *(char **)(lVar15 + 0x108);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e56abc;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e568f8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e599a4;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e599a4;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e599a4:
  pcVar27 = *(char **)(lVar15 + 0x120);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e56cec;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e56b98;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e59ae4;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59ae4;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59ae4:
  pcVar27 = *(char **)(lVar15 + 0x138);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e56f1c;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e56dc8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e59c24;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59c24;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59c24:
  pcVar27 = *(char **)(lVar15 + 0x150);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar2 = FUN_00e570dc;
  if (uVar13 != 0) {
    pcVar2 = FUN_00e56ff8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar15 + 0x1a8) = pcVar2;
            goto LAB_00e59d64;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59d64;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59d64:
  pcVar27 = *(char **)(lVar15 + 0x168);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar2 = (code *)&LAB_00e572b4;
  if (uVar13 != 0) {
    pcVar2 = FUN_00e571c0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar15 + 0x1a8) = pcVar2;
            goto LAB_00e59ea4;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59ea4;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59ea4:
  pcVar27 = *(char **)(lVar15 + 0x180);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e573e0;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e573a8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e59fe4;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e59fe4;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e59fe4:
  pcVar27 = *(char **)(lVar15 + 0x198);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e58924;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e57418;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(char **)(lVar15 + 0x30) = pcVar1;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar15 + 0x1a8) = pcVar1;
            goto LAB_00e5a124;
          }
          *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar15 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e5a124;
    }
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar24 != 0x20);
  alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
  local_358[uVar26 * 2 + 1] = pcVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_00e5a124:
  pcVar27 = *(char **)(lVar15 + 0x1a0);
  sVar16 = strlen(pcVar27);
  sVar3 = 10;
  if (sVar16 < 0xb) {
    sVar3 = sVar16;
  }
  if (sVar3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar27,sVar3);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar29 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00e58b18;
  if (uVar13 != 0) {
    pcVar1 = &LAB_00e58ac8;
  }
  while( true ) {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar29);
    sVar16 = strlen(pcVar27);
    sVar3 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) break;
    uVar24 = uVar24 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar24 == 0x20) {
LAB_00e5a264:
      uVar30 = (ulong)((int)uVar26 + 1);
      alStack_368[uVar26 * 2 + 2] = (long)pcVar27;
      local_358[uVar26 * 2 + 1] = pcVar1;
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0x1f0);
joined_r0x00e5a248:
      if ((uVar13 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x1f0);
      }
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x1f0);
      }
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar17 = FUN_008cca50();
        lVar29 = lVar17 + 0x181;
        if ((*(byte *)(lVar17 + 0x180) & 1) != 0) {
          lVar29 = *(long *)(lVar17 + 400);
        }
        alStack_368[uVar30 * 2 + 2] = lVar29;
        local_358[uVar30 * 2 + 1] = PTR_LAB_0437c458;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x1f0);
        uVar30 = (ulong)((int)uVar30 + 1);
      }
      if ((uVar13 >> 0x1b & 1) == 0) {
        lVar17 = FUN_008cca50();
        lVar29 = lVar17 + 0x289;
        if ((*(byte *)(lVar17 + 0x288) & 1) != 0) {
          lVar29 = *(long *)(lVar17 + 0x298);
        }
        uVar24 = (ulong)((int)uVar30 + 1);
        alStack_368[uVar30 * 2 + 2] = lVar29;
        local_358[uVar30 * 2 + 1] = PTR_LAB_0437c460;
        lVar29 = *(long *)(lVar15 + 0x1a8);
      }
      else {
        lVar29 = *(long *)(lVar15 + 0x1a8);
        uVar24 = uVar30;
      }
      if (lVar29 != 0) {
        lVar17 = FUN_008cca50();
        lVar29 = lVar17 + 0x1c9;
        if ((*(byte *)(lVar17 + 0x1c8) & 1) != 0) {
          lVar29 = *(long *)(lVar17 + 0x1d8);
        }
        pcVar27 = *(char **)(lVar15 + 0x1a8);
        alStack_368[uVar24 * 2 + 2] = lVar29;
        local_358[uVar24 * 2 + 1] = pcVar27;
        uVar24 = (ulong)((int)uVar24 + 1);
      }
      alStack_368[uVar24 * 2 + 2] = 0;
      local_358[uVar24 * 2 + 1] = (char *)0x0;
      memcpy(&local_648,local_358,0x2f0);
      memcpy(asStack_938,local_358,0x2f0);
      lVar29 = FUN_008cca50();
      lVar17 = uVar24 - 1;
      pcVar27 = (char *)alStack_368[lVar17 * 2 + 2];
      sVar16 = strlen(pcVar27);
      sVar3 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar3 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar16 == sVar3) &&
         (iVar11 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar11 == 0)) {
        auStack_658[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_647 + lVar17 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_938 + lVar17 * 0x10) = alStack_368[lVar17 * 2 + 2];
      *(code **)(asStack_938 + (lVar17 * 2 + 1) * 8) = FUN_00e5b3f0;
      FUN_00151fe0(param_1,0,2);
      local_940[0] = FUN_0014feb0(param_1,0xffffffff);
      local_948 = param_1;
      if ((*puVar8 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_0437c3e0);
        puVar8 = PTR_DAT_0437c3e8;
        if (iVar11 != 0) {
          FUN_00e55a90(PTR_DAT_0437c3e8);
          FUN_00100250(PTR__string_04379718,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437c3e0);
        }
      }
      uVar12 = local_940[0];
      uVar24 = *(ulong *)(PTR_DAT_0437c3e8 + 8);
      puVar8 = *(undefined **)(PTR_DAT_0437c3e8 + 0x10);
      if ((*PTR_DAT_0437c3e8 & 1) == 0) {
        puVar8 = PTR_DAT_0437c3e8 + 1;
        uVar24 = (ulong)((byte)*PTR_DAT_0437c3e8 >> 1);
      }
      FUN_001514f0(param_1,puVar8,uVar24);
      FUN_00152550(param_1,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_00e57a00,0);
      FUN_00152550(param_1,uVar12,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar19 = asStack_938;
          pbVar18 = (byte *)FUN_00e5424c();
        }
        else if (lVar29 == 0) {
          psVar19 = &local_648;
          pbVar18 = (byte *)FUN_00e5406c();
        }
        else {
          psVar19 = (string *)local_358;
          pbVar18 = (byte *)FUN_00e5442c();
        }
        pbVar23 = *(byte **)(pbVar18 + 0x10);
        if ((*pbVar18 & 1) == 0) {
          pbVar23 = pbVar18 + 1;
        }
        FUN_00154450(param_1,pbVar23);
        local_950 = FUN_0014feb0(param_1,0xffffffff);
        local_990 = (code *)CONCAT44(local_990._4_4_,0x1e);
        local_958 = param_1;
        FUN_008fe304(local_960,param_1,&local_990,&local_948,local_950);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar15);
        FUN_00155a20(param_1,psVar19,2);
        uVar12 = local_950;
        if (*(long *)(lVar15 + 0x1d8) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar12,"class_check");
        }
        uVar12 = local_950;
        if (*(long *)(lVar15 + 0x1e0) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar12,"class_cast");
        }
        uVar12 = local_950;
        uVar22 = *(undefined8 *)(lVar15 + 0x1b8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar15);
        FUN_00151810(param_1,lVar25);
        FUN_001516f0(param_1,uVar22,3);
        FUN_00152550(param_1,uVar12,&DAT_03955ac7);
        uVar12 = local_950;
        uVar22 = *(undefined8 *)(lVar15 + 0x1c0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar15);
        FUN_00151810(param_1,lVar25);
        FUN_001516f0(param_1,uVar22,3);
        FUN_00152550(param_1,uVar12,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_990 = (code *)CONCAT44(local_990._4_4_,1);
          FUN_008fe304(local_960,param_1,&local_990,&local_958,local_950);
        }
        else {
          local_960[0] = 1;
          local_990 = FUN_00e5b440;
          uStack_988 = 0;
          local_980 = lVar15;
          lStack_978 = lVar25;
          FUN_00e5c0b4(param_1,local_960,&local_990,local_950);
          local_960[0] = 2;
          local_990 = (code *)&LAB_00e5b750;
          uStack_988 = 0;
          local_980 = lVar15;
          lStack_978 = lVar25;
          FUN_00e5c0b4(param_1,local_960,&local_990,local_950);
        }
        FUN_00151fe0(param_1,0,3);
        uVar12 = FUN_0014feb0(param_1,0xffffffff);
        local_990 = (code *)CONCAT44(local_990._4_4_,0x1e);
        FUN_008fe304(local_960,param_1,&local_990,&local_948,uVar12);
        if (*(code **)(lVar15 + 0x1b0) != (code *)0x0) {
          uStack_988 = 0;
          local_960[0] = 4;
          local_990 = *(code **)(lVar15 + 0x1b0);
          local_980 = lVar15;
          lStack_978 = lVar25;
          FUN_00e5c0b4(param_1,local_960,&local_990,uVar12);
        }
        if (*(char *)(lVar15 + 0x1e8) != '\0') {
          local_960[0] = 1;
          local_990 = FUN_00e5b440;
          uStack_988 = 0;
          local_980 = lVar15;
          lStack_978 = lVar25;
          FUN_00e5c0b4(param_1,local_960,&local_990,uVar12);
          local_960[0] = 2;
          local_990 = (code *)&LAB_00e5b750;
          uStack_988 = 0;
          local_980 = lVar15;
          lStack_978 = lVar25;
          FUN_00e5c0b4(param_1,local_960,&local_990,uVar12);
        }
        uVar14 = local_950;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar12);
        }
        FUN_00152ae0(param_1,uVar14);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_958,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_00e54664();
      puVar8 = DAT_043b02d8;
      if ((DAT_043b02c8 & 1) == 0) {
        puVar8 = &DAT_043b02c9;
      }
      FUN_00154450(param_1,puVar8);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_990._0_4_ = 0x1e;
      FUN_008fe304(&local_958,param_1,&local_990,&local_948,uVar12);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar15);
      FUN_00155a20(param_1,local_358,2);
      FUN_00151fe0(param_1,0,3);
      uVar14 = FUN_0014feb0(param_1,0xffffffff);
      local_990 = (code *)CONCAT44(local_990._4_4_,0x1e);
      FUN_008fe304(&local_958,param_1,&local_990,&local_948,uVar14);
      local_990 = *(code **)(lVar15 + 0x1b0);
      if (local_990 != (code *)0x0) {
        local_958 = CONCAT44(local_958._4_4_,4);
        uStack_988 = 0;
        local_980 = lVar15;
        lStack_978 = lVar25;
        FUN_00e5c0b4(param_1,&local_958,&local_990,uVar14);
      }
      local_958._0_4_ = 1;
      local_990 = (code *)&LAB_00e5ba60;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a787c8;
      local_980 = lVar15;
      lStack_978 = lVar25;
      FUN_00e5c150(param_1,&local_958,&local_990,uVar14);
      local_958 = CONCAT44(local_958._4_4_,2);
      local_990 = (code *)&LAB_00e5bd70;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a787c8;
      local_980 = lVar15;
      lStack_978 = lVar25;
      FUN_00e5c150(param_1,&local_958,&local_990,uVar14);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar14);
      }
      FUN_00152ae0(param_1,uVar12);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_940[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar11 = (int)uVar24;
  uVar30 = uVar26;
  if (iVar11 == 1) {
    *(char **)(lVar15 + 0x30) = pcVar1;
  }
  else {
    if (iVar11 != 2) {
      if (iVar11 == 0x13) {
        *(char **)(lVar15 + 0x1a8) = pcVar1;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0x1f0);
        goto joined_r0x00e5a248;
      }
      *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
      goto LAB_00e5a264;
    }
    *(char **)(lVar15 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 0x1f0) = *(ulong *)(lVar15 + 0x1f0) | 1L << (uVar24 & 0x3f);
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0x1f0);
  goto joined_r0x00e5a248;
}


