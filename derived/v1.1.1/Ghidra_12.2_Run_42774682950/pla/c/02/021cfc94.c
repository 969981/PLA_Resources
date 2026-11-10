/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021cfc94; name: FUN_021cfc94
 */


/* WARNING: Removing unreachable block (ram,0x021d58e8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021cfc94(long param_1,long param_2)

{
  ulong *puVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  byte *pbVar16;
  string *psVar17;
  void *__dest;
  byte *pbVar18;
  byte *pbVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined8 uVar26;
  byte *pbVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  char *pcVar31;
  undefined1 *puVar32;
  byte bVar33;
  undefined8 uVar34;
  byte *local_1058;
  undefined1 *local_1050;
  undefined8 uStack_1048;
  long local_1040;
  long lStack_1038;
  undefined8 local_1030;
  undefined *puStack_1028;
  long local_1020;
  undefined4 local_1018;
  long local_1010;
  undefined4 local_1008 [2];
  string asStack_1000 [1312];
  undefined8 auStack_ae0 [2];
  string local_ad0;
  undefined1 auStack_acf [7];
  size_t local_ac8;
  undefined1 *local_ac0;
  long alStack_5b0 [2];
  char *local_5a0 [166];
  undefined1 auStack_70 [16];
  
  if (((DAT_043dd438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dd438), iVar8 != 0)) {
    local_5a0[2] = (char *)0x0;
    local_5a0[1] = (char *)0x0;
    local_5a0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d4d0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437d4d0);
      puVar20 = PTR_DAT_0437d4d8;
      if (iVar8 != 0) {
        FUN_00f09a50(PTR_DAT_0437d4d8);
        FUN_00100250(PTR__string_04379718,puVar20,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d4d0);
      }
    }
    puVar20 = *(undefined **)(PTR_DAT_0437d4d8 + 0x10);
    if ((*PTR_DAT_0437d4d8 & 1) == 0) {
      puVar20 = PTR_DAT_0437d4d8 + 1;
    }
    pcVar31 = (char *)std::string::append((char *)local_5a0,(ulong)puVar20);
    psVar17 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043dd420,psVar17);
    pcVar31 = local_5a0[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_5a0[0] & 1) != 0) && ((byte *)local_5a0[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar23 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar23 = plVar6;
      }
      uVar28 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar28 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar23,pcVar31,0,8);
          goto LAB_021d4a10;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,pcVar31,0,8);
    }
LAB_021d4a10:
    FUN_00100250(PTR__string_04379718,&DAT_043dd420,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dd438);
  }
  std::string::string(&local_ad0,(string *)&DAT_043dd420);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dd418);
  sVar3 = (ulong)((byte)local_ad0 >> 1);
  if (((byte)local_ad0 & 1) != 0) {
    sVar3 = local_ac8;
  }
  std::string::append((ulong)&local_ad0,(char)iVar8);
  if (((byte)local_ad0 & 1) == 0) {
    puVar32 = auStack_acf;
    local_ac8 = (size_t)((byte)local_ad0 >> 1);
  }
  else {
    puVar32 = local_ac0;
  }
  snprintf(puVar32 + (sVar3 - 1),local_ac8,"%d",(ulong)DAT_043dd418);
  DAT_043dd418 = DAT_043dd418 + 1;
  if (((DAT_043dd458 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dd458), iVar8 != 0)) {
    local_5a0[2] = (char *)0x0;
    local_5a0[1] = (char *)0x0;
    local_5a0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d4d0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437d4d0);
      puVar20 = PTR_DAT_0437d4d8;
      if (iVar8 != 0) {
        FUN_00f09a50(PTR_DAT_0437d4d8);
        FUN_00100250(PTR__string_04379718,puVar20,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d4d0);
      }
    }
    if ((*PTR_DAT_0437d4d8 & 1) == 0) {
      puVar20 = PTR_DAT_0437d4d8 + 1;
    }
    else {
      puVar20 = *(undefined **)(PTR_DAT_0437d4d8 + 0x10);
    }
    pcVar31 = (char *)std::string::append((char *)local_5a0,(ulong)puVar20);
    psVar17 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043dd440,psVar17);
    pcVar31 = local_5a0[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_5a0[0] & 1) != 0) && ((byte *)local_5a0[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar23 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar23 = plVar6;
      }
      uVar28 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar28 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar23,pcVar31,0,8);
          goto LAB_021d4b78;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,pcVar31,0,8);
    }
LAB_021d4b78:
    FUN_00100250(PTR__string_04379718,&DAT_043dd440,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dd458);
  }
  if ((DAT_043dd440 & 1) == 0) {
    uVar34 = 0x43dd441;
    if (((byte)local_ad0 & 1) != 0) goto LAB_021cfd88;
LAB_021d01cc:
    puVar32 = (undefined1 *)((ulong)&local_ad0 | 1);
  }
  else {
    uVar34 = DAT_043dd450;
    if (((byte)local_ad0 & 1) == 0) goto LAB_021d01cc;
LAB_021cfd88:
    puVar32 = local_ac0;
  }
  if (((DAT_043dd468 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dd468), iVar8 != 0)) {
    DAT_043dd460 = 0x4e8;
    __cxa_guard_release(&DAT_043dd468);
  }
  if (((DAT_043dd478 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dd478), iVar8 != 0)) {
    DAT_043dd470 = 0x4ef;
    __cxa_guard_release(&DAT_043dd478);
  }
  uVar28 = DAT_043dd460;
  lVar13 = FUN_00153520(param_1,DAT_043dd460);
  if ((uVar28 < ((ulong)(uint)-(int)lVar13 & 7 | 0x4e8)) ||
     (puVar21 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar28 = DAT_043dd470;
    lVar13 = FUN_00153520(param_1,DAT_043dd470);
    if ((uVar28 < ((ulong)(uint)-(int)lVar13 & 7 | 0x4e8)) ||
       (puVar21 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043dd498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dd498), iVar8 != 0)) {
        if (((DAT_043dd4d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dd4d0), iVar8 != 0)) {
          DAT_043dd4a0 = 0x16;
          DAT_043dd4b0 = (byte *)0x0;
          DAT_043dd4a1._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043dd4a8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043dd4b8 = 0x2a;
          _DAT_043dd4ac = 0;
          DAT_043dd4c8._7_1_ = 0;
          DAT_043dd4c8._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043dd4c8._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043dd4c8._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043dd4c8._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043dd4c8._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043dd4c1 = s__anonymous_namespace__039071f8[8];
          DAT_043dd4c1_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043dd4c1_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043dd4c1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043dd4c1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043dd4c6 = s__anonymous_namespace__039071f8._13_2_;
          DAT_043dd4c8._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043dd4b9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043dd4b9._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043dd4c8._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043dd4a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043dd4d0);
        }
        plVar6 = DAT_043f1798;
        lVar13 = tpidr_el0;
        plVar23 = *(long **)(lVar13 + 0x20);
        if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
          *(long **)(lVar13 + 0x20) = DAT_043f1798;
          plVar23 = plVar6;
        }
        __dest = (void *)(**(code **)(*plVar23 + 0x10))(plVar23,0x1690,8);
        _DAT_043dd480 = (char *)0x1691;
        DAT_043dd488 = (byte *)0x1688;
        DAT_043dd490 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::FieldObjectForHaxe, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50>, char const (&)[30], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_object_for_haxe_glue.cpp:20:39), char const (&)[37], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_object_for_haxe_glue.cpp:21:46), char const (&)[45], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_object_for_haxe_glue.cpp:22:54), char const (&)[33], void (field::content::FieldObjectForHaxe::*)(const gfl::FnvHash64 &, const gfl::math::Vector3 &, const gfl::math::Quaternion &, const gfl::math::Vector3 &), char const (&)[33], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_object_for_haxe_glue.cpp:24:42), char const (&)[42], void (field::content::FieldObjectForHaxe::*)(), char const (&)[41], void (field::content::FieldObjectForHaxe::*)(), char const (&)[43], bool (field::content::FieldObjectForHaxe::*)(), char const (&)[30], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_object_for_haxe_glue.cpp:28:39), char const (&)[37], field::content::FieldCharacterComponent *(field::content::FieldObjectForHaxe::*)(const gfl::FnvHash64 &), char const (&)[31], field::content::FieldNpcComponent *(field::content::FieldObjectForHaxe::*)(const gfl::FnvHash64 &), char const (&)[38], field::FieldNpcPokemonComponent *(field::content::FieldObjectForHaxe::*)(const gfl::FnvHash64 &), char const (&)[32], field::content::FieldDoorComponent *(field::content::FieldObjectForHaxe::*)(const gfl::Fnv..." /* TRUNCATED STRING LITERAL */
               ,0x1688);
        *(undefined1 *)((long)__dest + 0x1688) = 0;
        std::string::find(-0x80,0x5b);
        uVar30 = std::string::find(-0x80,0x3d);
        uVar28 = std::string::rfind(-0x80,0x5d);
        if (uVar28 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043dd480 & 1) == 0) {
            uVar28 = (ulong)(DAT_043dd480 >> 1);
          }
          else {
            uVar28 = (ulong)DAT_043dd488;
          }
          uVar24 = 0;
          if (uVar30 != 0xffffffffffffffff) {
            uVar24 = uVar30;
          }
          uVar30 = uVar28;
        }
        else {
          uVar24 = 0;
          if (uVar30 != 0xffffffffffffffff) {
            uVar24 = uVar30;
          }
          if (((ulong)_DAT_043dd480 & 1) == 0) {
            uVar30 = (ulong)(DAT_043dd480 >> 1);
          }
          else {
            uVar30 = (ulong)DAT_043dd488;
          }
        }
        if (uVar24 < uVar30 - 1) {
          uVar24 = uVar24 + 1;
        }
        std::string::string((string *)local_5a0,(string *)&DAT_043dd480,uVar24,uVar28 - uVar24,
                            (allocator *)&DAT_043dd480);
        FUN_021beb9c(&DAT_043dd480);
        DAT_043dd490 = (byte *)local_5a0[2];
        _DAT_043dd480 = local_5a0[0];
        DAT_043dd488 = (byte *)local_5a0[1];
        lVar13 = FUN_021beb40(&DAT_043dd480);
        if (lVar13 != -1) {
          std::string::erase(0x43dd480,lVar13 - 2);
        }
        pbVar16 = (byte *)(ulong)(DAT_043dd480 >> 1);
        pbVar27 = pbVar16;
        bVar5 = DAT_043dd480;
        pbVar18 = DAT_043dd488;
        if (((ulong)_DAT_043dd480 & 1) != 0) {
          pbVar27 = DAT_043dd488;
        }
        while( true ) {
          bVar33 = bVar5 & 1;
          DAT_043dd488 = pbVar18;
          if (pbVar27 == (byte *)0x0) break;
          pbVar19 = &DAT_043dd481;
          if (bVar33 != 0) {
            pbVar19 = DAT_043dd490;
          }
          iVar8 = isblank((uint)*pbVar19);
          if (iVar8 == 0) {
            iVar8 = isblank((uint)pbVar19[(long)(pbVar27 + -1)]);
            if (iVar8 != 0) goto LAB_021d51a8;
            bVar33 = bVar5 & 1;
            break;
          }
          std::string::erase(0x43dd480,0);
          pbVar16 = (byte *)(ulong)(DAT_043dd480 >> 1);
          pbVar27 = pbVar16;
          bVar5 = DAT_043dd480;
          pbVar18 = DAT_043dd488;
          if (((ulong)_DAT_043dd480 & 1) != 0) {
            pbVar27 = DAT_043dd488;
          }
        }
        goto LAB_021d51f8;
      }
      goto LAB_021cfe44;
    }
  }
  goto LAB_021cfe68;
  while( true ) {
    pbVar19 = &DAT_043dd481;
    if (((ulong)_DAT_043dd480 & 1) != 0) {
      pbVar19 = DAT_043dd490;
    }
    iVar8 = isblank((uint)pbVar19[(long)(pbVar27 + -1)]);
    if (iVar8 == 0) break;
LAB_021d51a8:
    FUN_021beb5c(&DAT_043dd480);
    pbVar18 = DAT_043dd488;
    pbVar16 = (byte *)(ulong)(DAT_043dd480 >> 1);
    bVar33 = DAT_043dd480 & 1;
    pbVar27 = pbVar16;
    if (((ulong)_DAT_043dd480 & 1) != 0) {
      pbVar27 = DAT_043dd488;
    }
    if (pbVar27 == (byte *)0x0) break;
  }
LAB_021d51f8:
  if (bVar33 != 0) {
    pbVar16 = pbVar18;
  }
  local_1058 = &DAT_043dd481;
  if (bVar33 != 0) {
    local_1058 = DAT_043dd490;
  }
  sVar3 = CONCAT44(_DAT_043dd4ac,ram0x043dd4a8);
  if ((DAT_043dd4a0 & 1) == 0) {
    sVar3 = (ulong)(DAT_043dd4a0 >> 1);
    pbVar27 = (byte *)&DAT_043dd4a1;
  }
  else {
    pbVar27 = DAT_043dd4b0;
  }
  if (sVar3 == 0) {
    uVar28 = 0;
    goto LAB_021d5818;
  }
  if ((long)sVar3 <= (long)pbVar16) {
    pbVar19 = local_1058 + (long)pbVar16;
    bVar5 = *pbVar27;
    pbVar18 = local_1058;
    pbVar25 = pbVar16;
    do {
      if ((0xfffffffffffffffe < (long)pbVar25 - sVar3) ||
         (pbVar18 = memchr(pbVar18,(uint)bVar5,((long)pbVar25 - sVar3) + 1), pbVar18 == (byte *)0x0)
         ) break;
      iVar8 = memcmp(pbVar18,pbVar27,sVar3);
      if (iVar8 == 0) goto LAB_021d5800;
      pbVar18 = pbVar18 + 1;
      pbVar25 = pbVar19 + -(long)pbVar18;
    } while ((long)sVar3 <= (long)pbVar25);
  }
LAB_021d5650:
  sVar3 = CONCAT26(_DAT_043dd4c6,CONCAT51(_DAT_043dd4c1,DAT_043dd4b9._7_1_));
  pbVar27 = (byte *)CONCAT17(DAT_043dd4c8._7_1_,
                             CONCAT16(DAT_043dd4c8._6_1_,
                                      CONCAT51(DAT_043dd4c8._1_5_,(char)DAT_043dd4c8)));
  if ((DAT_043dd4b8 & 1) == 0) {
    pbVar27 = (byte *)&DAT_043dd4b9;
    sVar3 = (ulong)(DAT_043dd4b8 >> 1);
  }
  if (sVar3 == 0) {
    uVar28 = 0;
LAB_021d56d0:
    do {
      while( true ) {
        std::string::erase(0x43dd480,uVar28);
        bVar7 = ((ulong)_DAT_043dd480 & 1) != 0;
        pbVar16 = (byte *)((ulong)_DAT_043dd480 >> 1 & 0x7f);
        if (bVar7) {
          pbVar16 = DAT_043dd488;
        }
        sVar3 = CONCAT26(_DAT_043dd4c6,CONCAT51(_DAT_043dd4c1,DAT_043dd4b9._7_1_));
        pbVar18 = (byte *)CONCAT17(DAT_043dd4c8._7_1_,
                                   CONCAT16(DAT_043dd4c8._6_1_,
                                            CONCAT51(DAT_043dd4c8._1_5_,(char)DAT_043dd4c8)));
        pbVar27 = DAT_043dd490;
        if (!bVar7) {
          pbVar27 = &DAT_043dd481;
        }
        if ((DAT_043dd4b8 & 1) == 0) {
          pbVar18 = (byte *)&DAT_043dd4b9;
          sVar3 = (ulong)(DAT_043dd4b8 >> 1);
        }
        if (sVar3 != 0) break;
        uVar28 = 0;
      }
      if ((long)pbVar16 < (long)sVar3) goto LAB_021d57b4;
      bVar5 = *pbVar18;
      pbVar25 = pbVar27 + (long)pbVar16;
      pbVar19 = pbVar27;
      while( true ) {
        if ((0xfffffffffffffffe < (long)pbVar16 - sVar3) ||
           (pbVar19 = memchr(pbVar19,(uint)bVar5,((long)pbVar16 - sVar3) + 1),
           pbVar19 == (byte *)0x0)) goto LAB_021d57b4;
        iVar8 = memcmp(pbVar19,pbVar18,sVar3);
        if (iVar8 == 0) break;
        pbVar19 = pbVar19 + 1;
        pbVar16 = pbVar25 + -(long)pbVar19;
        if ((long)pbVar16 < (long)sVar3) goto LAB_021d57b4;
      }
      if ((pbVar19 == pbVar25) ||
         (uVar28 = (long)pbVar19 - (long)pbVar27, uVar28 == 0xffffffffffffffff)) goto LAB_021d57b4;
    } while( true );
  }
  if ((long)sVar3 <= (long)pbVar16) {
    pbVar19 = local_1058 + (long)pbVar16;
    bVar5 = *pbVar27;
    pbVar18 = local_1058;
    do {
      if ((0xfffffffffffffffe < (long)pbVar16 - sVar3) ||
         (pbVar18 = memchr(pbVar18,(uint)bVar5,((long)pbVar16 - sVar3) + 1), pbVar18 == (byte *)0x0)
         ) break;
      iVar8 = memcmp(pbVar18,pbVar27,sVar3);
      if (iVar8 == 0) {
        if ((pbVar18 != pbVar19) &&
           (uVar28 = (long)pbVar18 - (long)local_1058, uVar28 != 0xffffffffffffffff))
        goto LAB_021d56d0;
        break;
      }
      pbVar18 = pbVar18 + 1;
      pbVar16 = pbVar19 + -(long)pbVar18;
    } while ((long)sVar3 <= (long)pbVar16);
  }
LAB_021d57b4:
  FUN_00100250(PTR__string_04379718,&DAT_043dd480,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043dd498);
LAB_021cfe44:
  pbVar16 = DAT_043dd490;
  if (((ulong)_DAT_043dd480 & 1) == 0) {
    pbVar16 = &DAT_043dd481;
  }
  FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar16);
  puVar21 = (undefined8 *)0x0;
LAB_021cfe68:
  uVar26 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar21[1] = uVar26;
  puVar21[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar21[3] = lVar13;
  lVar29 = *(long *)(param_2 + 0x20);
  puVar21[4] = lVar29;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar29 != 0) {
    uVar30 = puVar21[2];
    uVar28 = *(ulong *)(lVar13 + 8);
    if ((uVar30 & uVar30 - 1) == 0) {
      uVar28 = uVar30 - 1 & uVar28;
    }
    else if (uVar30 <= uVar28) {
      uVar24 = 0;
      if (uVar30 != 0) {
        uVar24 = uVar28 / uVar30;
      }
      uVar28 = uVar28 - uVar24 * uVar30;
    }
    *(undefined8 **)(puVar21[1] + uVar28 * 8) = puVar21 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar26 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar26;
  puVar21[7] = uVar4;
  puVar21[8] = *(undefined8 *)(param_2 + 0x40);
  puVar21[9] = *(undefined8 *)(param_2 + 0x48);
  puVar21[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar21 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar21 = &PTR_LAB_0425b718;
  memcpy(puVar21 + 0xc,(void *)(param_2 + 0x60),0x488);
  iVar8 = FUN_00154450(param_1,puVar32);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_021d66e0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar9 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar9);
  }
  FUN_001522a0(param_1,uVar34);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,uVar34);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_ad0 & 1) != 0) && (local_ac0 != (undefined1 *)0x0)) {
    lVar29 = tpidr_el0;
    plVar23 = *(long **)(lVar29 + 0x20);
    if (*(long **)(lVar29 + 0x20) == (long *)0x0) {
      *(long **)(lVar29 + 0x20) = DAT_043f1798;
      plVar23 = plVar6;
    }
    uVar28 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar28 & 1) != 0) {
      if (*(char *)(lVar29 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar29 + 0x38d488) = 1;
        *(undefined8 *)(lVar29 + 0x38d478) = 0;
        *(undefined8 *)(lVar29 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar29 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar29 + 0x38d480)) {
        FUN_02bcc824(plVar23,local_ac0,0,8);
        goto LAB_021d0088;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_ac0,0,8);
  }
LAB_021d0088:
  memset(local_5a0,0,0x530);
  pcVar31 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar22 = lVar13 + 8;
  lVar29 = 0;
  uVar28 = 0;
  pbVar16 = &LAB_021bf3cc;
  if (uVar10 != 0) {
    pbVar16 = &LAB_021beda0;
  }
  puVar1 = (ulong *)(lVar13 + 0x4e0);
  do {
    lVar15 = FUN_008cca50();
    pbVar27 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar27 >> 1);
    if ((*pbVar27 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar27 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar27,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(byte **)(lVar13 + 0x30) = pbVar16;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar30 = 0;
            *(byte **)(lVar13 + 0x498) = pbVar16;
            goto LAB_021d0228;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(byte **)(lVar13 + 0x38) = pbVar16;
      }
      uVar30 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d0228;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  uVar30 = 1;
  local_5a0[0] = pcVar31;
  local_5a0[1] = (char *)pbVar16;
LAB_021d0228:
  pcVar31 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021bf60c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021bf42c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d0370;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d0370;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d0370:
  pcVar31 = *(char **)(lVar13 + 0x70);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c05e4;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021bf66c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d04b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d04b4;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d04b4:
  pcVar31 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c0b2c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c0628;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d05f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d05f8;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d05f8:
  pcVar31 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c0f88;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c0c14;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d073c;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d073c;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d073c:
  pcVar31 = *(char **)(lVar13 + 0x98);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c10c8;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c0fcc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d0880;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d0880;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d0880:
  pcVar31 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c1224;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c11ec;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d09c4;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d09c4;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d09c4:
  pcVar31 = *(char **)(lVar13 + 200);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c1348;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c125c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d0b08;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d0b08;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d0b08:
  pcVar31 = *(char **)(lVar13 + 0xe0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c16b8;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c1454;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d0c4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d0c4c;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d0c4c:
  pcVar31 = *(char **)(lVar13 + 0xe8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c18f8;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c1718;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d0d90;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d0d90;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d0d90:
  pcVar31 = *(char **)(lVar13 + 0x100);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c1f30;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c19e0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d0ed4;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d0ed4;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d0ed4:
  pcVar31 = *(char **)(lVar13 + 0x118);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c2560;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c2018;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d1018;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d1018;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d1018:
  pcVar31 = *(char **)(lVar13 + 0x130);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c2b90;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c2648;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d115c;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d115c;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d115c:
  pcVar31 = *(char **)(lVar13 + 0x148);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c5e3c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c2c78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d12a0;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d12a0;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d12a0:
  pcVar31 = *(char **)(lVar13 + 0x160);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c6590;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c5f24;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d13e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d13e4;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d13e4:
  pcVar31 = *(char **)(lVar13 + 0x178);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c6cb4;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c6678;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d1528;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d1528;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d1528:
  pcVar31 = *(char **)(lVar13 + 400);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c72f0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c6d9c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d166c;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d166c;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d166c:
  pcVar31 = *(char **)(lVar13 + 0x1a8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c760c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c73d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d17b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d17b0;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d17b0:
  pcVar31 = *(char **)(lVar13 + 0x1c0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c7fa8;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c7710;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d18f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d18f4;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d18f4:
  pcVar31 = *(char **)(lVar13 + 0x1c8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c8c24;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c7fec;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d1a38;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d1a38;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d1a38:
  pcVar31 = *(char **)(lVar13 + 0x1d0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c8e88;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c8c68;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d1b7c;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d1b7c;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d1b7c:
  pcVar31 = *(char **)(lVar13 + 0x1e8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c9180;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c8f70;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d1cc0;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d1cc0;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d1cc0:
  pcVar31 = *(char **)(lVar13 + 0x200);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c92a0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c9268;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d1e04;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d1e04;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d1e04:
  pcVar31 = *(char **)(lVar13 + 0x218);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c9738;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c92d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d1f48;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d1f48;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d1f48:
  pcVar31 = *(char **)(lVar13 + 0x230);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021c9858;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c9820;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d208c;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d208c;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d208c:
  pcVar31 = *(char **)(lVar13 + 0x248);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cca3c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021c9890;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d21d0;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d21d0;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d21d0:
  pcVar31 = *(char **)(lVar13 + 0x260);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ccb5c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ccb24;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2314;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2314;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d2314:
  pcVar31 = *(char **)(lVar13 + 0x278);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ccbcc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ccb94;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2458;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2458;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d2458:
  pcVar31 = *(char **)(lVar13 + 0x290);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ccc3c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ccc04;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d259c;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d259c;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d259c:
  pcVar31 = *(char **)(lVar13 + 0x2a8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ccf78;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ccc74;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d26e0;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d26e0;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d26e0:
  pcVar31 = *(char **)(lVar13 + 0x2c0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cd1b0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cd060;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar28;
      if (iVar8 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2824;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2824;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_021d2824:
  iVar8 = (int)uVar30;
  pcVar31 = *(char **)(lVar13 + 0x2d8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cd3dc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cd298;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2968;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2968;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  iVar8 = iVar8 + 1;
  alStack_5b0[uVar30 * 2 + 2] = (long)pcVar31;
  local_5a0[uVar30 * 2 + 1] = pcVar2;
LAB_021d2968:
  pcVar31 = *(char **)(lVar13 + 0x2f0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cd6f0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cd520;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2aac;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2aac;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d2aac:
  pcVar31 = *(char **)(lVar13 + 0x308);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cd8fc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cd7d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2bf0;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2bf0;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d2bf0:
  pcVar31 = *(char **)(lVar13 + 800);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cda74;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cda3c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2d34;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2d34;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d2d34:
  pcVar31 = *(char **)(lVar13 + 0x338);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cdae4;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cdaac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2e78;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2e78;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d2e78:
  pcVar31 = *(char **)(lVar13 + 0x350);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cdb54;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cdb1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d2fbc;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d2fbc;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d2fbc:
  pcVar31 = *(char **)(lVar13 + 0x368);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cdbc4;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cdb8c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3100;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3100;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3100:
  pcVar31 = *(char **)(lVar13 + 0x380);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cdd08;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cdbfc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3244;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3244;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3244:
  pcVar31 = *(char **)(lVar13 + 0x398);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cde68;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cde30;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3388;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3388;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3388:
  pcVar31 = *(char **)(lVar13 + 0x3b0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ce0c8;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cdea0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d34cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d34cc;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d34cc:
  pcVar31 = *(char **)(lVar13 + 0x3c8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ce2bc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ce1b0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3610;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3610;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3610:
  pcVar31 = *(char **)(lVar13 + 0x3e0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ce8c0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ce3ec;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3754;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3754;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3754:
  pcVar31 = *(char **)(lVar13 + 0x3f8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021ce9e0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ce9a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3898;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3898;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3898:
  pcVar31 = *(char **)(lVar13 + 0x410);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cee30;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cea18;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d39dc;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d39dc;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d39dc:
  pcVar31 = *(char **)(lVar13 + 0x428);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cef50;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cef18;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3b20;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3b20;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3b20:
  pcVar31 = *(char **)(lVar13 + 0x440);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cefc0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cef88;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3c64;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3c64;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3c64:
  pcVar31 = *(char **)(lVar13 + 0x458);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cf138;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021ceff8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3da8;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3da8;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3da8:
  pcVar31 = *(char **)(lVar13 + 0x470);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cf2b0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cf278;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d3eec;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d3eec;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d3eec:
  pcVar31 = *(char **)(lVar13 + 0x488);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cfa48;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cf2e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) {
      iVar11 = (int)uVar28;
      if (iVar11 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(char **)(lVar13 + 0x498) = pcVar2;
            goto LAB_021d4030;
          }
          *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
      goto LAB_021d4030;
    }
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar28 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
  local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d4030:
  pcVar31 = *(char **)(lVar13 + 0x490);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar28 = 0;
  pcVar2 = &LAB_021cfc44;
  if (uVar10 != 0) {
    pcVar2 = &LAB_021cfbf4;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar11 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar11 == 0)) break;
    uVar28 = uVar28 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar28 == 0x20) {
LAB_021d418c:
      lVar29 = (long)iVar8;
      iVar8 = iVar8 + 1;
      alStack_5b0[lVar29 * 2 + 2] = (long)pcVar31;
      local_5a0[lVar29 * 2 + 1] = pcVar2;
LAB_021d419c:
      uVar10 = (uint)*puVar1;
joined_r0x021d4128:
      if ((uVar10 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*puVar1;
      }
      if ((uVar10 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*puVar1;
      }
      if ((uVar10 >> 0x10 & 1) == 0) {
        lVar29 = FUN_008cca50();
        if ((*(byte *)(lVar29 + 0x180) & 1) == 0) {
          lVar29 = lVar29 + 0x181;
        }
        else {
          lVar29 = *(long *)(lVar29 + 400);
        }
        lVar15 = (long)iVar8;
        iVar8 = iVar8 + 1;
        alStack_5b0[lVar15 * 2 + 2] = lVar29;
        local_5a0[lVar15 * 2 + 1] = PTR_LAB_0437d4a8;
        uVar10 = (uint)*puVar1;
      }
      if ((uVar10 >> 0x1b & 1) == 0) {
        lVar29 = FUN_008cca50();
        if ((*(byte *)(lVar29 + 0x288) & 1) == 0) {
          lVar29 = lVar29 + 0x289;
        }
        else {
          lVar29 = *(long *)(lVar29 + 0x298);
        }
        lVar15 = (long)iVar8;
        iVar8 = iVar8 + 1;
        alStack_5b0[lVar15 * 2 + 2] = lVar29;
        local_5a0[lVar15 * 2 + 1] = PTR_LAB_0437d4b0;
        lVar29 = *(long *)(lVar13 + 0x498);
      }
      else {
        lVar29 = *(long *)(lVar13 + 0x498);
      }
      if (lVar29 != 0) {
        lVar29 = FUN_008cca50();
        if ((*(byte *)(lVar29 + 0x1c8) & 1) == 0) {
          lVar29 = lVar29 + 0x1c9;
        }
        else {
          lVar29 = *(long *)(lVar29 + 0x1d8);
        }
        pcVar31 = *(char **)(lVar13 + 0x498);
        lVar15 = (long)iVar8;
        iVar8 = iVar8 + 1;
        alStack_5b0[lVar15 * 2 + 2] = lVar29;
        local_5a0[lVar15 * 2 + 1] = pcVar31;
      }
      alStack_5b0[(long)iVar8 * 2 + 2] = 0;
      local_5a0[(long)iVar8 * 2 + 1] = (char *)0x0;
      memcpy(&local_ad0,local_5a0,0x530);
      memcpy(asStack_1000,local_5a0,0x530);
      lVar29 = FUN_008cca50();
      lVar15 = (long)iVar8 + -1;
      pcVar31 = (char *)alStack_5b0[lVar15 * 2 + 2];
      sVar14 = strlen(pcVar31);
      sVar3 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar3 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar14 == sVar3) &&
         (iVar8 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
         iVar8 == 0)) {
        auStack_ae0[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_acf + lVar15 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_1000 + lVar15 * 0x10) = alStack_5b0[lVar15 * 2 + 2];
      *(undefined1 **)(asStack_1000 + (lVar15 * 2 + 1) * 8) = &LAB_021d58f0;
      FUN_00151fe0(param_1,0,2);
      local_1008[0] = FUN_0014feb0(param_1,0xffffffff);
      local_1010 = param_1;
      if ((*PTR_DAT_0437d4d0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_0437d4d0);
        puVar20 = PTR_DAT_0437d4d8;
        if (iVar8 != 0) {
          FUN_00f09a50(PTR_DAT_0437d4d8);
          FUN_00100250(PTR__string_04379718,puVar20,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437d4d0);
        }
      }
      uVar9 = local_1008[0];
      uVar28 = *(ulong *)(PTR_DAT_0437d4d8 + 8);
      puVar20 = *(undefined **)(PTR_DAT_0437d4d8 + 0x10);
      if ((*PTR_DAT_0437d4d8 & 1) == 0) {
        puVar20 = PTR_DAT_0437d4d8 + 1;
        uVar28 = (ulong)((byte)*PTR_DAT_0437d4d8 >> 1);
      }
      FUN_001514f0(param_1,puVar20,uVar28);
      FUN_00152550(param_1,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_021cf8d0,0);
      FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar17 = asStack_1000;
          pbVar16 = (byte *)FUN_00f0a264();
        }
        else if (lVar29 == 0) {
          psVar17 = &local_ad0;
          pbVar16 = (byte *)FUN_00f083b8();
        }
        else {
          psVar17 = (string *)local_5a0;
          pbVar16 = (byte *)FUN_00f097f4();
        }
        pbVar27 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar27 = pbVar16 + 1;
        }
        FUN_00154450(param_1,pbVar27);
        local_1018 = FUN_0014feb0(param_1,0xffffffff);
        local_1050 = (undefined1 *)CONCAT44(local_1050._4_4_,0x1e);
        local_1020 = param_1;
        FUN_008fe304(auStack_70,param_1,&local_1050,&local_1010,local_1018);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00155a20(param_1,psVar17,2);
        uVar9 = local_1018;
        if (*(long *)(lVar13 + 0x4c8) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar9,"class_check");
        }
        uVar9 = local_1018;
        if (*(long *)(lVar13 + 0x4d0) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar9,"class_cast");
        }
        uVar9 = local_1018;
        uVar34 = *(undefined8 *)(lVar13 + 0x4a8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar22);
        FUN_001516f0(param_1,uVar34,3);
        FUN_00152550(param_1,uVar9,&DAT_03955ac7);
        uVar9 = local_1018;
        uVar34 = *(undefined8 *)(lVar13 + 0x4b0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar22);
        FUN_001516f0(param_1,uVar34,3);
        FUN_00152550(param_1,uVar9,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_1050 = (undefined1 *)CONCAT44(local_1050._4_4_,1);
          FUN_008fe304(auStack_70,param_1,&local_1050,&local_1020,local_1018);
        }
        else {
          local_1050 = &LAB_021d59e0;
          uStack_1048 = 0;
          local_1040 = lVar13;
          lStack_1038 = lVar22;
          FUN_021d5940(param_1,1,&local_1050,local_1018);
          local_1050 = &LAB_021d5cf0;
          uStack_1048 = 0;
          local_1040 = lVar13;
          lStack_1038 = lVar22;
          FUN_021d5940(param_1,2,&local_1050,local_1018);
        }
        FUN_00151fe0(param_1,0,3);
        uVar9 = FUN_0014feb0(param_1,0xffffffff);
        local_1050 = (undefined1 *)CONCAT44(local_1050._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_1,&local_1050,&local_1010,uVar9);
        if (*(undefined1 **)(lVar13 + 0x4a0) != (undefined1 *)0x0) {
          uStack_1048 = 0;
          local_1050 = *(undefined1 **)(lVar13 + 0x4a0);
          local_1040 = lVar13;
          lStack_1038 = lVar22;
          FUN_021d5940(param_1,4,&local_1050,uVar9);
        }
        if (*(char *)(lVar13 + 0x4d8) != '\0') {
          local_1050 = &LAB_021d59e0;
          uStack_1048 = 0;
          local_1040 = lVar13;
          lStack_1038 = lVar22;
          FUN_021d5940(param_1,1,&local_1050,uVar9);
          local_1050 = &LAB_021d5cf0;
          uStack_1048 = 0;
          local_1040 = lVar13;
          lStack_1038 = lVar22;
          FUN_021d5940(param_1,2,&local_1050,uVar9);
        }
        uVar12 = local_1018;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar9);
        }
        FUN_00152ae0(param_1,uVar12);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_1020,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_021be2fc();
      if ((DAT_043dcee8 & 1) == 0) {
        puVar20 = &DAT_043dcee9;
      }
      else {
        puVar20 = DAT_043dcef8;
      }
      FUN_00154450(param_1,puVar20);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_1050._0_4_ = 0x1e;
      FUN_008fe304(&local_1020,param_1,&local_1050,&local_1010,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,local_5a0,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_1050 = (undefined1 *)CONCAT44(local_1050._4_4_,0x1e);
      FUN_008fe304(&local_1020,param_1,&local_1050,&local_1010,uVar12);
      local_1050 = *(undefined1 **)(lVar13 + 0x4a0);
      if (local_1050 != (undefined1 *)0x0) {
        uStack_1048 = 0;
        local_1040 = lVar13;
        lStack_1038 = lVar22;
        FUN_021d5940(param_1,4,&local_1050,uVar12);
      }
      local_1050 = &LAB_021d60b8;
      uStack_1048 = 0;
      local_1030 = 0;
      puStack_1028 = &DAT_03a7d3a8;
      local_1040 = lVar13;
      lStack_1038 = lVar22;
      FUN_021d6000(param_1,1,&local_1050,uVar12);
      local_1050 = &LAB_021d63c8;
      uStack_1048 = 0;
      local_1030 = 0;
      puStack_1028 = &DAT_03a7d3a8;
      local_1040 = lVar13;
      lStack_1038 = lVar22;
      FUN_021d6000(param_1,2,&local_1050,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_1008[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar11 = (int)uVar28;
  if (iVar11 == 1) {
    *(undefined1 *)(lVar13 + 0x58) = 1;
    *(char **)(lVar13 + 0x30) = pcVar2;
    *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
    goto LAB_021d419c;
  }
  if (iVar11 == 2) {
    *(undefined1 *)(lVar13 + 0x58) = 1;
    *(char **)(lVar13 + 0x38) = pcVar2;
    *(ulong *)(lVar13 + 0x4e0) = *(ulong *)(lVar13 + 0x4e0) | 1L << (uVar28 & 0x3f);
    uVar10 = (uint)*puVar1;
    goto joined_r0x021d4128;
  }
  if (iVar11 == 0x13) {
    *(char **)(lVar13 + 0x498) = pcVar2;
    uVar10 = (uint)*puVar1;
    goto joined_r0x021d4128;
  }
  *puVar1 = *puVar1 | 1L << (uVar28 & 0x3f);
  goto LAB_021d418c;
LAB_021d5800:
  if ((pbVar18 == pbVar19) ||
     (uVar28 = (long)pbVar18 - (long)local_1058, uVar28 == 0xffffffffffffffff)) goto LAB_021d5650;
LAB_021d5818:
  while( true ) {
    std::string::erase(0x43dd480,uVar28);
    if (((ulong)_DAT_043dd480 & 1) == 0) {
      local_1058 = &DAT_043dd481;
      pbVar16 = (byte *)((ulong)_DAT_043dd480 >> 1 & 0x7f);
    }
    else {
      pbVar16 = DAT_043dd488;
      local_1058 = DAT_043dd490;
    }
    sVar3 = CONCAT44(_DAT_043dd4ac,ram0x043dd4a8);
    if ((DAT_043dd4a0 & 1) == 0) {
      sVar3 = (ulong)(DAT_043dd4a0 >> 1);
      pbVar27 = (byte *)&DAT_043dd4a1;
    }
    else {
      pbVar27 = DAT_043dd4b0;
    }
    if (sVar3 != 0) break;
    uVar28 = 0;
  }
  if ((long)pbVar16 < (long)sVar3) goto LAB_021d5650;
  pbVar19 = local_1058 + (long)pbVar16;
  bVar5 = *pbVar27;
  pbVar18 = local_1058;
  pbVar25 = pbVar16;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pbVar25 - sVar3) ||
       (pbVar18 = memchr(pbVar18,(uint)bVar5,((long)pbVar25 - sVar3) + 1), pbVar18 == (byte *)0x0))
    goto LAB_021d5650;
    iVar8 = memcmp(pbVar18,pbVar27,sVar3);
    if (iVar8 == 0) break;
    pbVar18 = pbVar18 + 1;
    pbVar25 = pbVar19 + -(long)pbVar18;
    if ((long)pbVar25 < (long)sVar3) goto LAB_021d5650;
  }
  goto LAB_021d5800;
}


