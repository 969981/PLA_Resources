/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012dee44; name: FUN_012dee44
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_012dee44(long param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
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
  byte *pbVar15;
  string *psVar16;
  void *__dest;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  char *pcVar24;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  undefined1 *local_900;
  undefined8 uStack_8f8;
  long local_8f0;
  long lStack_8e8;
  undefined8 local_8e0;
  undefined *puStack_8d8;
  long local_8d0;
  undefined4 local_8c8;
  long local_8c0;
  undefined4 local_8b8 [2];
  string asStack_8b0 [688];
  undefined8 auStack_600 [2];
  string local_5f0;
  undefined1 auStack_5ef [7];
  size_t local_5e8;
  undefined1 *local_5e0;
  long alStack_340 [2];
  char *local_330 [88];
  undefined1 auStack_70 [16];
  
  if (((DAT_043c1cb0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1cb0), iVar8 != 0)) {
    local_330[2] = (char *)0x0;
    local_330[1] = (undefined1 *)0x0;
    local_330[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437ecb0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437ecb0);
      puVar4 = PTR_DAT_0437ecb8;
      if (iVar8 != 0) {
        FUN_012e3af0(PTR_DAT_0437ecb8);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437ecb0);
      }
    }
    pcVar24 = (char *)FUN_012e2eec(local_330,PTR_DAT_0437ecb8);
    psVar16 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043c1c98,psVar16);
    pcVar24 = local_330[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_330[0] & 1) != 0) && ((byte *)local_330[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar18 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar18 = plVar6;
      }
      uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar18,pcVar24,0,8);
          goto LAB_012e09c4;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,pcVar24,0,8);
    }
LAB_012e09c4:
    FUN_00100250(PTR__string_04379718,&DAT_043c1c98,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1cb0);
  }
  std::string::string(&local_5f0,(string *)&DAT_043c1c98);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043c1c90);
  sVar2 = (ulong)((byte)local_5f0 >> 1);
  if (((byte)local_5f0 & 1) != 0) {
    sVar2 = local_5e8;
  }
  std::string::append((ulong)&local_5f0,(char)iVar8);
  if (((byte)local_5f0 & 1) == 0) {
    puVar25 = auStack_5ef;
    local_5e8 = (size_t)((byte)local_5f0 >> 1);
  }
  else {
    puVar25 = local_5e0;
  }
  snprintf(puVar25 + (sVar2 - 1),local_5e8,"%d",(ulong)DAT_043c1c90);
  DAT_043c1c90 = DAT_043c1c90 + 1;
  if (((DAT_043c1cd0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1cd0), iVar8 != 0)) {
    local_330[2] = (char *)0x0;
    local_330[1] = (undefined1 *)0x0;
    local_330[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437ecb0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437ecb0);
      puVar4 = PTR_DAT_0437ecb8;
      if (iVar8 != 0) {
        FUN_012e3af0(PTR_DAT_0437ecb8);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437ecb0);
      }
    }
    pcVar24 = (char *)FUN_012e2eec(local_330,PTR_DAT_0437ecb8);
    psVar16 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043c1cb8,psVar16);
    pcVar24 = local_330[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_330[0] & 1) != 0) && ((byte *)local_330[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar18 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar18 = plVar6;
      }
      uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar18,pcVar24,0,8);
          goto LAB_012e0b18;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,pcVar24,0,8);
    }
LAB_012e0b18:
    FUN_00100250(PTR__string_04379718,&DAT_043c1cb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1cd0);
  }
  puVar4 = DAT_043c1cc8;
  if ((DAT_043c1cb8 & 1) == 0) {
    puVar4 = &DAT_043c1cb9;
  }
  if (((byte)local_5f0 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_5f0 | 1);
  }
  else {
    puVar25 = local_5e0;
  }
  if (((DAT_043c1ce0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1ce0), iVar8 != 0)) {
    DAT_043c1cd8 = 0x1b8;
    __cxa_guard_release(&DAT_043c1ce0);
  }
  if (((DAT_043c1cf0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1cf0), iVar8 != 0)) {
    DAT_043c1ce8 = 0x1bf;
    __cxa_guard_release(&DAT_043c1cf0);
  }
  uVar21 = DAT_043c1cd8;
  lVar12 = FUN_00153520(param_2,DAT_043c1cd8);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x1b8)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043c1ce8;
    lVar12 = FUN_00153520(param_2,DAT_043c1ce8);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x1b8)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      if (((DAT_043c1d10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1d10), iVar8 != 0)) {
        if (((DAT_043c1d48 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1d48), iVar8 != 0)) {
          DAT_043c1d18 = 0x16;
          DAT_043c1d28 = 0;
          DAT_043c1d19._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043c1d20 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043c1d30 = 0x2a;
          _DAT_043c1d24 = 0;
          DAT_043c1d40._7_1_ = 0;
          DAT_043c1d40._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043c1d40._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043c1d40._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043c1d40._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043c1d40._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043c1d39 = s__anonymous_namespace__039071f8[8];
          DAT_043c1d39_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043c1d39_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043c1d39_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043c1d39_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043c1d3e = s__anonymous_namespace__039071f8._13_2_;
          DAT_043c1d40._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043c1d31._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043c1d31._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043c1d40._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043c1d18,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043c1d48);
        }
        plVar6 = DAT_043f1798;
        lVar12 = tpidr_el0;
        plVar18 = *(long **)(lVar12 + 0x20);
        if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
          *(long **)(lVar12 + 0x20) = DAT_043f1798;
          plVar18 = plVar6;
        }
        __dest = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,0x530,8);
        _DAT_043c1cf8 = (char *)0x531;
        DAT_043c1d00 = (undefined1 *)0x520;
        DAT_043c1d08 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<contents::resident_hud::ProcResidentHud, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11>, char const (&)[4], const sol::no_construction &, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/contents/lua/src/generated/resident_hud_proc_glue.cpp:12:31)>, char const (&)[14], void (contents::resident_hud::ProcResidentHud::*)(field::ride::GuideScene), char const (&)[16], void (contents::resident_hud::ProcResidentHud::*)(field::ride::GuideScene, field::ride::GuideAction), char const (&)[14], void (contents::resident_hud::ProcResidentHud::*)(), char const (&)[13], void (contents::resident_hud::ProcResidentHud::*)(const gfl::FnvHash64 &), char const (&)[13], void (contents::resident_hud::ProcResidentHud::*)(bool), char const (&)[17], bool (contents::resident_hud::ProcResidentHud::*)() const, char const (&)[17], void (contents::resident_hud::ProcResidentHud::*)(const gfl::FnvHash64 &), char const (&)[17], void (contents::resident_hud::ProcResidentHud::*)(bool), char const (&)[21], bool (contents::resident_hud::ProcResidentHud::*)() const, char const (&)[23], void (contents::resident_hud::ProcResidentHud::*)()>, seperator_mark = int]"
               ,0x520);
        *(undefined1 *)((long)__dest + 0x520) = 0;
        std::string::find(-8,0x5b);
        uVar23 = std::string::find(-8,0x3d);
        uVar21 = std::string::rfind(-8,0x5d);
        if (uVar21 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043c1cf8 & 1) == 0) {
            uVar21 = (ulong)(DAT_043c1cf8 >> 1);
          }
          else {
            uVar21 = (ulong)DAT_043c1d00;
          }
          uVar27 = 0;
          if (uVar23 != 0xffffffffffffffff) {
            uVar27 = uVar23;
          }
          uVar23 = uVar21;
        }
        else {
          uVar27 = 0;
          if (uVar23 != 0xffffffffffffffff) {
            uVar27 = uVar23;
          }
          if (((ulong)_DAT_043c1cf8 & 1) == 0) {
            uVar23 = (ulong)(DAT_043c1cf8 >> 1);
          }
          else {
            uVar23 = (ulong)DAT_043c1d00;
          }
        }
        if (uVar27 < uVar23 - 1) {
          uVar27 = uVar27 + 1;
        }
        std::string::string((string *)local_330,(string *)&DAT_043c1cf8,uVar27,uVar21 - uVar27,
                            (allocator *)&DAT_043c1cf8);
        FUN_012e34ac(&DAT_043c1cf8);
        DAT_043c1d08 = (byte *)local_330[2];
        _DAT_043c1cf8 = local_330[0];
        DAT_043c1d00 = local_330[1];
        lVar12 = FUN_012e3384(&DAT_043c1cf8);
        if (lVar12 != -1) {
          std::string::erase(0x43c1cf8,lVar12 - 2);
        }
        puVar3 = (undefined1 *)(ulong)(DAT_043c1cf8 >> 1);
        if (((ulong)_DAT_043c1cf8 & 1) != 0) {
          puVar3 = DAT_043c1d00;
        }
        while (puVar3 != (undefined1 *)0x0) {
          pbVar15 = &DAT_043c1cf9;
          if ((DAT_043c1cf8 & 1) != 0) {
            pbVar15 = DAT_043c1d08;
          }
          iVar8 = isblank((uint)*pbVar15);
          if (iVar8 == 0) {
            pbVar15 = pbVar15 + (long)puVar3;
            goto LAB_012e0eac;
          }
          std::string::erase(0x43c1cf8,0);
          puVar3 = (undefined1 *)(ulong)(DAT_043c1cf8 >> 1);
          if (((ulong)_DAT_043c1cf8 & 1) != 0) {
            puVar3 = DAT_043c1d00;
          }
        }
LAB_012e0ef0:
        uVar21 = FUN_012e33e0(&DAT_043c1cf8,&DAT_043c1d18);
        if (uVar21 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43c1cf8,uVar21);
            uVar21 = FUN_012e33e0(&DAT_043c1cf8,&DAT_043c1d18);
          } while (uVar21 != 0xffffffffffffffff);
        }
        uVar21 = FUN_012e33e0(&DAT_043c1cf8,&DAT_043c1d30);
        if (uVar21 != 0xffffffffffffffff) {
          do {
            std::string::erase(0x43c1cf8,uVar21);
            uVar21 = FUN_012e33e0(&DAT_043c1cf8,&DAT_043c1d30);
          } while (uVar21 != 0xffffffffffffffff);
        }
        FUN_00100250(PTR__string_04379718,&DAT_043c1cf8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043c1d10);
      }
      pbVar15 = DAT_043c1d08;
      if (((ulong)_DAT_043c1cf8 & 1) == 0) {
        pbVar15 = &DAT_043c1cf9;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",pbVar15);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar19;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar12;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar27 = 0;
      if (uVar23 != 0) {
        uVar27 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar27 * uVar23;
    }
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar19;
  puVar17[7] = uVar5;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_042032d8;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x158);
  iVar8 = FUN_00154450(param_2,puVar25);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_012e5f60,0);
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
  if ((((byte)local_5f0 & 1) != 0) && (local_5e0 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar18 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar18 = plVar6;
    }
    uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar18,local_5e0,0,8);
        goto LAB_012df238;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,local_5e0,0,8);
  }
LAB_012df238:
  memset(local_330,0,0x2c0);
  pcVar24 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  puVar25 = &LAB_012e3f10;
  if (uVar10 != 0) {
    puVar25 = &LAB_012e3edc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar25;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(undefined1 **)(lVar12 + 0x168) = puVar25;
            goto LAB_012df3b4;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar25;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012df3b4;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_330[0] = pcVar24;
  local_330[1] = puVar25;
LAB_012df3b4:
  pcVar24 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e40a0;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e3f44;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012df4f4;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012df4f4;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012df4f4:
  pcVar24 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e427c;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e4144;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012df634;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012df634;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012df634:
  pcVar24 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e4550;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e4358;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012df774;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012df774;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012df774:
  pcVar24 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e4744;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e462c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012df8b4;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012df8b4;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012df8b4:
  pcVar24 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e4a60;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e485c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012df9f4;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012df9f4;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012df9f4:
  pcVar24 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e4c80;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e4b3c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012dfb34;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012dfb34;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012dfb34:
  pcVar24 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e4e5c;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e4d5c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012dfc74;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012dfc74;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012dfc74:
  pcVar24 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e4f94;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e4f5c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012dfdb4;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012dfdb4;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012dfdb4:
  pcVar24 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e5004;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e4fcc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012dfef4;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012dfef4;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012dfef4:
  pcVar24 = *(char **)(lVar12 + 0x138);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e5074;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e503c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x168) = pcVar1;
            goto LAB_012e0034;
          }
          *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012e0034;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar21 != 0x20);
  alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
  local_330[uVar23 * 2 + 1] = pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012e0034:
  pcVar24 = *(char **)(lVar12 + 0x150);
  sVar13 = strlen(pcVar24);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar24,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar26 = 0;
  uVar21 = 0;
  pcVar1 = &LAB_012e50e4;
  if (uVar10 != 0) {
    pcVar1 = &LAB_012e50ac;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar26);
    sVar13 = strlen(pcVar24);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar8 == 0)) break;
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 0x18;
    if (uVar21 == 0x20) {
LAB_012e0174:
      uVar27 = (ulong)((int)uVar23 + 1);
      alStack_340[uVar23 * 2 + 2] = (long)pcVar24;
      local_330[uVar23 * 2 + 1] = pcVar1;
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1b0);
joined_r0x012e0158:
      if ((uVar10 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1b0);
      }
      if ((uVar10 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1b0);
      }
      if ((uVar10 >> 0x10 & 1) == 0) {
        lVar14 = FUN_008cca50();
        lVar26 = lVar14 + 0x181;
        if ((*(byte *)(lVar14 + 0x180) & 1) != 0) {
          lVar26 = *(long *)(lVar14 + 400);
        }
        alStack_340[uVar27 * 2 + 2] = lVar26;
        local_330[uVar27 * 2 + 1] = PTR_LAB_0437eca8;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1b0);
        uVar27 = (ulong)((int)uVar27 + 1);
      }
      if ((uVar10 >> 0x1b & 1) == 0) {
        lVar14 = FUN_008cca50();
        lVar26 = lVar14 + 0x289;
        if ((*(byte *)(lVar14 + 0x288) & 1) != 0) {
          lVar26 = *(long *)(lVar14 + 0x298);
        }
        uVar21 = (ulong)((int)uVar27 + 1);
        alStack_340[uVar27 * 2 + 2] = lVar26;
        local_330[uVar27 * 2 + 1] = PTR_LAB_0437eca0;
        lVar26 = *(long *)(lVar12 + 0x168);
      }
      else {
        lVar26 = *(long *)(lVar12 + 0x168);
        uVar21 = uVar27;
      }
      if (lVar26 != 0) {
        lVar14 = FUN_008cca50();
        lVar26 = lVar14 + 0x1c9;
        if ((*(byte *)(lVar14 + 0x1c8) & 1) != 0) {
          lVar26 = *(long *)(lVar14 + 0x1d8);
        }
        pcVar24 = *(char **)(lVar12 + 0x168);
        alStack_340[uVar21 * 2 + 2] = lVar26;
        local_330[uVar21 * 2 + 1] = pcVar24;
        uVar21 = (ulong)((int)uVar21 + 1);
      }
      alStack_340[uVar21 * 2 + 2] = 0;
      local_330[uVar21 * 2 + 1] = (char *)0x0;
      memcpy(&local_5f0,local_330,0x2c0);
      memcpy(asStack_8b0,local_330,0x2c0);
      lVar26 = FUN_008cca50();
      lVar14 = uVar21 - 1;
      pcVar24 = (char *)alStack_340[lVar14 * 2 + 2];
      sVar13 = strlen(pcVar24);
      sVar2 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
      if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar26 + 0x1d0);
      }
      if ((sVar13 == sVar2) &&
         (iVar8 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
         iVar8 == 0)) {
        auStack_600[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_5ef + lVar14 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_8b0 + lVar14 * 0x10) = alStack_340[lVar14 * 2 + 2];
      *(undefined1 **)(asStack_8b0 + (lVar14 * 2 + 1) * 8) = &LAB_012e5120;
      FUN_00151fe0(param_2,0,2);
      local_8b8[0] = FUN_0014feb0(param_2,0xffffffff);
      local_8c0 = param_2;
      if ((*PTR_DAT_0437ecb0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_0437ecb0);
        puVar4 = PTR_DAT_0437ecb8;
        if (iVar8 != 0) {
          FUN_012e3af0(PTR_DAT_0437ecb8);
          FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437ecb0);
        }
      }
      uVar9 = local_8b8[0];
      uVar21 = *(ulong *)(PTR_DAT_0437ecb8 + 8);
      puVar4 = *(undefined **)(PTR_DAT_0437ecb8 + 0x10);
      if ((*PTR_DAT_0437ecb8 & 1) == 0) {
        puVar4 = PTR_DAT_0437ecb8 + 1;
        uVar21 = (ulong)((byte)*PTR_DAT_0437ecb8 >> 1);
      }
      FUN_001514f0(param_2,puVar4,uVar21);
      FUN_00152550(param_2,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_012e5170,0);
      FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
      lVar26 = 0;
      do {
        if (lVar26 == 1) {
          psVar16 = asStack_8b0;
          pbVar15 = (byte *)FUN_012e2290();
        }
        else if (lVar26 == 0) {
          psVar16 = &local_5f0;
          pbVar15 = (byte *)FUN_012e20b0();
        }
        else {
          psVar16 = (string *)local_330;
          pbVar15 = (byte *)FUN_012e2470();
        }
        pbVar20 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar20 = pbVar15 + 1;
        }
        FUN_00154450(param_2,pbVar20);
        local_8c8 = FUN_0014feb0(param_2,0xffffffff);
        local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
        local_8d0 = param_2;
        FUN_008fe304(auStack_70,param_2,&local_900,&local_8c0,local_8c8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00155a20(param_2,psVar16,2);
        uVar9 = local_8c8;
        if (*(long *)(lVar12 + 0x198) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_check");
        }
        uVar9 = local_8c8;
        if (*(long *)(lVar12 + 0x1a0) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_cast");
        }
        uVar9 = local_8c8;
        uVar19 = *(undefined8 *)(lVar12 + 0x178);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar22);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar9,&DAT_03955ac7);
        uVar9 = local_8c8;
        uVar19 = *(undefined8 *)(lVar12 + 0x180);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar22);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar9,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_900 = (undefined1 *)CONCAT44(local_900._4_4_,1);
          FUN_008fe304(auStack_70,param_2,&local_900,&local_8d0,local_8c8);
        }
        else {
          local_900 = &LAB_012e5260;
          uStack_8f8 = 0;
          local_8f0 = lVar12;
          lStack_8e8 = lVar22;
          FUN_012e51c0(param_2,1,&local_900,local_8c8);
          local_900 = &LAB_012e5570;
          uStack_8f8 = 0;
          local_8f0 = lVar12;
          lStack_8e8 = lVar22;
          FUN_012e51c0(param_2,2,&local_900,local_8c8);
        }
        FUN_00151fe0(param_2,0,3);
        uVar9 = FUN_0014feb0(param_2,0xffffffff);
        local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_900,&local_8c0,uVar9);
        if (*(undefined1 **)(lVar12 + 0x170) != (undefined1 *)0x0) {
          uStack_8f8 = 0;
          local_900 = *(undefined1 **)(lVar12 + 0x170);
          local_8f0 = lVar12;
          lStack_8e8 = lVar22;
          FUN_012e51c0(param_2,4,&local_900,uVar9);
        }
        if (*(char *)(lVar12 + 0x1a8) != '\0') {
          local_900 = &LAB_012e5260;
          uStack_8f8 = 0;
          local_8f0 = lVar12;
          lStack_8e8 = lVar22;
          FUN_012e51c0(param_2,1,&local_900,uVar9);
          local_900 = &LAB_012e5570;
          uStack_8f8 = 0;
          local_8f0 = lVar12;
          lStack_8e8 = lVar22;
          FUN_012e51c0(param_2,2,&local_900,uVar9);
        }
        uVar11 = local_8c8;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar9);
        }
        FUN_00152ae0(param_2,uVar11);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_8d0,0xfffffffe);
        lVar26 = lVar26 + 1;
      } while (lVar26 != 3);
      FUN_012e26a8();
      puVar4 = DAT_043c1c68;
      if ((DAT_043c1c58 & 1) == 0) {
        puVar4 = &DAT_043c1c59;
      }
      FUN_00154450(param_2,puVar4);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_900._0_4_ = 0x1e;
      FUN_008fe304(&local_8d0,param_2,&local_900,&local_8c0,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_330,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
      FUN_008fe304(&local_8d0,param_2,&local_900,&local_8c0,uVar11);
      local_900 = *(undefined1 **)(lVar12 + 0x170);
      if (local_900 != (undefined1 *)0x0) {
        uStack_8f8 = 0;
        local_8f0 = lVar12;
        lStack_8e8 = lVar22;
        FUN_012e51c0(param_2,4,&local_900,uVar11);
      }
      local_900 = &LAB_012e5938;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7a788;
      local_8f0 = lVar12;
      lStack_8e8 = lVar22;
      FUN_012e5880(param_2,1,&local_900,uVar11);
      local_900 = &LAB_012e5c48;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7a788;
      local_8f0 = lVar12;
      lStack_8e8 = lVar22;
      FUN_012e5880(param_2,2,&local_900,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_8b8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar8 = (int)uVar21;
  uVar27 = uVar23;
  if (iVar8 == 1) {
    *(char **)(lVar12 + 0x30) = pcVar1;
  }
  else {
    if (iVar8 != 2) {
      if (iVar8 == 0x13) {
        *(char **)(lVar12 + 0x168) = pcVar1;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1b0);
        goto joined_r0x012e0158;
      }
      *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
      goto LAB_012e0174;
    }
    *(char **)(lVar12 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *(ulong *)(lVar12 + 0x1b0) = *(ulong *)(lVar12 + 0x1b0) | 1L << (uVar21 & 0x3f);
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1b0);
  goto joined_r0x012e0158;
LAB_012e0eac:
  iVar8 = isblank((uint)pbVar15[-1]);
  if (iVar8 == 0) goto LAB_012e0ef0;
  FUN_012e33a0(&DAT_043c1cf8);
  puVar3 = (undefined1 *)((ulong)_DAT_043c1cf8 >> 1 & 0x7f);
  if (((ulong)_DAT_043c1cf8 & 1) != 0) {
    puVar3 = DAT_043c1d00;
  }
  if (puVar3 == (undefined1 *)0x0) goto LAB_012e0ef0;
  pbVar15 = &DAT_043c1cf9;
  if (((ulong)_DAT_043c1cf8 & 1) != 0) {
    pbVar15 = DAT_043c1d08;
  }
  pbVar15 = pbVar15 + (long)puVar3;
  goto LAB_012e0eac;
}


