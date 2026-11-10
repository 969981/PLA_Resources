/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0220d30c; name: FUN_0220d30c
 */


/* WARNING: Removing unreachable block (ram,0x022114e0) */
/* WARNING: Removing unreachable block (ram,0x022113dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0220d30c(long param_1,long param_2)

{
  ulong *puVar1;
  char *pcVar2;
  size_t sVar3;
  undefined *puVar4;
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
  byte *pbVar16;
  string *psVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  byte *pbVar23;
  undefined8 uVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  ulong uVar30;
  char *pcVar31;
  undefined1 *puVar32;
  uint uVar33;
  byte *local_c98;
  undefined1 *local_c90;
  undefined8 uStack_c88;
  long local_c80;
  long lStack_c78;
  undefined8 local_c70;
  undefined *puStack_c68;
  long local_c60;
  undefined4 local_c58;
  long local_c50;
  undefined4 local_c48 [2];
  string asStack_c40 [992];
  undefined8 auStack_860 [2];
  string local_850;
  undefined1 auStack_84f [7];
  size_t local_848;
  undefined1 *local_840;
  long alStack_470 [2];
  char *local_460 [126];
  undefined1 auStack_70 [16];
  
  if (((DAT_043de630 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de630), iVar9 != 0)) {
    local_460[2] = (char *)0x0;
    local_460[1] = (char *)0x0;
    local_460[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437cd10 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437cd10);
      puVar4 = PTR_DAT_0437cd18;
      if (iVar9 != 0) {
        FUN_00eed4e0(PTR_DAT_0437cd18);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437cd10);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_0437cd18 + 0x10);
    if ((*PTR_DAT_0437cd18 & 1) == 0) {
      puVar4 = PTR_DAT_0437cd18 + 1;
    }
    pcVar31 = (char *)std::string::append((char *)local_460,(ulong)puVar4);
    psVar17 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043de618,psVar17);
    pcVar31 = local_460[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_460[0] & 1) != 0) && ((byte *)local_460[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar21 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar21 = plVar7;
      }
      uVar27 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar21,pcVar31,0,8);
          goto LAB_0221061c;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar31,0,8);
    }
LAB_0221061c:
    FUN_00100250(PTR__string_04379718,&DAT_043de618,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043de630);
  }
  std::string::string(&local_850,(string *)&DAT_043de618);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043de610);
  sVar3 = (ulong)((byte)local_850 >> 1);
  if (((byte)local_850 & 1) != 0) {
    sVar3 = local_848;
  }
  std::string::append((ulong)&local_850,(char)iVar9);
  if (((byte)local_850 & 1) == 0) {
    puVar32 = auStack_84f;
    local_848 = (size_t)((byte)local_850 >> 1);
  }
  else {
    puVar32 = local_840;
  }
  snprintf(puVar32 + (sVar3 - 1),local_848,"%d",(ulong)DAT_043de610);
  DAT_043de610 = DAT_043de610 + 1;
  if (((DAT_043de650 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de650), iVar9 != 0)) {
    local_460[2] = (char *)0x0;
    local_460[1] = (char *)0x0;
    local_460[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437cd10 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437cd10);
      puVar4 = PTR_DAT_0437cd18;
      if (iVar9 != 0) {
        FUN_00eed4e0(PTR_DAT_0437cd18);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437cd10);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_0437cd18 + 0x10);
    if ((*PTR_DAT_0437cd18 & 1) == 0) {
      puVar4 = PTR_DAT_0437cd18 + 1;
    }
    pcVar31 = (char *)std::string::append((char *)local_460,(ulong)puVar4);
    psVar17 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043de638,psVar17);
    pcVar31 = local_460[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_460[0] & 1) != 0) && ((byte *)local_460[2] != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar21 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar21 = plVar7;
      }
      uVar27 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar21,pcVar31,0,8);
          goto LAB_0221078c;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar31,0,8);
    }
LAB_0221078c:
    FUN_00100250(PTR__string_04379718,&DAT_043de638,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043de650);
  }
  puVar4 = DAT_043de648;
  if ((DAT_043de638 & 1) == 0) {
    puVar4 = &DAT_043de639;
  }
  if (((byte)local_850 & 1) == 0) {
    puVar32 = (undefined1 *)((ulong)&local_850 | 1);
  }
  else {
    puVar32 = local_840;
  }
  if (((DAT_043de660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de660), iVar9 != 0)) {
    DAT_043de658 = 0x300;
    __cxa_guard_release(&DAT_043de660);
  }
  if (((DAT_043de670 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de670), iVar9 != 0)) {
    DAT_043de668 = 0x307;
    __cxa_guard_release(&DAT_043de670);
  }
  uVar27 = DAT_043de658;
  lVar13 = FUN_00153520(param_1,DAT_043de658);
  if ((uVar27 < ((ulong)(uint)-(int)lVar13 & 7 | 0x300)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar27 = DAT_043de668;
    lVar13 = FUN_00153520(param_1,DAT_043de668);
    if ((uVar27 < ((ulong)(uint)-(int)lVar13 & 7 | 0x300)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043de690 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de690), iVar9 != 0)) {
        if (((DAT_043de6c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de6c8), iVar9 != 0)) {
          DAT_043de698 = 0x16;
          DAT_043de6a8 = (byte *)0x0;
          DAT_043de699._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043de6a0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043de6b0 = 0x2a;
          _DAT_043de6a4 = 0;
          DAT_043de6c0._7_1_ = 0;
          DAT_043de6c0._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043de6c0._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043de6c0._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043de6c0._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043de6c0._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043de6b9 = s__anonymous_namespace__039071f8[8];
          DAT_043de6b9_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043de6b9_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043de6b9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043de6b9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043de6be = s__anonymous_namespace__039071f8._13_2_;
          DAT_043de6c0._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043de6b1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043de6b1._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043de6c0._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043de698,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043de6c8);
        }
        plVar7 = DAT_043f1798;
        lVar13 = tpidr_el0;
        plVar21 = *(long **)(lVar13 + 0x20);
        if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
          *(long **)(lVar13 + 0x20) = DAT_043f1798;
          plVar21 = plVar7;
        }
        puVar18 = (undefined1 *)(**(code **)(*plVar21 + 0x10))(plVar21,0xd90,8);
        _DAT_043de678 = (char *)0xd91;
        DAT_043de680 = (byte *)0xd8b;
        DAT_043de688 = puVar18;
        memcpy(puVar18,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::player::FieldPlayerComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30>, const sol::base_list<> &, sol::base_list<field::content::FieldCharacterComponent>, char const (&)[13], bool (field::player::FieldPlayerComponent::*)() const, char const (&)[20], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_player_component_glue.cpp:24:29), char const (&)[20], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_player_component_glue.cpp:25:29), char const (&)[9], bool (field::player::FieldPlayerComponent::*)() const, char const (&)[15], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_player_component_glue.cpp:27:24), char const (&)[17], void (field::player::FieldPlayerComponent::*)(bool), char const (&)[15], void (field::player::FieldPlayerComponent::*)(), char const (&)[23], bool (field::player::FieldPlayerComponent::*)() const, char const (&)[14], void (field::player::FieldPlayerComponent::*)(), char const (&)[23], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_player_component_glue.cpp:32:32), char const (&)[23], void (field::player::FieldPlayerComponent::*)(bool), char const (&)[28], gfl::math::Vector3 (field::player::FieldPlayerComponent::*)() const, char const (&)[25], gfl::math::Quaternion (field::player::FieldPlayerComponent::*)() const, char const (&)[19], void (field::player::FieldPlayerComponent::*)(), char const (&)[22], void (field::player::FieldPlayerComponent::*)(gfl::engine::ObjectHandle<field::buddy::FieldBuddyPokemonComponent>), char const (&)[29], void (field::player::FieldPlayerComponent::*)(), char const (&)[24], bool (field::player::FieldPlayerC..." /* TRUNCATED STRING LITERAL */
               ,0xd8b);
        puVar18[0xd8b] = 0;
        std::string::find('x',0x5b);
        uVar30 = std::string::find('x',0x3d);
        uVar27 = std::string::rfind('x',0x5d);
        if (uVar27 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043de678 & 1) == 0) {
            uVar27 = (ulong)(DAT_043de678 >> 1);
          }
          else {
            uVar27 = (ulong)DAT_043de680;
          }
          uVar22 = 0;
          if (uVar30 != 0xffffffffffffffff) {
            uVar22 = uVar30;
          }
          uVar30 = uVar27;
        }
        else {
          uVar22 = 0;
          if (uVar30 != 0xffffffffffffffff) {
            uVar22 = uVar30;
          }
          if (((ulong)_DAT_043de678 & 1) == 0) {
            uVar30 = (ulong)(DAT_043de678 >> 1);
          }
          else {
            uVar30 = (ulong)DAT_043de680;
          }
        }
        if (uVar22 < uVar30 - 1) {
          uVar22 = uVar22 + 1;
        }
        std::string::string((string *)local_460,(string *)&DAT_043de678,uVar22,uVar27 - uVar22,
                            (allocator *)&DAT_043de678);
        if (((ulong)_DAT_043de678 & 1) != 0) {
          *DAT_043de688 = 0;
          plVar7 = DAT_043f1798;
          puVar18 = DAT_043de688;
          DAT_043de680 = (byte *)0x0;
          if ((((ulong)_DAT_043de678 & 1) != 0) && (DAT_043de688 != (undefined1 *)0x0)) {
            plVar21 = *(long **)(lVar13 + 0x20);
            if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
              *(long **)(lVar13 + 0x20) = DAT_043f1798;
              plVar21 = plVar7;
            }
            uVar27 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar27 & 1) != 0) {
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar13 + 0x38d480)) {
                FUN_02bcc824(plVar21,puVar18,0,8);
                goto LAB_02210c68;
              }
            }
            (**(code **)(*plVar21 + 0x18))(plVar21,puVar18,0,8);
          }
        }
LAB_02210c68:
        pbVar16 = (byte *)((ulong)local_460[0] >> 1 & 0x7f);
        _DAT_043de678 = local_460[0];
        DAT_043de680 = (byte *)local_460[1];
        DAT_043de688 = (byte *)local_460[2];
        uVar11 = (uint)local_460[0] & 0xff;
        uVar33 = (uint)local_460[0] & 1;
        if (((ulong)local_460[0] & 1) == 0) {
          pbVar25 = &DAT_043de679;
          pbVar28 = pbVar16;
        }
        else {
          pbVar25 = (byte *)local_460[2];
          pbVar28 = (byte *)local_460[1];
        }
        if (0xd < (long)pbVar28) {
          pbVar26 = pbVar25 + (long)pbVar28;
          lVar13 = 1;
          while (pbVar28 != (byte *)0xd) {
            pbVar28 = pbVar28 + -1;
            if (pbVar25[(long)pbVar28] == 0x6b) {
              lVar29 = 0;
              do {
                if (lVar29 == -0xd) {
                  if ((lVar13 != -0xd) &&
                     (pbVar26 + (~(ulong)pbVar25 - 0xd) != (byte *)0xffffffffffffffff)) {
                    std::string::erase(0x43de678,(ulong)(pbVar26 + (~(ulong)pbVar25 - 0xd) + -2));
                    uVar11 = (uint)DAT_043de678;
                    uVar33 = DAT_043de678 & 1;
                    pbVar16 = (byte *)(ulong)(DAT_043de678 >> 1);
                  }
                  goto LAB_02210d50;
                }
                lVar20 = lVar29 + -2;
                lVar15 = lVar29 + 0xc;
                lVar29 = lVar29 + -1;
              } while (pbVar26[lVar20] == "seperator_mark"[lVar15]);
            }
            pbVar26 = pbVar26 + -1;
            lVar13 = lVar13 + 1;
          }
        }
LAB_02210d50:
        pbVar28 = DAT_043de680;
        pbVar25 = pbVar16;
        if (uVar33 != 0) {
          pbVar25 = DAT_043de680;
        }
        if (pbVar25 != (byte *)0x0) {
          pbVar16 = &DAT_043de679;
          if (uVar33 != 0) {
            pbVar16 = DAT_043de688;
          }
          iVar9 = isblank((uint)*pbVar16);
          if (iVar9 == 0) {
            uVar33 = uVar11 & 1;
            pbVar16 = (byte *)(ulong)(uVar11 >> 1);
          }
          else {
            do {
              std::string::erase(0x43de678,0);
              pbVar28 = DAT_043de680;
              uVar11 = (uint)DAT_043de678;
              pbVar16 = (byte *)(ulong)(DAT_043de678 >> 1);
              uVar33 = DAT_043de678 & 1;
              pbVar25 = pbVar16;
              if (((ulong)_DAT_043de678 & 1) != 0) {
                pbVar25 = DAT_043de680;
              }
              if (pbVar25 == (byte *)0x0) break;
              pbVar25 = &DAT_043de679;
              if (((ulong)_DAT_043de678 & 1) != 0) {
                pbVar25 = DAT_043de688;
              }
              iVar9 = isblank((uint)*pbVar25);
            } while (iVar9 != 0);
          }
        }
        bVar8 = uVar33 == 0;
        pbVar25 = pbVar16;
        if (!bVar8) {
          pbVar25 = pbVar28;
        }
        if (pbVar25 != (byte *)0x0) {
          do {
            pbVar16 = (byte *)(ulong)(uVar11 >> 1);
            pbVar25 = pbVar16;
            pbVar26 = &DAT_043de679;
            if (!bVar8) {
              pbVar25 = pbVar28;
              pbVar26 = DAT_043de688;
            }
            iVar9 = isblank((uint)pbVar26[(long)(pbVar25 + -1)]);
            if (iVar9 == 0) break;
            FUN_021f4b44(&DAT_043de678);
            uVar11 = (uint)DAT_043de678;
            bVar8 = ((ulong)_DAT_043de678 & 1) == 0;
            pbVar16 = (byte *)(ulong)(DAT_043de678 >> 1);
            pbVar25 = pbVar16;
            if (!bVar8) {
              pbVar25 = DAT_043de680;
            }
            pbVar28 = DAT_043de680;
          } while (pbVar25 != (byte *)0x0);
          uVar33 = uVar11 & 1;
        }
        if (uVar33 != 0) {
          pbVar16 = pbVar28;
        }
        local_c98 = &DAT_043de679;
        if (uVar33 != 0) {
          local_c98 = DAT_043de688;
        }
        sVar3 = CONCAT44(_DAT_043de6a4,ram0x043de6a0);
        if ((DAT_043de698 & 1) == 0) {
          sVar3 = (ulong)(DAT_043de698 >> 1);
          pbVar25 = (byte *)&DAT_043de699;
        }
        else {
          pbVar25 = DAT_043de6a8;
        }
        if (sVar3 == 0) {
          uVar27 = 0;
          goto LAB_02211410;
        }
        if ((long)sVar3 <= (long)pbVar16) {
          pbVar26 = local_c98 + (long)pbVar16;
          bVar6 = *pbVar25;
          pbVar28 = local_c98;
          pbVar23 = pbVar16;
          do {
            if ((0xfffffffffffffffe < (long)pbVar23 - sVar3) ||
               (pbVar28 = memchr(pbVar28,(uint)bVar6,((long)pbVar23 - sVar3) + 1),
               pbVar28 == (byte *)0x0)) break;
            iVar9 = memcmp(pbVar28,pbVar25,sVar3);
            if (iVar9 == 0) goto LAB_022113f8;
            pbVar28 = pbVar28 + 1;
            pbVar23 = pbVar26 + -(long)pbVar28;
          } while ((long)sVar3 <= (long)pbVar23);
        }
LAB_02211248:
        sVar3 = CONCAT26(_DAT_043de6be,CONCAT51(_DAT_043de6b9,DAT_043de6b1._7_1_));
        pbVar25 = (byte *)CONCAT17(DAT_043de6c0._7_1_,
                                   CONCAT16(DAT_043de6c0._6_1_,
                                            CONCAT51(DAT_043de6c0._1_5_,(char)DAT_043de6c0)));
        if ((DAT_043de6b0 & 1) == 0) {
          pbVar25 = (byte *)&DAT_043de6b1;
          sVar3 = (ulong)(DAT_043de6b0 >> 1);
        }
        if (sVar3 == 0) {
          uVar27 = 0;
LAB_022112c8:
          do {
            while( true ) {
              std::string::erase(0x43de678,uVar27);
              bVar8 = ((ulong)_DAT_043de678 & 1) != 0;
              pbVar16 = (byte *)((ulong)_DAT_043de678 >> 1 & 0x7f);
              if (bVar8) {
                pbVar16 = DAT_043de680;
              }
              sVar3 = CONCAT26(_DAT_043de6be,CONCAT51(_DAT_043de6b9,DAT_043de6b1._7_1_));
              pbVar28 = (byte *)CONCAT17(DAT_043de6c0._7_1_,
                                         CONCAT16(DAT_043de6c0._6_1_,
                                                  CONCAT51(DAT_043de6c0._1_5_,(char)DAT_043de6c0)));
              pbVar25 = DAT_043de688;
              if (!bVar8) {
                pbVar25 = &DAT_043de679;
              }
              if ((DAT_043de6b0 & 1) == 0) {
                pbVar28 = (byte *)&DAT_043de6b1;
                sVar3 = (ulong)(DAT_043de6b0 >> 1);
              }
              if (sVar3 != 0) break;
              uVar27 = 0;
            }
            if ((long)pbVar16 < (long)sVar3) goto LAB_0221139c;
            bVar6 = *pbVar28;
            pbVar23 = pbVar25 + (long)pbVar16;
            pbVar26 = pbVar25;
            while( true ) {
              if ((0xfffffffffffffffe < (long)pbVar16 - sVar3) ||
                 (pbVar26 = memchr(pbVar26,(uint)bVar6,((long)pbVar16 - sVar3) + 1),
                 pbVar26 == (byte *)0x0)) goto LAB_0221139c;
              iVar9 = memcmp(pbVar26,pbVar28,sVar3);
              if (iVar9 == 0) break;
              pbVar26 = pbVar26 + 1;
              pbVar16 = pbVar23 + -(long)pbVar26;
              if ((long)pbVar16 < (long)sVar3) goto LAB_0221139c;
            }
            if ((pbVar26 == pbVar23) ||
               (uVar27 = (long)pbVar26 - (long)pbVar25, uVar27 == 0xffffffffffffffff))
            goto LAB_0221139c;
          } while( true );
        }
        if ((long)sVar3 <= (long)pbVar16) {
          pbVar26 = local_c98 + (long)pbVar16;
          bVar6 = *pbVar25;
          pbVar28 = local_c98;
          do {
            if ((0xfffffffffffffffe < (long)pbVar16 - sVar3) ||
               (pbVar28 = memchr(pbVar28,(uint)bVar6,((long)pbVar16 - sVar3) + 1),
               pbVar28 == (byte *)0x0)) break;
            iVar9 = memcmp(pbVar28,pbVar25,sVar3);
            if (iVar9 == 0) {
              if ((pbVar28 != pbVar26) &&
                 (uVar27 = (long)pbVar28 - (long)local_c98, uVar27 != 0xffffffffffffffff))
              goto LAB_022112c8;
              break;
            }
            pbVar28 = pbVar28 + 1;
            pbVar16 = pbVar26 + -(long)pbVar28;
          } while ((long)sVar3 <= (long)pbVar16);
        }
LAB_0221139c:
        FUN_00100250(PTR__string_04379718,&DAT_043de678,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043de690);
      }
      pbVar16 = DAT_043de688;
      if (((ulong)_DAT_043de678 & 1) == 0) {
        pbVar16 = &DAT_043de679;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar16);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar24 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar24;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar13;
  lVar29 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar29;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar29 != 0) {
    uVar30 = puVar19[2];
    uVar27 = *(ulong *)(lVar13 + 8);
    if ((uVar30 & uVar30 - 1) == 0) {
      uVar27 = uVar30 - 1 & uVar27;
    }
    else if (uVar30 <= uVar27) {
      uVar22 = 0;
      if (uVar30 != 0) {
        uVar22 = uVar27 / uVar30;
      }
      uVar27 = uVar27 - uVar22 * uVar30;
    }
    *(undefined8 **)(puVar19[1] + uVar27 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar24 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar24;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_0425b790;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x2a0);
  iVar9 = FUN_00154450(param_1,puVar32);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_022122e0,0);
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
  FUN_001522a0(param_1,puVar4);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar4);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_850 & 1) != 0) && (local_840 != (undefined1 *)0x0)) {
    lVar29 = tpidr_el0;
    plVar21 = *(long **)(lVar29 + 0x20);
    if (*(long **)(lVar29 + 0x20) == (long *)0x0) {
      *(long **)(lVar29 + 0x20) = DAT_043f1798;
      plVar21 = plVar7;
    }
    uVar27 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar29 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar29 + 0x38d488) = 1;
        *(undefined8 *)(lVar29 + 0x38d478) = 0;
        *(undefined8 *)(lVar29 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar29 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar29 + 0x38d480)) {
        FUN_02bcc824(plVar21,local_840,0,8);
        goto LAB_0220d700;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,local_840,0,8);
  }
LAB_0220d700:
  memset(local_460,0,0x3f0);
  puVar4 = PTR_DAT_04380660;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar4 = 1;
  pcVar31 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0x2e8) = &LAB_022123d0;
  *(undefined1 **)(lVar13 + 0x2e0) = &LAB_02212314;
  *(undefined1 **)(lVar13 + 0x2d0) = &LAB_02212520;
  *(undefined1 **)(lVar13 + 0x2d8) = &LAB_02212650;
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar20 = lVar13 + 8;
  lVar29 = 0;
  uVar27 = 0;
  pbVar16 = &LAB_021f4cd0;
  if (uVar11 != 0) {
    pbVar16 = &LAB_021f4bc4;
  }
  puVar1 = (ulong *)(lVar13 + 0x2f8);
  do {
    lVar15 = FUN_008cca50();
    pbVar25 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar31);
    sVar3 = (ulong)(*pbVar25 >> 1);
    if ((*pbVar25 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar25 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar25,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(byte **)(lVar13 + 0x30) = pbVar16;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar30 = 0;
            *(byte **)(lVar13 + 0x2b0) = pbVar16;
            goto LAB_0220d8cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(byte **)(lVar13 + 0x38) = pbVar16;
      }
      uVar30 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220d8cc;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  uVar30 = 1;
  local_460[0] = pcVar31;
  local_460[1] = (char *)pbVar16;
LAB_0220d8cc:
  pcVar31 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021f5160;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021f4ddc;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220da14;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220da14;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220da14:
  pcVar31 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021f88dc;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021f51a4;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220db58;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220db58;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220db58:
  pcVar31 = *(char **)(lVar13 + 0x88);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021f8958;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021f8920;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220dc9c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220dc9c;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220dc9c:
  pcVar31 = *(char **)(lVar13 + 0xa0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021fc210;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021f8990;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220dde0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220dde0;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220dde0:
  pcVar31 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021fc3a0;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021fc254;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220df24;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220df24;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220df24:
  pcVar31 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021fc5ac;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021fc488;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e068;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e068;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e068:
  pcVar31 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021fc708;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021fc6d0;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e1ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e1ac;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e1ac:
  pcVar31 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_021fc778;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021fc740;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e2f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e2f0;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e2f0:
  pcVar31 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220009c;
  if (uVar11 != 0) {
    pcVar2 = &LAB_021fc7b0;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e434;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e434;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e434:
  pcVar31 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02200118;
  if (uVar11 != 0) {
    pcVar2 = &LAB_022000e0;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e578;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e578;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e578:
  pcVar31 = *(char **)(lVar13 + 0x128);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_022002bc;
  if (uVar11 != 0) {
    pcVar2 = &LAB_02200150;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e6bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e6bc;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e6bc:
  pcVar31 = *(char **)(lVar13 + 0x140);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220050c;
  if (uVar11 != 0) {
    pcVar2 = &LAB_022003a4;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e800;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e800;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e800:
  pcVar31 = *(char **)(lVar13 + 0x158);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220062c;
  if (uVar11 != 0) {
    pcVar2 = &LAB_022005f4;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220e944;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220e944;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220e944:
  pcVar31 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_022011e8;
  if (uVar11 != 0) {
    pcVar2 = &LAB_02200664;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220ea88;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220ea88;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220ea88:
  pcVar31 = *(char **)(lVar13 + 0x188);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02201308;
  if (uVar11 != 0) {
    pcVar2 = &LAB_022012d0;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220ebcc;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220ebcc;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220ebcc:
  pcVar31 = *(char **)(lVar13 + 0x1a0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02201378;
  if (uVar11 != 0) {
    pcVar2 = &LAB_02201340;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220ed10;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220ed10;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220ed10:
  pcVar31 = *(char **)(lVar13 + 0x1b8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02201524;
  if (uVar11 != 0) {
    pcVar2 = &LAB_022013b0;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220ee54;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220ee54;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220ee54:
  pcVar31 = *(char **)(lVar13 + 0x1d0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02201644;
  if (uVar11 != 0) {
    pcVar2 = &LAB_0220160c;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220ef98;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220ef98;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220ef98:
  pcVar31 = *(char **)(lVar13 + 0x1e8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02204ddc;
  if (uVar11 != 0) {
    pcVar2 = &LAB_0220167c;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f0dc;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f0dc;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f0dc:
  pcVar31 = *(char **)(lVar13 + 0x1f0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02205030;
  if (uVar11 != 0) {
    pcVar2 = &LAB_02204e20;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f220;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f220;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f220:
  pcVar31 = *(char **)(lVar13 + 0x208);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_022052bc;
  if (uVar11 != 0) {
    pcVar2 = &LAB_02205118;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f364;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f364;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f364:
  pcVar31 = *(char **)(lVar13 + 0x220);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02208a20;
  if (uVar11 != 0) {
    pcVar2 = &LAB_022053a4;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f4a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f4a8;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f4a8:
  pcVar31 = *(char **)(lVar13 + 0x228);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_02208b88;
  if (uVar11 != 0) {
    pcVar2 = &LAB_02208a64;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f5ec;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f5ec;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f5ec:
  pcVar31 = *(char **)(lVar13 + 0x240);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220c2c0;
  if (uVar11 != 0) {
    pcVar2 = &LAB_02208ccc;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f730;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f730;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f730:
  pcVar31 = *(char **)(lVar13 + 600);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220c55c;
  if (uVar11 != 0) {
    pcVar2 = &LAB_0220c404;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f874;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f874;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f874:
  pcVar31 = *(char **)(lVar13 + 0x270);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220c67c;
  if (uVar11 != 0) {
    pcVar2 = &LAB_0220c644;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220f9b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220f9b8;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220f9b8:
  pcVar31 = *(char **)(lVar13 + 0x288);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220c88c;
  if (uVar11 != 0) {
    pcVar2 = &LAB_0220c6b4;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220fafc;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220fafc;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220fafc:
  pcVar31 = *(char **)(lVar13 + 0x2a0);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220d0c8;
  if (uVar11 != 0) {
    pcVar2 = &LAB_0220c974;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar27;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x2b0) = pcVar2;
            goto LAB_0220fc40;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
      goto LAB_0220fc40;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
  local_460[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220fc40:
  pcVar31 = *(char **)(lVar13 + 0x2a8);
  sVar14 = strlen(pcVar31);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_0220d2bc;
  if (uVar11 != 0) {
    pcVar2 = &LAB_0220d26c;
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
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) break;
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar27 == 0x20) {
LAB_0220fd9c:
      alStack_470[uVar30 * 2 + 2] = (long)pcVar31;
      local_460[uVar30 * 2 + 1] = pcVar2;
      uVar30 = (ulong)((int)uVar30 + 1);
LAB_0220fdac:
      uVar11 = (uint)*puVar1;
joined_r0x0220fd38:
      if ((uVar11 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
      uVar33 = (uint)uVar30;
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar15 = FUN_008cca50();
        lVar29 = lVar15 + 0x181;
        if ((*(byte *)(lVar15 + 0x180) & 1) != 0) {
          lVar29 = *(long *)(lVar15 + 400);
        }
        uVar33 = uVar33 + 1;
        uVar27 = (ulong)uVar33;
        alStack_470[uVar30 * 2 + 2] = lVar29;
        local_460[uVar30 * 2 + 1] = PTR_LAB_0437cce8;
        uVar11 = (uint)*puVar1;
      }
      else {
        uVar27 = uVar30;
      }
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar15 = FUN_008cca50();
        lVar29 = lVar15 + 0x289;
        if ((*(byte *)(lVar15 + 0x288) & 1) != 0) {
          lVar29 = *(long *)(lVar15 + 0x298);
        }
        uVar33 = (int)uVar27 + 1;
        alStack_470[uVar27 * 2 + 2] = lVar29;
        local_460[uVar27 * 2 + 1] = PTR_LAB_0437ccf0;
        lVar29 = *(long *)(lVar13 + 0x2b0);
      }
      else {
        lVar29 = *(long *)(lVar13 + 0x2b0);
      }
      if (lVar29 != 0) {
        lVar15 = FUN_008cca50();
        lVar29 = lVar15 + 0x1c9;
        if ((*(byte *)(lVar15 + 0x1c8) & 1) != 0) {
          lVar29 = *(long *)(lVar15 + 0x1d8);
        }
        pcVar31 = *(char **)(lVar13 + 0x2b0);
        lVar15 = (long)(int)uVar33;
        uVar33 = uVar33 + 1;
        alStack_470[lVar15 * 2 + 2] = lVar29;
        local_460[lVar15 * 2 + 1] = pcVar31;
      }
      alStack_470[(long)(int)uVar33 * 2 + 2] = 0;
      local_460[(long)(int)uVar33 * 2 + 1] = (char *)0x0;
      memcpy(&local_850,local_460,0x3f0);
      memcpy(asStack_c40,local_460,0x3f0);
      lVar29 = FUN_008cca50();
      lVar15 = (long)(int)uVar33 + -1;
      pcVar31 = (char *)alStack_470[lVar15 * 2 + 2];
      sVar14 = strlen(pcVar31);
      sVar3 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar3 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar14 == sVar3) &&
         (iVar9 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
         iVar9 == 0)) {
        auStack_860[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_84f + lVar15 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_c40 + lVar15 * 0x10) = alStack_470[lVar15 * 2 + 2];
      *(undefined1 **)(asStack_c40 + (lVar15 * 2 + 1) * 8) = &LAB_022114f0;
      FUN_00151fe0(param_1,0,2);
      local_c48[0] = FUN_0014feb0(param_1,0xffffffff);
      local_c50 = param_1;
      if ((*PTR_DAT_0437cd10 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_0437cd10);
        puVar4 = PTR_DAT_0437cd18;
        if (iVar9 != 0) {
          FUN_00eed4e0(PTR_DAT_0437cd18);
          FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437cd10);
        }
      }
      uVar10 = local_c48[0];
      uVar27 = *(ulong *)(PTR_DAT_0437cd18 + 8);
      puVar4 = *(undefined **)(PTR_DAT_0437cd18 + 0x10);
      if ((*PTR_DAT_0437cd18 & 1) == 0) {
        puVar4 = PTR_DAT_0437cd18 + 1;
        uVar27 = (ulong)((byte)*PTR_DAT_0437cd18 >> 1);
      }
      FUN_001514f0(param_1,puVar4,uVar27);
      FUN_00152550(param_1,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_0220cf50,0);
      FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar17 = asStack_c40;
          pbVar16 = (byte *)FUN_00eedcf0();
        }
        else if (lVar29 == 0) {
          psVar17 = &local_850;
          pbVar16 = (byte *)FUN_00eebe20();
        }
        else {
          psVar17 = (string *)local_460;
          pbVar16 = (byte *)FUN_00eed284();
        }
        pbVar25 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar25 = pbVar16 + 1;
        }
        FUN_00154450(param_1,pbVar25);
        local_c58 = FUN_0014feb0(param_1,0xffffffff);
        local_c90 = (undefined1 *)CONCAT44(local_c90._4_4_,0x1e);
        local_c60 = param_1;
        FUN_008fe304(auStack_70,param_1,&local_c90,&local_c50,local_c58);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00155a20(param_1,psVar17,2);
        uVar10 = local_c58;
        if (*(long *)(lVar13 + 0x2e0) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_check");
        }
        uVar10 = local_c58;
        if (*(long *)(lVar13 + 0x2e8) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_cast");
        }
        uVar10 = local_c58;
        uVar24 = *(undefined8 *)(lVar13 + 0x2c0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar20);
        FUN_001516f0(param_1,uVar24,3);
        FUN_00152550(param_1,uVar10,&DAT_03955ac7);
        uVar10 = local_c58;
        uVar24 = *(undefined8 *)(lVar13 + 0x2c8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar20);
        FUN_001516f0(param_1,uVar24,3);
        FUN_00152550(param_1,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_c90 = (undefined1 *)CONCAT44(local_c90._4_4_,1);
          FUN_008fe304(auStack_70,param_1,&local_c90,&local_c60,local_c58);
        }
        else {
          local_c90 = &LAB_022115e0;
          uStack_c88 = 0;
          local_c80 = lVar13;
          lStack_c78 = lVar20;
          FUN_02211540(param_1,1,&local_c90,local_c58);
          local_c90 = &LAB_022118f0;
          uStack_c88 = 0;
          local_c80 = lVar13;
          lStack_c78 = lVar20;
          FUN_02211540(param_1,2,&local_c90,local_c58);
        }
        FUN_00151fe0(param_1,0,3);
        uVar10 = FUN_0014feb0(param_1,0xffffffff);
        local_c90 = (undefined1 *)CONCAT44(local_c90._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_1,&local_c90,&local_c50,uVar10);
        if (*(undefined1 **)(lVar13 + 0x2b8) != (undefined1 *)0x0) {
          uStack_c88 = 0;
          local_c90 = *(undefined1 **)(lVar13 + 0x2b8);
          local_c80 = lVar13;
          lStack_c78 = lVar20;
          FUN_02211540(param_1,4,&local_c90,uVar10);
        }
        if (*(char *)(lVar13 + 0x2f0) != '\0') {
          local_c90 = &LAB_022115e0;
          uStack_c88 = 0;
          local_c80 = lVar13;
          lStack_c78 = lVar20;
          FUN_02211540(param_1,1,&local_c90,uVar10);
          local_c90 = &LAB_022118f0;
          uStack_c88 = 0;
          local_c80 = lVar13;
          lStack_c78 = lVar20;
          FUN_02211540(param_1,2,&local_c90,uVar10);
        }
        uVar12 = local_c58;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar10);
        }
        FUN_00152ae0(param_1,uVar12);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_c60,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_021f42fc();
      puVar4 = DAT_043dd8e0;
      if ((DAT_043dd8d0 & 1) == 0) {
        puVar4 = &DAT_043dd8d1;
      }
      FUN_00154450(param_1,puVar4);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_c90._0_4_ = 0x1e;
      FUN_008fe304(&local_c60,param_1,&local_c90,&local_c50,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,local_460,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_c90 = (undefined1 *)CONCAT44(local_c90._4_4_,0x1e);
      FUN_008fe304(&local_c60,param_1,&local_c90,&local_c50,uVar12);
      local_c90 = *(undefined1 **)(lVar13 + 0x2b8);
      if (local_c90 != (undefined1 *)0x0) {
        uStack_c88 = 0;
        local_c80 = lVar13;
        lStack_c78 = lVar20;
        FUN_02211540(param_1,4,&local_c90,uVar12);
      }
      local_c90 = &LAB_02211cb8;
      uStack_c88 = 0;
      local_c70 = 0;
      puStack_c68 = &DAT_03a7d3c0;
      local_c80 = lVar13;
      lStack_c78 = lVar20;
      FUN_02211c00(param_1,1,&local_c90,uVar12);
      local_c90 = &LAB_02211fc8;
      uStack_c88 = 0;
      local_c70 = 0;
      puStack_c68 = &DAT_03a7d3c0;
      local_c80 = lVar13;
      lStack_c78 = lVar20;
      FUN_02211c00(param_1,2,&local_c90,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_c48[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar9 = (int)uVar27;
  if (iVar9 == 1) {
    *(undefined1 *)(lVar13 + 0x58) = 1;
    *(char **)(lVar13 + 0x30) = pcVar2;
    *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
    goto LAB_0220fdac;
  }
  if (iVar9 == 2) {
    *(undefined1 *)(lVar13 + 0x58) = 1;
    *(char **)(lVar13 + 0x38) = pcVar2;
    *(ulong *)(lVar13 + 0x2f8) = *(ulong *)(lVar13 + 0x2f8) | 1L << (uVar27 & 0x3f);
    uVar11 = (uint)*puVar1;
    goto joined_r0x0220fd38;
  }
  if (iVar9 == 0x13) {
    *(char **)(lVar13 + 0x2b0) = pcVar2;
    uVar11 = (uint)*puVar1;
    goto joined_r0x0220fd38;
  }
  *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
  goto LAB_0220fd9c;
LAB_022113f8:
  if ((pbVar28 == pbVar26) ||
     (uVar27 = (long)pbVar28 - (long)local_c98, uVar27 == 0xffffffffffffffff)) goto LAB_02211248;
LAB_02211410:
  while( true ) {
    std::string::erase(0x43de678,uVar27);
    if (((ulong)_DAT_043de678 & 1) == 0) {
      local_c98 = &DAT_043de679;
      pbVar16 = (byte *)((ulong)_DAT_043de678 >> 1 & 0x7f);
    }
    else {
      pbVar16 = DAT_043de680;
      local_c98 = DAT_043de688;
    }
    sVar3 = CONCAT44(_DAT_043de6a4,ram0x043de6a0);
    if ((DAT_043de698 & 1) == 0) {
      sVar3 = (ulong)(DAT_043de698 >> 1);
      pbVar25 = (byte *)&DAT_043de699;
    }
    else {
      pbVar25 = DAT_043de6a8;
    }
    if (sVar3 != 0) break;
    uVar27 = 0;
  }
  if ((long)pbVar16 < (long)sVar3) goto LAB_02211248;
  pbVar26 = local_c98 + (long)pbVar16;
  bVar6 = *pbVar25;
  pbVar28 = local_c98;
  pbVar23 = pbVar16;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pbVar23 - sVar3) ||
       (pbVar28 = memchr(pbVar28,(uint)bVar6,((long)pbVar23 - sVar3) + 1), pbVar28 == (byte *)0x0))
    goto LAB_02211248;
    iVar9 = memcmp(pbVar28,pbVar25,sVar3);
    if (iVar9 == 0) break;
    pbVar28 = pbVar28 + 1;
    pbVar23 = pbVar26 + -(long)pbVar28;
    if ((long)pbVar23 < (long)sVar3) goto LAB_02211248;
  }
  goto LAB_022113f8;
}


