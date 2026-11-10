/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f0db04; name: FUN_00f0db04
 */


/* WARNING: Removing unreachable block (ram,0x00f10f54) */
/* WARNING: Removing unreachable block (ram,0x00f10e50) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0db04(long param_1,long param_2)

{
  ulong *puVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  string *psVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  undefined *puVar18;
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
  size_t sVar33;
  uint uVar34;
  undefined8 uVar35;
  byte *local_a88;
  undefined1 *local_a80;
  undefined8 uStack_a78;
  long local_a70;
  long lStack_a68;
  undefined8 local_a60;
  undefined *puStack_a58;
  long local_a50;
  undefined4 local_a48;
  long local_a40;
  undefined4 local_a38 [2];
  string asStack_a30 [816];
  undefined8 auStack_700 [2];
  string local_6f0;
  undefined1 auStack_6ef [7];
  size_t local_6e8;
  undefined1 *local_6e0;
  long alStack_3c0 [2];
  char *local_3b0 [104];
  undefined1 auStack_70 [16];
  
  if (((DAT_043b4390 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4390), iVar8 != 0)) {
    local_3b0[2] = (char *)0x0;
    local_3b0[1] = (char *)0x0;
    local_3b0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b28c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b28c0), iVar8 != 0)) {
      FUN_00ee0a60();
      FUN_00100250(PTR__string_04379718,&DAT_043b28a8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b28c0);
    }
    if ((DAT_043b28a8 & 1) == 0) {
      puVar18 = &DAT_043b28a9;
    }
    else {
      puVar18 = DAT_043b28b8;
    }
    pcVar31 = (char *)std::string::append((char *)local_3b0,(ulong)puVar18);
    psVar15 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043b4378,psVar15);
    pcVar31 = local_3b0[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3b0[0] & 1) != 0) && ((byte *)local_3b0[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar21 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar21 = plVar6;
      }
      uVar27 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar21,pcVar31,0,8);
          goto LAB_00f1014c;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar31,0,8);
    }
LAB_00f1014c:
    FUN_00100250(PTR__string_04379718,&DAT_043b4378,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4390);
  }
  std::string::string(&local_6f0,(string *)&DAT_043b4378);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b4370);
  sVar33 = (ulong)((byte)local_6f0 >> 1);
  if (((byte)local_6f0 & 1) != 0) {
    sVar33 = local_6e8;
  }
  std::string::append((ulong)&local_6f0,(char)iVar8);
  if (((byte)local_6f0 & 1) == 0) {
    puVar32 = auStack_6ef;
    local_6e8 = (size_t)((byte)local_6f0 >> 1);
  }
  else {
    puVar32 = local_6e0;
  }
  snprintf(puVar32 + (sVar33 - 1),local_6e8,"%d",(ulong)DAT_043b4370);
  DAT_043b4370 = DAT_043b4370 + 1;
  if (((DAT_043b43b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b43b0), iVar8 != 0)) {
    local_3b0[2] = (char *)0x0;
    local_3b0[1] = (char *)0x0;
    local_3b0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b28c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b28c0), iVar8 != 0)) {
      FUN_00ee0a60();
      FUN_00100250(PTR__string_04379718,&DAT_043b28a8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b28c0);
    }
    if ((DAT_043b28a8 & 1) == 0) {
      puVar18 = &DAT_043b28a9;
    }
    else {
      puVar18 = DAT_043b28b8;
    }
    pcVar31 = (char *)std::string::append((char *)local_3b0,(ulong)puVar18);
    psVar15 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043b4398,psVar15);
    pcVar31 = local_3b0[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3b0[0] & 1) != 0) && ((byte *)local_3b0[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar21 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar21 = plVar6;
      }
      uVar27 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar27 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar21,pcVar31,0,8);
          goto LAB_00f102b4;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar31,0,8);
    }
LAB_00f102b4:
    FUN_00100250(PTR__string_04379718,&DAT_043b4398,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b43b0);
  }
  if ((DAT_043b4398 & 1) == 0) {
    uVar35 = 0x43b4399;
    if (((byte)local_6f0 & 1) != 0) goto LAB_00f0dbf4;
LAB_00f0ff80:
    puVar32 = (undefined1 *)((ulong)&local_6f0 | 1);
  }
  else {
    uVar35 = DAT_043b43a8;
    if (((byte)local_6f0 & 1) == 0) goto LAB_00f0ff80;
LAB_00f0dbf4:
    puVar32 = local_6e0;
  }
  if (((DAT_043b43c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b43c0), iVar8 != 0)) {
    DAT_043b43b8 = 0x1d0;
    __cxa_guard_release(&DAT_043b43c0);
  }
  if (((DAT_043b43d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b43d0), iVar8 != 0)) {
    DAT_043b43c8 = 0x1d7;
    __cxa_guard_release(&DAT_043b43d0);
  }
  uVar27 = DAT_043b43b8;
  lVar12 = FUN_00153520(param_1,DAT_043b43b8);
  if ((uVar27 < ((ulong)(uint)-(int)lVar12 & 7 | 0x1d0)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar27 = DAT_043b43c8;
    lVar12 = FUN_00153520(param_1,DAT_043b43c8);
    if ((uVar27 < ((ulong)(uint)-(int)lVar12 & 7 | 0x1d0)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043b43f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b43f0), iVar8 != 0)) {
        if (((DAT_043b4428 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4428), iVar8 != 0)) {
          DAT_043b43f8 = 0x16;
          DAT_043b4408 = (byte *)0x0;
          DAT_043b43f9._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043b4400 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043b4410 = 0x2a;
          _DAT_043b4404 = 0;
          DAT_043b4420._7_1_ = 0;
          DAT_043b4420._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043b4420._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043b4420._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043b4420._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043b4420._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043b4419 = s__anonymous_namespace__039071f8[8];
          DAT_043b4419_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043b4419_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043b4419_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043b4419_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043b441e = s__anonymous_namespace__039071f8._13_2_;
          DAT_043b4420._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043b4411._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043b4411._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043b4420._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043b43f8,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043b4428);
        }
        plVar6 = DAT_043f1798;
        lVar12 = tpidr_el0;
        plVar21 = *(long **)(lVar12 + 0x20);
        if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
          *(long **)(lVar12 + 0x20) = DAT_043f1798;
          plVar21 = plVar6;
        }
        puVar16 = (undefined1 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x630,8);
        _DAT_043b43d8 = (char *)0x631;
        DAT_043b43e0 = (byte *)0x62d;
        DAT_043b43e8 = puVar16;
        memcpy(puVar16,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<common::lua::command::Global, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19>, char const (&)[15], gamesys::GameManager *(*)(), char const (&)[14], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/lua_global_glue.cpp:31:23), char const (&)[22], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/lua_global_glue.cpp:32:31), char const (&)[21], field::FieldResidentData *(*)(), char const (&)[19], field::player::FieldPlayerComponent *(*)(), char const (&)[15], field::ride::RideManager *(*)(), char const (&)[18], field::content::TerrainManager *(*)(), char const (&)[24], field::content::FieldCameraComponent *(*)(), char const (&)[29], field::content::ui::FieldMessageWindowManager *(*)(), char const (&)[15], fade::FadeManager *(*)(), char const (&)[17], field::content::CameraManager *(*)(), char const (&)[22], event_script::EventScriptManager *(*)(), char const (&)[28], event_script::EventProgressTimeManager *(*)(), char const (&)[14], savedata::SaveSystem *(*)(), char const (&)[14], field::FieldLight *(*)(), char const (&)[22], gfl::audio::BGMLayerController (*)(const char *), char const (&)[22], field::content::FieldObjectForHaxe *(*)(), char const (&)[12], gamesys::hid::Vibrator *(*)(), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
               ,0x62d);
        puVar16[0x62d] = 0;
        std::string::find(-0x28,0x5b);
        uVar30 = std::string::find(-0x28,0x3d);
        uVar27 = std::string::rfind(-0x28,0x5d);
        if (uVar27 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043b43d8 & 1) == 0) {
            uVar27 = (ulong)(DAT_043b43d8 >> 1);
          }
          else {
            uVar27 = (ulong)DAT_043b43e0;
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
          if (((ulong)_DAT_043b43d8 & 1) == 0) {
            uVar30 = (ulong)(DAT_043b43d8 >> 1);
          }
          else {
            uVar30 = (ulong)DAT_043b43e0;
          }
        }
        if (uVar22 < uVar30 - 1) {
          uVar22 = uVar22 + 1;
        }
        std::string::string((string *)local_3b0,(string *)&DAT_043b43d8,uVar22,uVar27 - uVar22,
                            (allocator *)&DAT_043b43d8);
        if (((ulong)_DAT_043b43d8 & 1) != 0) {
          *DAT_043b43e8 = 0;
          plVar6 = DAT_043f1798;
          puVar16 = DAT_043b43e8;
          DAT_043b43e0 = (byte *)0x0;
          if ((((ulong)_DAT_043b43d8 & 1) != 0) && (DAT_043b43e8 != (undefined1 *)0x0)) {
            plVar21 = *(long **)(lVar12 + 0x20);
            if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
              *(long **)(lVar12 + 0x20) = DAT_043f1798;
              plVar21 = plVar6;
            }
            uVar27 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar27 & 1) != 0) {
              if (*(char *)(lVar12 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar12 + 0x38d488) = 1;
                *(undefined8 *)(lVar12 + 0x38d478) = 0;
                *(undefined8 *)(lVar12 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar12 + 0x38d480)) {
                FUN_02bcc824(plVar21,puVar16,0,8);
                goto LAB_00f106e8;
              }
            }
            (**(code **)(*plVar21 + 0x18))(plVar21,puVar16,0,8);
          }
        }
LAB_00f106e8:
        uVar10 = (uint)local_3b0[0] & 0xff;
        uVar34 = (uint)local_3b0[0] & 1;
        pbVar26 = (byte *)((ulong)local_3b0[0] >> 1 & 0x7f);
        DAT_043b43e8 = (byte *)local_3b0[2];
        _DAT_043b43d8 = local_3b0[0];
        DAT_043b43e0 = (byte *)local_3b0[1];
        if (((ulong)local_3b0[0] & 1) == 0) {
          pbVar17 = &DAT_043b43d9;
          pbVar28 = pbVar26;
          if ((byte *)0xd < pbVar26) goto LAB_00f10720;
        }
        else {
          pbVar28 = (byte *)local_3b0[1];
          pbVar17 = (byte *)local_3b0[2];
          if (0xd < (long)local_3b0[1]) {
LAB_00f10720:
            pbVar25 = pbVar17 + (long)pbVar28;
            lVar12 = 1;
            while (pbVar28 != (byte *)0xd) {
              pbVar28 = pbVar28 + -1;
              if (pbVar17[(long)pbVar28] == 0x6b) {
                lVar29 = 0;
                do {
                  if (lVar29 == -0xd) {
                    if ((lVar12 != -0xd) &&
                       (pbVar25 + (~(ulong)pbVar17 - 0xd) != (byte *)0xffffffffffffffff)) {
                      std::string::erase(0x43b43d8,(ulong)(pbVar25 + (~(ulong)pbVar17 - 0xd) + -2));
                      uVar10 = (uint)DAT_043b43d8;
                      uVar34 = DAT_043b43d8 & 1;
                      pbVar26 = (byte *)(ulong)(DAT_043b43d8 >> 1);
                    }
                    goto LAB_00f107cc;
                  }
                  lVar20 = lVar29 + -2;
                  lVar14 = lVar29 + 0xc;
                  lVar29 = lVar29 + -1;
                } while (pbVar25[lVar20] == "seperator_mark"[lVar14]);
              }
              pbVar25 = pbVar25 + -1;
              lVar12 = lVar12 + 1;
            }
          }
        }
LAB_00f107cc:
        pbVar17 = DAT_043b43e0;
        pbVar28 = pbVar26;
        if (uVar34 != 0) {
          pbVar28 = DAT_043b43e0;
        }
        if (pbVar28 != (byte *)0x0) {
          pbVar26 = &DAT_043b43d9;
          if (uVar34 != 0) {
            pbVar26 = DAT_043b43e8;
          }
          iVar8 = isblank((uint)*pbVar26);
          if (iVar8 == 0) {
            uVar34 = uVar10 & 1;
            pbVar26 = (byte *)(ulong)(uVar10 >> 1);
          }
          else {
            do {
              std::string::erase(0x43b43d8,0);
              pbVar17 = DAT_043b43e0;
              uVar10 = (uint)DAT_043b43d8;
              pbVar26 = (byte *)(ulong)(DAT_043b43d8 >> 1);
              uVar34 = DAT_043b43d8 & 1;
              pbVar28 = pbVar26;
              if (((ulong)_DAT_043b43d8 & 1) != 0) {
                pbVar28 = DAT_043b43e0;
              }
              if (pbVar28 == (byte *)0x0) break;
              pbVar28 = &DAT_043b43d9;
              if (((ulong)_DAT_043b43d8 & 1) != 0) {
                pbVar28 = DAT_043b43e8;
              }
              iVar8 = isblank((uint)*pbVar28);
            } while (iVar8 != 0);
          }
        }
        bVar7 = uVar34 == 0;
        pbVar28 = pbVar26;
        if (!bVar7) {
          pbVar28 = pbVar17;
        }
        if (pbVar28 != (byte *)0x0) {
          do {
            pbVar26 = (byte *)(ulong)(uVar10 >> 1);
            pbVar28 = pbVar26;
            pbVar25 = &DAT_043b43d9;
            if (!bVar7) {
              pbVar28 = pbVar17;
              pbVar25 = DAT_043b43e8;
            }
            iVar8 = isblank((uint)pbVar25[(long)(pbVar28 + -1)]);
            if (iVar8 == 0) break;
            FUN_00ee01e0(&DAT_043b43d8);
            uVar10 = (uint)DAT_043b43d8;
            bVar7 = ((ulong)_DAT_043b43d8 & 1) == 0;
            pbVar26 = (byte *)(ulong)(DAT_043b43d8 >> 1);
            pbVar28 = pbVar26;
            if (!bVar7) {
              pbVar28 = DAT_043b43e0;
            }
            pbVar17 = DAT_043b43e0;
          } while (pbVar28 != (byte *)0x0);
          uVar34 = uVar10 & 1;
        }
        if (uVar34 != 0) {
          pbVar26 = pbVar17;
        }
        local_a88 = &DAT_043b43d9;
        if (uVar34 != 0) {
          local_a88 = DAT_043b43e8;
        }
        sVar33 = CONCAT44(_DAT_043b4404,ram0x043b4400);
        pbVar28 = DAT_043b4408;
        if ((DAT_043b43f8 & 1) == 0) {
          sVar33 = (size_t)(DAT_043b43f8 >> 1);
          pbVar28 = (byte *)&DAT_043b43f9;
        }
        if (sVar33 == 0) {
          uVar27 = 0;
          goto LAB_00f10e84;
        }
        if ((long)sVar33 <= (long)pbVar26) {
          pbVar25 = local_a88 + (long)pbVar26;
          bVar5 = *pbVar28;
          pbVar17 = local_a88;
          pbVar23 = pbVar26;
          do {
            if ((0xfffffffffffffffe < (long)pbVar23 - sVar33) ||
               (pbVar17 = memchr(pbVar17,(uint)bVar5,((long)pbVar23 - sVar33) + 1),
               pbVar17 == (byte *)0x0)) break;
            iVar8 = memcmp(pbVar17,pbVar28,sVar33);
            if (iVar8 == 0) goto LAB_00f10e6c;
            pbVar17 = pbVar17 + 1;
            pbVar23 = pbVar25 + -(long)pbVar17;
          } while ((long)sVar33 <= (long)pbVar23);
        }
LAB_00f10cbc:
        sVar33 = CONCAT26(_DAT_043b441e,CONCAT51(_DAT_043b4419,DAT_043b4411._7_1_));
        pbVar28 = (byte *)CONCAT17(DAT_043b4420._7_1_,
                                   CONCAT16(DAT_043b4420._6_1_,
                                            CONCAT51(DAT_043b4420._1_5_,(char)DAT_043b4420)));
        if ((DAT_043b4410 & 1) == 0) {
          pbVar28 = (byte *)&DAT_043b4411;
          sVar33 = (ulong)(DAT_043b4410 >> 1);
        }
        if (sVar33 == 0) {
          uVar27 = 0;
LAB_00f10d3c:
          do {
            while( true ) {
              std::string::erase(0x43b43d8,uVar27);
              bVar7 = ((ulong)_DAT_043b43d8 & 1) != 0;
              pbVar26 = (byte *)((ulong)_DAT_043b43d8 >> 1 & 0x7f);
              if (bVar7) {
                pbVar26 = DAT_043b43e0;
              }
              sVar33 = CONCAT26(_DAT_043b441e,CONCAT51(_DAT_043b4419,DAT_043b4411._7_1_));
              pbVar17 = (byte *)CONCAT17(DAT_043b4420._7_1_,
                                         CONCAT16(DAT_043b4420._6_1_,
                                                  CONCAT51(DAT_043b4420._1_5_,(char)DAT_043b4420)));
              pbVar28 = DAT_043b43e8;
              if (!bVar7) {
                pbVar28 = &DAT_043b43d9;
              }
              if ((DAT_043b4410 & 1) == 0) {
                pbVar17 = (byte *)&DAT_043b4411;
                sVar33 = (ulong)(DAT_043b4410 >> 1);
              }
              if (sVar33 != 0) break;
              uVar27 = 0;
            }
            if ((long)pbVar26 < (long)sVar33) goto LAB_00f10e10;
            bVar5 = *pbVar17;
            pbVar23 = pbVar28 + (long)pbVar26;
            pbVar25 = pbVar28;
            while( true ) {
              if ((0xfffffffffffffffe < (long)pbVar26 - sVar33) ||
                 (pbVar25 = memchr(pbVar25,(uint)bVar5,((long)pbVar26 - sVar33) + 1),
                 pbVar25 == (byte *)0x0)) goto LAB_00f10e10;
              iVar8 = memcmp(pbVar25,pbVar17,sVar33);
              if (iVar8 == 0) break;
              pbVar25 = pbVar25 + 1;
              pbVar26 = pbVar23 + -(long)pbVar25;
              if ((long)pbVar26 < (long)sVar33) goto LAB_00f10e10;
            }
            if ((pbVar25 == pbVar23) ||
               (uVar27 = (long)pbVar25 - (long)pbVar28, uVar27 == 0xffffffffffffffff))
            goto LAB_00f10e10;
          } while( true );
        }
        if ((long)sVar33 <= (long)pbVar26) {
          pbVar25 = local_a88 + (long)pbVar26;
          bVar5 = *pbVar28;
          pbVar17 = local_a88;
          do {
            if ((0xfffffffffffffffe < (long)pbVar26 - sVar33) ||
               (pbVar17 = memchr(pbVar17,(uint)bVar5,((long)pbVar26 - sVar33) + 1),
               pbVar17 == (byte *)0x0)) break;
            iVar8 = memcmp(pbVar17,pbVar28,sVar33);
            if (iVar8 == 0) {
              if ((pbVar17 != pbVar25) &&
                 (uVar27 = (long)pbVar17 - (long)local_a88, uVar27 != 0xffffffffffffffff))
              goto LAB_00f10d3c;
              break;
            }
            pbVar17 = pbVar17 + 1;
            pbVar26 = pbVar25 + -(long)pbVar17;
          } while ((long)sVar33 <= (long)pbVar26);
        }
LAB_00f10e10:
        FUN_00100250(PTR__string_04379718,&DAT_043b43d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b43f0);
      }
      pbVar26 = DAT_043b43e8;
      if (((ulong)_DAT_043b43d8 & 1) == 0) {
        pbVar26 = &DAT_043b43d9;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar26);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar24 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar24;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar12;
  lVar29 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar29;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar29 != 0) {
    uVar30 = puVar19[2];
    uVar27 = *(ulong *)(lVar12 + 8);
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
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar24;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_041eeac0;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x170);
  iVar8 = FUN_00154450(param_1,puVar32);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_00f11d50,0);
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
  FUN_001522a0(param_1,uVar35);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,uVar35);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_6f0 & 1) != 0) && (local_6e0 != (undefined1 *)0x0)) {
    lVar29 = tpidr_el0;
    plVar21 = *(long **)(lVar29 + 0x20);
    if (*(long **)(lVar29 + 0x20) == (long *)0x0) {
      *(long **)(lVar29 + 0x20) = DAT_043f1798;
      plVar21 = plVar6;
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
        FUN_02bcc824(plVar21,local_6e0,0,8);
        goto LAB_00f0def4;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,local_6e0,0,8);
  }
LAB_00f0def4:
  memset(local_3b0,0,0x340);
  pcVar31 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar20 = lVar12 + 8;
  lVar29 = 0;
  uVar27 = 0;
  pbVar26 = &LAB_00ee1710;
  if (uVar10 != 0) {
    pbVar26 = &LAB_00ee1270;
  }
  puVar1 = (ulong *)(lVar12 + 0x1c8);
  do {
    lVar14 = FUN_008cca50();
    pbVar28 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar28 >> 1);
    if ((*pbVar28 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar28 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar28,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(byte **)(lVar12 + 0x30) = pbVar26;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar30 = 0;
            *(byte **)(lVar12 + 0x180) = pbVar26;
            goto LAB_00f0e07c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(byte **)(lVar12 + 0x38) = pbVar26;
      }
      uVar30 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e07c;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  uVar30 = 1;
  local_3b0[0] = pcVar31;
  local_3b0[1] = (char *)pbVar26;
LAB_00f0e07c:
  pcVar31 = *(char **)(lVar12 + 0x70);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00ee4dfc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00ee1760;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0e1c4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e1c4;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0e1c4:
  pcVar31 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00ee8570;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00ee4ebc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0e308;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e308;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0e308:
  pcVar31 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00eebd4c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00ee8630;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0e44c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e44c;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0e44c:
  pcVar31 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00eef3c0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00eebd9c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0e590;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e590;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0e590:
  pcVar31 = *(char **)(lVar12 + 0xa0);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00ef2ac0;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00eef444;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0e6d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e6d4;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0e6d4:
  pcVar31 = *(char **)(lVar12 + 0xb0);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00ef616c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00ef2b44;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0e818;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e818;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0e818:
  pcVar31 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00ef9950;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00ef61f0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0e95c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0e95c;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0e95c:
  pcVar31 = *(char **)(lVar12 + 0xd0);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00efcfdc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00ef99d4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0eaa0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0eaa0;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0eaa0:
  pcVar31 = *(char **)(lVar12 + 0xe0);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar3 = FUN_00efd4b0;
  if (uVar10 != 0) {
    pcVar3 = (code *)&LAB_00efd060;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar3;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x180) = pcVar3;
            goto LAB_00f0ebe4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0ebe4;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = (char *)pcVar3;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0ebe4:
  pcVar31 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f00b80;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00efd534;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0ed28;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0ed28;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0ed28:
  pcVar31 = *(char **)(lVar12 + 0x100);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f00c88;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f00c04;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0ee6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0ee6c;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0ee6c:
  pcVar31 = *(char **)(lVar12 + 0x110);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f00d90;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f00d0c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0efb0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0efb0;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0efb0:
  pcVar31 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar3 = FUN_00f01260;
  if (uVar10 != 0) {
    pcVar3 = (code *)&LAB_00f00e14;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar3;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x180) = pcVar3;
            goto LAB_00f0f0f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0f0f4;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = (char *)pcVar3;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0f0f4:
  pcVar31 = *(char **)(lVar12 + 0x130);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f049ec;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f012e4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0f238;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0f238;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0f238:
  pcVar31 = *(char **)(lVar12 + 0x140);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f08254;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f04a3c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0f37c;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0f37c;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0f37c:
  pcVar31 = *(char **)(lVar12 + 0x150);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f0b92c;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f08334;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0f4c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0f4c0;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0f4c0:
  pcVar31 = *(char **)(lVar12 + 0x160);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f0be50;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f0b9b0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0f604;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0f604;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0f604:
  pcVar31 = *(char **)(lVar12 + 0x170);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f0d8dc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f0bea0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) {
      iVar8 = (int)uVar27;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x180) = pcVar2;
            goto LAB_00f0f748;
          }
          *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
      goto LAB_00f0f748;
    }
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar27 != 0x20);
  alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
  local_3b0[uVar30 * 2 + 1] = pcVar2;
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0f748:
  pcVar31 = *(char **)(lVar12 + 0x178);
  sVar13 = strlen(pcVar31);
  sVar33 = 10;
  if (sVar13 < 0xb) {
    sVar33 = sVar13;
  }
  if (sVar33 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar31,sVar33);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar27 = 0;
  pcVar2 = &LAB_00f0dacc;
  if (uVar10 != 0) {
    pcVar2 = &LAB_00f0da94;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar26 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar31);
    sVar33 = (ulong)(*pbVar26 >> 1);
    if ((*pbVar26 & 1) != 0) {
      sVar33 = *(size_t *)(pbVar26 + 8);
    }
    if ((sVar13 == sVar33) &&
       (iVar8 = std::string::compare((ulong)pbVar26,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar8 == 0)) break;
    uVar27 = uVar27 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar27 == 0x20) {
LAB_00f0f8a4:
      alStack_3c0[uVar30 * 2 + 2] = (long)pcVar31;
      local_3b0[uVar30 * 2 + 1] = pcVar2;
      uVar30 = (ulong)((int)uVar30 + 1);
LAB_00f0f8b4:
      uVar10 = (uint)*puVar1;
joined_r0x00f0f840:
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
        alStack_3c0[uVar30 * 2 + 2] = lVar29;
        local_3b0[uVar30 * 2 + 1] = &LAB_00f0c520;
        uVar30 = (ulong)((int)uVar30 + 1);
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
        uVar27 = (ulong)((int)uVar30 + 1);
        alStack_3c0[uVar30 * 2 + 2] = lVar29;
        local_3b0[uVar30 * 2 + 1] = "c\x04";
        lVar29 = *(long *)(lVar12 + 0x180);
      }
      else {
        lVar29 = *(long *)(lVar12 + 0x180);
        uVar27 = uVar30;
      }
      if (lVar29 != 0) {
        lVar29 = FUN_008cca50();
        if ((*(byte *)(lVar29 + 0x1c8) & 1) == 0) {
          lVar29 = lVar29 + 0x1c9;
        }
        else {
          lVar29 = *(long *)(lVar29 + 0x1d8);
        }
        pcVar31 = *(char **)(lVar12 + 0x180);
        alStack_3c0[uVar27 * 2 + 2] = lVar29;
        local_3b0[uVar27 * 2 + 1] = pcVar31;
        uVar27 = (ulong)((int)uVar27 + 1);
      }
      alStack_3c0[uVar27 * 2 + 2] = 0;
      local_3b0[uVar27 * 2 + 1] = (char *)0x0;
      memcpy(&local_6f0,local_3b0,0x340);
      memcpy(asStack_a30,local_3b0,0x340);
      lVar29 = FUN_008cca50();
      lVar14 = uVar27 - 1;
      pcVar31 = (char *)alStack_3c0[lVar14 * 2 + 2];
      sVar13 = strlen(pcVar31);
      sVar33 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar33 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar13 == sVar33) &&
         (iVar8 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
         iVar8 == 0)) {
        auStack_700[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_6ef + lVar14 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_a30 + lVar14 * 0x10) = alStack_3c0[lVar14 * 2 + 2];
      *(undefined1 **)(asStack_a30 + (lVar14 * 2 + 1) * 8) = &LAB_00f10f60;
      FUN_00151fe0(param_1,0,2);
      local_a38[0] = FUN_0014feb0(param_1,0xffffffff);
      local_a40 = param_1;
      if (((DAT_043b28c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b28c0), iVar8 != 0)) {
        FUN_00ee0a60();
        FUN_00100250(PTR__string_04379718,&DAT_043b28a8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b28c0);
      }
      uVar9 = local_a38[0];
      if ((DAT_043b28a8 & 1) == 0) {
        uVar27 = (ulong)(DAT_043b28a8 >> 1);
        puVar18 = &DAT_043b28a9;
      }
      else {
        uVar27 = DAT_043b28b0;
        puVar18 = DAT_043b28b8;
      }
      FUN_001514f0(param_1,puVar18,uVar27);
      FUN_00152550(param_1,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_00f0c430,0);
      FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar15 = asStack_a30;
          FUN_00edecf0();
          pbVar26 = &DAT_043b2810;
        }
        else if (lVar29 == 0) {
          psVar15 = &local_6f0;
          FUN_00edeafc();
          pbVar26 = &DAT_043b2798;
        }
        else {
          psVar15 = (string *)local_3b0;
          FUN_00edeee4();
          pbVar26 = &DAT_043b2888;
        }
        pbVar28 = pbVar26 + 1;
        if ((*pbVar26 & 1) != 0) {
          pbVar28 = *(byte **)(pbVar26 + 0x10);
        }
        FUN_00154450(param_1,pbVar28);
        local_a48 = FUN_0014feb0(param_1,0xffffffff);
        local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
        local_a50 = param_1;
        FUN_008fe304(auStack_70,param_1,&local_a80,&local_a40,local_a48);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar12);
        FUN_00155a20(param_1,psVar15,2);
        uVar9 = local_a48;
        if (*(long *)(lVar12 + 0x1b0) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar9,"class_check");
        }
        uVar9 = local_a48;
        if (*(long *)(lVar12 + 0x1b8) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar9,"class_cast");
        }
        uVar9 = local_a48;
        uVar35 = *(undefined8 *)(lVar12 + 400);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar12);
        FUN_00151810(param_1,lVar20);
        FUN_001516f0(param_1,uVar35,3);
        FUN_00152550(param_1,uVar9,&DAT_03955ac7);
        uVar9 = local_a48;
        uVar35 = *(undefined8 *)(lVar12 + 0x198);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar12);
        FUN_00151810(param_1,lVar20);
        FUN_001516f0(param_1,uVar35,3);
        FUN_00152550(param_1,uVar9,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,1);
          FUN_008fe304(auStack_70,param_1,&local_a80,&local_a50,local_a48);
        }
        else {
          local_a80 = &LAB_00f11050;
          uStack_a78 = 0;
          local_a70 = lVar12;
          lStack_a68 = lVar20;
          FUN_00f10fb0(param_1,1,&local_a80,local_a48);
          local_a80 = &LAB_00f11360;
          uStack_a78 = 0;
          local_a70 = lVar12;
          lStack_a68 = lVar20;
          FUN_00f10fb0(param_1,2,&local_a80,local_a48);
        }
        FUN_00151fe0(param_1,0,3);
        uVar9 = FUN_0014feb0(param_1,0xffffffff);
        local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_1,&local_a80,&local_a40,uVar9);
        if (*(undefined1 **)(lVar12 + 0x188) != (undefined1 *)0x0) {
          uStack_a78 = 0;
          local_a80 = *(undefined1 **)(lVar12 + 0x188);
          local_a70 = lVar12;
          lStack_a68 = lVar20;
          FUN_00f10fb0(param_1,4,&local_a80,uVar9);
        }
        if (*(char *)(lVar12 + 0x1c0) != '\0') {
          local_a80 = &LAB_00f11050;
          uStack_a78 = 0;
          local_a70 = lVar12;
          lStack_a68 = lVar20;
          FUN_00f10fb0(param_1,1,&local_a80,uVar9);
          local_a80 = &LAB_00f11360;
          uStack_a78 = 0;
          local_a70 = lVar12;
          lStack_a68 = lVar20;
          FUN_00f10fb0(param_1,2,&local_a80,uVar9);
        }
        uVar11 = local_a48;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar9);
        }
        FUN_00152ae0(param_1,uVar11);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_a50,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_00edf124();
      if ((DAT_043b2900 & 1) == 0) {
        puVar18 = &DAT_043b2901;
      }
      else {
        puVar18 = DAT_043b2910;
      }
      FUN_00154450(param_1,puVar18);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_a80._0_4_ = 0x1e;
      FUN_008fe304(&local_a50,param_1,&local_a80,&local_a40,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,local_3b0,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
      FUN_008fe304(&local_a50,param_1,&local_a80,&local_a40,uVar11);
      local_a80 = *(undefined1 **)(lVar12 + 0x188);
      if (local_a80 != (undefined1 *)0x0) {
        uStack_a78 = 0;
        local_a70 = lVar12;
        lStack_a68 = lVar20;
        FUN_00f10fb0(param_1,4,&local_a80,uVar11);
      }
      local_a80 = &LAB_00f11728;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a78888;
      local_a70 = lVar12;
      lStack_a68 = lVar20;
      FUN_00f11670(param_1,1,&local_a80,uVar11);
      local_a80 = &LAB_00f11a38;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a78888;
      local_a70 = lVar12;
      lStack_a68 = lVar20;
      FUN_00f11670(param_1,2,&local_a80,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_a38[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar8 = (int)uVar27;
  if (iVar8 == 1) {
    *(undefined1 *)(lVar12 + 0x58) = 1;
    *(char **)(lVar12 + 0x30) = pcVar2;
    *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
    goto LAB_00f0f8b4;
  }
  if (iVar8 == 2) {
    *(undefined1 *)(lVar12 + 0x58) = 1;
    *(char **)(lVar12 + 0x38) = pcVar2;
    *(ulong *)(lVar12 + 0x1c8) = *(ulong *)(lVar12 + 0x1c8) | 1L << (uVar27 & 0x3f);
    uVar10 = (uint)*puVar1;
    goto joined_r0x00f0f840;
  }
  if (iVar8 == 0x13) {
    *(char **)(lVar12 + 0x180) = pcVar2;
    uVar10 = (uint)*puVar1;
    goto joined_r0x00f0f840;
  }
  *puVar1 = *puVar1 | 1L << (uVar27 & 0x3f);
  goto LAB_00f0f8a4;
LAB_00f10e6c:
  if ((pbVar17 == pbVar25) ||
     (uVar27 = (long)pbVar17 - (long)local_a88, uVar27 == 0xffffffffffffffff)) goto LAB_00f10cbc;
LAB_00f10e84:
  while( true ) {
    std::string::erase(0x43b43d8,uVar27);
    if (((ulong)_DAT_043b43d8 & 1) == 0) {
      local_a88 = &DAT_043b43d9;
      pbVar26 = (byte *)((ulong)_DAT_043b43d8 >> 1 & 0x7f);
    }
    else {
      pbVar26 = DAT_043b43e0;
      local_a88 = DAT_043b43e8;
    }
    sVar33 = CONCAT44(_DAT_043b4404,ram0x043b4400);
    if ((DAT_043b43f8 & 1) == 0) {
      sVar33 = (ulong)(DAT_043b43f8 >> 1);
      pbVar28 = (byte *)&DAT_043b43f9;
    }
    else {
      pbVar28 = DAT_043b4408;
    }
    if (sVar33 != 0) break;
    uVar27 = 0;
  }
  if ((long)pbVar26 < (long)sVar33) goto LAB_00f10cbc;
  pbVar25 = local_a88 + (long)pbVar26;
  bVar5 = *pbVar28;
  pbVar17 = local_a88;
  pbVar23 = pbVar26;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pbVar23 - sVar33) ||
       (pbVar17 = memchr(pbVar17,(uint)bVar5,((long)pbVar23 - sVar33) + 1), pbVar17 == (byte *)0x0))
    goto LAB_00f10cbc;
    iVar8 = memcmp(pbVar17,pbVar28,sVar33);
    if (iVar8 == 0) break;
    pbVar17 = pbVar17 + 1;
    pbVar23 = pbVar25 + -(long)pbVar17;
    if ((long)pbVar23 < (long)sVar33) goto LAB_00f10cbc;
  }
  goto LAB_00f10e6c;
}


