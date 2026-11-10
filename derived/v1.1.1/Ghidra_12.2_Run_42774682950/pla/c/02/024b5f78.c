/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024b5f78; name: FUN_024b5f78
 */


/* WARNING: Removing unreachable block (ram,0x024b7b84) */
/* WARNING: Removing unreachable block (ram,0x024b7a7c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_024b5f78(long param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
  undefined *puVar3;
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
  undefined8 *puVar17;
  long *plVar18;
  byte *pbVar19;
  undefined8 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  ulong uVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *local_e58;
  uint local_e48;
  undefined1 *local_e40;
  undefined8 uStack_e38;
  long local_e30;
  long lStack_e28;
  undefined8 local_e20;
  undefined *puStack_e18;
  undefined4 local_e10 [2];
  long local_e08;
  undefined4 local_e00;
  long local_df8;
  undefined4 local_df0 [2];
  string asStack_de8 [1136];
  undefined8 auStack_978 [2];
  string local_968;
  undefined1 auStack_967 [7];
  size_t local_960;
  undefined1 *local_958;
  long alStack_4f8 [2];
  char *local_4e8 [145];
  
  if (((DAT_043e7500 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e7500), iVar8 != 0)) {
    local_4e8[2] = (char *)0x0;
    local_4e8[1] = (char *)0x0;
    local_4e8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e73b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e73b0), iVar8 != 0)) {
      FUN_024ba370();
      FUN_00100250(PTR__string_04379718,&DAT_043e7398,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e73b0);
    }
    puVar3 = DAT_043e73a8;
    if ((DAT_043e7398 & 1) == 0) {
      puVar3 = &DAT_043e7399;
    }
    pcVar27 = (char *)std::string::append((char *)local_4e8,(ulong)puVar3);
    psVar15 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e74e8,psVar15);
    pcVar27 = local_4e8[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_4e8[0] & 1) != 0) && ((byte *)local_4e8[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar18 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar18 = plVar6;
      }
      uVar23 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar18,pcVar27,0,8);
          goto LAB_024b6ef8;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,pcVar27,0,8);
    }
LAB_024b6ef8:
    FUN_00100250(PTR__string_04379718,&DAT_043e74e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7500);
  }
  std::string::string(&local_968,(string *)&DAT_043e74e8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e74e0);
  sVar2 = (ulong)((byte)local_968 >> 1);
  if (((byte)local_968 & 1) != 0) {
    sVar2 = local_960;
  }
  std::string::append((ulong)&local_968,(char)iVar8);
  if (((byte)local_968 & 1) == 0) {
    puVar28 = auStack_967;
    local_960 = (size_t)((byte)local_968 >> 1);
  }
  else {
    puVar28 = local_958;
  }
  snprintf(puVar28 + (sVar2 - 1),local_960,"%d",(ulong)DAT_043e74e0);
  DAT_043e74e0 = DAT_043e74e0 + 1;
  if (((DAT_043e7520 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e7520), iVar8 != 0)) {
    local_4e8[2] = (char *)0x0;
    local_4e8[1] = (char *)0x0;
    local_4e8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043e73b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e73b0), iVar8 != 0)) {
      FUN_024ba370();
      FUN_00100250(PTR__string_04379718,&DAT_043e7398,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e73b0);
    }
    puVar3 = DAT_043e73a8;
    if ((DAT_043e7398 & 1) == 0) {
      puVar3 = &DAT_043e7399;
    }
    pcVar27 = (char *)std::string::append((char *)local_4e8,(ulong)puVar3);
    psVar15 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e7508,psVar15);
    pcVar27 = local_4e8[2];
    plVar6 = DAT_043f1798;
    if ((((ulong)local_4e8[0] & 1) != 0) && ((byte *)local_4e8[2] != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar18 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar18 = plVar6;
      }
      uVar23 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar18,pcVar27,0,8);
          goto LAB_024b7068;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,pcVar27,0,8);
    }
LAB_024b7068:
    FUN_00100250(PTR__string_04379718,&DAT_043e7508,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7520);
  }
  puVar3 = DAT_043e7518;
  if ((DAT_043e7508 & 1) == 0) {
    puVar3 = &DAT_043e7509;
  }
  if (((byte)local_968 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_968 | 1);
  }
  else {
    puVar28 = local_958;
  }
  if (((DAT_043e7530 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e7530), iVar8 != 0)) {
    DAT_043e7528 = 800;
    __cxa_guard_release(&DAT_043e7530);
  }
  if (((DAT_043e7540 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e7540), iVar8 != 0)) {
    DAT_043e7538 = 0x327;
    __cxa_guard_release(&DAT_043e7540);
  }
  uVar23 = DAT_043e7528;
  lVar12 = FUN_00153520(param_2,DAT_043e7528);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 800)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043e7538;
    lVar12 = FUN_00153520(param_2,DAT_043e7538);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 800)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      if (((DAT_043e7560 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e7560), iVar8 != 0)) {
        if (((DAT_043e7598 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e7598), iVar8 != 0)) {
          DAT_043e7568 = 0x16;
          DAT_043e7578 = (byte *)0x0;
          DAT_043e7569._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043e7570 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043e7580 = 0x2a;
          _DAT_043e7574 = 0;
          DAT_043e7590._7_1_ = 0;
          DAT_043e7590._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043e7590._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043e7590._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043e7590._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043e7590._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043e7589 = s__anonymous_namespace__039071f8[8];
          DAT_043e7589_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043e7589_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043e7589_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043e7589_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043e758e = s__anonymous_namespace__039071f8._13_2_;
          DAT_043e7590._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043e7581._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043e7581._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043e7590._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043e7568,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043e7598);
        }
        plVar6 = DAT_043f1798;
        lVar12 = tpidr_el0;
        plVar18 = *(long **)(lVar12 + 0x20);
        if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
          *(long **)(lVar12 + 0x20) = DAT_043f1798;
          plVar18 = plVar6;
        }
        puVar16 = (undefined1 *)(**(code **)(*plVar18 + 0x10))(plVar18,0xba0,8);
        _DAT_043e7548 = (char *)0xba1;
        DAT_043e7550 = (byte *)0xb93;
        DAT_043e7558 = puVar16;
        memcpy(puVar16,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::ride::NyuuraSettingParam, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39>, char const (&)[32], field::ride::CameraaInterpolationParam field::ride::NyuuraSettingParam::*, char const (&)[36], field::ride::CameraaInterpolationParam field::ride::NyuuraSettingParam::*, char const (&)[26], field::ride::CameraaInterpolationParam field::ride::NyuuraSettingParam::*, char const (&)[30], field::ride::CameraaInterpolationParam field::ride::NyuuraSettingParam::*, char const (&)[28], field::ride::CameraaInterpolationParam field::ride::NyuuraSettingParam::*, char const (&)[20], float field::ride::NyuuraSettingParam::*, char const (&)[25], float field::ride::NyuuraSettingParam::*, char const (&)[26], gfl::math::Vector3 field::ride::NyuuraSettingParam::*, char const (&)[24], float field::ride::NyuuraSettingParam::*, char const (&)[34], float field::ride::NyuuraSettingParam::*, char const (&)[28], float field::ride::NyuuraSettingParam::*, char const (&)[34], float field::ride::NyuuraSettingParam::*, char const (&)[33], float field::ride::NyuuraSettingParam::*, char const (&)[38], float field::ride::NyuuraSettingParam::*, char const (&)[37], float field::ride::NyuuraSettingParam::*, char const (&)[40], float field::ride::NyuuraSettingParam::*, char const (&)[39], float field::ride::NyuuraSettingParam::*, char const (&)[34], int field::ride::NyuuraSettingParam::*, char const (&)[31], float field::ride::NyuuraSettingParam::*, char const (&)[26], float field::ride::NyuuraSettingParam::*, char const (&)[26], float field::ride::NyuuraSettingParam::*, char const (&)[21], float field::ride::NyuuraSettingParam::*, char const (&)[22], float field::ride::NyuuraSettingParam::*, char const (&)[32], float field::ride::NyuuraSettingParam::*, char const (&)[23], int field::ride::NyuuraSettingParam::*, char const (&)[21], int..." /* TRUNCATED STRING LITERAL */
               ,0xb93);
        puVar16[0xb93] = 0;
        std::string::find('H',0x5b);
        uVar26 = std::string::find('H',0x3d);
        uVar23 = std::string::rfind('H',0x5d);
        if (uVar23 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043e7548 & 1) == 0) {
            uVar23 = (ulong)(DAT_043e7548 >> 1);
          }
          else {
            uVar23 = (ulong)DAT_043e7550;
          }
          uVar30 = 0;
          if (uVar26 != 0xffffffffffffffff) {
            uVar30 = uVar26;
          }
          uVar26 = uVar23;
        }
        else {
          uVar30 = 0;
          if (uVar26 != 0xffffffffffffffff) {
            uVar30 = uVar26;
          }
          if (((ulong)_DAT_043e7548 & 1) == 0) {
            uVar26 = (ulong)(DAT_043e7548 >> 1);
          }
          else {
            uVar26 = (ulong)DAT_043e7550;
          }
        }
        if (uVar30 < uVar26 - 1) {
          uVar30 = uVar30 + 1;
        }
        std::string::string((string *)local_4e8,(string *)&DAT_043e7548,uVar30,uVar23 - uVar30,
                            (allocator *)&DAT_043e7548);
        if (((ulong)_DAT_043e7548 & 1) != 0) {
          *DAT_043e7558 = 0;
          plVar6 = DAT_043f1798;
          puVar16 = DAT_043e7558;
          DAT_043e7550 = (byte *)0x0;
          if ((((ulong)_DAT_043e7548 & 1) != 0) && (DAT_043e7558 != (undefined1 *)0x0)) {
            plVar18 = *(long **)(lVar12 + 0x20);
            if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
              *(long **)(lVar12 + 0x20) = DAT_043f1798;
              plVar18 = plVar6;
            }
            uVar23 = (**(code **)(*plVar18 + 0xc0))(plVar18);
            if ((uVar23 & 1) != 0) {
              if (*(char *)(lVar12 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar12 + 0x38d488) = 1;
                *(undefined8 *)(lVar12 + 0x38d478) = 0;
                *(undefined8 *)(lVar12 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar12 + 0x38d480)) {
                FUN_02bcc824(plVar18,puVar16,0,8);
                goto LAB_024b7398;
              }
            }
            (**(code **)(*plVar18 + 0x18))(plVar18,puVar16,0,8);
          }
        }
LAB_024b7398:
        pbVar22 = (byte *)((ulong)local_4e8[0] >> 1 & 0x7f);
        _DAT_043e7548 = local_4e8[0];
        DAT_043e7550 = (byte *)local_4e8[1];
        DAT_043e7558 = (byte *)local_4e8[2];
        uVar10 = (uint)local_4e8[0] & 0xff;
        if (((ulong)local_4e8[0] & 1) == 0) {
          pbVar31 = &DAT_043e7549;
          pbVar24 = pbVar22;
        }
        else {
          pbVar31 = (byte *)local_4e8[2];
          pbVar24 = (byte *)local_4e8[1];
        }
        local_e48 = (uint)local_4e8[0] & 1;
        if (0xd < (long)pbVar24) {
          pbVar21 = pbVar31 + (long)pbVar24;
          lVar12 = 1;
          while (pbVar24 != (byte *)0xd) {
            pbVar24 = pbVar24 + -1;
            if (pbVar31[(long)pbVar24] == 0x6b) {
              lVar25 = 0;
              do {
                if (lVar25 == -0xd) {
                  if ((lVar12 != -0xd) &&
                     (pbVar21 + (~(ulong)pbVar31 - 0xd) != (byte *)0xffffffffffffffff)) {
                    std::string::erase(0x43e7548,(ulong)(pbVar21 + (~(ulong)pbVar31 - 0xd) + -2));
                    uVar10 = (uint)DAT_043e7548;
                    pbVar22 = (byte *)(ulong)(DAT_043e7548 >> 1);
                    local_e48 = (uint)_DAT_043e7548 & 1;
                  }
                  goto LAB_024b7488;
                }
                lVar29 = lVar25 + -2;
                lVar14 = lVar25 + 0xc;
                lVar25 = lVar25 + -1;
              } while (pbVar21[lVar29] == "seperator_mark"[lVar14]);
            }
            pbVar21 = pbVar21 + -1;
            lVar12 = lVar12 + 1;
          }
        }
LAB_024b7488:
        pbVar21 = DAT_043e7558;
        pbVar24 = DAT_043e7550;
        bVar7 = local_e48 == 0;
        pbVar31 = pbVar22;
        if (!bVar7) {
          pbVar31 = DAT_043e7550;
        }
        if (pbVar31 != (byte *)0x0) {
          pbVar31 = &DAT_043e7549;
          if (local_e48 != 0) {
            pbVar31 = DAT_043e7558;
          }
          iVar8 = isblank((uint)*pbVar31);
          if (iVar8 == 0) {
            local_e48 = uVar10 & 1;
            pbVar22 = (byte *)(ulong)(uVar10 >> 1);
          }
          else {
            do {
              pbVar22 = &DAT_043e7549;
              if (!bVar7) {
                pbVar22 = pbVar21;
              }
              std::string::erase(0x43e7548,(long)pbVar22 - (long)pbVar31);
              pbVar21 = DAT_043e7558;
              pbVar24 = DAT_043e7550;
              uVar10 = (uint)DAT_043e7548;
              bVar7 = ((ulong)_DAT_043e7548 & 1) == 0;
              pbVar22 = (byte *)(ulong)(DAT_043e7548 >> 1);
              local_e48 = (uint)_DAT_043e7548 & 1;
              pbVar31 = pbVar22;
              if (!bVar7) {
                pbVar31 = DAT_043e7550;
              }
              if (pbVar31 == (byte *)0x0) break;
              pbVar31 = &DAT_043e7549;
              if (((ulong)_DAT_043e7548 & 1) != 0) {
                pbVar31 = DAT_043e7558;
              }
              iVar8 = isblank((uint)*pbVar31);
            } while (iVar8 != 0);
          }
        }
        bVar7 = local_e48 == 0;
        pbVar31 = pbVar22;
        if (!bVar7) {
          pbVar31 = pbVar24;
        }
        if (pbVar31 != (byte *)0x0) {
          do {
            pbVar22 = (byte *)(ulong)(uVar10 >> 1);
            pbVar31 = pbVar22;
            pbVar21 = &DAT_043e7549;
            if (!bVar7) {
              pbVar31 = pbVar24;
              pbVar21 = DAT_043e7558;
            }
            iVar8 = isblank((uint)pbVar21[(long)(pbVar31 + -1)]);
            if (iVar8 == 0) break;
            FUN_024a7ca8(&DAT_043e7548);
            uVar10 = (uint)DAT_043e7548;
            bVar7 = ((ulong)_DAT_043e7548 & 1) == 0;
            pbVar22 = (byte *)(ulong)(DAT_043e7548 >> 1);
            pbVar31 = pbVar22;
            if (!bVar7) {
              pbVar31 = DAT_043e7550;
            }
            pbVar24 = DAT_043e7550;
          } while (pbVar31 != (byte *)0x0);
          local_e48 = uVar10 & 1;
        }
        pbVar31 = &DAT_043e7549;
        if (local_e48 != 0) {
          pbVar22 = pbVar24;
          pbVar31 = DAT_043e7558;
        }
        sVar2 = CONCAT44(_DAT_043e7574,ram0x043e7570);
        if ((DAT_043e7568 & 1) == 0) {
          sVar2 = (ulong)(DAT_043e7568 >> 1);
          pbVar24 = (byte *)&DAT_043e7569;
        }
        else {
          pbVar24 = DAT_043e7578;
        }
        if (sVar2 == 0) {
          uVar23 = 0;
          goto LAB_024b7ab0;
        }
        if ((long)sVar2 <= (long)pbVar22) {
          bVar5 = *pbVar24;
          local_e58 = pbVar31 + (long)pbVar22;
          pbVar21 = pbVar31;
          pbVar19 = pbVar22;
          do {
            if ((0xfffffffffffffffe < (long)pbVar19 - sVar2) ||
               (pbVar21 = memchr(pbVar21,(uint)bVar5,((long)pbVar19 - sVar2) + 1),
               pbVar21 == (byte *)0x0)) break;
            iVar8 = memcmp(pbVar21,pbVar24,sVar2);
            if (iVar8 == 0) goto LAB_024b7a98;
            pbVar21 = pbVar21 + 1;
            pbVar19 = local_e58 + -(long)pbVar21;
          } while ((long)sVar2 <= (long)pbVar19);
        }
LAB_024b78dc:
        sVar2 = CONCAT26(_DAT_043e758e,CONCAT51(_DAT_043e7589,DAT_043e7581._7_1_));
        pbVar24 = (byte *)CONCAT17(DAT_043e7590._7_1_,
                                   CONCAT16(DAT_043e7590._6_1_,
                                            CONCAT51(DAT_043e7590._1_5_,(char)DAT_043e7590)));
        if ((DAT_043e7580 & 1) == 0) {
          pbVar24 = (byte *)&DAT_043e7581;
          sVar2 = (ulong)(DAT_043e7580 >> 1);
        }
        if (sVar2 == 0) {
          uVar23 = 0;
LAB_024b7968:
          do {
            while( true ) {
              std::string::erase(0x43e7548,uVar23);
              bVar7 = ((ulong)_DAT_043e7548 & 1) != 0;
              pbVar22 = (byte *)((ulong)_DAT_043e7548 >> 1 & 0x7f);
              if (bVar7) {
                pbVar22 = DAT_043e7550;
              }
              sVar2 = CONCAT26(_DAT_043e758e,CONCAT51(_DAT_043e7589,DAT_043e7581._7_1_));
              pbVar24 = (byte *)CONCAT17(DAT_043e7590._7_1_,
                                         CONCAT16(DAT_043e7590._6_1_,
                                                  CONCAT51(DAT_043e7590._1_5_,(char)DAT_043e7590)));
              pbVar31 = DAT_043e7558;
              if (!bVar7) {
                pbVar31 = &DAT_043e7549;
              }
              if ((DAT_043e7580 & 1) == 0) {
                pbVar24 = (byte *)&DAT_043e7581;
                sVar2 = (ulong)(DAT_043e7580 >> 1);
              }
              if (sVar2 != 0) break;
              uVar23 = 0;
            }
            if ((long)pbVar22 < (long)sVar2) goto LAB_024b7a3c;
            bVar5 = *pbVar24;
            pbVar19 = pbVar31 + (long)pbVar22;
            pbVar21 = pbVar31;
            while( true ) {
              if ((0xfffffffffffffffe < (long)pbVar22 - sVar2) ||
                 (pbVar21 = memchr(pbVar21,(uint)bVar5,((long)pbVar22 - sVar2) + 1),
                 pbVar21 == (byte *)0x0)) goto LAB_024b7a3c;
              iVar8 = memcmp(pbVar21,pbVar24,sVar2);
              if (iVar8 == 0) break;
              pbVar21 = pbVar21 + 1;
              pbVar22 = pbVar19 + -(long)pbVar21;
              if ((long)pbVar22 < (long)sVar2) goto LAB_024b7a3c;
            }
            if ((pbVar21 == pbVar19) ||
               (uVar23 = (long)pbVar21 - (long)pbVar31, uVar23 == 0xffffffffffffffff))
            goto LAB_024b7a3c;
          } while( true );
        }
        if ((long)sVar2 <= (long)pbVar22) {
          bVar5 = *pbVar24;
          pbVar19 = pbVar31 + (long)pbVar22;
          pbVar21 = pbVar31;
          do {
            if ((0xfffffffffffffffe < (long)pbVar22 - sVar2) ||
               (pbVar21 = memchr(pbVar21,(uint)bVar5,((long)pbVar22 - sVar2) + 1),
               pbVar21 == (byte *)0x0)) break;
            iVar8 = memcmp(pbVar21,pbVar24,sVar2);
            if (iVar8 == 0) {
              if ((pbVar21 != pbVar19) &&
                 (uVar23 = (long)pbVar21 - (long)pbVar31, uVar23 != 0xffffffffffffffff))
              goto LAB_024b7968;
              break;
            }
            pbVar21 = pbVar21 + 1;
            pbVar22 = pbVar19 + -(long)pbVar21;
          } while ((long)sVar2 <= (long)pbVar22);
        }
LAB_024b7a3c:
        FUN_00100250(PTR__string_04379718,&DAT_043e7548,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e7560);
      }
      pbVar22 = DAT_043e7558;
      if (((ulong)_DAT_043e7548 & 1) == 0) {
        pbVar22 = &DAT_043e7549;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",pbVar22);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar20;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar12;
  lVar25 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar25;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar17[2];
    uVar23 = *(ulong *)(lVar12 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar23 = uVar26 - 1 & uVar23;
    }
    else if (uVar26 <= uVar23) {
      uVar30 = 0;
      if (uVar26 != 0) {
        uVar30 = uVar23 / uVar26;
      }
      uVar23 = uVar23 - uVar30 * uVar26;
    }
    *(undefined8 **)(puVar17[1] + uVar23 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar20;
  puVar17[7] = uVar4;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_0425c228;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x2c0);
  iVar8 = FUN_00154450(param_2,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_024be320,0);
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
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_968 & 1) != 0) && (local_958 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar18 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar18 = plVar6;
    }
    uVar23 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar18,local_958,0,8);
        goto LAB_024b636c;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,local_958,0,8);
  }
LAB_024b636c:
  memset(local_4e8,0,0x480);
  pcVar27 = *(char **)(lVar12 + 0x2c0);
  sVar13 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar25 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pbVar22 = &LAB_024bd42c;
  if (uVar10 != 0) {
    pbVar22 = &LAB_024bbae8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar31 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar31 >> 1);
    if ((*pbVar31 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar31 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar31,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(byte **)(lVar12 + 0x30) = pbVar22;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar26 = 0;
            *(byte **)(lVar12 + 0x2d0) = pbVar22;
            goto LAB_024b64d0;
          }
          *(ulong *)(lVar12 + 0x318) = *(ulong *)(lVar12 + 0x318) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(byte **)(lVar12 + 0x38) = pbVar22;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x318) = *(ulong *)(lVar12 + 0x318) | 1L << (uVar23 & 0x3f);
      goto LAB_024b64d0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar26 = 1;
  local_4e8[0] = pcVar27;
  local_4e8[1] = (char *)pbVar22;
LAB_024b64d0:
  pcVar27 = *(char **)(lVar12 + 0x2c8);
  sVar13 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = &LAB_024bd654;
  if (uVar10 != 0) {
    pcVar1 = &LAB_024bd61c;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar22 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) break;
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar23 == 0x20) {
LAB_024b6610:
      uVar30 = (ulong)((int)uVar26 + 1);
      alStack_4f8[uVar26 * 2 + 2] = (long)pcVar27;
      local_4e8[uVar26 * 2 + 1] = pcVar1;
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x318);
joined_r0x024b65f4:
      if ((uVar10 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x318);
      }
      if ((uVar10 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x318);
      }
      if ((uVar10 >> 0x10 & 1) == 0) {
        lVar14 = FUN_008cca50();
        lVar29 = lVar14 + 0x181;
        if ((*(byte *)(lVar14 + 0x180) & 1) != 0) {
          lVar29 = *(long *)(lVar14 + 400);
        }
        alStack_4f8[uVar30 * 2 + 2] = lVar29;
        local_4e8[uVar30 * 2 + 1] = &LAB_024bc1b0;
        uVar30 = (ulong)((int)uVar30 + 1);
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x318);
      }
      if ((uVar10 >> 0x1b & 1) == 0) {
        lVar14 = FUN_008cca50();
        uVar23 = (ulong)((int)uVar30 + 1);
        lVar29 = lVar14 + 0x289;
        if ((*(byte *)(lVar14 + 0x288) & 1) != 0) {
          lVar29 = *(long *)(lVar14 + 0x298);
        }
        alStack_4f8[uVar30 * 2 + 2] = lVar29;
        local_4e8[uVar30 * 2 + 1] = "\x15\x04";
        lVar29 = *(long *)(lVar12 + 0x2d0);
      }
      else {
        lVar29 = *(long *)(lVar12 + 0x2d0);
        uVar23 = uVar30;
      }
      if (lVar29 != 0) {
        lVar14 = FUN_008cca50();
        lVar29 = lVar14 + 0x1c9;
        if ((*(byte *)(lVar14 + 0x1c8) & 1) != 0) {
          lVar29 = *(long *)(lVar14 + 0x1d8);
        }
        pcVar27 = *(char **)(lVar12 + 0x2d0);
        alStack_4f8[uVar23 * 2 + 2] = lVar29;
        local_4e8[uVar23 * 2 + 1] = pcVar27;
        uVar23 = (ulong)((int)uVar23 + 1);
      }
      alStack_4f8[uVar23 * 2 + 2] = 0;
      local_4e8[uVar23 * 2 + 1] = (char *)0x0;
      memcpy(&local_968,local_4e8,0x480);
      memcpy(asStack_de8,local_4e8,0x480);
      lVar29 = FUN_008cca50();
      lVar14 = uVar23 - 1;
      pcVar27 = (char *)alStack_4f8[lVar14 * 2 + 2];
      sVar13 = strlen(pcVar27);
      sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar13 == sVar2) &&
         (iVar8 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar8 == 0)) {
        auStack_978[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_967 + lVar14 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_de8 + lVar14 * 0x10) = alStack_4f8[lVar14 * 2 + 2];
      *(undefined1 **)(asStack_de8 + (lVar14 * 2 + 1) * 8) = &LAB_024bd690;
      FUN_00151fe0(param_2,0,2);
      local_df0[0] = FUN_0014feb0(param_2,0xffffffff);
      local_df8 = param_2;
      if (((DAT_043e73b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e73b0), iVar8 != 0)) {
        FUN_024ba370();
        FUN_00100250(PTR__string_04379718,&DAT_043e7398,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e73b0);
      }
      uVar9 = local_df0[0];
      if ((DAT_043e7398 & 1) == 0) {
        uVar23 = (ulong)(DAT_043e7398 >> 1);
        puVar3 = &DAT_043e7399;
      }
      else {
        uVar23 = DAT_043e73a0;
        puVar3 = DAT_043e73a8;
      }
      FUN_001514f0(param_2,puVar3,uVar23);
      FUN_00152550(param_2,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_024bc0c0,0);
      FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar15 = asStack_de8;
          FUN_024b8be0();
          pbVar22 = &DAT_043e7300;
        }
        else if (lVar29 == 0) {
          psVar15 = &local_968;
          FUN_024b89ec();
          pbVar22 = &DAT_043e7288;
        }
        else {
          psVar15 = (string *)local_4e8;
          FUN_024b8dd4();
          pbVar22 = &DAT_043e7378;
        }
        pbVar31 = pbVar22 + 1;
        if ((*pbVar22 & 1) != 0) {
          pbVar31 = *(byte **)(pbVar22 + 0x10);
        }
        FUN_00154450(param_2,pbVar31);
        local_e00 = FUN_0014feb0(param_2,0xffffffff);
        local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,0x1e);
        local_e08 = param_2;
        FUN_008fe304(local_e10,param_2,&local_e40,&local_df8,local_e00);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00155a20(param_2,psVar15,2);
        uVar9 = local_e00;
        if (*(long *)(lVar12 + 0x300) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_check");
        }
        uVar9 = local_e00;
        if (*(long *)(lVar12 + 0x308) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_cast");
        }
        uVar9 = local_e00;
        uVar20 = *(undefined8 *)(lVar12 + 0x2e0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar9,&DAT_03955ac7);
        uVar9 = local_e00;
        uVar20 = *(undefined8 *)(lVar12 + 0x2e8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar9,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,1);
          FUN_008fe304(local_e10,param_2,&local_e40,&local_e08,local_e00);
        }
        else {
          local_e10[0] = 1;
          local_e40 = &LAB_024bd6e0;
          uStack_e38 = 0;
          local_e30 = lVar12;
          lStack_e28 = lVar25;
          FUN_024be354(param_2,local_e10,&local_e40,local_e00);
          local_e10[0] = 2;
          local_e40 = &LAB_024bd9f0;
          uStack_e38 = 0;
          local_e30 = lVar12;
          lStack_e28 = lVar25;
          FUN_024be354(param_2,local_e10,&local_e40,local_e00);
        }
        FUN_00151fe0(param_2,0,3);
        uVar9 = FUN_0014feb0(param_2,0xffffffff);
        local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,0x1e);
        FUN_008fe304(local_e10,param_2,&local_e40,&local_df8,uVar9);
        if (*(undefined1 **)(lVar12 + 0x2d8) != (undefined1 *)0x0) {
          local_e10[0] = 4;
          uStack_e38 = 0;
          local_e40 = *(undefined1 **)(lVar12 + 0x2d8);
          local_e30 = lVar12;
          lStack_e28 = lVar25;
          FUN_024be354(param_2,local_e10,&local_e40,uVar9);
        }
        if (*(char *)(lVar12 + 0x310) != '\0') {
          local_e10[0] = 1;
          local_e40 = &LAB_024bd6e0;
          uStack_e38 = 0;
          local_e30 = lVar12;
          lStack_e28 = lVar25;
          FUN_024be354(param_2,local_e10,&local_e40,uVar9);
          local_e10[0] = 2;
          local_e40 = &LAB_024bd9f0;
          uStack_e38 = 0;
          local_e30 = lVar12;
          lStack_e28 = lVar25;
          FUN_024be354(param_2,local_e10,&local_e40,uVar9);
        }
        uVar11 = local_e00;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar9);
        }
        FUN_00152ae0(param_2,uVar11);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_e08,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_024b9014();
      puVar3 = DAT_043e7400;
      if ((DAT_043e73f0 & 1) == 0) {
        puVar3 = &DAT_043e73f1;
      }
      FUN_00154450(param_2,puVar3);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_e40._0_4_ = 0x1e;
      FUN_008fe304(&local_e08,param_2,&local_e40,&local_df8,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_4e8,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,0x1e);
      FUN_008fe304(&local_e08,param_2,&local_e40,&local_df8,uVar11);
      local_e40 = *(undefined1 **)(lVar12 + 0x2d8);
      if (local_e40 != (undefined1 *)0x0) {
        local_e08 = CONCAT44(local_e08._4_4_,4);
        uStack_e38 = 0;
        local_e30 = lVar12;
        lStack_e28 = lVar25;
        FUN_024be354(param_2,&local_e08,&local_e40,uVar11);
      }
      local_e08._0_4_ = 1;
      local_e40 = &LAB_024bdd00;
      uStack_e38 = 0;
      local_e20 = 0;
      puStack_e18 = &DAT_03a7d5b0;
      local_e30 = lVar12;
      lStack_e28 = lVar25;
      FUN_024be3f0(param_2,&local_e08,&local_e40,uVar11);
      local_e08 = CONCAT44(local_e08._4_4_,2);
      local_e40 = &LAB_024be010;
      uStack_e38 = 0;
      local_e20 = 0;
      puStack_e18 = &DAT_03a7d5b0;
      local_e30 = lVar12;
      lStack_e28 = lVar25;
      FUN_024be3f0(param_2,&local_e08,&local_e40,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_df0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar8 = (int)uVar23;
  uVar30 = uVar26;
  if (iVar8 == 1) {
    *(char **)(lVar12 + 0x30) = pcVar1;
  }
  else {
    if (iVar8 != 2) {
      if (iVar8 == 0x13) {
        *(char **)(lVar12 + 0x2d0) = pcVar1;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x318);
        goto joined_r0x024b65f4;
      }
      *(ulong *)(lVar12 + 0x318) = *(ulong *)(lVar12 + 0x318) | 1L << (uVar23 & 0x3f);
      goto LAB_024b6610;
    }
    *(char **)(lVar12 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *(ulong *)(lVar12 + 0x318) = *(ulong *)(lVar12 + 0x318) | 1L << (uVar23 & 0x3f);
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x318);
  goto joined_r0x024b65f4;
LAB_024b7a98:
  if ((pbVar21 == local_e58) ||
     (uVar23 = (long)pbVar21 - (long)pbVar31, uVar23 == 0xffffffffffffffff)) goto LAB_024b78dc;
LAB_024b7ab0:
  while( true ) {
    std::string::erase(0x43e7548,uVar23);
    pbVar22 = (byte *)((ulong)_DAT_043e7548 >> 1 & 0x7f);
    if (((ulong)_DAT_043e7548 & 1) == 0) {
      pbVar31 = &DAT_043e7549;
    }
    else {
      pbVar31 = DAT_043e7558;
      pbVar22 = DAT_043e7550;
    }
    sVar2 = CONCAT44(_DAT_043e7574,ram0x043e7570);
    if ((DAT_043e7568 & 1) == 0) {
      sVar2 = (ulong)(DAT_043e7568 >> 1);
      pbVar24 = (byte *)&DAT_043e7569;
    }
    else {
      pbVar24 = DAT_043e7578;
    }
    if (sVar2 != 0) break;
    uVar23 = 0;
  }
  if ((long)pbVar22 < (long)sVar2) goto LAB_024b78dc;
  bVar5 = *pbVar24;
  local_e58 = pbVar31 + (long)pbVar22;
  pbVar21 = pbVar31;
  pbVar19 = pbVar22;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pbVar19 - sVar2) ||
       (pbVar21 = memchr(pbVar21,(uint)bVar5,((long)pbVar19 - sVar2) + 1), pbVar21 == (byte *)0x0))
    goto LAB_024b78dc;
    iVar8 = memcmp(pbVar21,pbVar24,sVar2);
    if (iVar8 == 0) break;
    pbVar21 = pbVar21 + 1;
    pbVar19 = local_e58 + -(long)pbVar21;
    if ((long)pbVar19 < (long)sVar2) goto LAB_024b78dc;
  }
  goto LAB_024b7a98;
}


