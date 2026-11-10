/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01721ba4; name: FUN_01721ba4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01721ba4(long param_1,long param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
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
  byte *pbVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 uVar22;
  code *pcVar23;
  byte *pbVar24;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  ulong uVar28;
  char *pcVar29;
  code *pcVar30;
  long lVar31;
  ulong uVar32;
  byte *local_7c8;
  uint local_7b8;
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  undefined4 local_780 [2];
  long local_778;
  undefined4 local_770;
  long local_768;
  undefined4 local_760 [2];
  string asStack_758 [576];
  undefined8 auStack_518 [2];
  string local_508;
  undefined1 auStack_507 [7];
  size_t local_500;
  undefined1 *local_4f8;
  long alStack_2c8 [2];
  char *local_2b8;
  code *local_2b0;
  byte *local_2a8;
  
  if (((DAT_043ce278 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce278), iVar9 != 0)) {
    local_2a8 = (byte *)0x0;
    local_2b0 = (code *)0x0;
    local_2b8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437be18 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437be18);
      puVar4 = PTR_DAT_0437be20;
      if (iVar9 != 0) {
        FUN_00dfa490(PTR_DAT_0437be20);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437be18);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_0437be20 + 0x10);
    if ((*PTR_DAT_0437be20 & 1) == 0) {
      puVar4 = PTR_DAT_0437be20 + 1;
    }
    pcVar29 = (char *)std::string::append((char *)&local_2b8,(ulong)puVar4);
    psVar17 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043ce260,psVar17);
    pbVar16 = local_2a8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b8 & 1) != 0) && (local_2a8 != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar21 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar21 = plVar7;
      }
      uVar25 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar21,pbVar16,0,8);
          goto LAB_01722ebc;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pbVar16,0,8);
    }
LAB_01722ebc:
    FUN_00100250(PTR__string_04379718,&DAT_043ce260,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ce278);
  }
  std::string::string(&local_508,(string *)&DAT_043ce260);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ce258);
  sVar3 = (ulong)((byte)local_508 >> 1);
  if (((byte)local_508 & 1) != 0) {
    sVar3 = local_500;
  }
  std::string::append((ulong)&local_508,(char)iVar9);
  bVar8 = ((byte)local_508 & 1) == 0;
  puVar2 = local_4f8;
  if (bVar8) {
    puVar2 = auStack_507;
  }
  sVar14 = (ulong)((byte)local_508 >> 1);
  if (!bVar8) {
    sVar14 = local_500;
  }
  snprintf(puVar2 + (sVar3 - 1),sVar14,"%d",(ulong)DAT_043ce258);
  DAT_043ce258 = DAT_043ce258 + 1;
  if (((DAT_043ce298 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce298), iVar9 != 0)) {
    local_2a8 = (byte *)0x0;
    local_2b0 = (code *)0x0;
    local_2b8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437be18 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437be18);
      puVar4 = PTR_DAT_0437be20;
      if (iVar9 != 0) {
        FUN_00dfa490(PTR_DAT_0437be20);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437be18);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_0437be20 + 0x10);
    if ((*PTR_DAT_0437be20 & 1) == 0) {
      puVar4 = PTR_DAT_0437be20 + 1;
    }
    pcVar29 = (char *)std::string::append((char *)&local_2b8,(ulong)puVar4);
    psVar17 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043ce280,psVar17);
    pbVar16 = local_2a8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b8 & 1) != 0) && (local_2a8 != (byte *)0x0)) {
      lVar13 = tpidr_el0;
      plVar21 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar21 = plVar7;
      }
      uVar25 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar21,pbVar16,0,8);
          goto LAB_0172302c;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pbVar16,0,8);
    }
LAB_0172302c:
    FUN_00100250(PTR__string_04379718,&DAT_043ce280,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ce298);
  }
  puVar4 = DAT_043ce290;
  if ((DAT_043ce280 & 1) == 0) {
    puVar4 = &DAT_043ce281;
  }
  puVar2 = (undefined1 *)((ulong)&local_508 | 1);
  if (((byte)local_508 & 1) != 0) {
    puVar2 = local_4f8;
  }
  if (((DAT_043ce2a8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce2a8), iVar9 != 0)) {
    DAT_043ce2a0 = 0x108;
    __cxa_guard_release(&DAT_043ce2a8);
  }
  if (((DAT_043ce2b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce2b8), iVar9 != 0)) {
    DAT_043ce2b0 = 0x10f;
    __cxa_guard_release(&DAT_043ce2b8);
  }
  uVar25 = DAT_043ce2a0;
  lVar13 = FUN_00153520(param_2,DAT_043ce2a0);
  if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x108)) ||
     (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar25 = DAT_043ce2b0;
    lVar13 = FUN_00153520(param_2,DAT_043ce2b0);
    if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x108)) ||
       (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      if (((DAT_043ce2d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce2d8), iVar9 != 0)) {
        if (((DAT_043ce310 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce310), iVar9 != 0)) {
          DAT_043ce2e0 = 0x16;
          DAT_043ce2f0 = (byte *)0x0;
          DAT_043ce2e1._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043ce2e8 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043ce2f8 = 0x2a;
          _DAT_043ce2ec = 0;
          DAT_043ce308._7_1_ = 0;
          DAT_043ce308._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043ce308._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043ce308._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043ce308._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043ce308._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043ce301 = s__anonymous_namespace__039071f8[8];
          DAT_043ce301_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043ce301_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043ce301_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043ce301_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043ce306 = s__anonymous_namespace__039071f8._13_2_;
          DAT_043ce308._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043ce2f9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043ce2f9._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043ce308._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043ce2e0,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043ce310);
        }
        plVar7 = DAT_043f1798;
        lVar13 = tpidr_el0;
        plVar21 = *(long **)(lVar13 + 0x20);
        if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
          *(long **)(lVar13 + 0x20) = DAT_043f1798;
          plVar21 = plVar7;
        }
        puVar18 = (undefined1 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x230,8);
        _DAT_043ce2c0 = (char *)0x231;
        DAT_043ce2c8 = (code *)0x221;
        DAT_043ce2d0 = puVar18;
        memcpy(puVar18,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<event_script::EventProgressTimeManager, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4>, char const (&)[6], void (event_script::EventProgressTimeManager::*)(bool), char const (&)[6], void (event_script::EventProgressTimeManager::*)(), char const (&)[22], unsigned long (event_script::EventProgressTimeManager::*)() const, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
               ,0x221);
        puVar18[0x221] = 0;
        std::string::find(-0x40,0x5b);
        uVar28 = std::string::find(-0x40,0x3d);
        uVar25 = std::string::rfind(-0x40,0x5d);
        if (uVar25 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043ce2c0 & 1) == 0) {
            uVar25 = (ulong)(DAT_043ce2c0 >> 1);
          }
          else {
            uVar25 = (ulong)DAT_043ce2c8;
          }
          uVar32 = 0;
          if (uVar28 != 0xffffffffffffffff) {
            uVar32 = uVar28;
          }
          uVar28 = uVar25;
        }
        else {
          uVar32 = 0;
          if (uVar28 != 0xffffffffffffffff) {
            uVar32 = uVar28;
          }
          if (((ulong)_DAT_043ce2c0 & 1) == 0) {
            uVar28 = (ulong)(DAT_043ce2c0 >> 1);
          }
          else {
            uVar28 = (ulong)DAT_043ce2c8;
          }
        }
        if (uVar32 < uVar28 - 1) {
          uVar32 = uVar32 + 1;
        }
        std::string::string((string *)&local_2b8,(string *)&DAT_043ce2c0,uVar32,uVar25 - uVar32,
                            (allocator *)&DAT_043ce2c0);
        if (((ulong)_DAT_043ce2c0 & 1) != 0) {
          *DAT_043ce2d0 = 0;
          plVar7 = DAT_043f1798;
          puVar18 = DAT_043ce2d0;
          DAT_043ce2c8 = (code *)0x0;
          if ((((ulong)_DAT_043ce2c0 & 1) != 0) && (DAT_043ce2d0 != (undefined1 *)0x0)) {
            plVar21 = *(long **)(lVar13 + 0x20);
            if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
              *(long **)(lVar13 + 0x20) = DAT_043f1798;
              plVar21 = plVar7;
            }
            uVar25 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar25 & 1) != 0) {
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar13 + 0x38d480)) {
                FUN_02bcc824(plVar21,puVar18,0,8);
                goto LAB_01723390;
              }
            }
            (**(code **)(*plVar21 + 0x18))(plVar21,puVar18,0,8);
          }
        }
LAB_01723390:
        pcVar23 = (code *)((ulong)local_2b8 >> 1 & 0x7f);
        _DAT_043ce2c0 = local_2b8;
        DAT_043ce2c8 = local_2b0;
        DAT_043ce2d0 = local_2a8;
        uVar11 = (uint)local_2b8 & 0xff;
        if (((ulong)local_2b8 & 1) == 0) {
          pbVar16 = &DAT_043ce2c1;
          pcVar26 = pcVar23;
        }
        else {
          pbVar16 = local_2a8;
          pcVar26 = local_2b0;
        }
        local_7b8 = (uint)local_2b8 & 1;
        if (0xd < (long)pcVar26) {
          pbVar24 = pbVar16 + (long)pcVar26;
          lVar13 = 1;
          while (pcVar26 != (code *)0xd) {
            pcVar26 = pcVar26 + -1;
            if (pbVar16[(long)pcVar26] == 0x6b) {
              lVar27 = 0;
              do {
                if (lVar27 == -0xd) {
                  if ((lVar13 != -0xd) &&
                     (pbVar24 + (~(ulong)pbVar16 - 0xd) != (byte *)0xffffffffffffffff)) {
                    std::string::erase(0x43ce2c0,(ulong)(pbVar24 + (~(ulong)pbVar16 - 0xd) + -2));
                    uVar11 = (uint)DAT_043ce2c0;
                    pcVar23 = (code *)(ulong)(DAT_043ce2c0 >> 1);
                    local_7b8 = (uint)_DAT_043ce2c0 & 1;
                  }
                  goto LAB_01723480;
                }
                lVar31 = lVar27 + -2;
                lVar15 = lVar27 + 0xc;
                lVar27 = lVar27 + -1;
              } while (pbVar24[lVar31] == "seperator_mark"[lVar15]);
            }
            pbVar24 = pbVar24 + -1;
            lVar13 = lVar13 + 1;
          }
        }
LAB_01723480:
        pbVar16 = DAT_043ce2d0;
        pcVar30 = DAT_043ce2c8;
        bVar8 = local_7b8 == 0;
        pcVar26 = pcVar23;
        if (!bVar8) {
          pcVar26 = DAT_043ce2c8;
        }
        if (pcVar26 != (code *)0x0) {
          pbVar24 = &DAT_043ce2c1;
          if (local_7b8 != 0) {
            pbVar24 = DAT_043ce2d0;
          }
          iVar9 = isblank((uint)*pbVar24);
          if (iVar9 == 0) {
            local_7b8 = uVar11 & 1;
            pcVar23 = (code *)(ulong)(uVar11 >> 1);
          }
          else {
            do {
              if (bVar8) {
                pbVar16 = &DAT_043ce2c1;
              }
              std::string::erase(0x43ce2c0,(long)pbVar16 - (long)pbVar24);
              pbVar16 = DAT_043ce2d0;
              pcVar30 = DAT_043ce2c8;
              uVar11 = (uint)DAT_043ce2c0;
              bVar8 = ((ulong)_DAT_043ce2c0 & 1) == 0;
              pcVar23 = (code *)(ulong)(DAT_043ce2c0 >> 1);
              local_7b8 = (uint)_DAT_043ce2c0 & 1;
              pcVar26 = pcVar23;
              if (!bVar8) {
                pcVar26 = DAT_043ce2c8;
              }
              if (pcVar26 == (code *)0x0) break;
              pbVar24 = &DAT_043ce2c1;
              if (((ulong)_DAT_043ce2c0 & 1) != 0) {
                pbVar24 = DAT_043ce2d0;
              }
              iVar9 = isblank((uint)*pbVar24);
            } while (iVar9 != 0);
          }
        }
        bVar8 = local_7b8 == 0;
        pcVar26 = pcVar23;
        if (!bVar8) {
          pcVar26 = pcVar30;
        }
        if (pcVar26 != (code *)0x0) {
          do {
            pbVar16 = DAT_043ce2d0;
            pcVar23 = (code *)(ulong)(uVar11 >> 1);
            pcVar26 = pcVar23;
            pbVar24 = &DAT_043ce2c1;
            if (!bVar8) {
              pcVar26 = pcVar30;
              pbVar24 = DAT_043ce2d0;
            }
            iVar9 = isblank((uint)pbVar24[(long)(pcVar26 + -1)]);
            if (iVar9 == 0) break;
            if (bVar8) {
              _DAT_043ce2c0 = (char *)CONCAT71(_DAT_043ce2c1,((char)(uVar11 >> 1) + -1) * '\x02');
              pbVar16 = &DAT_043ce2c0 + (long)pcVar23;
            }
            else {
              DAT_043ce2c8 = pcVar30 + -1;
              pbVar16 = pbVar16 + (long)DAT_043ce2c8;
            }
            *pbVar16 = 0;
            uVar11 = (uint)DAT_043ce2c0;
            bVar8 = ((ulong)_DAT_043ce2c0 & 1) == 0;
            pcVar23 = (code *)(ulong)(DAT_043ce2c0 >> 1);
            pcVar26 = pcVar23;
            if (!bVar8) {
              pcVar26 = DAT_043ce2c8;
            }
            pcVar30 = DAT_043ce2c8;
          } while (pcVar26 != (code *)0x0);
          local_7b8 = uVar11 & 1;
        }
        pbVar16 = &DAT_043ce2c1;
        if (local_7b8 != 0) {
          pcVar23 = pcVar30;
          pbVar16 = DAT_043ce2d0;
        }
        sVar3 = CONCAT44(_DAT_043ce2ec,ram0x043ce2e8);
        if ((DAT_043ce2e0 & 1) == 0) {
          sVar3 = (ulong)(DAT_043ce2e0 >> 1);
          pbVar24 = (byte *)&DAT_043ce2e1;
        }
        else {
          pbVar24 = DAT_043ce2f0;
        }
        if (sVar3 == 0) {
          uVar25 = 0;
          goto LAB_01723af8;
        }
        if ((long)sVar3 <= (long)pcVar23) {
          local_7c8 = pbVar16 + (long)pcVar23;
          bVar6 = *pbVar24;
          pbVar19 = pbVar16;
          pcVar26 = pcVar23;
          do {
            if ((0xfffffffffffffffe < (long)pcVar26 - sVar3) ||
               (pbVar19 = memchr(pbVar19,(uint)bVar6,((long)pcVar26 - sVar3) + 1),
               pbVar19 == (byte *)0x0)) break;
            iVar9 = memcmp(pbVar19,pbVar24,sVar3);
            if (iVar9 == 0) goto LAB_01723ae0;
            pbVar19 = pbVar19 + 1;
            pcVar26 = (code *)(local_7c8 + -(long)pbVar19);
          } while ((long)sVar3 <= (long)pcVar26);
        }
LAB_01723934:
        sVar3 = CONCAT26(_DAT_043ce306,CONCAT51(_DAT_043ce301,DAT_043ce2f9._7_1_));
        pbVar24 = (byte *)CONCAT17(DAT_043ce308._7_1_,
                                   CONCAT16(DAT_043ce308._6_1_,
                                            CONCAT51(DAT_043ce308._1_5_,(char)DAT_043ce308)));
        if ((DAT_043ce2f8 & 1) == 0) {
          pbVar24 = (byte *)&DAT_043ce2f9;
          sVar3 = (ulong)(DAT_043ce2f8 >> 1);
        }
        if (sVar3 == 0) {
          uVar25 = 0;
          goto LAB_01723a04;
        }
        if ((long)sVar3 <= (long)pcVar23) {
          pbVar1 = pbVar16 + (long)pcVar23;
          bVar6 = *pbVar24;
          pbVar19 = pbVar16;
          do {
            if ((0xfffffffffffffffe < (long)pcVar23 - sVar3) ||
               (pbVar19 = memchr(pbVar19,(uint)bVar6,((long)pcVar23 - sVar3) + 1),
               pbVar19 == (byte *)0x0)) break;
            iVar9 = memcmp(pbVar19,pbVar24,sVar3);
            if (iVar9 == 0) {
              if (pbVar19 != pbVar1) {
                uVar25 = (long)pbVar19 - (long)pbVar16;
                goto LAB_01723ac4;
              }
              break;
            }
            pbVar19 = pbVar19 + 1;
            pcVar23 = (code *)(pbVar1 + -(long)pbVar19);
          } while ((long)sVar3 <= (long)pcVar23);
        }
        goto LAB_017239d0;
      }
      goto LAB_01721d6c;
    }
  }
  goto LAB_01721d90;
LAB_01723ae0:
  if (pbVar19 == local_7c8) goto LAB_01723934;
  uVar25 = (long)pbVar19 - (long)pbVar16;
  while( true ) {
    if (uVar25 == 0xffffffffffffffff) goto LAB_01723934;
LAB_01723af8:
    std::string::erase(0x43ce2c0,uVar25);
    if (((ulong)_DAT_043ce2c0 & 1) == 0) {
      pcVar23 = (code *)((ulong)_DAT_043ce2c0 >> 1 & 0x7f);
      pbVar16 = &DAT_043ce2c1;
    }
    else {
      pcVar23 = DAT_043ce2c8;
      pbVar16 = DAT_043ce2d0;
    }
    sVar3 = CONCAT44(_DAT_043ce2ec,ram0x043ce2e8);
    if ((DAT_043ce2e0 & 1) == 0) {
      sVar3 = (ulong)(DAT_043ce2e0 >> 1);
      pbVar24 = (byte *)&DAT_043ce2e1;
    }
    else {
      pbVar24 = DAT_043ce2f0;
    }
    if (sVar3 != 0) break;
    uVar25 = 0;
  }
  if ((long)pcVar23 < (long)sVar3) goto LAB_01723934;
  local_7c8 = pbVar16 + (long)pcVar23;
  bVar6 = *pbVar24;
  pbVar19 = pbVar16;
  pcVar26 = pcVar23;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pcVar26 - sVar3) ||
       (pbVar19 = memchr(pbVar19,(uint)bVar6,((long)pcVar26 - sVar3) + 1), pbVar19 == (byte *)0x0))
    goto LAB_01723934;
    iVar9 = memcmp(pbVar19,pbVar24,sVar3);
    if (iVar9 == 0) break;
    pbVar19 = pbVar19 + 1;
    pcVar26 = (code *)(local_7c8 + -(long)pbVar19);
    if ((long)pcVar26 < (long)sVar3) goto LAB_01723934;
  }
  goto LAB_01723ae0;
LAB_01723ac4:
  if (uVar25 != 0xffffffffffffffff) {
LAB_01723a04:
    std::string::erase(0x43ce2c0,uVar25);
    bVar8 = ((ulong)_DAT_043ce2c0 & 1) != 0;
    pcVar23 = (code *)((ulong)_DAT_043ce2c0 >> 1 & 0x7f);
    if (bVar8) {
      pcVar23 = DAT_043ce2c8;
    }
    sVar3 = CONCAT26(_DAT_043ce306,CONCAT51(_DAT_043ce301,DAT_043ce2f9._7_1_));
    pbVar24 = (byte *)CONCAT17(DAT_043ce308._7_1_,
                               CONCAT16(DAT_043ce308._6_1_,
                                        CONCAT51(DAT_043ce308._1_5_,(char)DAT_043ce308)));
    pbVar16 = DAT_043ce2d0;
    if (!bVar8) {
      pbVar16 = &DAT_043ce2c1;
    }
    if ((DAT_043ce2f8 & 1) == 0) {
      pbVar24 = (byte *)&DAT_043ce2f9;
      sVar3 = (ulong)(DAT_043ce2f8 >> 1);
    }
    if (sVar3 == 0) {
      uVar25 = 0;
    }
    else {
      if ((long)pcVar23 < (long)sVar3) goto LAB_017239d0;
      bVar6 = *pbVar24;
      pbVar1 = pbVar16 + (long)pcVar23;
      pbVar19 = pbVar16;
      while( true ) {
        if ((0xfffffffffffffffe < (long)pcVar23 - sVar3) ||
           (pbVar19 = memchr(pbVar19,(uint)bVar6,((long)pcVar23 - sVar3) + 1),
           pbVar19 == (byte *)0x0)) goto LAB_017239d0;
        iVar9 = memcmp(pbVar19,pbVar24,sVar3);
        if (iVar9 == 0) break;
        pbVar19 = pbVar19 + 1;
        pcVar23 = (code *)(pbVar1 + -(long)pbVar19);
        if ((long)pcVar23 < (long)sVar3) goto LAB_017239d0;
      }
      if (pbVar19 == pbVar1) goto LAB_017239d0;
      uVar25 = (long)pbVar19 - (long)pbVar16;
    }
    goto LAB_01723ac4;
  }
LAB_017239d0:
  FUN_00100250(PTR__string_04379718,&DAT_043ce2c0,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043ce2d8);
LAB_01721d6c:
  pbVar16 = DAT_043ce2d0;
  if (((ulong)_DAT_043ce2c0 & 1) == 0) {
    pbVar16 = &DAT_043ce2c1;
  }
  FUN_00154110(param_2,"cannot properly align memory for \'%s\'",pbVar16);
  puVar20 = (undefined8 *)0x0;
LAB_01721d90:
  uVar22 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar22;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar13;
  lVar27 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar27;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar27 != 0) {
    uVar28 = puVar20[2];
    uVar25 = *(ulong *)(lVar13 + 8);
    if ((uVar28 & uVar28 - 1) == 0) {
      uVar25 = uVar28 - 1 & uVar25;
    }
    else if (uVar28 <= uVar25) {
      uVar32 = 0;
      if (uVar28 != 0) {
        uVar32 = uVar25 / uVar28;
      }
      uVar25 = uVar25 - uVar32 * uVar28;
    }
    *(undefined8 **)(puVar20[1] + uVar25 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar22 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar22;
  puVar20[7] = uVar5;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar20 = &PTR_FUN_04224f38;
  memcpy(puVar20 + 0xc,(void *)(param_1 + 0x60),0xa8);
  iVar9 = FUN_00154450(param_2,puVar2);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_01725f50,0);
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
  FUN_001522a0(param_2,puVar4);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar4);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_508 & 1) != 0) && (local_4f8 != (undefined1 *)0x0)) {
    lVar27 = tpidr_el0;
    plVar21 = *(long **)(lVar27 + 0x20);
    if (*(long **)(lVar27 + 0x20) == (long *)0x0) {
      *(long **)(lVar27 + 0x20) = DAT_043f1798;
      plVar21 = plVar7;
    }
    uVar25 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar27 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar27 + 0x38d488) = 1;
        *(undefined8 *)(lVar27 + 0x38d478) = 0;
        *(undefined8 *)(lVar27 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar27 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar27 + 0x38d480)) {
        FUN_02bcc824(plVar21,local_4f8,0,8);
        goto LAB_01721fb8;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,local_4f8,0,8);
  }
LAB_01721fb8:
  memset(&local_2b8,0,0x250);
  pcVar29 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar27 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar25 = 0;
  pcVar23 = FUN_017245c0;
  if (uVar11 != 0) {
    pcVar23 = FUN_017244dc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar28 = 0;
            *(code **)(lVar13 + 0xb8) = pcVar23;
            goto LAB_01722114;
          }
          *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar23;
      }
      uVar28 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
      goto LAB_01722114;
    }
    uVar25 = uVar25 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar25 != 0x20);
  uVar28 = 1;
  local_2b8 = pcVar29;
  local_2b0 = pcVar23;
LAB_01722114:
  pcVar29 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar25 = 0;
  pcVar23 = (code *)&LAB_01724770;
  if (uVar11 != 0) {
    pcVar23 = FUN_017246a4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xb8) = pcVar23;
            goto LAB_01722254;
          }
          *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
      goto LAB_01722254;
    }
    uVar25 = uVar25 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar25 != 0x20);
  alStack_2c8[uVar28 * 2 + 2] = (long)pcVar29;
  (&local_2b0)[uVar28 * 2] = pcVar23;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_01722254:
  pcVar29 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar25 = 0;
  pcVar23 = (code *)&LAB_0172491c;
  if (uVar11 != 0) {
    pcVar23 = (code *)&LAB_0172483c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xb8) = pcVar23;
            goto LAB_01722394;
          }
          *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
      goto LAB_01722394;
    }
    uVar25 = uVar25 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar25 != 0x20);
  alStack_2c8[uVar28 * 2 + 2] = (long)pcVar29;
  (&local_2b0)[uVar28 * 2] = pcVar23;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_01722394:
  pcVar29 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar25 = 0;
  pcVar23 = (code *)&LAB_01725014;
  if (uVar11 != 0) {
    pcVar23 = (code *)&LAB_017249fc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xb8) = pcVar23;
            goto LAB_017224d4;
          }
          *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
      goto LAB_017224d4;
    }
    uVar25 = uVar25 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar25 != 0x20);
  alStack_2c8[uVar28 * 2 + 2] = (long)pcVar29;
  (&local_2b0)[uVar28 * 2] = pcVar23;
  uVar28 = (ulong)((int)uVar28 + 1);
LAB_017224d4:
  pcVar29 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar31 = 0;
  uVar25 = 0;
  pcVar23 = (code *)&LAB_017251ec;
  if (uVar11 != 0) {
    pcVar23 = (code *)&LAB_0172519c;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar31);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) break;
    uVar25 = uVar25 + 1;
    lVar31 = lVar31 + 0x18;
    if (uVar25 == 0x20) {
LAB_01722614:
      uVar32 = (ulong)((int)uVar28 + 1);
      alStack_2c8[uVar28 * 2 + 2] = (long)pcVar29;
      (&local_2b0)[uVar28 * 2] = pcVar23;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x100);
joined_r0x017225f8:
      if ((uVar11 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x100);
      }
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x100);
      }
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar15 = FUN_008cca50();
        lVar31 = lVar15 + 0x181;
        if ((*(byte *)(lVar15 + 0x180) & 1) != 0) {
          lVar31 = *(long *)(lVar15 + 400);
        }
        uVar25 = (ulong)((int)uVar32 + 1);
        alStack_2c8[uVar32 * 2 + 2] = lVar31;
        (&local_2b0)[uVar32 * 2] = (code *)PTR_LAB_0437bdc8;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x100);
      }
      else {
        uVar25 = uVar32;
      }
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar15 = FUN_008cca50();
        lVar31 = lVar15 + 0x289;
        if ((*(byte *)(lVar15 + 0x288) & 1) != 0) {
          lVar31 = *(long *)(lVar15 + 0x298);
        }
        uVar28 = (ulong)((int)uVar25 + 1);
        alStack_2c8[uVar25 * 2 + 2] = lVar31;
        (&local_2b0)[uVar25 * 2] = (code *)PTR_LAB_0437bdd0;
        lVar31 = *(long *)(lVar13 + 0xb8);
      }
      else {
        lVar31 = *(long *)(lVar13 + 0xb8);
        uVar28 = uVar25;
      }
      if (lVar31 != 0) {
        lVar15 = FUN_008cca50();
        lVar31 = lVar15 + 0x1c9;
        if ((*(byte *)(lVar15 + 0x1c8) & 1) != 0) {
          lVar31 = *(long *)(lVar15 + 0x1d8);
        }
        pcVar23 = *(code **)(lVar13 + 0xb8);
        alStack_2c8[uVar28 * 2 + 2] = lVar31;
        (&local_2b0)[uVar28 * 2] = pcVar23;
        uVar28 = (ulong)((int)uVar28 + 1);
      }
      alStack_2c8[uVar28 * 2 + 2] = 0;
      (&local_2b0)[uVar28 * 2] = (code *)0x0;
      memcpy(&local_508,&local_2b8,0x250);
      memcpy(asStack_758,&local_2b8,0x250);
      lVar31 = FUN_008cca50();
      lVar15 = uVar28 - 1;
      pcVar29 = (char *)alStack_2c8[lVar15 * 2 + 2];
      sVar14 = strlen(pcVar29);
      sVar3 = (ulong)(*(byte *)(lVar31 + 0x1c8) >> 1);
      if ((*(byte *)(lVar31 + 0x1c8) & 1) != 0) {
        sVar3 = *(size_t *)(lVar31 + 0x1d0);
      }
      if ((sVar14 == sVar3) &&
         (iVar9 = std::string::compare(lVar31 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
         iVar9 == 0)) {
        auStack_518[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_507 + lVar15 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_758 + lVar15 * 0x10) = alStack_2c8[lVar15 * 2 + 2];
      *(undefined1 **)(asStack_758 + (lVar15 * 2 + 1) * 8) = &LAB_01725240;
      FUN_00151fe0(param_2,0,2);
      local_760[0] = FUN_0014feb0(param_2,0xffffffff);
      local_768 = param_2;
      if ((*PTR_DAT_0437be18 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_0437be18);
        puVar4 = PTR_DAT_0437be20;
        if (iVar9 != 0) {
          FUN_00dfa490(PTR_DAT_0437be20);
          FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437be18);
        }
      }
      uVar10 = local_760[0];
      uVar25 = *(ulong *)(PTR_DAT_0437be20 + 8);
      puVar4 = *(undefined **)(PTR_DAT_0437be20 + 0x10);
      if ((*PTR_DAT_0437be20 & 1) == 0) {
        puVar4 = PTR_DAT_0437be20 + 1;
        uVar25 = (ulong)((byte)*PTR_DAT_0437be20 >> 1);
      }
      FUN_001514f0(param_2,puVar4,uVar25);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_01724f70,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar31 = 0;
      do {
        if (lVar31 == 1) {
          psVar17 = asStack_758;
          pbVar16 = (byte *)FUN_00dfaaa8();
        }
        else if (lVar31 == 0) {
          psVar17 = &local_508;
          pbVar16 = (byte *)FUN_00df9074();
        }
        else {
          psVar17 = (string *)&local_2b8;
          pbVar16 = (byte *)FUN_00dfa238();
        }
        pbVar24 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar24 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar24);
        local_770 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        local_778 = param_2;
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,local_770);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_770;
        if (*(long *)(lVar13 + 0xe8) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
        }
        uVar10 = local_770;
        if (*(long *)(lVar13 + 0xf0) != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_770;
        uVar22 = *(undefined8 *)(lVar13 + 200);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar27);
        FUN_001516f0(param_2,uVar22,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_770;
        uVar22 = *(undefined8 *)(lVar13 + 0xd0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar27);
        FUN_001516f0(param_2,uVar22,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
          FUN_008fe304(local_780,param_2,&local_7b0,&local_778,local_770);
        }
        else {
          local_780[0] = 1;
          local_7b0 = &LAB_01725290;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar27;
          FUN_01725f84(param_2,local_780,&local_7b0,local_770);
          local_780[0] = 2;
          local_7b0 = &LAB_017255a0;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar27;
          FUN_01725f84(param_2,local_780,&local_7b0,local_770);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,uVar10);
        if (*(undefined1 **)(lVar13 + 0xc0) != (undefined1 *)0x0) {
          local_780[0] = 4;
          uStack_7a8 = 0;
          local_7b0 = *(undefined1 **)(lVar13 + 0xc0);
          local_7a0 = lVar13;
          lStack_798 = lVar27;
          FUN_01725f84(param_2,local_780,&local_7b0,uVar10);
        }
        if (*(char *)(lVar13 + 0xf8) != '\0') {
          local_780[0] = 1;
          local_7b0 = &LAB_01725290;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar27;
          FUN_01725f84(param_2,local_780,&local_7b0,uVar10);
          local_780[0] = 2;
          local_7b0 = &LAB_017255a0;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar27;
          FUN_01725f84(param_2,local_780,&local_7b0,uVar10);
        }
        uVar12 = local_770;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_778,0xfffffffe);
        lVar31 = lVar31 + 1;
      } while (lVar31 != 3);
      FUN_01724278();
      puVar4 = DAT_043ce228;
      if ((DAT_043ce218 & 1) == 0) {
        puVar4 = &DAT_043ce219;
      }
      FUN_00154450(param_2,puVar4);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2b8,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar12);
      local_7b0 = *(undefined1 **)(lVar13 + 0xc0);
      if (local_7b0 != (undefined1 *)0x0) {
        local_778 = CONCAT44(local_778._4_4_,4);
        uStack_7a8 = 0;
        local_7a0 = lVar13;
        lStack_798 = lVar27;
        FUN_01725f84(param_2,&local_778,&local_7b0,uVar12);
      }
      local_778._0_4_ = 1;
      local_7b0 = &LAB_017258b0;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7c538;
      local_7a0 = lVar13;
      lStack_798 = lVar27;
      FUN_01726020(param_2,&local_778,&local_7b0,uVar12);
      local_778 = CONCAT44(local_778._4_4_,2);
      local_7b0 = &LAB_01725c3c;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7c538;
      local_7a0 = lVar13;
      lStack_798 = lVar27;
      FUN_01726020(param_2,&local_778,&local_7b0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_760[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar25;
  uVar32 = uVar28;
  if (iVar9 == 1) {
    *(code **)(lVar13 + 0x30) = pcVar23;
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0xb8) = pcVar23;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x100);
        goto joined_r0x017225f8;
      }
      *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
      goto LAB_01722614;
    }
    *(code **)(lVar13 + 0x38) = pcVar23;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << (uVar25 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x100);
  goto joined_r0x017225f8;
}


