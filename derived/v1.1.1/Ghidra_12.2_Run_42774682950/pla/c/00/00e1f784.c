/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1f784; name: FUN_00e1f784
 */


/* WARNING: Removing unreachable block (ram,0x00e22dbc) */
/* WARNING: Removing unreachable block (ram,0x00e22cb8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e1f784(long param_1,long param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  byte bVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  string *psVar16;
  void *__dest;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  long lVar21;
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
  byte bVar32;
  byte *local_b18;
  undefined1 *local_b10;
  undefined8 uStack_b08;
  long local_b00;
  long lStack_af8;
  undefined8 local_af0;
  undefined *puStack_ae8;
  long local_ae0;
  undefined4 local_ad8;
  long local_ad0;
  undefined4 local_ac8 [2];
  string asStack_ac0 [864];
  undefined8 auStack_760 [2];
  string local_750;
  undefined1 auStack_74f [7];
  size_t local_748;
  undefined1 *local_740;
  long alStack_3f0 [2];
  char *local_3e0 [110];
  undefined1 auStack_70 [16];
  
  if (((DAT_043af208 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043af208), iVar9 != 0)) {
    local_3e0[2] = (char *)0x0;
    local_3e0[1] = (char *)0x0;
    local_3e0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043aeed8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aeed8), iVar9 != 0)) {
      FUN_00e17240();
      FUN_00100250(PTR__string_04379718,&DAT_043aeec0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043aeed8);
    }
    puVar31 = DAT_043aeed0;
    if ((DAT_043aeec0 & 1) == 0) {
      puVar31 = &DAT_043aeec1;
    }
    pcVar30 = (char *)std::string::append((char *)local_3e0,(ulong)puVar31);
    psVar16 = (string *)std::string::append(pcVar30);
    std::string::string((string *)&DAT_043af1f0,psVar16);
    pcVar30 = local_3e0[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3e0[0] & 1) != 0) && ((byte *)local_3e0[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar22 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar22 = plVar7;
      }
      uVar27 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar22,pcVar30,0,8);
          goto LAB_00e221a0;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,pcVar30,0,8);
    }
LAB_00e221a0:
    FUN_00100250(PTR__string_04379718,&DAT_043af1f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043af208);
  }
  std::string::string(&local_750,(string *)&DAT_043af1f0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043af1e8);
  sVar4 = (ulong)((byte)local_750 >> 1);
  if (((byte)local_750 & 1) != 0) {
    sVar4 = local_748;
  }
  std::string::append((ulong)&local_750,(char)iVar9);
  if (((byte)local_750 & 1) == 0) {
    puVar31 = auStack_74f;
    local_748 = (size_t)((byte)local_750 >> 1);
  }
  else {
    puVar31 = local_740;
  }
  snprintf(puVar31 + (sVar4 - 1),local_748,"%d",(ulong)DAT_043af1e8);
  DAT_043af1e8 = DAT_043af1e8 + 1;
  if (((DAT_043af228 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043af228), iVar9 != 0)) {
    local_3e0[2] = (char *)0x0;
    local_3e0[1] = (char *)0x0;
    local_3e0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043aeed8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aeed8), iVar9 != 0)) {
      FUN_00e17240();
      FUN_00100250(PTR__string_04379718,&DAT_043aeec0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043aeed8);
    }
    if ((DAT_043aeec0 & 1) == 0) {
      puVar31 = &DAT_043aeec1;
    }
    else {
      puVar31 = DAT_043aeed0;
    }
    pcVar30 = (char *)std::string::append((char *)local_3e0,(ulong)puVar31);
    psVar16 = (string *)std::string::append(pcVar30);
    std::string::string((string *)&DAT_043af210,psVar16);
    pcVar30 = local_3e0[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3e0[0] & 1) != 0) && ((byte *)local_3e0[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar22 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar22 = plVar7;
      }
      uVar27 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar22,pcVar30,0,8);
          goto LAB_00e2230c;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,pcVar30,0,8);
    }
LAB_00e2230c:
    FUN_00100250(PTR__string_04379718,&DAT_043af210,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043af228);
  }
  if ((DAT_043af210 & 1) == 0) {
    puVar19 = &DAT_043af211;
    if (((byte)local_750 & 1) == 0) goto LAB_00e21fcc;
LAB_00e1f874:
    puVar31 = local_740;
  }
  else {
    puVar19 = DAT_043af220;
    if (((byte)local_750 & 1) != 0) goto LAB_00e1f874;
LAB_00e21fcc:
    puVar31 = (undefined1 *)((ulong)&local_750 | 1);
  }
  if (((DAT_043af238 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043af238), iVar9 != 0)) {
    DAT_043af230 = 0x208;
    __cxa_guard_release(&DAT_043af238);
  }
  if (((DAT_043af248 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043af248), iVar9 != 0)) {
    DAT_043af240 = 0x20f;
    __cxa_guard_release(&DAT_043af248);
  }
  uVar27 = DAT_043af230;
  lVar13 = FUN_00153520(param_1,DAT_043af230);
  if ((uVar27 < ((ulong)(uint)-(int)lVar13 & 7 | 0x208)) ||
     (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar27 = DAT_043af240;
    lVar13 = FUN_00153520(param_1,DAT_043af240);
    if ((uVar27 < ((ulong)(uint)-(int)lVar13 & 7 | 0x208)) ||
       (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043af268 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043af268), iVar9 != 0)) {
        if (((DAT_043af2a0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043af2a0), iVar9 != 0)) {
          DAT_043af270 = 0x16;
          DAT_043af280 = (byte *)0x0;
          DAT_043af271._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043af278 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043af288 = 0x2a;
          _DAT_043af27c = 0;
          DAT_043af298._7_1_ = 0;
          DAT_043af298._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043af298._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043af298._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043af298._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043af298._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043af291 = s__anonymous_namespace__039071f8[8];
          DAT_043af291_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043af291_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043af291_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043af291_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043af296 = s__anonymous_namespace__039071f8._13_2_;
          DAT_043af298._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043af289._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043af289._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043af298._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043af270,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043af2a0);
        }
        plVar7 = DAT_043f1798;
        lVar13 = tpidr_el0;
        plVar22 = *(long **)(lVar13 + 0x20);
        if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
          *(long **)(lVar13 + 0x20) = DAT_043f1798;
          plVar22 = plVar7;
        }
        __dest = (void *)(**(code **)(*plVar22 + 0x10))(plVar22,0x590,8);
        _DAT_043af250 = (char *)0x591;
        DAT_043af258 = (byte *)0x581;
        DAT_043af260 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<common::lua::command::AppCommand, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22>, char const (&)[14], void (*)(), char const (&)[24], void (*)(), char const (&)[22], void (*)(), char const (&)[25], void (*)(), char const (&)[23], void (*)(), char const (&)[39], void (*)(), char const (&)[21], void (*)(), char const (&)[18], void (*)(), char const (&)[19], unsigned int (*)(common::lua::command::NsRematchDispResult *, const gfl::FnvHash64 &), char const (&)[19], void (*)(const gfl::FnvHash64 &, unsigned int), char const (&)[23], const gfl::FnvHash64 &(*)(), char const (&)[20], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/include/generated/lua_app_command_glue.cpp:32:29), char const (&)[16], void (*)(unsigned int), char const (&)[15], void (*)(float, float, float), char const (&)[14], void (*)(), char const (&)[14], void (*)(const gfl::FnvHash64 &), char const (&)[12], unsigned int (*)(unsigned int), char const (&)[29], void (*)(const gfl::FnvHash64 &), char const (&)[8], void (*)(bool), char const (&)[18], void (*)(bool), char const (&)[26], void (*)(unsigned int), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
               ,0x581);
        *(undefined1 *)((long)__dest + 0x581) = 0;
        std::string::find('P',0x5b);
        uVar29 = std::string::find('P',0x3d);
        uVar27 = std::string::rfind('P',0x5d);
        if (uVar27 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043af250 & 1) == 0) {
            uVar27 = (ulong)(DAT_043af250 >> 1);
          }
          else {
            uVar27 = (ulong)DAT_043af258;
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
          if (((ulong)_DAT_043af250 & 1) == 0) {
            uVar29 = (ulong)(DAT_043af250 >> 1);
          }
          else {
            uVar29 = (ulong)DAT_043af258;
          }
        }
        if (uVar23 < uVar29 - 1) {
          uVar23 = uVar23 + 1;
        }
        std::string::string((string *)local_3e0,(string *)&DAT_043af250,uVar23,uVar27 - uVar23,
                            (allocator *)&DAT_043af250);
        FUN_00e0f920(&DAT_043af250);
        DAT_043af260 = (byte *)local_3e0[2];
        _DAT_043af250 = local_3e0[0];
        DAT_043af258 = (byte *)local_3e0[1];
        lVar13 = FUN_00e0f8c4(&DAT_043af250);
        if (lVar13 != -1) {
          std::string::erase(0x43af250,lVar13 - 2);
        }
        pbVar26 = (byte *)(ulong)(DAT_043af250 >> 1);
        pbVar2 = pbVar26;
        bVar6 = DAT_043af250;
        pbVar17 = DAT_043af258;
        if (((ulong)_DAT_043af250 & 1) != 0) {
          pbVar2 = DAT_043af258;
        }
        while( true ) {
          bVar32 = bVar6 & 1;
          DAT_043af258 = pbVar17;
          if (pbVar2 == (byte *)0x0) break;
          pbVar18 = &DAT_043af251;
          if (bVar32 != 0) {
            pbVar18 = DAT_043af260;
          }
          iVar9 = isblank((uint)*pbVar18);
          if (iVar9 == 0) {
            iVar9 = isblank((uint)pbVar18[(long)(pbVar2 + -1)]);
            if (iVar9 != 0) goto LAB_00e22770;
            bVar32 = bVar6 & 1;
            break;
          }
          std::string::erase(0x43af250,0);
          pbVar26 = (byte *)(ulong)(DAT_043af250 >> 1);
          pbVar2 = pbVar26;
          bVar6 = DAT_043af250;
          pbVar17 = DAT_043af258;
          if (((ulong)_DAT_043af250 & 1) != 0) {
            pbVar2 = DAT_043af258;
          }
        }
        goto LAB_00e227c0;
      }
      goto LAB_00e1f930;
    }
  }
  goto LAB_00e1f954;
  while( true ) {
    pbVar18 = &DAT_043af251;
    if (((ulong)_DAT_043af250 & 1) != 0) {
      pbVar18 = DAT_043af260;
    }
    iVar9 = isblank((uint)pbVar18[(long)(pbVar2 + -1)]);
    if (iVar9 == 0) break;
LAB_00e22770:
    FUN_00e0f8e0(&DAT_043af250);
    pbVar17 = DAT_043af258;
    pbVar26 = (byte *)(ulong)(DAT_043af250 >> 1);
    bVar32 = DAT_043af250 & 1;
    pbVar2 = pbVar26;
    if (((ulong)_DAT_043af250 & 1) != 0) {
      pbVar2 = DAT_043af258;
    }
    if (pbVar2 == (byte *)0x0) break;
  }
LAB_00e227c0:
  if (bVar32 != 0) {
    pbVar26 = pbVar17;
  }
  local_b18 = &DAT_043af251;
  if (bVar32 != 0) {
    local_b18 = DAT_043af260;
  }
  sVar4 = CONCAT44(_DAT_043af27c,ram0x043af278);
  if ((DAT_043af270 & 1) == 0) {
    sVar4 = (ulong)(DAT_043af270 >> 1);
    pbVar2 = (byte *)&DAT_043af271;
  }
  else {
    pbVar2 = DAT_043af280;
  }
  if (sVar4 == 0) {
    uVar27 = 0;
    goto LAB_00e22cec;
  }
  if ((long)sVar4 <= (long)pbVar26) {
    pbVar18 = local_b18 + (long)pbVar26;
    bVar6 = *pbVar2;
    pbVar17 = local_b18;
    pbVar24 = pbVar26;
    do {
      if ((0xfffffffffffffffe < (long)pbVar24 - sVar4) ||
         (pbVar17 = memchr(pbVar17,(uint)bVar6,((long)pbVar24 - sVar4) + 1), pbVar17 == (byte *)0x0)
         ) break;
      iVar9 = memcmp(pbVar17,pbVar2,sVar4);
      if (iVar9 == 0) goto LAB_00e22cd4;
      pbVar17 = pbVar17 + 1;
      pbVar24 = pbVar18 + -(long)pbVar17;
    } while ((long)sVar4 <= (long)pbVar24);
  }
LAB_00e22b24:
  sVar4 = CONCAT26(_DAT_043af296,CONCAT51(_DAT_043af291,DAT_043af289._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043af298._7_1_,
                            CONCAT16(DAT_043af298._6_1_,
                                     CONCAT51(DAT_043af298._1_5_,(char)DAT_043af298)));
  if ((DAT_043af288 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043af289;
    sVar4 = (ulong)(DAT_043af288 >> 1);
  }
  if (sVar4 == 0) {
    uVar27 = 0;
LAB_00e22ba4:
    do {
      while( true ) {
        std::string::erase(0x43af250,uVar27);
        bVar8 = ((ulong)_DAT_043af250 & 1) != 0;
        pbVar26 = (byte *)((ulong)_DAT_043af250 >> 1 & 0x7f);
        if (bVar8) {
          pbVar26 = DAT_043af258;
        }
        sVar4 = CONCAT26(_DAT_043af296,CONCAT51(_DAT_043af291,DAT_043af289._7_1_));
        pbVar17 = (byte *)CONCAT17(DAT_043af298._7_1_,
                                   CONCAT16(DAT_043af298._6_1_,
                                            CONCAT51(DAT_043af298._1_5_,(char)DAT_043af298)));
        pbVar2 = DAT_043af260;
        if (!bVar8) {
          pbVar2 = &DAT_043af251;
        }
        if ((DAT_043af288 & 1) == 0) {
          pbVar17 = (byte *)&DAT_043af289;
          sVar4 = (ulong)(DAT_043af288 >> 1);
        }
        if (sVar4 != 0) break;
        uVar27 = 0;
      }
      if ((long)pbVar26 < (long)sVar4) goto LAB_00e22c78;
      bVar6 = *pbVar17;
      pbVar24 = pbVar2 + (long)pbVar26;
      pbVar18 = pbVar2;
      while( true ) {
        if ((0xfffffffffffffffe < (long)pbVar26 - sVar4) ||
           (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar26 - sVar4) + 1),
           pbVar18 == (byte *)0x0)) goto LAB_00e22c78;
        iVar9 = memcmp(pbVar18,pbVar17,sVar4);
        if (iVar9 == 0) break;
        pbVar18 = pbVar18 + 1;
        pbVar26 = pbVar24 + -(long)pbVar18;
        if ((long)pbVar26 < (long)sVar4) goto LAB_00e22c78;
      }
      if ((pbVar18 == pbVar24) ||
         (uVar27 = (long)pbVar18 - (long)pbVar2, uVar27 == 0xffffffffffffffff)) goto LAB_00e22c78;
    } while( true );
  }
  if ((long)sVar4 <= (long)pbVar26) {
    pbVar18 = local_b18 + (long)pbVar26;
    bVar6 = *pbVar2;
    pbVar17 = local_b18;
    do {
      if ((0xfffffffffffffffe < (long)pbVar26 - sVar4) ||
         (pbVar17 = memchr(pbVar17,(uint)bVar6,((long)pbVar26 - sVar4) + 1), pbVar17 == (byte *)0x0)
         ) break;
      iVar9 = memcmp(pbVar17,pbVar2,sVar4);
      if (iVar9 == 0) {
        if ((pbVar17 != pbVar18) &&
           (uVar27 = (long)pbVar17 - (long)local_b18, uVar27 != 0xffffffffffffffff))
        goto LAB_00e22ba4;
        break;
      }
      pbVar17 = pbVar17 + 1;
      pbVar26 = pbVar18 + -(long)pbVar17;
    } while ((long)sVar4 <= (long)pbVar26);
  }
LAB_00e22c78:
  FUN_00100250(PTR__string_04379718,&DAT_043af250,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043af268);
LAB_00e1f930:
  pbVar26 = DAT_043af260;
  if (((ulong)_DAT_043af250 & 1) == 0) {
    pbVar26 = &DAT_043af251;
  }
  FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar26);
  puVar20 = (undefined8 *)0x0;
LAB_00e1f954:
  uVar25 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar20[1] = uVar25;
  puVar20[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar20[3] = lVar13;
  lVar28 = *(long *)(param_2 + 0x20);
  puVar20[4] = lVar28;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar28 != 0) {
    uVar29 = puVar20[2];
    uVar27 = *(ulong *)(lVar13 + 8);
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
    *(undefined8 **)(puVar20[1] + uVar27 * 8) = puVar20 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar25 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar25;
  puVar20[7] = uVar5;
  puVar20[8] = *(undefined8 *)(param_2 + 0x40);
  puVar20[9] = *(undefined8 *)(param_2 + 0x48);
  puVar20[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar20 = &PTR_FUN_041ee670;
  memcpy(puVar20 + 0xc,(void *)(param_2 + 0x60),0x1a8);
  iVar9 = FUN_00154450(param_1,puVar31);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_00e23bb0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar10 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar10);
  }
  FUN_001522a0(param_1,puVar19);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar19);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_750 & 1) != 0) && (local_740 != (undefined1 *)0x0)) {
    lVar28 = tpidr_el0;
    plVar22 = *(long **)(lVar28 + 0x20);
    if (*(long **)(lVar28 + 0x20) == (long *)0x0) {
      *(long **)(lVar28 + 0x20) = DAT_043f1798;
      plVar22 = plVar7;
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
        FUN_02bcc824(plVar22,local_740,0,8);
        goto LAB_00e1fb74;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,local_740,0,8);
  }
LAB_00e1fb74:
  memset(local_3e0,0,0x370);
  pcVar30 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar21 = lVar13 + 8;
  lVar28 = 0;
  uVar27 = 0;
  pbVar26 = &LAB_00e178b4;
  if (uVar11 != 0) {
    pbVar26 = &LAB_00e17874;
  }
  puVar1 = (ulong *)(lVar13 + 0x200);
  do {
    lVar15 = FUN_008cca50();
    pbVar2 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar2 >> 1);
    if ((*pbVar2 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar2 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar2,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(byte **)(lVar13 + 0x30) = pbVar26;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar29 = 0;
            *(byte **)(lVar13 + 0x1b8) = pbVar26;
            goto LAB_00e1fce4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(byte **)(lVar13 + 0x38) = pbVar26;
      }
      uVar29 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e1fce4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  uVar29 = 1;
  local_3e0[0] = pcVar30;
  local_3e0[1] = (char *)pbVar26;
LAB_00e1fce4:
  pcVar30 = *(char **)(lVar13 + 0x70);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e17934;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e178f4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e1fe2c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e1fe2c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e1fe2c:
  pcVar30 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e179b4;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e17974;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e1ff70;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e1ff70;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e1ff70:
  pcVar30 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e17a34;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e179f4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e200b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e200b4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e200b4:
  pcVar30 = *(char **)(lVar13 + 0xa0);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e17ab4;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e17a74;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e201f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e201f8;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e201f8:
  pcVar30 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e17b34;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e17af4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e2033c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e2033c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e2033c:
  pcVar30 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e17bb4;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e17b74;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20480;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20480;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20480:
  pcVar30 = *(char **)(lVar13 + 0xd0);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e17c34;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e17bf4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e205c4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e205c4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e205c4:
  pcVar30 = *(char **)(lVar13 + 0xe0);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e17e94;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e17c74;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20708;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20708;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20708:
  pcVar30 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1809c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e17ecc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e2084c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e2084c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e2084c:
  pcVar30 = *(char **)(lVar13 + 0x100);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1c710;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e180d4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20990;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20990;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20990:
  pcVar30 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1d44c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1c748;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20ad4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20ad4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20ad4:
  pcVar30 = *(char **)(lVar13 + 0x118);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1d598;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1d4ac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20c18;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20c18;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20c18:
  pcVar30 = *(char **)(lVar13 + 0x128);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1d664;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1d5d4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20d5c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20d5c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20d5c:
  pcVar30 = *(char **)(lVar13 + 0x138);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1d734;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1d6f4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20ea0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20ea0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20ea0:
  pcVar30 = *(char **)(lVar13 + 0x148);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1d868;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1d774;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e20fe4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e20fe4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e20fe4:
  pcVar30 = *(char **)(lVar13 + 0x158);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1da08;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1d938;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e21128;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e21128;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e21128:
  pcVar30 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1da70;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1da40;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e2126c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e2126c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e2126c:
  pcVar30 = *(char **)(lVar13 + 0x178);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1db98;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1db40;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e213b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e213b0;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e213b0:
  pcVar30 = *(char **)(lVar13 + 0x188);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1dc48;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1dbf0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e214f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e214f4;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e214f4:
  pcVar30 = *(char **)(lVar13 + 0x198);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1dcdc;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1dca0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e21638;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e21638;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e21638:
  pcVar30 = *(char **)(lVar13 + 0x1a8);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1f55c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1dd18;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1b8) = pcVar3;
            goto LAB_00e2177c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
      goto LAB_00e2177c;
    }
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
  local_3e0[uVar29 * 2 + 1] = pcVar3;
  uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e2177c:
  pcVar30 = *(char **)(lVar13 + 0x1b0);
  sVar14 = strlen(pcVar30);
  sVar4 = 10;
  if (sVar14 < 0xb) {
    sVar4 = sVar14;
  }
  if (sVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar30,sVar4);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar27 = 0;
  pcVar3 = &LAB_00e1f74c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00e1f714;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar26 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar30);
    sVar4 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar14 == sVar4) &&
       (iVar9 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
       iVar9 == 0)) break;
    uVar27 = uVar27 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar27 == 0x20) {
LAB_00e218d8:
      alStack_3f0[uVar29 * 2 + 2] = (long)pcVar30;
      local_3e0[uVar29 * 2 + 1] = pcVar3;
      uVar29 = (ulong)((int)uVar29 + 1);
LAB_00e218e8:
      uVar11 = (uint)*puVar1;
joined_r0x00e21874:
      if ((uVar11 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        if ((*(byte *)(lVar28 + 0x180) & 1) == 0) {
          lVar28 = lVar28 + 0x181;
        }
        else {
          lVar28 = *(long *)(lVar28 + 400);
        }
        alStack_3f0[uVar29 * 2 + 2] = lVar28;
        local_3e0[uVar29 * 2 + 1] = &LAB_00e1e390;
        uVar29 = (ulong)((int)uVar29 + 1);
        uVar11 = (uint)*puVar1;
      }
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        if ((*(byte *)(lVar28 + 0x288) & 1) == 0) {
          lVar28 = lVar28 + 0x289;
        }
        else {
          lVar28 = *(long *)(lVar28 + 0x298);
        }
        uVar27 = (ulong)((int)uVar29 + 1);
        alStack_3f0[uVar29 * 2 + 2] = lVar28;
        local_3e0[uVar29 * 2 + 1] = &LAB_00e1e388;
        lVar28 = *(long *)(lVar13 + 0x1b8);
      }
      else {
        lVar28 = *(long *)(lVar13 + 0x1b8);
        uVar27 = uVar29;
      }
      if (lVar28 != 0) {
        lVar28 = FUN_008cca50();
        if ((*(byte *)(lVar28 + 0x1c8) & 1) == 0) {
          lVar28 = lVar28 + 0x1c9;
        }
        else {
          lVar28 = *(long *)(lVar28 + 0x1d8);
        }
        pcVar30 = *(char **)(lVar13 + 0x1b8);
        alStack_3f0[uVar27 * 2 + 2] = lVar28;
        local_3e0[uVar27 * 2 + 1] = pcVar30;
        uVar27 = (ulong)((int)uVar27 + 1);
      }
      alStack_3f0[uVar27 * 2 + 2] = 0;
      local_3e0[uVar27 * 2 + 1] = (char *)0x0;
      memcpy(&local_750,local_3e0,0x370);
      memcpy(asStack_ac0,local_3e0,0x370);
      lVar28 = FUN_008cca50();
      lVar15 = uVar27 - 1;
      pcVar30 = (char *)alStack_3f0[lVar15 * 2 + 2];
      sVar14 = strlen(pcVar30);
      sVar4 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar4 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar14 == sVar4) &&
         (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar30),
         iVar9 == 0)) {
        auStack_760[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_74f + lVar15 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_ac0 + lVar15 * 0x10) = alStack_3f0[lVar15 * 2 + 2];
      *(code **)(asStack_ac0 + (lVar15 * 2 + 1) * 8) = FUN_00e22dc0;
      FUN_00151fe0(param_1,0,2);
      local_ac8[0] = FUN_0014feb0(param_1,0xffffffff);
      local_ad0 = param_1;
      if (((DAT_043aeed8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aeed8), iVar9 != 0)) {
        FUN_00e17240();
        FUN_00100250(PTR__string_04379718,&DAT_043aeec0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043aeed8);
      }
      uVar10 = local_ac8[0];
      if ((DAT_043aeec0 & 1) == 0) {
        uVar27 = (ulong)(DAT_043aeec0 >> 1);
        puVar31 = &DAT_043aeec1;
      }
      else {
        uVar27 = DAT_043aeec8;
        puVar31 = DAT_043aeed0;
      }
      FUN_001514f0(param_1,puVar31,uVar27);
      FUN_00152550(param_1,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_00e1e2a0,0);
      FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar16 = asStack_ac0;
          FUN_00e15e44();
          pbVar26 = &DAT_043aee28;
        }
        else if (lVar28 == 0) {
          psVar16 = &local_750;
          FUN_00e15c50();
          pbVar26 = &DAT_043aedb0;
        }
        else {
          psVar16 = (string *)local_3e0;
          FUN_00e16038();
          pbVar26 = &DAT_043aeea0;
        }
        pbVar2 = pbVar26 + 1;
        if ((*pbVar26 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar26 + 0x10);
        }
        FUN_00154450(param_1,pbVar2);
        local_ad8 = FUN_0014feb0(param_1,0xffffffff);
        local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
        local_ae0 = param_1;
        FUN_008fe304(auStack_70,param_1,&local_b10,&local_ad0,local_ad8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00155a20(param_1,psVar16,2);
        uVar10 = local_ad8;
        if (*(long *)(lVar13 + 0x1e8) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_check");
        }
        uVar10 = local_ad8;
        if (*(long *)(lVar13 + 0x1f0) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_cast");
        }
        uVar10 = local_ad8;
        uVar25 = *(undefined8 *)(lVar13 + 0x1c8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar21);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar10,&DAT_03955ac7);
        uVar10 = local_ad8;
        uVar25 = *(undefined8 *)(lVar13 + 0x1d0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar21);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,1);
          FUN_008fe304(auStack_70,param_1,&local_b10,&local_ae0,local_ad8);
        }
        else {
          local_b10 = &LAB_00e22eb0;
          uStack_b08 = 0;
          local_b00 = lVar13;
          lStack_af8 = lVar21;
          FUN_00e22e10(param_1,1,&local_b10,local_ad8);
          local_b10 = &LAB_00e231c0;
          uStack_b08 = 0;
          local_b00 = lVar13;
          lStack_af8 = lVar21;
          FUN_00e22e10(param_1,2,&local_b10,local_ad8);
        }
        FUN_00151fe0(param_1,0,3);
        uVar10 = FUN_0014feb0(param_1,0xffffffff);
        local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_1,&local_b10,&local_ad0,uVar10);
        if (*(undefined1 **)(lVar13 + 0x1c0) != (undefined1 *)0x0) {
          uStack_b08 = 0;
          local_b10 = *(undefined1 **)(lVar13 + 0x1c0);
          local_b00 = lVar13;
          lStack_af8 = lVar21;
          FUN_00e22e10(param_1,4,&local_b10,uVar10);
        }
        if (*(char *)(lVar13 + 0x1f8) != '\0') {
          local_b10 = &LAB_00e22eb0;
          uStack_b08 = 0;
          local_b00 = lVar13;
          lStack_af8 = lVar21;
          FUN_00e22e10(param_1,1,&local_b10,uVar10);
          local_b10 = &LAB_00e231c0;
          uStack_b08 = 0;
          local_b00 = lVar13;
          lStack_af8 = lVar21;
          FUN_00e22e10(param_1,2,&local_b10,uVar10);
        }
        uVar12 = local_ad8;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar10);
        }
        FUN_00152ae0(param_1,uVar12);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_ae0,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_00e16278();
      if ((DAT_043aef18 & 1) == 0) {
        puVar19 = &DAT_043aef19;
      }
      else {
        puVar19 = DAT_043aef28;
      }
      FUN_00154450(param_1,puVar19);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_b10._0_4_ = 0x1e;
      FUN_008fe304(&local_ae0,param_1,&local_b10,&local_ad0,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,local_3e0,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
      FUN_008fe304(&local_ae0,param_1,&local_b10,&local_ad0,uVar12);
      local_b10 = *(undefined1 **)(lVar13 + 0x1c0);
      if (local_b10 != (undefined1 *)0x0) {
        uStack_b08 = 0;
        local_b00 = lVar13;
        lStack_af8 = lVar21;
        FUN_00e22e10(param_1,4,&local_b10,uVar12);
      }
      local_b10 = &LAB_00e23588;
      uStack_b08 = 0;
      local_af0 = 0;
      puStack_ae8 = &DAT_03a78798;
      local_b00 = lVar13;
      lStack_af8 = lVar21;
      FUN_00e234d0(param_1,1,&local_b10,uVar12);
      local_b10 = &LAB_00e23898;
      uStack_b08 = 0;
      local_af0 = 0;
      puStack_ae8 = &DAT_03a78798;
      local_b00 = lVar13;
      lStack_af8 = lVar21;
      FUN_00e234d0(param_1,2,&local_b10,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_ac8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar9 = (int)uVar27;
  if (iVar9 == 1) {
    *(undefined1 *)(lVar13 + 0x58) = 1;
    *(char **)(lVar13 + 0x30) = pcVar3;
    *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
    goto LAB_00e218e8;
  }
  if (iVar9 == 2) {
    *(undefined1 *)(lVar13 + 0x58) = 1;
    *(char **)(lVar13 + 0x38) = pcVar3;
    *(ulong *)(lVar13 + 0x200) = *(ulong *)(lVar13 + 0x200) | 1L << (uVar27 & 0x3f);
    uVar11 = (uint)*puVar1;
    goto joined_r0x00e21874;
  }
  if (iVar9 == 0x13) {
    *(char **)(lVar13 + 0x1b8) = pcVar3;
    uVar11 = (uint)*puVar1;
    goto joined_r0x00e21874;
  }
  *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
  goto LAB_00e218d8;
LAB_00e22cd4:
  if ((pbVar17 == pbVar18) ||
     (uVar27 = (long)pbVar17 - (long)local_b18, uVar27 == 0xffffffffffffffff)) goto LAB_00e22b24;
LAB_00e22cec:
  while( true ) {
    std::string::erase(0x43af250,uVar27);
    if (((ulong)_DAT_043af250 & 1) == 0) {
      local_b18 = &DAT_043af251;
      pbVar26 = (byte *)((ulong)_DAT_043af250 >> 1 & 0x7f);
    }
    else {
      pbVar26 = DAT_043af258;
      local_b18 = DAT_043af260;
    }
    sVar4 = CONCAT44(_DAT_043af27c,ram0x043af278);
    if ((DAT_043af270 & 1) == 0) {
      sVar4 = (ulong)(DAT_043af270 >> 1);
      pbVar2 = (byte *)&DAT_043af271;
    }
    else {
      pbVar2 = DAT_043af280;
    }
    if (sVar4 != 0) break;
    uVar27 = 0;
  }
  if ((long)pbVar26 < (long)sVar4) goto LAB_00e22b24;
  pbVar18 = local_b18 + (long)pbVar26;
  bVar6 = *pbVar2;
  pbVar17 = local_b18;
  pbVar24 = pbVar26;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pbVar24 - sVar4) ||
       (pbVar17 = memchr(pbVar17,(uint)bVar6,((long)pbVar24 - sVar4) + 1), pbVar17 == (byte *)0x0))
    goto LAB_00e22b24;
    iVar9 = memcmp(pbVar17,pbVar2,sVar4);
    if (iVar9 == 0) break;
    pbVar17 = pbVar17 + 1;
    pbVar24 = pbVar18 + -(long)pbVar17;
    if ((long)pbVar24 < (long)sVar4) goto LAB_00e22b24;
  }
  goto LAB_00e22cd4;
}


