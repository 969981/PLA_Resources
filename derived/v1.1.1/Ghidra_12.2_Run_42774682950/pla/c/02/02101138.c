/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02101138; name: FUN_02101138
 */


/* WARNING: Removing unreachable block (ram,0x0210e04c) */
/* WARNING: Removing unreachable block (ram,0x0210df48) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02101138(long param_1,long param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  char *pcVar15;
  string *psVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte *pbVar26;
  byte *pbVar27;
  code *pcVar28;
  long lVar29;
  undefined1 *puVar30;
  code *pcVar31;
  size_t sVar32;
  code *pcVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  byte *local_1f60;
  undefined1 *local_1f50;
  undefined8 uStack_1f48;
  long local_1f40;
  long lStack_1f38;
  undefined8 local_1f30;
  undefined *puStack_1f28;
  long local_1f20;
  undefined4 local_1f18;
  long local_1f10;
  undefined4 local_1f08 [2];
  string asStack_1f00 [2592];
  undefined8 auStack_14e0 [2];
  string local_14d0;
  undefined1 auStack_14cf [7];
  size_t local_14c8;
  undefined1 *local_14c0;
  long alStack_ab0 [2];
  char *local_aa0;
  code *local_a98;
  byte *local_a90;
  undefined1 auStack_70 [16];
  
  if (((DAT_043da410 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043da410), iVar10 != 0)) {
    local_a90 = (byte *)0x0;
    local_a98 = (code *)0x0;
    local_aa0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04381710 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04381710);
      puVar21 = PTR_DAT_04381718;
      if (iVar10 != 0) {
        FUN_017c7150(PTR_DAT_04381718);
        FUN_00100250(PTR__string_04379718,puVar21,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381710);
      }
    }
    if ((*PTR_DAT_04381718 & 1) == 0) {
      puVar21 = PTR_DAT_04381718 + 1;
    }
    else {
      puVar21 = *(undefined **)(PTR_DAT_04381718 + 0x10);
    }
    pcVar15 = (char *)std::string::append((char *)&local_aa0,(ulong)puVar21);
    psVar16 = (string *)std::string::append(pcVar15);
    std::string::string((string *)&DAT_043da3f8,psVar16);
    pbVar11 = local_a90;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_aa0 & 1) != 0) && (local_a90 != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar23 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
      }
      uVar17 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar17 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar23,pbVar11,0,8);
          goto LAB_0210ca08;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,pbVar11,0,8);
    }
LAB_0210ca08:
    FUN_00100250(PTR__string_04379718,&DAT_043da3f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043da410);
  }
  std::string::string(&local_14d0,(string *)&DAT_043da3f8);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043da3f0);
  sVar32 = (ulong)((byte)local_14d0 >> 1);
  if (((byte)local_14d0 & 1) != 0) {
    sVar32 = local_14c8;
  }
  std::string::append((ulong)&local_14d0,(char)iVar10);
  if (((byte)local_14d0 & 1) == 0) {
    local_14c8 = (size_t)((byte)local_14d0 >> 1);
    puVar30 = auStack_14cf;
  }
  else {
    puVar30 = local_14c0;
  }
  iVar10 = snprintf(puVar30 + (sVar32 - 1),local_14c8,"%d",(ulong)DAT_043da3f0);
  DAT_043da3f0 = DAT_043da3f0 + 1;
  pbVar11 = (byte *)FUN_0210ee84(iVar10);
  if ((*pbVar11 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
    if (((byte)local_14d0 & 1) == 0) goto LAB_0210c830;
LAB_02101224:
    puVar30 = local_14c0;
  }
  else {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
    if (((byte)local_14d0 & 1) != 0) goto LAB_02101224;
LAB_0210c830:
    puVar30 = (undefined1 *)((ulong)&local_14d0 | 1);
  }
  if (((DAT_043da440 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043da440), iVar10 != 0)) {
    DAT_043da438 = 0xc18;
    __cxa_guard_release(&DAT_043da440);
  }
  if (((DAT_043da450 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043da450), iVar10 != 0)) {
    DAT_043da448 = 0xc1f;
    __cxa_guard_release(&DAT_043da450);
  }
  uVar17 = DAT_043da438;
  lVar12 = FUN_00153520(param_1,DAT_043da438);
  if ((uVar17 < ((ulong)(uint)-(int)lVar12 & 7 | 0xc18)) ||
     (puVar22 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar22 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar17 = DAT_043da448;
    lVar12 = FUN_00153520(param_1,DAT_043da448);
    if ((uVar17 < ((ulong)(uint)-(int)lVar12 & 7 | 0xc18)) ||
       (puVar22 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar22 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043da470 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043da470), iVar10 != 0)) {
        if (((DAT_043da4a8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043da4a8), iVar10 != 0))
        {
          DAT_043da478 = 0x16;
          DAT_043da488 = (byte *)0x0;
          DAT_043da479._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043da480 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043da490 = 0x2a;
          _DAT_043da484 = 0;
          DAT_043da4a0._7_1_ = 0;
          DAT_043da4a0._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043da4a0._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043da4a0._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043da4a0._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043da4a0._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043da499 = s__anonymous_namespace__039071f8[8];
          DAT_043da499_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043da499_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043da499_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043da499_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043da49e = s__anonymous_namespace__039071f8._13_2_;
          DAT_043da4a0._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043da491._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043da491._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043da4a0._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043da478,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043da4a8);
        }
        plVar5 = DAT_043f1798;
        lVar12 = tpidr_el0;
        plVar23 = *(long **)(lVar12 + 0x20);
        if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
          *(long **)(lVar12 + 0x20) = DAT_043f1798;
          plVar23 = plVar5;
        }
        puVar18 = (undefined1 *)(**(code **)(*plVar23 + 0x10))(plVar23,0x3170,8);
        _DAT_043da458 = (char *)0x3171;
        DAT_043da460 = (code *)0x3167;
        DAT_043da468 = puVar18;
        memcpy(puVar18,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::CharacterControllerComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130>, const sol::base_list<> &, sol::base_list<gfl::engine::Component>, char const (&)[9], bool (field::CharacterControllerComponent::*)() const, char const (&)[10], void (field::CharacterControllerComponent::*)(bool), char const (&)[42], bool (field::CharacterControllerComponent::*)() const, char const (&)[37], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_character_controller_component_glue.cpp:23:46), char const (&)[45], bool (field::CharacterControllerComponent::*)() const, char const (&)[42], bool (field::CharacterControllerComponent::*)() const, char const (&)[37], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_character_controller_component_glue.cpp:26:46), char const (&)[41], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_character_controller_component_glue.cpp:27:50), char const (&)[46], bool (field::CharacterControllerComponent::*)() const, char const (&)[12], void (field::CharacterControllerComponent::*)(const gfl::math::Vector3 &), char const (&)[18], void (field::CharacterControllerComponent::*)(const gfl::math::Quaternion &), char const (&)[5], void (field::CharacterControllerComponent::*)(gfl::math::Vector3, float..." /* TRUNCATED STRING LITERAL */
               ,0x3167);
        puVar18[0x3167] = 0;
        std::string::find('X',0x5b);
        uVar19 = std::string::find('X',0x3d);
        uVar17 = std::string::rfind('X',0x5d);
        if (uVar17 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043da458 & 1) == 0) {
            uVar17 = (ulong)(DAT_043da458 >> 1);
          }
          else {
            uVar17 = (ulong)DAT_043da460;
          }
          uVar24 = 0;
          if (uVar19 != 0xffffffffffffffff) {
            uVar24 = uVar19;
          }
          uVar19 = uVar17;
        }
        else {
          uVar24 = 0;
          if (uVar19 != 0xffffffffffffffff) {
            uVar24 = uVar19;
          }
          if (((ulong)_DAT_043da458 & 1) == 0) {
            uVar19 = (ulong)(DAT_043da458 >> 1);
          }
          else {
            uVar19 = (ulong)DAT_043da460;
          }
        }
        if (uVar24 < uVar19 - 1) {
          uVar24 = uVar24 + 1;
        }
        std::string::string((string *)&local_aa0,(string *)&DAT_043da458,uVar24,uVar17 - uVar24,
                            (allocator *)&DAT_043da458);
        if (((ulong)_DAT_043da458 & 1) != 0) {
          *DAT_043da468 = 0;
          plVar5 = DAT_043f1798;
          puVar18 = DAT_043da468;
          DAT_043da460 = (code *)0x0;
          if ((((ulong)_DAT_043da458 & 1) != 0) && (DAT_043da468 != (undefined1 *)0x0)) {
            plVar23 = *(long **)(lVar12 + 0x20);
            if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
              *(long **)(lVar12 + 0x20) = DAT_043f1798;
              plVar23 = plVar5;
            }
            uVar17 = (**(code **)(*plVar23 + 0xc0))(plVar23);
            if ((uVar17 & 1) != 0) {
              if (*(char *)(lVar12 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar12 + 0x38d488) = 1;
                *(undefined8 *)(lVar12 + 0x38d478) = 0;
                *(undefined8 *)(lVar12 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar12 + 0x38d480)) {
                FUN_02bcc824(plVar23,puVar18,0,8);
                goto LAB_0210d538;
              }
            }
            (**(code **)(*plVar23 + 0x18))(plVar23,puVar18,0,8);
          }
        }
LAB_0210d538:
        uVar34 = (uint)local_aa0 & 0xff;
        uVar35 = (uint)local_aa0 & 1;
        pcVar33 = (code *)((ulong)local_aa0 >> 1 & 0x7f);
        DAT_043da468 = local_a90;
        _DAT_043da458 = local_aa0;
        DAT_043da460 = local_a98;
        if (((ulong)local_aa0 & 1) == 0) {
          pbVar26 = &DAT_043da459;
          pcVar28 = pcVar33;
          if ((code *)0xd < pcVar33) goto LAB_0210d570;
        }
        else {
          pcVar28 = local_a98;
          pbVar26 = local_a90;
          if (0xd < (long)local_a98) {
LAB_0210d570:
            pbVar27 = pbVar26 + (long)pcVar28;
            lVar12 = 1;
            while (pcVar28 != (code *)0xd) {
              pcVar28 = pcVar28 + -1;
              if (pbVar26[(long)pcVar28] == 0x6b) {
                lVar29 = 0;
                do {
                  if (lVar29 == -0xd) {
                    if ((lVar12 != -0xd) &&
                       (pbVar27 + (~(ulong)pbVar26 - 0xd) != (byte *)0xffffffffffffffff)) {
                      std::string::erase(0x43da458,(ulong)(pbVar27 + (~(ulong)pbVar26 - 0xd) + -2));
                      uVar34 = (uint)DAT_043da458;
                      uVar35 = DAT_043da458 & 1;
                      pcVar33 = (code *)(ulong)(DAT_043da458 >> 1);
                    }
                    goto LAB_0210d61c;
                  }
                  lVar36 = lVar29 + -2;
                  lVar14 = lVar29 + 0xc;
                  lVar29 = lVar29 + -1;
                } while (pbVar27[lVar36] == "seperator_mark"[lVar14]);
              }
              pbVar27 = pbVar27 + -1;
              lVar12 = lVar12 + 1;
            }
          }
        }
LAB_0210d61c:
        pcVar31 = DAT_043da460;
        pcVar28 = pcVar33;
        if (uVar35 != 0) {
          pcVar28 = DAT_043da460;
        }
        if (pcVar28 != (code *)0x0) {
          pbVar26 = &DAT_043da459;
          if (uVar35 != 0) {
            pbVar26 = DAT_043da468;
          }
          iVar10 = isblank((uint)*pbVar26);
          if (iVar10 == 0) {
            uVar35 = uVar34 & 1;
            pcVar33 = (code *)(ulong)(uVar34 >> 1);
          }
          else {
            do {
              std::string::erase(0x43da458,0);
              pcVar31 = DAT_043da460;
              uVar34 = (uint)DAT_043da458;
              pcVar33 = (code *)(ulong)(DAT_043da458 >> 1);
              uVar35 = DAT_043da458 & 1;
              pcVar28 = pcVar33;
              if (((ulong)_DAT_043da458 & 1) != 0) {
                pcVar28 = DAT_043da460;
              }
              if (pcVar28 == (code *)0x0) break;
              pbVar26 = &DAT_043da459;
              if (((ulong)_DAT_043da458 & 1) != 0) {
                pbVar26 = DAT_043da468;
              }
              iVar10 = isblank((uint)*pbVar26);
            } while (iVar10 != 0);
          }
        }
        bVar6 = uVar35 == 0;
        pcVar28 = pcVar33;
        if (!bVar6) {
          pcVar28 = pcVar31;
        }
        if (pcVar28 != (code *)0x0) {
          do {
            pcVar33 = (code *)(ulong)(uVar34 >> 1);
            pcVar28 = pcVar33;
            pbVar26 = &DAT_043da459;
            if (!bVar6) {
              pcVar28 = pcVar31;
              pbVar26 = DAT_043da468;
            }
            iVar10 = isblank((uint)pbVar26[(long)(pcVar28 + -1)]);
            if (iVar10 == 0) break;
            FUN_020ece68(&DAT_043da458);
            uVar34 = (uint)DAT_043da458;
            bVar6 = ((ulong)_DAT_043da458 & 1) == 0;
            pcVar33 = (code *)(ulong)(DAT_043da458 >> 1);
            pcVar28 = pcVar33;
            if (!bVar6) {
              pcVar28 = DAT_043da460;
            }
            pcVar31 = DAT_043da460;
          } while (pcVar28 != (code *)0x0);
          uVar35 = uVar34 & 1;
        }
        if (uVar35 != 0) {
          pcVar33 = pcVar31;
        }
        local_1f60 = &DAT_043da459;
        if (uVar35 != 0) {
          local_1f60 = DAT_043da468;
        }
        sVar32 = CONCAT44(_DAT_043da484,ram0x043da480);
        pbVar26 = DAT_043da488;
        if ((DAT_043da478 & 1) == 0) {
          sVar32 = (size_t)(DAT_043da478 >> 1);
          pbVar26 = (byte *)&DAT_043da479;
        }
        if (sVar32 == 0) {
          uVar17 = 0;
          goto LAB_0210df7c;
        }
        if ((long)sVar32 <= (long)pcVar33) {
          pbVar20 = local_1f60 + (long)pcVar33;
          bVar4 = *pbVar26;
          pbVar27 = local_1f60;
          pcVar28 = pcVar33;
          do {
            if ((0xfffffffffffffffe < (long)pcVar28 - sVar32) ||
               (pbVar27 = memchr(pbVar27,(uint)bVar4,((long)pcVar28 - sVar32) + 1),
               pbVar27 == (byte *)0x0)) break;
            iVar10 = memcmp(pbVar27,pbVar26,sVar32);
            if (iVar10 == 0) goto LAB_0210df64;
            pbVar27 = pbVar27 + 1;
            pcVar28 = (code *)(pbVar20 + -(long)pbVar27);
          } while ((long)sVar32 <= (long)pcVar28);
        }
LAB_0210ddb4:
        sVar32 = CONCAT26(_DAT_043da49e,CONCAT51(_DAT_043da499,DAT_043da491._7_1_));
        pbVar26 = (byte *)CONCAT17(DAT_043da4a0._7_1_,
                                   CONCAT16(DAT_043da4a0._6_1_,
                                            CONCAT51(DAT_043da4a0._1_5_,(char)DAT_043da4a0)));
        if ((DAT_043da490 & 1) == 0) {
          pbVar26 = (byte *)&DAT_043da491;
          sVar32 = (ulong)(DAT_043da490 >> 1);
        }
        if (sVar32 == 0) {
          uVar17 = 0;
LAB_0210de34:
          do {
            while( true ) {
              std::string::erase(0x43da458,uVar17);
              bVar6 = ((ulong)_DAT_043da458 & 1) != 0;
              pcVar33 = (code *)((ulong)_DAT_043da458 >> 1 & 0x7f);
              if (bVar6) {
                pcVar33 = DAT_043da460;
              }
              sVar32 = CONCAT26(_DAT_043da49e,CONCAT51(_DAT_043da499,DAT_043da491._7_1_));
              pbVar27 = (byte *)CONCAT17(DAT_043da4a0._7_1_,
                                         CONCAT16(DAT_043da4a0._6_1_,
                                                  CONCAT51(DAT_043da4a0._1_5_,(char)DAT_043da4a0)));
              pbVar26 = DAT_043da468;
              if (!bVar6) {
                pbVar26 = &DAT_043da459;
              }
              if ((DAT_043da490 & 1) == 0) {
                pbVar27 = (byte *)&DAT_043da491;
                sVar32 = (ulong)(DAT_043da490 >> 1);
              }
              if (sVar32 != 0) break;
              uVar17 = 0;
            }
            if ((long)pcVar33 < (long)sVar32) goto LAB_0210df04;
            bVar4 = *pbVar27;
            pbVar2 = pbVar26 + (long)pcVar33;
            pbVar20 = pbVar26;
            while( true ) {
              if ((0xfffffffffffffffe < (long)pcVar33 - sVar32) ||
                 (pbVar20 = memchr(pbVar20,(uint)bVar4,((long)pcVar33 - sVar32) + 1),
                 pbVar20 == (byte *)0x0)) goto LAB_0210df04;
              iVar10 = memcmp(pbVar20,pbVar27,sVar32);
              if (iVar10 == 0) break;
              pbVar20 = pbVar20 + 1;
              pcVar33 = (code *)(pbVar2 + -(long)pbVar20);
              if ((long)pcVar33 < (long)sVar32) goto LAB_0210df04;
            }
            if ((pbVar20 == pbVar2) ||
               (uVar17 = (long)pbVar20 - (long)pbVar26, uVar17 == 0xffffffffffffffff))
            goto LAB_0210df04;
          } while( true );
        }
        if ((long)sVar32 <= (long)pcVar33) {
          pbVar20 = local_1f60 + (long)pcVar33;
          bVar4 = *pbVar26;
          pbVar27 = local_1f60;
          do {
            if ((0xfffffffffffffffe < (long)pcVar33 - sVar32) ||
               (pbVar27 = memchr(pbVar27,(uint)bVar4,((long)pcVar33 - sVar32) + 1),
               pbVar27 == (byte *)0x0)) break;
            iVar10 = memcmp(pbVar27,pbVar26,sVar32);
            if (iVar10 == 0) {
              if ((pbVar27 != pbVar20) &&
                 (uVar17 = (long)pbVar27 - (long)local_1f60, uVar17 != 0xffffffffffffffff))
              goto LAB_0210de34;
              break;
            }
            pbVar27 = pbVar27 + 1;
            pcVar33 = (code *)(pbVar20 + -(long)pbVar27);
          } while ((long)sVar32 <= (long)pcVar33);
        }
LAB_0210df04:
        FUN_00100250(PTR__string_04379718,&DAT_043da458,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043da470);
      }
      pbVar26 = DAT_043da468;
      if (((ulong)_DAT_043da458 & 1) == 0) {
        pbVar26 = &DAT_043da459;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar26);
      puVar22 = (undefined8 *)0x0;
    }
  }
  uVar25 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar22[1] = uVar25;
  puVar22[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  puVar22[3] = lVar12;
  lVar29 = *(long *)(param_2 + 0x20);
  puVar22[4] = lVar29;
  *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar29 != 0) {
    uVar19 = puVar22[2];
    uVar17 = *(ulong *)(lVar12 + 8);
    if ((uVar19 & uVar19 - 1) == 0) {
      uVar17 = uVar19 - 1 & uVar17;
    }
    else if (uVar19 <= uVar17) {
      uVar24 = 0;
      if (uVar19 != 0) {
        uVar24 = uVar17 / uVar19;
      }
      uVar17 = uVar17 - uVar24 * uVar19;
    }
    *(undefined8 **)(puVar22[1] + uVar17 * 8) = puVar22 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar25 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  puVar22[10] = 0;
  puVar22[8] = 0;
  puVar22[9] = 0;
  puVar22[6] = uVar25;
  puVar22[7] = uVar3;
  puVar22[8] = *(undefined8 *)(param_2 + 0x40);
  puVar22[9] = *(undefined8 *)(param_2 + 0x48);
  puVar22[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar22 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar22 = &PTR_LAB_0425b448;
  memcpy(puVar22 + 0xc,(void *)(param_2 + 0x60),3000);
  iVar10 = FUN_00154450(param_1,puVar30);
  if (iVar10 != 0) {
    FUN_001516f0(param_1,FUN_0210f0e0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar7 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar7);
  }
  FUN_001522a0(param_1,pbVar11);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,pbVar11);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_14d0 & 1) != 0) && (local_14c0 != (undefined1 *)0x0)) {
    lVar29 = tpidr_el0;
    plVar23 = *(long **)(lVar29 + 0x20);
    if (*(long **)(lVar29 + 0x20) == (long *)0x0) {
      *(long **)(lVar29 + 0x20) = DAT_043f1798;
      plVar23 = plVar5;
    }
    uVar17 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar29 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar29 + 0x38d488) = 1;
        *(undefined8 *)(lVar29 + 0x38d478) = 0;
        *(undefined8 *)(lVar29 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar29 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar29 + 0x38d480)) {
        FUN_02bcc824(plVar23,local_14c0,0,8);
        goto LAB_02101540;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_14c0,0,8);
  }
LAB_02101540:
  memset(&local_aa0,0,0xa30);
  puVar21 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *puVar21 = 1;
  pcVar15 = *(char **)(lVar12 + 0x60);
  *(undefined1 **)(lVar12 + 0xc00) = &LAB_0210f270;
  *(undefined1 **)(lVar12 + 0xbf8) = &LAB_0210f114;
  *(undefined1 **)(lVar12 + 0xbe8) = &LAB_0210f460;
  *(undefined1 **)(lVar12 + 0xbf0) = &LAB_0210f590;
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar29 = lVar12 + 8;
  pcVar33 = (code *)&LAB_020ed0c0;
  if (uVar34 != 0) {
    pcVar33 = FUN_020ecee8;
  }
  lVar36 = 0;
  uVar17 = 0;
  puVar1 = (ulong *)(lVar12 + 0xc10);
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar19 = 0;
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02101710;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      uVar19 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02101710;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  uVar19 = 1;
  local_aa0 = pcVar15;
  local_a98 = pcVar33;
LAB_02101710:
  pcVar15 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ed1ec;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ed160;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02101864;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02101864;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02101864:
  pcVar15 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ed318;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ed298;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021019b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021019b8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_021019b8:
  pcVar15 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = FUN_020ed7f0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ed350;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02101b0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02101b0c;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02101b0c:
  pcVar15 = *(char **)(lVar12 + 0xb0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ed948;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ed8c8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02101c60;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02101c60;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02101c60:
  pcVar15 = *(char **)(lVar12 + 200);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020eda00;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ed980;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02101db4;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02101db4;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02101db4:
  pcVar15 = *(char **)(lVar12 + 0xe0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f108c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020eda38;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02101f08;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02101f08;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02101f08:
  pcVar15 = *(char **)(lVar12 + 0xe8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f4900;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f1164;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210205c;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210205c;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_0210205c:
  pcVar15 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f49c0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f4940;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021021b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021021b0;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_021021b0:
  pcVar15 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f4b28;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f49f8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102304;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102304;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102304:
  pcVar15 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f4df0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f4c48;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102458;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102458;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102458:
  pcVar15 = *(char **)(lVar12 + 0x138);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f4fac;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f4e6c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021025ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021025ac;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_021025ac:
  pcVar15 = *(char **)(lVar12 + 0x150);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5084;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5028;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102700;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102700;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102700:
  pcVar15 = *(char **)(lVar12 + 0x168);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f513c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f50bc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102854;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102854;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102854:
  pcVar15 = *(char **)(lVar12 + 0x180);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f51d0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5174;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021029a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021029a8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_021029a8:
  pcVar15 = *(char **)(lVar12 + 0x198);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5278;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5208;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102afc;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102afc;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102afc:
  pcVar15 = *(char **)(lVar12 + 0x1b0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f53a0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5330;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102c50;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102c50;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102c50:
  pcVar15 = *(char **)(lVar12 + 0x1c8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5448;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f53d8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102da4;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102da4;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102da4:
  pcVar15 = *(char **)(lVar12 + 0x1e0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f54dc;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5480;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02102ef8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02102ef8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02102ef8:
  pcVar15 = *(char **)(lVar12 + 0x1f8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f564c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5514;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210304c;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210304c;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_0210304c:
  pcVar15 = *(char **)(lVar12 + 0x210);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f574c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f56c8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021031a0;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021031a0;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_021031a0:
  pcVar15 = *(char **)(lVar12 + 0x228);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5814;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5784;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021032f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021032f4;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_021032f4:
  pcVar15 = *(char **)(lVar12 + 0x240);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f58d0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f584c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02103448;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02103448;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02103448:
  pcVar15 = *(char **)(lVar12 + 600);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f597c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5908;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210359c;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210359c;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_0210359c:
  pcVar15 = *(char **)(lVar12 + 0x270);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5a10;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f59b4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021036f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021036f0;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_021036f0:
  pcVar15 = *(char **)(lVar12 + 0x288);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5b90;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5a48;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02103844;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02103844;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02103844:
  pcVar15 = *(char **)(lVar12 + 0x2a0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5c90;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5c0c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02103998;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02103998;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02103998:
  pcVar15 = *(char **)(lVar12 + 0x2b8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5d24;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5cc8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02103aec;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02103aec;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02103aec:
  pcVar15 = *(char **)(lVar12 + 0x2d0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5dd0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5d5c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02103c40;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02103c40;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02103c40:
  pcVar15 = *(char **)(lVar12 + 0x2e8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5e8c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5e08;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02103d94;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02103d94;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02103d94:
  pcVar15 = *(char **)(lVar12 + 0x300);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5f48;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5ec4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar10 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar10 == 0)) {
      iVar10 = (int)uVar17;
      if (iVar10 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02103ee8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02103ee8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
  uVar19 = (ulong)((int)uVar19 + 1);
LAB_02103ee8:
  iVar10 = (int)uVar19;
  pcVar15 = *(char **)(lVar12 + 0x318);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f5ff4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f5f80;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210403c;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210403c;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  iVar10 = iVar10 + 1;
  alStack_ab0[uVar19 * 2 + 2] = (long)pcVar15;
  (&local_a98)[uVar19 * 2] = pcVar33;
LAB_0210403c:
  pcVar15 = *(char **)(lVar12 + 0x330);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f60b0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f602c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104190;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104190;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104190:
  pcVar15 = *(char **)(lVar12 + 0x348);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f615c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f60e8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021042e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021042e4;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021042e4:
  pcVar15 = *(char **)(lVar12 + 0x360);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6218;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6194;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104438;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104438;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104438:
  pcVar15 = *(char **)(lVar12 + 0x378);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f62c4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6250;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210458c;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210458c;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210458c:
  pcVar15 = *(char **)(lVar12 + 0x390);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6380;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f62fc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021046e0;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021046e0;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021046e0:
  pcVar15 = *(char **)(lVar12 + 0x3a8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f648c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f63b8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104834;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104834;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104834:
  pcVar15 = *(char **)(lVar12 + 0x3c0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6594;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6508;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104988;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104988;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104988:
  pcVar15 = *(char **)(lVar12 + 0x3d8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f66c8;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f663c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104adc;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104adc;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104adc:
  pcVar15 = *(char **)(lVar12 + 0x3f0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6784;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6700;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104c30;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104c30;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104c30:
  pcVar15 = *(char **)(lVar12 + 0x408);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6840;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f67bc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104d84;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104d84;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104d84:
  pcVar15 = *(char **)(lVar12 + 0x420);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6964;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f68e0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02104ed8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02104ed8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02104ed8:
  pcVar15 = *(char **)(lVar12 + 0x438);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6a20;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f699c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105028;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105028;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105028:
  pcVar15 = *(char **)(lVar12 + 0x450);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6adc;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6a58;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105178;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105178;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105178:
  pcVar15 = *(char **)(lVar12 + 0x468);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6cc0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6b14;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021052c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021052c8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021052c8:
  pcVar15 = *(char **)(lVar12 + 0x480);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f6e78;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6d48;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105418;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105418;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105418:
  pcVar15 = *(char **)(lVar12 + 0x498);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f710c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f6ef4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105568;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105568;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105568:
  pcVar15 = *(char **)(lVar12 + 0x4b0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f7348;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f7188;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021056b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021056b8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021056b8:
  pcVar15 = *(char **)(lVar12 + 0x4c8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f75d4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f73c4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105808;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105808;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105808:
  pcVar15 = *(char **)(lVar12 + 0x4e0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f78b4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f7674;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105958;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105958;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105958:
  pcVar15 = *(char **)(lVar12 + 0x4f8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f79a4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f7930;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105aa8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105aa8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105aa8:
  pcVar15 = *(char **)(lVar12 + 0x510);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f7a50;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f79dc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105bf8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105bf8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105bf8:
  pcVar15 = *(char **)(lVar12 + 0x528);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f7b8c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f7a88;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105d48;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105d48;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105d48:
  pcVar15 = *(char **)(lVar12 + 0x530);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = FUN_020f8060;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f7bcc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105e98;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105e98;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105e98:
  pcVar15 = *(char **)(lVar12 + 0x538);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = FUN_020f87b0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8134;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02105fe8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02105fe8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02105fe8:
  pcVar15 = *(char **)(lVar12 + 0x540);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8910;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8844;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106138;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106138;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106138:
  pcVar15 = *(char **)(lVar12 + 0x558);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8a14;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f89dc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106288;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106288;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106288:
  pcVar15 = *(char **)(lVar12 + 0x570);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8ad0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8a4c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021063d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021063d8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021063d8:
  pcVar15 = *(char **)(lVar12 + 0x588);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8b94;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8b08;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106528;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106528;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106528:
  pcVar15 = *(char **)(lVar12 + 0x5a0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8c04;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8bcc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106678;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106678;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106678:
  pcVar15 = *(char **)(lVar12 + 0x5b8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8c74;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8c3c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021067c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021067c8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021067c8:
  pcVar15 = *(char **)(lVar12 + 0x5d0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8ce4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8cac;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106918;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106918;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106918:
  pcVar15 = *(char **)(lVar12 + 0x5e8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8d54;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8d1c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106a68;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106a68;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106a68:
  pcVar15 = *(char **)(lVar12 + 0x600);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8dc4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8d8c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106bb8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106bb8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106bb8:
  pcVar15 = *(char **)(lVar12 + 0x618);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8e34;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8dfc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106d08;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106d08;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106d08:
  pcVar15 = *(char **)(lVar12 + 0x630);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f8f6c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8e6c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106e58;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106e58;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106e58:
  pcVar15 = *(char **)(lVar12 + 0x648);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f9020;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f8fe8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02106fa8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02106fa8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02106fa8:
  pcVar15 = *(char **)(lVar12 + 0x660);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f9090;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f9058;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021070f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021070f8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021070f8:
  pcVar15 = *(char **)(lVar12 + 0x678);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020f9100;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f90c8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107248;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107248;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107248:
  pcVar15 = *(char **)(lVar12 + 0x690);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fc91c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020f9138;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107398;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107398;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107398:
  pcVar15 = *(char **)(lVar12 + 0x698);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fcdc4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fca9c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021074e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021074e8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021074e8:
  pcVar15 = *(char **)(lVar12 + 0x6b0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fcec4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fce40;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107638;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107638;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107638:
  pcVar15 = *(char **)(lVar12 + 0x6c8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fcf80;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fcefc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107788;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107788;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107788:
  pcVar15 = *(char **)(lVar12 + 0x6e0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd048;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fcfb8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021078d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021078d8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021078d8:
  pcVar15 = *(char **)(lVar12 + 0x6f8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd104;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd080;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107a28;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107a28;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107a28:
  pcVar15 = *(char **)(lVar12 + 0x710);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd1c0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd13c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107b78;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107b78;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107b78:
  pcVar15 = *(char **)(lVar12 + 0x728);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd27c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd1f8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107cc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107cc8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107cc8:
  pcVar15 = *(char **)(lVar12 + 0x740);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd338;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd2b4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107e18;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107e18;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107e18:
  pcVar15 = *(char **)(lVar12 + 0x758);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd400;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd370;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02107f68;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02107f68;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02107f68:
  pcVar15 = *(char **)(lVar12 + 0x770);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd4bc;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd438;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021080b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021080b8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021080b8:
  pcVar15 = *(char **)(lVar12 + 0x788);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd578;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd4f4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108208;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108208;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108208:
  pcVar15 = *(char **)(lVar12 + 0x7a0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd640;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd5b0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108358;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108358;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108358:
  pcVar15 = *(char **)(lVar12 + 0x7b8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd6fc;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd678;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021084a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021084a8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021084a8:
  pcVar15 = *(char **)(lVar12 + 2000);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd7a8;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd734;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021085f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021085f8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021085f8:
  pcVar15 = *(char **)(lVar12 + 0x7e8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd854;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd7e0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108748;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108748;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108748:
  pcVar15 = *(char **)(lVar12 + 0x800);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fd910;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd88c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108898;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108898;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108898:
  pcVar15 = *(char **)(lVar12 + 0x818);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fda8c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fd9b0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021089e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021089e8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021089e8:
  pcVar15 = *(char **)(lVar12 + 0x830);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fdb94;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fdb08;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108b38;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108b38;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108b38:
  pcVar15 = *(char **)(lVar12 + 0x848);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fdc50;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fdbcc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108c88;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108c88;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108c88:
  pcVar15 = *(char **)(lVar12 + 0x860);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fddc8;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fdc88;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108dd8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108dd8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108dd8:
  pcVar15 = *(char **)(lVar12 + 0x878);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fdf24;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fde44;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02108f28;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02108f28;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02108f28:
  pcVar15 = *(char **)(lVar12 + 0x890);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe07c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fdfac;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109078;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109078;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109078:
  pcVar15 = *(char **)(lVar12 + 0x8a8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe220;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe0f8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021091c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021091c8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021091c8:
  pcVar15 = *(char **)(lVar12 + 0x8c0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe53c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe29c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109318;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109318;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109318:
  pcVar15 = *(char **)(lVar12 + 0x8c8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe654;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe5d0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109468;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109468;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109468:
  pcVar15 = *(char **)(lVar12 + 0x8e0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe718;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe68c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021095b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021095b8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021095b8:
  pcVar15 = *(char **)(lVar12 + 0x8f8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe7d4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe750;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109708;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109708;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109708:
  pcVar15 = *(char **)(lVar12 + 0x910);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe898;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe80c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109858;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109858;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109858:
  pcVar15 = *(char **)(lVar12 + 0x928);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fe954;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe8d0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_021099a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_021099a8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_021099a8:
  pcVar15 = *(char **)(lVar12 + 0x940);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fea18;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fe98c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109af8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109af8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109af8:
  pcVar15 = *(char **)(lVar12 + 0x958);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fead4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fea50;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109c48;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109c48;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109c48:
  pcVar15 = *(char **)(lVar12 + 0x970);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020feb9c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020feb0c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109d98;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109d98;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109d98:
  pcVar15 = *(char **)(lVar12 + 0x988);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fec58;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020febd4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_02109ee8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_02109ee8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_02109ee8:
  pcVar15 = *(char **)(lVar12 + 0x9a0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fed20;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fec90;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a038;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a038;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a038:
  pcVar15 = *(char **)(lVar12 + 0x9b8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020feddc;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fed58;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a188;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a188;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a188:
  pcVar15 = *(char **)(lVar12 + 0x9d0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fee70;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fee14;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a2d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a2d8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a2d8:
  pcVar15 = *(char **)(lVar12 + 0x9e8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020feee0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020feea8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a428;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a428;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a428:
  pcVar15 = *(char **)(lVar12 + 0xa00);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020fefa8;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fef18;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a578;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a578;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a578:
  pcVar15 = *(char **)(lVar12 + 0xa18);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff13c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020fefe0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a6c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a6c8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a6c8:
  pcVar15 = *(char **)(lVar12 + 0xa30);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff31c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff1b8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a818;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a818;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a818:
  pcVar15 = *(char **)(lVar12 + 0xa48);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff41c;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff398;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210a968;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210a968;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210a968:
  pcVar15 = *(char **)(lVar12 + 0xa60);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff4c8;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff454;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210aab8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210aab8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210aab8:
  pcVar15 = *(char **)(lVar12 + 0xa78);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff584;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff500;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210ac08;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210ac08;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210ac08:
  pcVar15 = *(char **)(lVar12 + 0xa90);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff640;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff5bc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210ad58;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210ad58;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210ad58:
  pcVar15 = *(char **)(lVar12 + 0xaa8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff6fc;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff678;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210aea8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210aea8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210aea8:
  pcVar15 = *(char **)(lVar12 + 0xac0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ff858;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff734;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210aff8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210aff8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210aff8:
  pcVar15 = *(char **)(lVar12 + 0xad8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ffa00;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ff8d4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210b148;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210b148;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210b148:
  pcVar15 = *(char **)(lVar12 + 0xaf0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_020ffb74;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ffa7c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210b298;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210b298;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210b298:
  pcVar15 = *(char **)(lVar12 + 0xb08);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = FUN_02100250;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_020ffbf0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210b3e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210b3e8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210b3e8:
  pcVar15 = *(char **)(lVar12 + 0xb10);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100830;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_021002e4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210b538;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210b538;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210b538:
  pcVar15 = *(char **)(lVar12 + 0xb18);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100a14;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100874;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210b688;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210b688;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210b688:
  pcVar15 = *(char **)(lVar12 + 0xb20);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100c38;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100bb4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210b7d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210b7d8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210b7d8:
  pcVar15 = *(char **)(lVar12 + 0xb38);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100cf4;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100c70;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210b928;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210b928;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210b928:
  pcVar15 = *(char **)(lVar12 + 0xb50);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100da0;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100d2c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210ba78;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210ba78;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210ba78:
  pcVar15 = *(char **)(lVar12 + 0xb68);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100e64;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100dd8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210bbc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210bbc8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210bbc8:
  pcVar15 = *(char **)(lVar12 + 0xb80);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100f20;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100e9c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210bd18;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210bd18;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210bd18:
  pcVar15 = *(char **)(lVar12 + 0xb98);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02100f94;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100f58;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210be68;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210be68;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210be68:
  pcVar15 = *(char **)(lVar12 + 0xba8);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_02101060;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02100fd0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) {
      iVar8 = (int)uVar17;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar33;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xbc8) = pcVar33;
            goto LAB_0210bfb8;
          }
          *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar33;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
      goto LAB_0210bfb8;
    }
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
  } while (uVar17 != 0x20);
  lVar36 = (long)iVar10;
  iVar10 = iVar10 + 1;
  alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
  (&local_a98)[lVar36 * 2] = pcVar33;
LAB_0210bfb8:
  pcVar15 = *(char **)(lVar12 + 0xbc0);
  sVar13 = strlen(pcVar15);
  sVar32 = 10;
  if (sVar13 < 0xb) {
    sVar32 = sVar13;
  }
  if (sVar32 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = memcmp("__newindex",pcVar15,sVar32);
  }
  bVar6 = uVar34 == 0;
  if (uVar34 == 0) {
    uVar34 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar34 = (uint)(sVar13 < 10);
  }
  lVar36 = 0;
  uVar17 = 0;
  pcVar33 = (code *)&LAB_021010e8;
  if (uVar34 != 0) {
    pcVar33 = (code *)&LAB_02101098;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar36);
    sVar13 = strlen(pcVar15);
    sVar32 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar32 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar32) &&
       (iVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
       iVar8 == 0)) break;
    uVar17 = uVar17 + 1;
    lVar36 = lVar36 + 0x18;
    if (uVar17 == 0x20) {
LAB_0210c104:
      lVar36 = (long)iVar10;
      iVar10 = iVar10 + 1;
      alStack_ab0[lVar36 * 2 + 2] = (long)pcVar15;
      (&local_a98)[lVar36 * 2] = pcVar33;
      uVar34 = (uint)*puVar1;
joined_r0x0210c0e8:
      if ((uVar34 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar34 = (uint)*puVar1;
      }
      if ((uVar34 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar34 = (uint)*puVar1;
      }
      if ((uVar34 >> 0x10 & 1) == 0) {
        lVar36 = FUN_008cca50();
        if ((*(byte *)(lVar36 + 0x180) & 1) == 0) {
          lVar36 = lVar36 + 0x181;
        }
        else {
          lVar36 = *(long *)(lVar36 + 400);
        }
        lVar14 = (long)iVar10;
        iVar10 = iVar10 + 1;
        alStack_ab0[lVar14 * 2 + 2] = lVar36;
        (&local_a98)[lVar14 * 2] = (code *)PTR_LAB_043816e8;
        uVar34 = (uint)*puVar1;
      }
      if ((uVar34 >> 0x1b & 1) == 0) {
        lVar36 = FUN_008cca50();
        if ((*(byte *)(lVar36 + 0x288) & 1) == 0) {
          lVar36 = lVar36 + 0x289;
        }
        else {
          lVar36 = *(long *)(lVar36 + 0x298);
        }
        lVar14 = (long)iVar10;
        iVar10 = iVar10 + 1;
        alStack_ab0[lVar14 * 2 + 2] = lVar36;
        (&local_a98)[lVar14 * 2] = (code *)PTR_LAB_043816f0;
      }
      if (*(long *)(lVar12 + 0xbc8) != 0) {
        lVar36 = FUN_008cca50();
        if ((*(byte *)(lVar36 + 0x1c8) & 1) == 0) {
          lVar36 = lVar36 + 0x1c9;
        }
        else {
          lVar36 = *(long *)(lVar36 + 0x1d8);
        }
        lVar14 = (long)iVar10;
        iVar10 = iVar10 + 1;
        pcVar33 = *(code **)(lVar12 + 0xbc8);
        alStack_ab0[lVar14 * 2 + 2] = lVar36;
        (&local_a98)[lVar14 * 2] = pcVar33;
      }
      alStack_ab0[(long)iVar10 * 2 + 2] = 0;
      (&local_a98)[(long)iVar10 * 2] = (code *)0x0;
      memcpy(&local_14d0,&local_aa0,0xa30);
      memcpy(asStack_1f00,&local_aa0,0xa30);
      lVar36 = FUN_008cca50();
      lVar14 = (long)iVar10 + -1;
      pcVar15 = (char *)alStack_ab0[lVar14 * 2 + 2];
      sVar13 = strlen(pcVar15);
      sVar32 = (ulong)(*(byte *)(lVar36 + 0x1c8) >> 1);
      if ((*(byte *)(lVar36 + 0x1c8) & 1) != 0) {
        sVar32 = *(size_t *)(lVar36 + 0x1d0);
      }
      if ((sVar13 == sVar32) &&
         (iVar10 = std::string::compare(lVar36 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
         iVar10 == 0)) {
        auStack_14e0[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_14cf + lVar14 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_1f00 + lVar14 * 0x10) = alStack_ab0[lVar14 * 2 + 2];
      *(code **)(asStack_1f00 + (lVar14 * 2 + 1) * 8) = FUN_0210e050;
      FUN_00151fe0(param_1,0,2);
      local_1f08[0] = FUN_0014feb0(param_1,0xffffffff);
      local_1f10 = param_1;
      if ((*PTR_DAT_04381710 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04381710);
        puVar21 = PTR_DAT_04381718;
        if (iVar10 != 0) {
          FUN_017c7150(PTR_DAT_04381718);
          FUN_00100250(PTR__string_04379718,puVar21,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04381710);
        }
      }
      uVar7 = local_1f08[0];
      uVar17 = *(ulong *)(PTR_DAT_04381718 + 8);
      puVar21 = *(undefined **)(PTR_DAT_04381718 + 0x10);
      if ((*PTR_DAT_04381718 & 1) == 0) {
        puVar21 = PTR_DAT_04381718 + 1;
        uVar17 = (ulong)((byte)*PTR_DAT_04381718 >> 1);
      }
      FUN_001514f0(param_1,puVar21,uVar17);
      FUN_00152550(param_1,uVar7,&DAT_038f8fce);
      FUN_001516f0(param_1,FUN_0210e0a0,0);
      FUN_00152550(param_1,uVar7,&DAT_0397bfcb);
      lVar36 = 0;
      do {
        if (lVar36 == 1) {
          psVar16 = asStack_1f00;
          pbVar11 = (byte *)FUN_017c7920();
        }
        else if (lVar36 == 0) {
          psVar16 = &local_14d0;
          pbVar11 = (byte *)FUN_017c5a4c();
        }
        else {
          psVar16 = (string *)&local_aa0;
          pbVar11 = (byte *)FUN_017c6efc();
        }
        pbVar26 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar26 = pbVar11 + 1;
        }
        FUN_00154450(param_1,pbVar26);
        local_1f18 = FUN_0014feb0(param_1,0xffffffff);
        local_1f50 = (undefined1 *)CONCAT44(local_1f50._4_4_,0x1e);
        local_1f20 = param_1;
        FUN_008fe304(auStack_70,param_1,&local_1f50,&local_1f10,local_1f18);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar12);
        FUN_00155a20(param_1,psVar16,2);
        uVar7 = local_1f18;
        if (*(long *)(lVar12 + 0xbf8) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar7,"class_check");
        }
        uVar7 = local_1f18;
        if (*(long *)(lVar12 + 0xc00) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar7,"class_cast");
        }
        uVar7 = local_1f18;
        uVar25 = *(undefined8 *)(lVar12 + 0xbd8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar12);
        FUN_00151810(param_1,lVar29);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar7,&DAT_03955ac7);
        uVar7 = local_1f18;
        uVar25 = *(undefined8 *)(lVar12 + 0xbe0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar12);
        FUN_00151810(param_1,lVar29);
        FUN_001516f0(param_1,uVar25,3);
        FUN_00152550(param_1,uVar7,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_1f50 = (undefined1 *)CONCAT44(local_1f50._4_4_,1);
          FUN_008fe304(auStack_70,param_1,&local_1f50,&local_1f20,local_1f18);
        }
        else {
          local_1f50 = &LAB_0210e190;
          uStack_1f48 = 0;
          local_1f40 = lVar12;
          lStack_1f38 = lVar29;
          FUN_0210e0f0(param_1,1,&local_1f50,local_1f18);
          local_1f50 = &LAB_0210e4a0;
          uStack_1f48 = 0;
          local_1f40 = lVar12;
          lStack_1f38 = lVar29;
          FUN_0210e0f0(param_1,2,&local_1f50,local_1f18);
        }
        FUN_00151fe0(param_1,0,3);
        uVar7 = FUN_0014feb0(param_1,0xffffffff);
        local_1f50 = (undefined1 *)CONCAT44(local_1f50._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_1,&local_1f50,&local_1f10,uVar7);
        if (*(undefined1 **)(lVar12 + 0xbd0) != (undefined1 *)0x0) {
          uStack_1f48 = 0;
          local_1f50 = *(undefined1 **)(lVar12 + 0xbd0);
          local_1f40 = lVar12;
          lStack_1f38 = lVar29;
          FUN_0210e0f0(param_1,4,&local_1f50,uVar7);
        }
        if (*(char *)(lVar12 + 0xc08) != '\0') {
          local_1f50 = &LAB_0210e190;
          uStack_1f48 = 0;
          local_1f40 = lVar12;
          lStack_1f38 = lVar29;
          FUN_0210e0f0(param_1,1,&local_1f50,uVar7);
          local_1f50 = &LAB_0210e4a0;
          uStack_1f48 = 0;
          local_1f40 = lVar12;
          lStack_1f38 = lVar29;
          FUN_0210e0f0(param_1,2,&local_1f50,uVar7);
        }
        uVar9 = local_1f18;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar7);
        }
        FUN_00152ae0(param_1,uVar9);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_1f20,0xfffffffe);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 3);
      FUN_020ec62c();
      if ((DAT_043d9ce8 & 1) == 0) {
        puVar21 = &DAT_043d9ce9;
      }
      else {
        puVar21 = DAT_043d9cf8;
      }
      FUN_00154450(param_1,puVar21);
      uVar7 = FUN_0014feb0(param_1,0xffffffff);
      local_1f50._0_4_ = 0x1e;
      FUN_008fe304(&local_1f20,param_1,&local_1f50,&local_1f10,uVar7);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,&local_aa0,2);
      FUN_00151fe0(param_1,0,3);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_1f50 = (undefined1 *)CONCAT44(local_1f50._4_4_,0x1e);
      FUN_008fe304(&local_1f20,param_1,&local_1f50,&local_1f10,uVar9);
      local_1f50 = *(undefined1 **)(lVar12 + 0xbd0);
      if (local_1f50 != (undefined1 *)0x0) {
        uStack_1f48 = 0;
        local_1f40 = lVar12;
        lStack_1f38 = lVar29;
        FUN_0210e0f0(param_1,4,&local_1f50,uVar9);
      }
      local_1f50 = &LAB_0210e868;
      uStack_1f48 = 0;
      local_1f30 = 0;
      puStack_1f28 = &DAT_03a7d328;
      local_1f40 = lVar12;
      lStack_1f38 = lVar29;
      FUN_0210e7b0(param_1,1,&local_1f50,uVar9);
      local_1f50 = &LAB_0210eb78;
      uStack_1f48 = 0;
      local_1f30 = 0;
      puStack_1f28 = &DAT_03a7d328;
      local_1f40 = lVar12;
      lStack_1f38 = lVar29;
      FUN_0210e7b0(param_1,2,&local_1f50,uVar9);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar9);
      }
      FUN_00152ae0(param_1,uVar7);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_1f08[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar8 = (int)uVar17;
  if (iVar8 == 1) {
    *(code **)(lVar12 + 0x30) = pcVar33;
  }
  else {
    if (iVar8 != 2) {
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0xbc8) = pcVar33;
        uVar34 = (uint)*puVar1;
        goto joined_r0x0210c0e8;
      }
      *puVar1 = *puVar1 | 1L << (uVar17 & 0x3f);
      goto LAB_0210c104;
    }
    *(code **)(lVar12 + 0x38) = pcVar33;
  }
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *(ulong *)(lVar12 + 0xc10) = *(ulong *)(lVar12 + 0xc10) | 1L << (uVar17 & 0x3f);
  uVar34 = (uint)*puVar1;
  goto joined_r0x0210c0e8;
LAB_0210df64:
  if ((pbVar27 == pbVar20) ||
     (uVar17 = (long)pbVar27 - (long)local_1f60, uVar17 == 0xffffffffffffffff)) goto LAB_0210ddb4;
LAB_0210df7c:
  while( true ) {
    std::string::erase(0x43da458,uVar17);
    if (((ulong)_DAT_043da458 & 1) == 0) {
      local_1f60 = &DAT_043da459;
      pcVar33 = (code *)((ulong)_DAT_043da458 >> 1 & 0x7f);
    }
    else {
      pcVar33 = DAT_043da460;
      local_1f60 = DAT_043da468;
    }
    sVar32 = CONCAT44(_DAT_043da484,ram0x043da480);
    if ((DAT_043da478 & 1) == 0) {
      sVar32 = (ulong)(DAT_043da478 >> 1);
      pbVar26 = (byte *)&DAT_043da479;
    }
    else {
      pbVar26 = DAT_043da488;
    }
    if (sVar32 != 0) break;
    uVar17 = 0;
  }
  if ((long)pcVar33 < (long)sVar32) goto LAB_0210ddb4;
  pbVar20 = local_1f60 + (long)pcVar33;
  bVar4 = *pbVar26;
  pbVar27 = local_1f60;
  pcVar28 = pcVar33;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pcVar28 - sVar32) ||
       (pbVar27 = memchr(pbVar27,(uint)bVar4,((long)pcVar28 - sVar32) + 1), pbVar27 == (byte *)0x0))
    goto LAB_0210ddb4;
    iVar10 = memcmp(pbVar27,pbVar26,sVar32);
    if (iVar10 == 0) break;
    pbVar27 = pbVar27 + 1;
    pcVar28 = (code *)(pbVar20 + -(long)pbVar27);
    if ((long)pcVar28 < (long)sVar32) goto LAB_0210ddb4;
  }
  goto LAB_0210df64;
}


