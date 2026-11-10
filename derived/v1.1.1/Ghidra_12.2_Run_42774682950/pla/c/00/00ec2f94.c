/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ec2f94; name: FUN_00ec2f94
 */


/* WARNING: Removing unreachable block (ram,0x00ec6b54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ec2f94(long param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  char *pcVar3;
  byte *pbVar4;
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
  size_t sVar16;
  string *psVar17;
  void *__dest;
  byte *pbVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  byte *pbVar22;
  undefined8 uVar23;
  byte *pbVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  char *pcVar28;
  undefined1 *puVar29;
  byte bVar30;
  byte *pbVar31;
  long lVar32;
  ulong uVar33;
  byte *pbVar34;
  byte *local_bd8;
  undefined1 *local_bd0;
  undefined8 uStack_bc8;
  long local_bc0;
  long lStack_bb8;
  undefined8 local_bb0;
  undefined *puStack_ba8;
  undefined4 local_ba0 [2];
  long local_b98;
  undefined4 local_b90;
  long local_b88;
  undefined4 local_b80 [2];
  string asStack_b78 [928];
  undefined8 auStack_7d8 [2];
  string local_7c8;
  undefined1 auStack_7c7 [7];
  size_t local_7c0;
  undefined1 *local_7b8;
  long alStack_428 [2];
  char *local_418 [119];
  
  if (((DAT_043b2128 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b2128), iVar9 != 0)) {
    local_418[2] = (char *)0x0;
    local_418[1] = (char *)0x0;
    local_418[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b1de0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b1de0), iVar9 != 0)) {
      FUN_00ebc820();
      FUN_00100250(PTR__string_04379718,&DAT_043b1dc8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b1de0);
    }
    puVar29 = DAT_043b1dd8;
    if ((DAT_043b1dc8 & 1) == 0) {
      puVar29 = &DAT_043b1dc9;
    }
    pcVar28 = (char *)std::string::append((char *)local_418,(ulong)puVar29);
    psVar17 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b2110,psVar17);
    pcVar28 = local_418[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_418[0] & 1) != 0) && ((byte *)local_418[2] != (byte *)0x0)) {
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
          FUN_02bcc824(plVar21,pcVar28,0,8);
          goto LAB_00ec5e80;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar28,0,8);
    }
LAB_00ec5e80:
    FUN_00100250(PTR__string_04379718,&DAT_043b2110,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b2128);
  }
  std::string::string(&local_7c8,(string *)&DAT_043b2110);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b2108);
  if (((byte)local_7c8 & 1) == 0) {
    uVar25 = (ulong)((byte)local_7c8 >> 1);
  }
  else {
    uVar25 = local_7c0;
  }
  std::string::append((ulong)&local_7c8,(char)iVar9);
  if (((byte)local_7c8 & 1) == 0) {
    puVar29 = auStack_7c7;
    local_7c0 = (size_t)((byte)local_7c8 >> 1);
  }
  else {
    puVar29 = local_7b8;
  }
  snprintf(puVar29 + (uVar25 - 1),local_7c0,"%d",(ulong)DAT_043b2108);
  DAT_043b2108 = DAT_043b2108 + 1;
  if (((DAT_043b2148 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b2148), iVar9 != 0)) {
    local_418[2] = (char *)0x0;
    local_418[1] = (char *)0x0;
    local_418[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b1de0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b1de0), iVar9 != 0)) {
      FUN_00ebc820();
      FUN_00100250(PTR__string_04379718,&DAT_043b1dc8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b1de0);
    }
    if ((DAT_043b1dc8 & 1) == 0) {
      puVar29 = &DAT_043b1dc9;
    }
    else {
      puVar29 = DAT_043b1dd8;
    }
    pcVar28 = (char *)std::string::append((char *)local_418,(ulong)puVar29);
    psVar17 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b2130,psVar17);
    pcVar28 = local_418[2];
    plVar7 = DAT_043f1798;
    if ((((ulong)local_418[0] & 1) != 0) && ((byte *)local_418[2] != (byte *)0x0)) {
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
          FUN_02bcc824(plVar21,pcVar28,0,8);
          goto LAB_00ec5fec;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pcVar28,0,8);
    }
LAB_00ec5fec:
    FUN_00100250(PTR__string_04379718,&DAT_043b2130,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b2148);
  }
  if ((DAT_043b2130 & 1) == 0) {
    puVar19 = &DAT_043b2131;
    if (((byte)local_7c8 & 1) == 0) goto LAB_00ec5cac;
LAB_00ec307c:
    puVar29 = local_7b8;
  }
  else {
    puVar19 = DAT_043b2140;
    if (((byte)local_7c8 & 1) != 0) goto LAB_00ec307c;
LAB_00ec5cac:
    puVar29 = (undefined1 *)((ulong)&local_7c8 | 1);
  }
  if (((DAT_043b2158 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b2158), iVar9 != 0)) {
    DAT_043b2150 = 0x250;
    __cxa_guard_release(&DAT_043b2158);
  }
  if (((DAT_043b2168 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b2168), iVar9 != 0)) {
    DAT_043b2160 = 599;
    __cxa_guard_release(&DAT_043b2168);
  }
  uVar25 = DAT_043b2150;
  lVar13 = FUN_00153520(param_1,DAT_043b2150);
  if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x250)) ||
     (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar25 = DAT_043b2160;
    lVar13 = FUN_00153520(param_1,DAT_043b2160);
    if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x250)) ||
       (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((DAT_043b2188 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b2188), iVar9 != 0)) {
        if (((DAT_043b21c0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b21c0), iVar9 != 0)) {
          DAT_043b2190 = 0x16;
          DAT_043b21a0 = (byte *)0x0;
          DAT_043b2191._0_7_ = s__anonymous__0388d6f5._0_7_;
          ram0x043b2198 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
          DAT_043b21a8 = 0x2a;
          _DAT_043b219c = 0;
          DAT_043b21b8._7_1_ = 0;
          DAT_043b21b8._1_1_ = s__anonymous_namespace__039071f8[0x10];
          DAT_043b21b8._2_1_ = s__anonymous_namespace__039071f8[0x11];
          DAT_043b21b8._3_1_ = s__anonymous_namespace__039071f8[0x12];
          DAT_043b21b8._4_1_ = s__anonymous_namespace__039071f8[0x13];
          DAT_043b21b8._5_1_ = s__anonymous_namespace__039071f8[0x14];
          DAT_043b21b1 = s__anonymous_namespace__039071f8[8];
          DAT_043b21b1_1._0_1_ = s__anonymous_namespace__039071f8[9];
          DAT_043b21b1_1._1_1_ = s__anonymous_namespace__039071f8[10];
          DAT_043b21b1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
          DAT_043b21b1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
          _DAT_043b21b6 = s__anonymous_namespace__039071f8._13_2_;
          DAT_043b21b8._0_1_ = s__anonymous_namespace__039071f8[0xf];
          DAT_043b21a9._0_7_ = s__anonymous_namespace__039071f8._0_7_;
          DAT_043b21a9._7_1_ = s__anonymous_namespace__039071f8[7];
          DAT_043b21b8._6_1_ = 0;
          FUN_00100250(PTR_FUN_04379930,&DAT_043b2190,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043b21c0);
        }
        plVar7 = DAT_043f1798;
        lVar13 = tpidr_el0;
        plVar21 = *(long **)(lVar13 + 0x20);
        if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
          *(long **)(lVar13 + 0x20) = DAT_043f1798;
          plVar21 = plVar7;
        }
        __dest = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,0x620,8);
        _DAT_043b2170 = (char *)0x621;
        DAT_043b2178 = (byte *)0x616;
        DAT_043b2180 = __dest;
        memcpy(__dest,
               "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<common::lua::command::CommonCommand, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26>, char const (&)[11], void (*)(const char *), char const (&)[13], void (*)(const char *), char const (&)[11], void (*)(const char *), char const (&)[12], void (*)(const char *), char const (&)[18], void (*)(const gfl::FnvHash64 &), char const (&)[10], bool (*)(common::lua::command::PadButton), char const (&)[13], bool (*)(common::lua::command::PadButton), char const (&)[13], bool (*)(common::lua::command::PadButton), char const (&)[12], bool (*)(common::lua::command::PadButton), char const (&)[17], gfl::math::Vector2 (*)(), char const (&)[16], gfl::math::Vector2 (*)(), char const (&)[14], int (*)(int), char const (&)[20], void (*)(const gfl::FnvHash64 &, const char *), char const (&)[22], void (*)(const gfl::FnvHash64 &), char const (&)[24], bool (*)(const gfl::FnvHash64 &), char const (&)[21], bool (*)(const gfl::FnvHash64 &), char const (&)[11], void (*)(int, bool), char const (&)[12], void (*)(), char const (&)[13], void (*)(int), char const (&)[21], bool (*)(), char const (&)[15], bool (*)(), char const (&)[13], void (*)(unsigned short), char const (&)[18], bool (*)(), char const (&)[12], bool (*)(unsigned short), char const (&)[25], void (*)(), char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
               ,0x616);
        *(undefined1 *)((long)__dest + 0x616) = 0;
        std::string::find('p',0x5b);
        uVar27 = std::string::find('p',0x3d);
        uVar25 = std::string::rfind('p',0x5d);
        if (uVar25 == 0xffffffffffffffff) {
          if (((ulong)_DAT_043b2170 & 1) == 0) {
            uVar25 = (ulong)(DAT_043b2170 >> 1);
          }
          else {
            uVar25 = (ulong)DAT_043b2178;
          }
          uVar33 = 0;
          if (uVar27 != 0xffffffffffffffff) {
            uVar33 = uVar27;
          }
          uVar27 = uVar25;
        }
        else {
          uVar33 = 0;
          if (uVar27 != 0xffffffffffffffff) {
            uVar33 = uVar27;
          }
          if (((ulong)_DAT_043b2170 & 1) == 0) {
            uVar27 = (ulong)(DAT_043b2170 >> 1);
          }
          else {
            uVar27 = (ulong)DAT_043b2178;
          }
        }
        if (uVar33 < uVar27 - 1) {
          uVar33 = uVar33 + 1;
        }
        std::string::string((string *)local_418,(string *)&DAT_043b2170,uVar33,uVar25 - uVar33,
                            (allocator *)&DAT_043b2170);
        FUN_00ebbf98(&DAT_043b2170);
        DAT_043b2180 = (byte *)local_418[2];
        _DAT_043b2170 = local_418[0];
        DAT_043b2178 = (byte *)local_418[1];
        lVar13 = FUN_00ebbf3c(&DAT_043b2170);
        if (lVar13 != -1) {
          std::string::erase(0x43b2170,lVar13 - 2);
        }
        bVar6 = DAT_043b2170;
        while( true ) {
          pbVar4 = DAT_043b2180;
          local_bd8 = DAT_043b2178;
          bVar8 = (bVar6 & 1) != 0;
          bVar30 = bVar6 & 1;
          pbVar34 = (byte *)(ulong)(bVar6 >> 1);
          pbVar24 = pbVar34;
          if (bVar8) {
            pbVar24 = DAT_043b2178;
          }
          if (pbVar24 == (byte *)0x0) goto LAB_00ec6500;
          pbVar18 = &DAT_043b2171;
          if ((bVar6 & 1) != 0) {
            pbVar18 = DAT_043b2180;
          }
          iVar9 = isblank((uint)*pbVar18);
          if (iVar9 == 0) break;
          pbVar24 = &DAT_043b2171;
          if (bVar8) {
            pbVar24 = pbVar4;
          }
          std::string::erase(0x43b2170,(long)pbVar24 - (long)pbVar18);
          bVar6 = DAT_043b2170;
        }
        iVar9 = isblank((uint)pbVar18[(long)(pbVar24 + -1)]);
        if (iVar9 == 0) {
          bVar30 = bVar6 & 1;
        }
        else {
          do {
            FUN_00ebbf58(&DAT_043b2170);
            pbVar34 = (byte *)(ulong)(DAT_043b2170 >> 1);
            bVar30 = DAT_043b2170 & 1;
            pbVar24 = pbVar34;
            if (((ulong)_DAT_043b2170 & 1) != 0) {
              pbVar24 = DAT_043b2178;
            }
            local_bd8 = DAT_043b2178;
            if (pbVar24 == (byte *)0x0) break;
            pbVar4 = &DAT_043b2171;
            if (((ulong)_DAT_043b2170 & 1) != 0) {
              pbVar4 = DAT_043b2180;
            }
            iVar9 = isblank((uint)pbVar4[(long)(pbVar24 + -1)]);
          } while (iVar9 != 0);
        }
LAB_00ec6500:
        pbVar24 = &DAT_043b2171;
        if (bVar30 != 0) {
          pbVar34 = local_bd8;
          pbVar24 = DAT_043b2180;
        }
        sVar16 = CONCAT44(_DAT_043b219c,ram0x043b2198);
        if ((DAT_043b2190 & 1) == 0) {
          sVar16 = (ulong)(DAT_043b2190 >> 1);
          pbVar4 = (byte *)&DAT_043b2191;
        }
        else {
          pbVar4 = DAT_043b21a0;
        }
        if (sVar16 == 0) {
          uVar25 = 0;
          goto LAB_00ec6a90;
        }
        if ((long)sVar16 <= (long)pbVar34) {
          pbVar31 = pbVar24 + (long)pbVar34;
          bVar6 = *pbVar4;
          pbVar18 = pbVar24;
          pbVar22 = pbVar34;
          do {
            if ((0xfffffffffffffffe < (long)pbVar22 - sVar16) ||
               (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar22 - sVar16) + 1),
               pbVar18 == (byte *)0x0)) break;
            iVar9 = memcmp(pbVar18,pbVar4,sVar16);
            if (iVar9 == 0) goto LAB_00ec6a68;
            pbVar18 = pbVar18 + 1;
            pbVar22 = pbVar31 + -(long)pbVar18;
          } while ((long)sVar16 <= (long)pbVar22);
        }
LAB_00ec68b0:
        sVar16 = CONCAT26(_DAT_043b21b6,CONCAT51(_DAT_043b21b1,DAT_043b21a9._7_1_));
        pbVar4 = (byte *)CONCAT17(DAT_043b21b8._7_1_,
                                  CONCAT16(DAT_043b21b8._6_1_,
                                           CONCAT51(DAT_043b21b8._1_5_,(char)DAT_043b21b8)));
        if ((DAT_043b21a8 & 1) == 0) {
          pbVar4 = (byte *)&DAT_043b21a9;
          sVar16 = (ulong)(DAT_043b21a8 >> 1);
        }
        if (sVar16 == 0) {
          uVar25 = 0;
LAB_00ec6938:
          do {
            while( true ) {
              std::string::erase(0x43b2170,uVar25);
              bVar8 = ((ulong)_DAT_043b2170 & 1) != 0;
              pbVar24 = (byte *)((ulong)_DAT_043b2170 >> 1 & 0x7f);
              if (bVar8) {
                pbVar24 = DAT_043b2178;
              }
              sVar16 = CONCAT26(_DAT_043b21b6,CONCAT51(_DAT_043b21b1,DAT_043b21a9._7_1_));
              pbVar4 = (byte *)CONCAT17(DAT_043b21b8._7_1_,
                                        CONCAT16(DAT_043b21b8._6_1_,
                                                 CONCAT51(DAT_043b21b8._1_5_,(char)DAT_043b21b8)));
              pbVar34 = DAT_043b2180;
              if (!bVar8) {
                pbVar34 = &DAT_043b2171;
              }
              if ((DAT_043b21a8 & 1) == 0) {
                pbVar4 = (byte *)&DAT_043b21a9;
                sVar16 = (ulong)(DAT_043b21a8 >> 1);
              }
              if (sVar16 != 0) break;
              uVar25 = 0;
            }
            if ((long)pbVar24 < (long)sVar16) goto LAB_00ec6a1c;
            bVar6 = *pbVar4;
            pbVar31 = pbVar34 + (long)pbVar24;
            pbVar18 = pbVar34;
            while( true ) {
              if ((0xfffffffffffffffe < (long)pbVar24 - sVar16) ||
                 (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar24 - sVar16) + 1),
                 pbVar18 == (byte *)0x0)) goto LAB_00ec6a1c;
              iVar9 = memcmp(pbVar18,pbVar4,sVar16);
              if (iVar9 == 0) break;
              pbVar18 = pbVar18 + 1;
              pbVar24 = pbVar31 + -(long)pbVar18;
              if ((long)pbVar24 < (long)sVar16) goto LAB_00ec6a1c;
            }
            if ((pbVar18 == pbVar31) ||
               (uVar25 = (long)pbVar18 - (long)pbVar34, uVar25 == 0xffffffffffffffff))
            goto LAB_00ec6a1c;
          } while( true );
        }
        if ((long)sVar16 <= (long)pbVar34) {
          pbVar31 = pbVar24 + (long)pbVar34;
          bVar6 = *pbVar4;
          pbVar18 = pbVar24;
          do {
            if ((0xfffffffffffffffe < (long)pbVar34 - sVar16) ||
               (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar34 - sVar16) + 1),
               pbVar18 == (byte *)0x0)) break;
            iVar9 = memcmp(pbVar18,pbVar4,sVar16);
            if (iVar9 == 0) {
              if ((pbVar18 != pbVar31) &&
                 (uVar25 = (long)pbVar18 - (long)pbVar24, uVar25 != 0xffffffffffffffff))
              goto LAB_00ec6938;
              break;
            }
            pbVar18 = pbVar18 + 1;
            pbVar34 = pbVar31 + -(long)pbVar18;
          } while ((long)sVar16 <= (long)pbVar34);
        }
LAB_00ec6a1c:
        FUN_00100250(PTR__string_04379718,&DAT_043b2170,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b2188);
      }
      pbVar24 = DAT_043b2180;
      if (((ulong)_DAT_043b2170 & 1) == 0) {
        pbVar24 = &DAT_043b2171;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar24);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar23 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar20[1] = uVar23;
  puVar20[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar20[3] = lVar13;
  lVar26 = *(long *)(param_2 + 0x20);
  puVar20[4] = lVar26;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar26 != 0) {
    uVar27 = puVar20[2];
    uVar25 = *(ulong *)(lVar13 + 8);
    if ((uVar27 & uVar27 - 1) == 0) {
      uVar25 = uVar27 - 1 & uVar25;
    }
    else {
      uVar33 = 0;
      if (uVar27 != 0) {
        uVar33 = uVar25 / uVar27;
      }
      if (uVar27 <= uVar25) {
        uVar25 = uVar25 - uVar33 * uVar27;
      }
    }
    *(undefined8 **)(puVar20[1] + uVar25 * 8) = puVar20 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar23 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar23;
  puVar20[7] = uVar5;
  puVar20[8] = *(undefined8 *)(param_2 + 0x40);
  puVar20[9] = *(undefined8 *)(param_2 + 0x48);
  puVar20[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar20 = &PTR_FUN_041eea48;
  memcpy(puVar20 + 0xc,(void *)(param_2 + 0x60),0x1f0);
  iVar9 = FUN_00154450(param_1,puVar29);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_00ec77f0,0);
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
  if ((((byte)local_7c8 & 1) != 0) && (local_7b8 != (undefined1 *)0x0)) {
    lVar26 = tpidr_el0;
    plVar21 = *(long **)(lVar26 + 0x20);
    if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
      *(long **)(lVar26 + 0x20) = DAT_043f1798;
      plVar21 = plVar7;
    }
    uVar25 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar26 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar26 + 0x38d488) = 1;
        *(undefined8 *)(lVar26 + 0x38d478) = 0;
        *(undefined8 *)(lVar26 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar26 + 0x38d480)) {
        FUN_02bcc824(plVar21,local_7b8,0,8);
        goto LAB_00ec337c;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,local_7b8,0,8);
  }
LAB_00ec337c:
  memset(local_418,0,0x3b0);
  pcVar28 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar26 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pbVar24 = &LAB_00ebced8;
  if (uVar11 != 0) {
    pbVar24 = &LAB_00ebce7c;
  }
  puVar1 = (ulong *)(lVar13 + 0x248);
  do {
    lVar15 = FUN_008cca50();
    pbVar34 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar34 >> 1);
    if ((*pbVar34 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar34 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar34,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(byte **)(lVar13 + 0x30) = pbVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar27 = 0;
            *(byte **)(lVar13 + 0x200) = pbVar24;
            goto LAB_00ec3508;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(byte **)(lVar13 + 0x38) = pbVar24;
      }
      uVar27 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3508;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  uVar27 = 1;
  local_418[0] = pcVar28;
  local_418[1] = (char *)pbVar24;
LAB_00ec3508:
  pcVar28 = *(char **)(lVar13 + 0x70);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar2 = (code *)&LAB_00ebcfb4;
  if (uVar11 != 0) {
    pcVar2 = FUN_00ebcf58;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x200) = pcVar2;
            goto LAB_00ec3648;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3648;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec3648:
  pcVar28 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ebd048;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ebcfec;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec3788;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3788;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec3788:
  pcVar28 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ebd0dc;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ebd080;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec38c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec38c8;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec38c8:
  pcVar28 = *(char **)(lVar13 + 0xa0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ebd144;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ebd114;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec3a08;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3a08;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec3a08:
  pcVar28 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ebd278;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ebd214;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec3b48;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3b48;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec3b48:
  pcVar28 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar2 = (code *)&LAB_00ebd360;
  if (uVar11 != 0) {
    pcVar2 = FUN_00ebd2fc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x200) = pcVar2;
            goto LAB_00ec3c88;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3c88;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec3c88:
  pcVar28 = *(char **)(lVar13 + 0xd0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ebd3fc;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ebd398;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec3dc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3dc8;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec3dc8:
  pcVar28 = *(char **)(lVar13 + 0xe0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ebd498;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ebd434;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec3f08;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec3f08;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec3f08:
  pcVar28 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec0624;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ebd4d0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4048;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4048;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4048:
  pcVar28 = *(char **)(lVar13 + 0x100);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec072c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec06a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4188;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4188;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4188:
  pcVar28 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec0888;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec07b0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec42c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec42c8;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec42c8:
  pcVar28 = *(char **)(lVar13 + 0x120);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec09f4;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec08c0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4408;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4408;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4408:
  pcVar28 = *(char **)(lVar13 + 0x130);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec0a70;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec0a40;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4548;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4548;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4548:
  pcVar28 = *(char **)(lVar13 + 0x140);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec0c40;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec0b40;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4688;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4688;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4688:
  pcVar28 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec0d58;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec0d20;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec47c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec47c8;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec47c8:
  pcVar28 = *(char **)(lVar13 + 0x160);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec0f40;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec0e38;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4908;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4908;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4908:
  pcVar28 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec0fb8;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec0f78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4a48;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4a48;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4a48:
  pcVar28 = *(char **)(lVar13 + 0x180);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec1098;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec0ff8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4b88;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4b88;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4b88:
  pcVar28 = *(char **)(lVar13 + 400);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec112c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec10dc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4cc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4cc8;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4cc8:
  pcVar28 = *(char **)(lVar13 + 0x1a0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar2 = (code *)&LAB_00ec11fc;
  if (uVar11 != 0) {
    pcVar2 = FUN_00ec11ac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x200) = pcVar2;
            goto LAB_00ec4e08;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4e08;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4e08:
  pcVar28 = *(char **)(lVar13 + 0x1b0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec12d8;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec1234;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec4f48;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec4f48;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec4f48:
  pcVar28 = *(char **)(lVar13 + 0x1c0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec136c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec131c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec5088;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec5088;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec5088:
  pcVar28 = *(char **)(lVar13 + 0x1d0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec1478;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec13a4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec51c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec51c8;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec51c8:
  pcVar28 = *(char **)(lVar13 + 0x1e0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec14f0;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec14b0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec5308;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec5308;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec5308:
  pcVar28 = *(char **)(lVar13 + 0x1f0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec2d6c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec1530;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x200) = pcVar3;
            goto LAB_00ec5448;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar3;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
      goto LAB_00ec5448;
    }
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
  } while (uVar25 != 0x20);
  alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
  local_418[uVar27 * 2 + 1] = pcVar3;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_00ec5448:
  pcVar28 = *(char **)(lVar13 + 0x1f8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar32 = 0;
  uVar25 = 0;
  pcVar3 = &LAB_00ec2f5c;
  if (uVar11 != 0) {
    pcVar3 = &LAB_00ec2f24;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar24 = (byte *)(lVar15 + lVar32);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar24 >> 1);
    if ((*pbVar24 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar24 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar24,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) break;
    uVar25 = uVar25 + 1;
    lVar32 = lVar32 + 0x18;
    if (uVar25 == 0x20) {
LAB_00ec5588:
      uVar33 = (ulong)((int)uVar27 + 1);
      alStack_428[uVar27 * 2 + 2] = (long)pcVar28;
      local_418[uVar27 * 2 + 1] = pcVar3;
      uVar11 = (uint)*puVar1;
joined_r0x00ec556c:
      if ((uVar11 >> 0x11 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar32 = FUN_008cca50();
        if ((*(byte *)(lVar32 + 0x180) & 1) == 0) {
          lVar32 = lVar32 + 0x181;
        }
        else {
          lVar32 = *(long *)(lVar32 + 400);
        }
        alStack_428[uVar33 * 2 + 2] = lVar32;
        local_418[uVar33 * 2 + 1] = &LAB_00ec1bb0;
        uVar33 = (ulong)((int)uVar33 + 1);
        uVar11 = (uint)*puVar1;
      }
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar32 = FUN_008cca50();
        if ((*(byte *)(lVar32 + 0x288) & 1) == 0) {
          lVar32 = lVar32 + 0x289;
        }
        else {
          lVar32 = *(long *)(lVar32 + 0x298);
        }
        uVar25 = (ulong)((int)uVar33 + 1);
        alStack_428[uVar33 * 2 + 2] = lVar32;
        local_418[uVar33 * 2 + 1] = &LAB_00ec1ba8;
        lVar32 = *(long *)(lVar13 + 0x200);
      }
      else {
        lVar32 = *(long *)(lVar13 + 0x200);
        uVar25 = uVar33;
      }
      if (lVar32 != 0) {
        lVar32 = FUN_008cca50();
        if ((*(byte *)(lVar32 + 0x1c8) & 1) == 0) {
          lVar32 = lVar32 + 0x1c9;
        }
        else {
          lVar32 = *(long *)(lVar32 + 0x1d8);
        }
        pcVar28 = *(char **)(lVar13 + 0x200);
        alStack_428[uVar25 * 2 + 2] = lVar32;
        local_418[uVar25 * 2 + 1] = pcVar28;
        uVar25 = (ulong)((int)uVar25 + 1);
      }
      alStack_428[uVar25 * 2 + 2] = 0;
      local_418[uVar25 * 2 + 1] = (char *)0x0;
      memcpy(&local_7c8,local_418,0x3b0);
      memcpy(asStack_b78,local_418,0x3b0);
      lVar32 = FUN_008cca50();
      lVar15 = uVar25 - 1;
      pcVar28 = (char *)alStack_428[lVar15 * 2 + 2];
      sVar16 = strlen(pcVar28);
      if ((*(byte *)(lVar32 + 0x1c8) & 1) == 0) {
        sVar14 = (size_t)(*(byte *)(lVar32 + 0x1c8) >> 1);
      }
      else {
        sVar14 = *(size_t *)(lVar32 + 0x1d0);
      }
      if ((sVar16 == sVar14) &&
         (iVar9 = std::string::compare(lVar32 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
         iVar9 == 0)) {
        auStack_7d8[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_7c7 + lVar15 * 0x10 + 7) = 0;
      }
      *(long *)(asStack_b78 + lVar15 * 0x10) = alStack_428[lVar15 * 2 + 2];
      *(undefined1 **)(asStack_b78 + (lVar15 * 2 + 1) * 8) = &LAB_00ec6b60;
      FUN_00151fe0(param_1,0,2);
      local_b80[0] = FUN_0014feb0(param_1,0xffffffff);
      local_b88 = param_1;
      if (((DAT_043b1de0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b1de0), iVar9 != 0)) {
        FUN_00ebc820();
        FUN_00100250(PTR__string_04379718,&DAT_043b1dc8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b1de0);
      }
      uVar10 = local_b80[0];
      if ((DAT_043b1dc8 & 1) == 0) {
        uVar25 = (ulong)(DAT_043b1dc8 >> 1);
        puVar29 = &DAT_043b1dc9;
      }
      else {
        uVar25 = DAT_043b1dd0;
        puVar29 = DAT_043b1dd8;
      }
      FUN_001514f0(param_1,puVar29,uVar25);
      FUN_00152550(param_1,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_00ec1ac0,0);
      FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
      lVar32 = 0;
      do {
        if (lVar32 == 1) {
          psVar17 = asStack_b78;
          FUN_00ebabf0();
          pbVar24 = &DAT_043b1d30;
        }
        else if (lVar32 == 0) {
          psVar17 = &local_7c8;
          FUN_00eba9fc();
          pbVar24 = &DAT_043b1cb8;
        }
        else {
          psVar17 = (string *)local_418;
          FUN_00ebade4();
          pbVar24 = &DAT_043b1da8;
        }
        pbVar34 = pbVar24 + 1;
        if ((*pbVar24 & 1) != 0) {
          pbVar34 = *(byte **)(pbVar24 + 0x10);
        }
        FUN_00154450(param_1,pbVar34);
        local_b90 = FUN_0014feb0(param_1,0xffffffff);
        local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,0x1e);
        local_b98 = param_1;
        FUN_008fe304(local_ba0,param_1,&local_bd0,&local_b88,local_b90);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00155a20(param_1,psVar17,2);
        uVar10 = local_b90;
        if (*(long *)(lVar13 + 0x230) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_check");
        }
        uVar10 = local_b90;
        if (*(long *)(lVar13 + 0x238) != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_cast");
        }
        uVar10 = local_b90;
        uVar23 = *(undefined8 *)(lVar13 + 0x210);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar26);
        FUN_001516f0(param_1,uVar23,3);
        FUN_00152550(param_1,uVar10,&DAT_03955ac7);
        uVar10 = local_b90;
        uVar23 = *(undefined8 *)(lVar13 + 0x218);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar26);
        FUN_001516f0(param_1,uVar23,3);
        FUN_00152550(param_1,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,1);
          FUN_008fe304(local_ba0,param_1,&local_bd0,&local_b98,local_b90);
        }
        else {
          local_ba0[0] = 1;
          local_bd0 = &LAB_00ec6bb0;
          uStack_bc8 = 0;
          local_bc0 = lVar13;
          lStack_bb8 = lVar26;
          FUN_00ec7824(param_1,local_ba0,&local_bd0,local_b90);
          local_ba0[0] = 2;
          local_bd0 = &LAB_00ec6ec0;
          uStack_bc8 = 0;
          local_bc0 = lVar13;
          lStack_bb8 = lVar26;
          FUN_00ec7824(param_1,local_ba0,&local_bd0,local_b90);
        }
        FUN_00151fe0(param_1,0,3);
        uVar10 = FUN_0014feb0(param_1,0xffffffff);
        local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,0x1e);
        FUN_008fe304(local_ba0,param_1,&local_bd0,&local_b88,uVar10);
        if (*(undefined1 **)(lVar13 + 0x208) != (undefined1 *)0x0) {
          uStack_bc8 = 0;
          local_ba0[0] = 4;
          local_bd0 = *(undefined1 **)(lVar13 + 0x208);
          local_bc0 = lVar13;
          lStack_bb8 = lVar26;
          FUN_00ec7824(param_1,local_ba0,&local_bd0,uVar10);
        }
        if (*(char *)(lVar13 + 0x240) != '\0') {
          local_ba0[0] = 1;
          local_bd0 = &LAB_00ec6bb0;
          uStack_bc8 = 0;
          local_bc0 = lVar13;
          lStack_bb8 = lVar26;
          FUN_00ec7824(param_1,local_ba0,&local_bd0,uVar10);
          local_ba0[0] = 2;
          local_bd0 = &LAB_00ec6ec0;
          uStack_bc8 = 0;
          local_bc0 = lVar13;
          lStack_bb8 = lVar26;
          FUN_00ec7824(param_1,local_ba0,&local_bd0,uVar10);
        }
        uVar12 = local_b90;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar10);
        }
        FUN_00152ae0(param_1,uVar12);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_b98,0xfffffffe);
        lVar32 = lVar32 + 1;
      } while (lVar32 != 3);
      FUN_00ebb024();
      if ((DAT_043b1e20 & 1) == 0) {
        puVar19 = &DAT_043b1e21;
      }
      else {
        puVar19 = DAT_043b1e30;
      }
      FUN_00154450(param_1,puVar19);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_bd0._0_4_ = 0x1e;
      FUN_008fe304(&local_b98,param_1,&local_bd0,&local_b88,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,local_418,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,0x1e);
      FUN_008fe304(&local_b98,param_1,&local_bd0,&local_b88,uVar12);
      local_bd0 = *(undefined1 **)(lVar13 + 0x208);
      if (local_bd0 != (undefined1 *)0x0) {
        local_b98 = CONCAT44(local_b98._4_4_,4);
        uStack_bc8 = 0;
        local_bc0 = lVar13;
        lStack_bb8 = lVar26;
        FUN_00ec7824(param_1,&local_b98,&local_bd0,uVar12);
      }
      local_b98._0_4_ = 1;
      local_bd0 = &LAB_00ec71d0;
      uStack_bc8 = 0;
      local_bb0 = 0;
      puStack_ba8 = &DAT_03a78868;
      local_bc0 = lVar13;
      lStack_bb8 = lVar26;
      FUN_00ec78c0(param_1,&local_b98,&local_bd0,uVar12);
      local_b98 = CONCAT44(local_b98._4_4_,2);
      local_bd0 = &LAB_00ec74e0;
      uStack_bc8 = 0;
      local_bb0 = 0;
      puStack_ba8 = &DAT_03a78868;
      local_bc0 = lVar13;
      lStack_bb8 = lVar26;
      FUN_00ec78c0(param_1,&local_b98,&local_bd0,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_b80[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar9 = (int)uVar25;
  uVar33 = uVar27;
  if (iVar9 == 1) {
    *(char **)(lVar13 + 0x30) = pcVar3;
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 == 0x13) {
        *(char **)(lVar13 + 0x200) = pcVar3;
        uVar11 = (uint)*puVar1;
        goto joined_r0x00ec556c;
      }
      *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
      goto LAB_00ec5588;
    }
    *(char **)(lVar13 + 0x38) = pcVar3;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar25 & 0x3f);
  uVar11 = (uint)*puVar1;
  goto joined_r0x00ec556c;
LAB_00ec6a68:
  if ((pbVar18 == pbVar31) || (uVar25 = (long)pbVar18 - (long)pbVar24, uVar25 == 0xffffffffffffffff)
     ) goto LAB_00ec68b0;
LAB_00ec6a90:
  while( true ) {
    std::string::erase(0x43b2170,uVar25);
    if (((ulong)_DAT_043b2170 & 1) == 0) {
      pbVar34 = (byte *)((ulong)_DAT_043b2170 >> 1 & 0x7f);
      pbVar24 = &DAT_043b2171;
    }
    else {
      pbVar34 = DAT_043b2178;
      pbVar24 = DAT_043b2180;
    }
    sVar16 = CONCAT44(_DAT_043b219c,ram0x043b2198);
    if ((DAT_043b2190 & 1) == 0) {
      sVar16 = (ulong)(DAT_043b2190 >> 1);
      pbVar4 = (byte *)&DAT_043b2191;
    }
    else {
      pbVar4 = DAT_043b21a0;
    }
    if (sVar16 != 0) break;
    uVar25 = 0;
  }
  if ((long)pbVar34 < (long)sVar16) goto LAB_00ec68b0;
  pbVar31 = pbVar24 + (long)pbVar34;
  bVar6 = *pbVar4;
  pbVar18 = pbVar24;
  pbVar22 = pbVar34;
  while( true ) {
    if ((0xfffffffffffffffe < (long)pbVar22 - sVar16) ||
       (pbVar18 = memchr(pbVar18,(uint)bVar6,((long)pbVar22 - sVar16) + 1), pbVar18 == (byte *)0x0))
    goto LAB_00ec68b0;
    iVar9 = memcmp(pbVar18,pbVar4,sVar16);
    if (iVar9 == 0) break;
    pbVar18 = pbVar18 + 1;
    pbVar22 = pbVar31 + -(long)pbVar18;
    if ((long)pbVar22 < (long)sVar16) goto LAB_00ec68b0;
  }
  goto LAB_00ec6a68;
}


