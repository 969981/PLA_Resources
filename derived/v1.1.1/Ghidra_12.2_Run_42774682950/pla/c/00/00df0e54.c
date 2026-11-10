/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00df0e54; name: FUN_00df0e54
 */


/* WARNING: Removing unreachable block (ram,0x00df2a98) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00df0e54(long param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
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
  byte *pbVar16;
  string *psVar17;
  void *__dest;
  byte *pbVar18;
  undefined8 *puVar19;
  long *plVar20;
  byte *pbVar21;
  undefined8 uVar22;
  byte *pbVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  char *pcVar28;
  undefined1 *puVar29;
  byte *pbVar30;
  long lVar31;
  ulong uVar32;
  byte bVar33;
  byte *local_798;
  undefined1 *local_780;
  undefined8 uStack_778;
  long local_770;
  long lStack_768;
  undefined8 local_760;
  undefined *puStack_758;
  long local_750;
  undefined4 local_748;
  long local_740;
  undefined4 local_738 [2];
  string asStack_730 [560];
  undefined8 auStack_500 [2];
  string local_4f0;
  undefined1 auStack_4ef [7];
  size_t local_4e8;
  undefined1 *local_4e0;
  long alStack_2c0 [2];
  char *local_2b0 [72];
  undefined1 auStack_70 [16];
  
  if (((DAT_043ae6c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae6c8), iVar9 != 0)) {
    local_2b0[2] = (char *)0x0;
    local_2b0[1] = (char *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437bbd0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437bbd0);
      puVar3 = PTR_DAT_0437bbd8;
      if (iVar9 != 0) {
        FUN_00df5740(PTR_DAT_0437bbd8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bbd0);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437bbd8 + 0x10);
    if ((*PTR_DAT_0437bbd8 & 1) == 0) {
      puVar3 = PTR_DAT_0437bbd8 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_2b0,(ulong)puVar3);
    psVar17 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043ae6b0,psVar17);
    pcVar28 = local_2b0[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && ((byte *)local_2b0[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar20 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar20 = plVar7;
      }
      uVar24 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar20,pcVar28,0,8);
          goto LAB_00df2024;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,pcVar28,0,8);
    }
LAB_00df2024:
    FUN_00100250(PTR__string_04379718,&DAT_043ae6b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ae6c8);
  }
  std::string::string(&local_4f0,(string *)&DAT_043ae6b0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ae6a8);
  sVar2 = (ulong)((byte)local_4f0 >> 1);
  if (((byte)local_4f0 & 1) != 0) {
    sVar2 = local_4e8;
  }
  std::string::append((ulong)&local_4f0,(char)iVar9);
  if (((byte)local_4f0 & 1) == 0) {
    puVar29 = auStack_4ef;
    local_4e8 = (size_t)((byte)local_4f0 >> 1);
  }
  else {
    puVar29 = local_4e0;
  }
  snprintf(puVar29 + (sVar2 - 1),local_4e8,"%d",(ulong)DAT_043ae6a8);
  DAT_043ae6a8 = DAT_043ae6a8 + 1;
  if (((DAT_043ae6e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae6e8), iVar9 != 0)) {
    local_2b0[2] = (char *)0x0;
    local_2b0[1] = (char *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437bbd0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437bbd0);
      puVar3 = PTR_DAT_0437bbd8;
      if (iVar9 != 0) {
        FUN_00df5740(PTR_DAT_0437bbd8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bbd0);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437bbd8 + 0x10);
    if ((*PTR_DAT_0437bbd8 & 1) == 0) {
      puVar3 = PTR_DAT_0437bbd8 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_2b0,(ulong)puVar3);
    psVar17 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043ae6d0,psVar17);
    pcVar28 = local_2b0[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && ((byte *)local_2b0[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar20 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar20 = plVar7;
      }
      uVar24 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar20,pcVar28,0,8);
          goto LAB_00df2194;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,pcVar28,0,8);
    }
LAB_00df2194:
    FUN_00100250(PTR__string_04379718,&DAT_043ae6d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ae6e8);
  }
  puVar3 = DAT_043ae6e0;
  if ((DAT_043ae6d0 & 1) == 0) {
    puVar3 = &DAT_043ae6d1;
  }
  if (((byte)local_4f0 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4f0 | 1);
  }
  else {
    puVar29 = local_4e0;
  }
  if (((DAT_043ae6f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae6f8), iVar9 != 0)) {
    DAT_043ae6f0 = 0xd8;
    __cxa_guard_release(&DAT_043ae6f8);
  }
  if (((DAT_043ae708 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae708), iVar9 != 0)) {
    DAT_043ae700 = 0xdf;
    __cxa_guard_release(&DAT_043ae708);
  }
  uVar24 = DAT_043ae6f0;
  lVar13 = FUN_00153520(param_2,DAT_043ae6f0);
  if ((uVar24 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar24 = DAT_043ae700;
    lVar13 = FUN_00153520(param_2,DAT_043ae700);
    if ((uVar24 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      if (((DAT_043ae728 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae728), iVar9 != 0)) {
        if (((DAT_043ae760 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae760), iVar9 != 0)) {
          DAT_043ae730 = 0x16;
          DAT_043ae740 = (byte *)0x0;
          DAT_043ae731._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043ae738 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043ae748 = 0x2a;
          _DAT_043ae73c = 0;
          DAT_043ae758._7_1_ = 0;
          DAT_043ae758._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043ae758._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043ae758._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043ae758._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043ae758._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043ae751 = s__anonymous_namespace__039071f8[8];
          DAT_043ae751_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043ae751_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043ae751_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043ae751_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043ae756 = s__anonymous_namespace__039071f8._13_2_;
          DAT_043ae758._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043ae749._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043ae749._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043ae758._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043ae730,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043ae760);
        }
        plVar7 = DAT_043f1798;
        lVar13 = tpidr_el0;
        plVar20 = *(long **)(lVar13 + 0x20);
        if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
          *(long **)(lVar13 + 0x20) = DAT_043f1798;
          plVar20 = plVar7;
        }
        __dest = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,0x2c0,8);
        _DAT_043ae710 = (char *)0x2c1;
        DAT_043ae718 = (byte *)0x2bc;
        DAT_043ae720 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<gamesys::GameManager, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3>, char const (&)[4], const sol::no_construction &, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/include/generated/game_manager_glue.cpp:14:31)>, char const (&)[22], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/include/generated/game_manager_glue.cpp:15:31), char const (&)[28], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/include/generated/game_manager_glue.cpp:16:37)>, seperator_mark = int]"
               ,700);
        *(undefined1 *)((long)__dest + 700) = 0;
        std::string::find('\x10',0x5b);
        uVar27 = std::string::find('\x10',0x3d);
        uVar24 = std::string::rfind('\x10',0x5d);
        if (uVar24 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043ae710 & 1) == 0) {
            uVar24 = (ulong)(DAT_043ae710 >> 1);
          }
          else {
            uVar24 = (ulong)DAT_043ae718;
          }
          uVar32 = 0;
          if (uVar27 != 0xffffffffffffffff) {
            uVar32 = uVar27;
          }
          uVar27 = uVar24;
        }
        else {
          uVar32 = 0;
          if (uVar27 != 0xffffffffffffffff) {
            uVar32 = uVar27;
          }
          if (((ulong)_DAT_043ae710 & 1) == 0) {
            uVar27 = (ulong)(DAT_043ae710 >> 1);
          }
          else {
            uVar27 = (ulong)DAT_043ae718;
          }
        }
        if (uVar32 < uVar27 - 1) {
          uVar32 = uVar32 + 1;
        }
        std::string::string((string *)local_2b0,(string *)&DAT_043ae710,uVar32,uVar24 - uVar32,
                            (allocator *)&DAT_043ae710);
        FUN_00df4e84(&DAT_043ae710);
        DAT_043ae720 = (byte *)local_2b0[2];
        _DAT_043ae710 = local_2b0[0];
        DAT_043ae718 = (byte *)local_2b0[1];
        lVar13 = FUN_00df4e28(&DAT_043ae710);
        if (lVar13 != -1) {
          std::string::erase(0x43ae710,lVar13 - 2);
        }
        pbVar16 = (byte *)(ulong)(DAT_043ae710 >> 1);
        pbVar23 = pbVar16;
        bVar6 = DAT_043ae710;
        pbVar30 = DAT_043ae718;
        if (((ulong)_DAT_043ae710 & 1) != 0) {
          pbVar23 = DAT_043ae718;
        }
        while( true ) {
          bVar33 = bVar6 & 1;
          DAT_043ae718 = pbVar30;
          if (pbVar23 == (byte *)0x0) break;
          pbVar18 = &DAT_043ae711;
          if (bVar33 != 0) {
            pbVar18 = DAT_043ae720;
          }
          iVar9 = isblank((uint)*pbVar18);
          if (iVar9 == 0) {
            iVar9 = isblank((uint)pbVar18[(long)(pbVar23 + -1)]);
            if (iVar9 != 0) goto LAB_00df24d0;
            bVar33 = bVar6 & 1;
            break;
          }
          std::string::erase(0x43ae710,0);
          pbVar16 = (byte *)(ulong)(DAT_043ae710 >> 1);
          pbVar23 = pbVar16;
          bVar6 = DAT_043ae710;
          pbVar30 = DAT_043ae718;
          if (((ulong)_DAT_043ae710 & 1) != 0) {
            pbVar23 = DAT_043ae718;
          }
        }
        goto LAB_00df2520;
      }
      goto LAB_00df1004;
    }
  }
  goto LAB_00df1028;
  while( true ) {
    pbVar18 = &DAT_043ae711;
    if (((ulong)_DAT_043ae710 & 1) != 0) {
      pbVar18 = DAT_043ae720;
    }
    iVar9 = isblank((uint)pbVar18[(long)(pbVar23 + -1)]);
    if (iVar9 == 0) break;
LAB_00df24d0:
    FUN_00df4e44(&DAT_043ae710);
    pbVar30 = DAT_043ae718;
    pbVar16 = (byte *)(ulong)(DAT_043ae710 >> 1);
    bVar33 = DAT_043ae710 & 1;
    pbVar23 = pbVar16;
    if (((ulong)_DAT_043ae710 & 1) != 0) {
      pbVar23 = DAT_043ae718;
    }
    if (pbVar23 == (byte *)0x0) break;
  }
LAB_00df2520:
  if (bVar33 != 0) {
    pbVar16 = pbVar30;
  }
  pbVar23 = &DAT_043ae711;
  if (bVar33 != 0) {
    pbVar23 = DAT_043ae720;
  }
  sVar2 = CONCAT44(_DAT_043ae73c,ram0x043ae738);
  if ((DAT_043ae730 & 1) == 0) {
    sVar2 = (ulong)(DAT_043ae730 >> 1);
    pbVar30 = (byte *)&DAT_043ae731;
  }
  else {
    pbVar30 = DAT_043ae740;
  }
  if (sVar2 == 0) {
    uVar24 = 0;
    goto LAB_00df29c4;
  }
  if ((long)sVar2 <= (long)pbVar16) {
    bVar6 = *pbVar30;
    local_798 = pbVar23 + (long)pbVar16;
    pbVar18 = pbVar23;
    pbVar21 = pbVar16;
    do {
      if ((0xfffffffffffffffe < (long)pbVar21 - sVar2) ||
         (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar21 - sVar2) + 1), pbVar18 == (byte *)0x0)
         ) break;
      iVar9 = memcmp(pbVar18,pbVar30,sVar2);
      if (iVar9 == 0) goto LAB_00df29ac;
      pbVar18 = pbVar18 + 1;
      pbVar21 = local_798 + -(long)pbVar18;
    } while ((long)sVar2 <= (long)pbVar21);
  }
LAB_00df27f0:
  sVar2 = CONCAT26(_DAT_043ae756,CONCAT51(_DAT_043ae751,DAT_043ae749._7_1_));
  pbVar30 = (byte *)CONCAT17(DAT_043ae758._7_1_,
                             CONCAT16(DAT_043ae758._6_1_,
                                      CONCAT51(DAT_043ae758._1_5_,(char)DAT_043ae758)));
  if ((DAT_043ae748 & 1) == 0) {
    pbVar30 = (byte *)&DAT_043ae749;
    sVar2 = (ulong)(DAT_043ae748 >> 1);
  }
  if (sVar2 == 0) {
    uVar24 = 0;
LAB_00df287c:
    do {
      while( true ) {
        std::string::erase(0x43ae710,uVar24);
        bVar8 = ((ulong)_DAT_043ae710 & 1) != 0;
        pbVar16 = (byte *)((ulong)_DAT_043ae710 >> 1 & 0x7f);
        if (bVar8) {
          pbVar16 = DAT_043ae718;
        }
        sVar2 = CONCAT26(_DAT_043ae756,CONCAT51(_DAT_043ae751,DAT_043ae749._7_1_));
        pbVar30 = (byte *)CONCAT17(DAT_043ae758._7_1_,
                                   CONCAT16(DAT_043ae758._6_1_,
                                            CONCAT51(DAT_043ae758._1_5_,(char)DAT_043ae758)));
        pbVar23 = DAT_043ae720;
        if (!bVar8) {
          pbVar23 = &DAT_043ae711;
        }
        if ((DAT_043ae748 & 1) == 0) {
          pbVar30 = (byte *)&DAT_043ae749;
          sVar2 = (ulong)(DAT_043ae748 >> 1);
        }
        if (sVar2 != 0) break;
        uVar24 = 0;
      }
      if ((long)pbVar16 < (long)sVar2) goto LAB_00df2960;
      bVar6 = *pbVar30;
      pbVar21 = pbVar23 + (long)pbVar16;
      pbVar18 = pbVar23;
      while( true ) {
        if ((0xfffffffffffffffe < (long)pbVar16 - sVar2) ||
           (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar16 - sVar2) + 1),
           pbVar18 == (byte *)0x0)) goto LAB_00df2960;
        iVar9 = memcmp(pbVar18,pbVar30,sVar2);
        if (iVar9 == 0) break;
        pbVar18 = pbVar18 + 1;
        pbVar16 = pbVar21 + -(long)pbVar18;
        if ((long)pbVar16 < (long)sVar2) goto LAB_00df2960;
      }
      if ((pbVar18 == pbVar21) ||
         (uVar24 = (long)pbVar18 - (long)pbVar23, uVar24 == 0xffffffffffffffff)) goto LAB_00df2960;
    } while( true );
  }
  if ((long)sVar2 <= (long)pbVar16) {
    bVar6 = *pbVar30;
    pbVar21 = pbVar23 + (long)pbVar16;
    pbVar18 = pbVar23;
    do {
      if ((0xfffffffffffffffe < (long)pbVar16 - sVar2) ||
         (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar16 - sVar2) + 1), pbVar18 == (byte *)0x0)
         ) break;
      iVar9 = memcmp(pbVar18,pbVar30,sVar2);
      if (iVar9 == 0) {
        if ((pbVar18 != pbVar21) &&
           (uVar24 = (long)pbVar18 - (long)pbVar23, uVar24 != 0xffffffffffffffff))
        goto LAB_00df287c;
        break;
      }
      pbVar18 = pbVar18 + 1;
      pbVar16 = pbVar21 + -(long)pbVar18;
    } while ((long)sVar2 <= (long)pbVar16);
  }
LAB_00df2960:
  FUN_00100250(PTR__string_04379718,&DAT_043ae710,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043ae728);
LAB_00df1004:
  pbVar16 = DAT_043ae720;
  if (((ulong)_DAT_043ae710 & 1) == 0) {
    pbVar16 = &DAT_043ae711;
  }
  FUN_00154110(param_2,"cannot properly align memory for \'%s\'",pbVar16);
  puVar19 = (undefined8 *)0x0;
LAB_00df1028:
  uVar22 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar22;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar13;
  lVar26 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar26;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar26 != 0) {
    uVar27 = puVar19[2];
    uVar24 = *(ulong *)(lVar13 + 8);
    if ((uVar27 & uVar27 - 1) == 0) {
      uVar24 = uVar27 - 1 & uVar24;
    }
    else if (uVar27 <= uVar24) {
      uVar32 = 0;
      if (uVar27 != 0) {
        uVar32 = uVar24 / uVar27;
      }
      uVar24 = uVar24 - uVar32 * uVar27;
    }
    *(undefined8 **)(puVar19[1] + uVar24 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar22 = *(undefined8 *)(param_1 + 0x30);
  uVar25 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar22;
  puVar19[7] = uVar25;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_041ee5f8;
  *(undefined1 *)(puVar19 + 0xb) = uVar5;
  uVar25 = *(undefined8 *)(param_1 + 0x70);
  uVar22 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar22;
  puVar19[0xe] = uVar25;
  uVar22 = *(undefined8 *)(param_1 + 0x78);
  uVar25 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  puVar19[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x12] = uVar4;
  puVar19[0xf] = uVar22;
  puVar19[0x10] = uVar25;
  uVar22 = *(undefined8 *)(param_1 + 0x98);
  uVar25 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  puVar19[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x16] = uVar4;
  puVar19[0x13] = uVar22;
  puVar19[0x14] = uVar25;
  uVar22 = *(undefined8 *)(param_1 + 0xb8);
  uVar25 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  puVar19[0x19] = *(undefined8 *)(param_1 + 200);
  puVar19[0x1a] = uVar4;
  puVar19[0x17] = uVar22;
  puVar19[0x18] = uVar25;
  iVar9 = FUN_00154450(param_2,puVar29);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00dfcce0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar10 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar10);
  }
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_4f0 & 1) != 0) && (local_4e0 != (undefined1 *)0x0)) {
    lVar26 = tpidr_el0;
    plVar20 = *(long **)(lVar26 + 0x20);
    if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
      *(long **)(lVar26 + 0x20) = DAT_043f1798;
      plVar20 = plVar7;
    }
    uVar24 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar26 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar26 + 0x38d488) = 1;
        *(undefined8 *)(lVar26 + 0x38d478) = 0;
        *(undefined8 *)(lVar26 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar26 + 0x38d480)) {
        FUN_02bcc824(plVar20,local_4e0,0,8);
        goto LAB_00df126c;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,local_4e0,0,8);
  }
LAB_00df126c:
  memset(local_2b0,0,0x240);
  pcVar28 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar26 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar24 = 0;
  pbVar16 = &LAB_00df5d94;
  if (uVar11 != 0) {
    pbVar16 = &LAB_00df5d60;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar23 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar23 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar23,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(byte **)(lVar13 + 0x30) = pbVar16;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar27 = 0;
            *(byte **)(lVar13 + 0x88) = pbVar16;
            goto LAB_00df13dc;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(byte **)(lVar13 + 0x38) = pbVar16;
      }
      uVar27 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
      goto LAB_00df13dc;
    }
    uVar24 = uVar24 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar24 != 0x20);
  uVar27 = 1;
  local_2b0[0] = pcVar28;
  local_2b0[1] = (char *)pbVar16;
LAB_00df13dc:
  pcVar28 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00df5fa4;
  if (uVar11 != 0) {
    pcVar1 = &LAB_00df5dc8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x88) = pcVar1;
            goto LAB_00df151c;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
      goto LAB_00df151c;
    }
    uVar24 = uVar24 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar24 != 0x20);
  alStack_2c0[uVar27 * 2 + 2] = (long)pcVar28;
  local_2b0[uVar27 * 2 + 1] = pcVar1;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00df151c:
  pcVar28 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00df8f60;
  if (uVar11 != 0) {
    pcVar1 = &LAB_00df5fe4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x88) = pcVar1;
            goto LAB_00df165c;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
      goto LAB_00df165c;
    }
    uVar24 = uVar24 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar24 != 0x20);
  alStack_2c0[uVar27 * 2 + 2] = (long)pcVar28;
  local_2b0[uVar27 * 2 + 1] = pcVar1;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00df165c:
  pcVar28 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar24 = 0;
  pcVar1 = &LAB_00dfbdd0;
  if (uVar11 != 0) {
    pcVar1 = &LAB_00df8fa4;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) break;
    uVar24 = uVar24 + 1;
    lVar31 = lVar31 + 0x18;
    if (uVar24 == 0x20) {
LAB_00df179c:
      uVar32 = (ulong)((int)uVar27 + 1);
      alStack_2c0[uVar27 * 2 + 2] = (long)pcVar28;
      local_2b0[uVar27 * 2 + 1] = pcVar1;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
joined_r0x00df1780:
      if ((uVar11 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
      }
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
      }
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar15 = FUN_008cca50();
        lVar31 = lVar15 + 0x181;
        if ((*(byte *)(lVar15 + 0x180) & 1) != 0) {
          lVar31 = *(long *)(lVar15 + 400);
        }
        uVar24 = (ulong)((int)uVar32 + 1);
        alStack_2c0[uVar32 * 2 + 2] = lVar31;
        local_2b0[uVar32 * 2 + 1] = PTR_LAB_0437bbc8;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
      }
      else {
        uVar24 = uVar32;
      }
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar15 = FUN_008cca50();
        lVar31 = lVar15 + 0x289;
        if ((*(byte *)(lVar15 + 0x288) & 1) != 0) {
          lVar31 = *(long *)(lVar15 + 0x298);
        }
        uVar27 = (ulong)((int)uVar24 + 1);
        alStack_2c0[uVar24 * 2 + 2] = lVar31;
        local_2b0[uVar24 * 2 + 1] = PTR_LAB_0437bbc0;
        lVar31 = *(long *)(lVar13 + 0x88);
      }
      else {
        lVar31 = *(long *)(lVar13 + 0x88);
        uVar27 = uVar24;
      }
      if (lVar31 != 0) {
        lVar15 = FUN_008cca50();
        lVar31 = lVar15 + 0x1c9;
        if ((*(byte *)(lVar15 + 0x1c8) & 1) != 0) {
          lVar31 = *(long *)(lVar15 + 0x1d8);
        }
        pcVar28 = *(char **)(lVar13 + 0x88);
        alStack_2c0[uVar27 * 2 + 2] = lVar31;
        local_2b0[uVar27 * 2 + 1] = pcVar28;
        uVar27 = (ulong)((int)uVar27 + 1);
      }
      alStack_2c0[uVar27 * 2 + 2] = 0;
      local_2b0[uVar27 * 2 + 1] = (char *)0x0;
      memcpy(&local_4f0,local_2b0,0x240);
      memcpy(asStack_730,local_2b0,0x240);
      lVar31 = FUN_008cca50();
      lVar15 = uVar27 - 1;
      pcVar28 = (char *)alStack_2c0[lVar15 * 2 + 2];
      sVar14 = strlen(pcVar28);
      sVar2 = (ulong)(*(byte *)(lVar31 + 0x1c8) >> 1);
      if ((*(byte *)(lVar31 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar31 + 0x1d0);
      }
      if ((sVar14 == sVar2) &&
         (iVar9 = std::string::compare(lVar31 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
         iVar9 == 0)) {
        auStack_500[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_4ef + lVar15 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_730 + lVar15 * 0x10) = alStack_2c0[lVar15 * 2 + 2];
      *(undefined1 **)(asStack_730 + (lVar15 * 2 + 1) * 8) = &LAB_00dfbea0;
      FUN_00151fe0(param_2,0,2);
      local_738[0] = FUN_0014feb0(param_2,0xffffffff);
      local_740 = param_2;
      if ((*PTR_DAT_0437bbd0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_0437bbd0);
        puVar3 = PTR_DAT_0437bbd8;
        if (iVar9 != 0) {
          FUN_00df5740(PTR_DAT_0437bbd8);
          FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437bbd0);
        }
      }
      uVar10 = local_738[0];
      uVar24 = *(ulong *)(PTR_DAT_0437bbd8 + 8);
      puVar3 = *(undefined **)(PTR_DAT_0437bbd8 + 0x10);
      if ((*PTR_DAT_0437bbd8 & 1) == 0) {
        puVar3 = PTR_DAT_0437bbd8 + 1;
        uVar24 = (ulong)((byte)*PTR_DAT_0437bbd8 >> 1);
      }
      FUN_001514f0(param_2,puVar3,uVar24);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_00dfbef0,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar31 = 0;
      do {
        if (lVar31 == 1) {
          psVar17 = asStack_730;
          pbVar16 = (byte *)FUN_00df3af4();
        }
        else if (lVar31 == 0) {
          psVar17 = &local_4f0;
          pbVar16 = (byte *)FUN_00df3900();
        }
        else {
          psVar17 = (string *)local_2b0;
          pbVar16 = (byte *)FUN_00df3ce8();
        }
        pbVar23 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar23 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar23);
        local_748 = FUN_0014feb0(param_2,0xffffffff);
        local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
        local_750 = param_2;
        FUN_008fe304(auStack_70,param_2,&local_780,&local_740,local_748);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_748;
        if (*(long *)(lVar13 + 0xb8) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
        }
        uVar10 = local_748;
        if (*(long *)(lVar13 + 0xc0) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_748;
        uVar22 = *(undefined8 *)(lVar13 + 0x98);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar26);
        FUN_001516f0(param_2,uVar22,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_748;
        uVar22 = *(undefined8 *)(lVar13 + 0xa0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar26);
        FUN_001516f0(param_2,uVar22,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
          FUN_008fe304(auStack_70,param_2,&local_780,&local_750,local_748);
        }
        else {
          local_780 = &LAB_00dfbfe0;
          uStack_778 = 0;
          local_770 = lVar13;
          lStack_768 = lVar26;
          FUN_00dfbf40(param_2,1,&local_780,local_748);
          local_780 = &LAB_00dfc2f0;
          uStack_778 = 0;
          local_770 = lVar13;
          lStack_768 = lVar26;
          FUN_00dfbf40(param_2,2,&local_780,local_748);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_780,&local_740,uVar10);
        if (*(undefined1 **)(lVar13 + 0x90) != (undefined1 *)0x0) {
          uStack_778 = 0;
          local_780 = *(undefined1 **)(lVar13 + 0x90);
          local_770 = lVar13;
          lStack_768 = lVar26;
          FUN_00dfbf40(param_2,4,&local_780,uVar10);
        }
        if (*(char *)(lVar13 + 200) != '\0') {
          local_780 = &LAB_00dfbfe0;
          uStack_778 = 0;
          local_770 = lVar13;
          lStack_768 = lVar26;
          FUN_00dfbf40(param_2,1,&local_780,uVar10);
          local_780 = &LAB_00dfc2f0;
          uStack_778 = 0;
          local_770 = lVar13;
          lStack_768 = lVar26;
          FUN_00dfbf40(param_2,2,&local_780,uVar10);
        }
        uVar12 = local_748;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_750,0xfffffffe);
        lVar31 = lVar31 + 1;
      } while (lVar31 != 3);
      FUN_00df3f38();
      puVar3 = DAT_043ae250;
      if ((DAT_043ae240 & 1) == 0) {
        puVar3 = &DAT_043ae241;
      }
      FUN_00154450(param_2,puVar3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,local_2b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar12);
      local_780 = *(undefined1 **)(lVar13 + 0x90);
      if (local_780 != (undefined1 *)0x0) {
        uStack_778 = 0;
        local_770 = lVar13;
        lStack_768 = lVar26;
        FUN_00dfbf40(param_2,4,&local_780,uVar12);
      }
      local_780 = &LAB_00dfc6b8;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a78788;
      local_770 = lVar13;
      lStack_768 = lVar26;
      FUN_00dfc600(param_2,1,&local_780,uVar12);
      local_780 = &LAB_00dfc9c8;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a78788;
      local_770 = lVar13;
      lStack_768 = lVar26;
      FUN_00dfc600(param_2,2,&local_780,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_738[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar24;
  uVar32 = uVar27;
  if (iVar9 == 1) {
    *(char **)(lVar13 + 0x30) = pcVar1;
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 == 0x13) {
        *(char **)(lVar13 + 0x88) = pcVar1;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
        goto joined_r0x00df1780;
      }
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
      goto LAB_00df179c;
    }
    *(char **)(lVar13 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar24 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  goto joined_r0x00df1780;
LAB_00df29ac:
  if ((pbVar18 == local_798) ||
     (uVar24 = (long)pbVar18 - (long)pbVar23, uVar24 == 0xffffffffffffffff)) goto LAB_00df27f0;
LAB_00df29c4:
  while( true ) {
    std::string::erase(0x43ae710,uVar24);
    pbVar16 = (byte *)((ulong)_DAT_043ae710 >> 1 & 0x7f);
    if (((ulong)_DAT_043ae710 & 1) == 0) {
      pbVar23 = &DAT_043ae711;
    }
    else {
      pbVar23 = DAT_043ae720;
      pbVar16 = DAT_043ae718;
    }
    sVar2 = CONCAT44(_DAT_043ae73c,ram0x043ae738);
    if ((DAT_043ae730 & 1) == 0) {
      sVar2 = (ulong)(DAT_043ae730 >> 1);
      pbVar30 = (byte *)&DAT_043ae731;
    }
    else {
      pbVar30 = DAT_043ae740;
    }
    if (sVar2 != 0) break;
    uVar24 = 0;
  }
  if ((long)pbVar16 < (long)sVar2) goto LAB_00df27f0;
  bVar6 = *pbVar30;
  local_798 = pbVar23 + (long)pbVar16;
  pbVar18 = pbVar23;
  pbVar21 = pbVar16;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pbVar21 - sVar2) ||
       (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar21 - sVar2) + 1), pbVar18 == (byte *)0x0))
    goto LAB_00df27f0;
    iVar9 = memcmp(pbVar18,pbVar30,sVar2);
    if (iVar9 == 0) break;
    pbVar18 = pbVar18 + 1;
    pbVar21 = local_798 + -(long)pbVar18;
    if ((long)pbVar21 < (long)sVar2) goto LAB_00df27f0;
  }
  goto LAB_00df29ac;
}


