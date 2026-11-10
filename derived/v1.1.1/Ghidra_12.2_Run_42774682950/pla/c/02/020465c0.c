/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020465c0; name: FUN_020465c0
 */


/* WARNING: Removing unreachable block (ram,0x02046cdc) */
/* WARNING: Removing unreachable block (ram,0x02046d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020465c0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  size_t sVar19;
  uint uVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043d78d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d78d8), iVar8 != 0)) {
    DAT_043d78a8 = 0x16;
    DAT_043d78b8 = (byte *)0x0;
    _DAT_043d78b4 = 0;
    DAT_043d78a9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d78b0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d78c0 = 0x2a;
    DAT_043d78d0._7_1_ = 0;
    DAT_043d78d0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d78d0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d78d0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d78d0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d78d0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d78c9 = s__anonymous_namespace__039071f8[8];
    DAT_043d78c9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d78c9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d78c9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d78c9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d78ce = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d78d0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d78c1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d78c1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d78d0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d78a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d78d8);
  }
  plVar6 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar13 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  puVar9 = (undefined1 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x860,8);
  _DAT_043d7888 = 0x861;
  DAT_043d7890 = 0x852;
  DAT_043d7898 = puVar9;
  memcpy(puVar9,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::EventLandmarkDesc, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15>, char const (&)[11], gfl::math::Vector3 field::EventLandmarkDesc::*, char const (&)[10], field::EventLandmarkType field::EventLandmarkDesc::*, char const (&)[24], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:26:33), char const (&)[20], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:27:29), char const (&)[43], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:28:52), char const (&)[35], gfl::math::Vector3 (field::EventLandmarkDesc::*)() const, char const (&)[23], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:30:32), char const (&)[19], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:31:28), char const (&)[42], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:32:51), char const (&)[34], gfl::math::Vector3 (field::EventLandmarkDesc::*)() const, char const (&)[31], gfl::math::Quaternion (field::EventLandmarkDesc::*)() const, char const (&)[26], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:35:35), char const (&)[37], gfl::math::Vector3 (field::EventLandmarkDesc::*)() const, char const (&)[40], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/event_landmark_desc_glue.cpp:37:49), char const (&)[4], sol::constructor_list<sol::types<> > &..." /* TRUNCATED STRING LITERAL */
         ,0x852);
  puVar9[0x852] = 0;
  std::string::find(-0x78,0x5b);
  uVar10 = std::string::find(-0x78,0x3d);
  uVar11 = std::string::rfind(-0x78,0x5d);
  if (uVar11 == 0xffffffffffffffff) {
    if ((_DAT_043d7888 & 1) == 0) {
      uVar11 = (ulong)(DAT_043d7888 >> 1);
    }
    else {
      uVar11 = DAT_043d7890;
    }
    uVar14 = 0;
    if (uVar10 != 0xffffffffffffffff) {
      uVar14 = uVar10;
    }
    uVar10 = uVar11;
  }
  else {
    uVar14 = 0;
    if (uVar10 != 0xffffffffffffffff) {
      uVar14 = uVar10;
    }
    if ((_DAT_043d7888 & 1) == 0) {
      uVar10 = (ulong)(DAT_043d7888 >> 1);
    }
    else {
      uVar10 = DAT_043d7890;
    }
  }
  if (uVar14 < uVar10 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043d7888,uVar14,uVar11 - uVar14,
                      (allocator *)&DAT_043d7888);
  if ((_DAT_043d7888 & 1) != 0) {
    *DAT_043d7898 = 0;
    plVar6 = DAT_043f1798;
    puVar9 = DAT_043d7898;
    DAT_043d7890 = 0;
    if (((_DAT_043d7888 & 1) != 0) && (DAT_043d7898 != (undefined1 *)0x0)) {
      plVar13 = *(long **)(lVar16 + 0x20);
      if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
        *(long **)(lVar16 + 0x20) = DAT_043f1798;
        plVar13 = plVar6;
      }
      uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar11 & 1) != 0) {
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar13,puVar9,0,8);
          goto LAB_020467d0;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar9,0,8);
    }
  }
LAB_020467d0:
  uVar18 = (uint)local_78 & 0xff;
  uVar20 = (uint)local_78 & 1;
  uVar11 = local_78 >> 1 & 0x7f;
  _DAT_043d7888 = local_78;
  DAT_043d7890 = uStack_70;
  DAT_043d7898 = local_68;
  if ((local_78 & 1) == 0) {
    local_68 = &DAT_043d7889;
    uStack_70 = uVar11;
    if (uVar11 < 0xe) goto LAB_020468a0;
  }
  else if ((long)uStack_70 < 0xe) goto LAB_020468a0;
  pbVar15 = local_68 + uStack_70;
  lVar16 = 1;
  while (uStack_70 != 0xd) {
    uStack_70 = uStack_70 - 1;
    if (local_68[uStack_70] == 0x6b) {
      lVar17 = 0;
      do {
        if (lVar17 == -0xd) {
          if ((lVar16 != -0xd) && (pbVar15 + (~(ulong)local_68 - 0xd) != (byte *)0xffffffffffffffff)
             ) {
            std::string::erase(0x43d7888,(ulong)(pbVar15 + (~(ulong)local_68 - 0xd) + -2));
            uVar18 = (uint)DAT_043d7888;
            uVar20 = DAT_043d7888 & 1;
            uVar11 = (ulong)(DAT_043d7888 >> 1);
          }
          goto LAB_020468a0;
        }
        lVar4 = lVar17 + -2;
        lVar5 = lVar17 + 0xc;
        lVar17 = lVar17 + -1;
      } while (pbVar15[lVar4] == "seperator_mark"[lVar5]);
    }
    pbVar15 = pbVar15 + -1;
    lVar16 = lVar16 + 1;
  }
LAB_020468a0:
  uVar14 = DAT_043d7890;
  uVar10 = uVar11;
  if (uVar20 != 0) {
    uVar10 = DAT_043d7890;
  }
  if (uVar10 != 0) {
    pbVar15 = &DAT_043d7889;
    if (uVar20 != 0) {
      pbVar15 = DAT_043d7898;
    }
    iVar8 = isblank((uint)*pbVar15);
    if (iVar8 == 0) {
      uVar20 = uVar18 & 1;
      uVar11 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        std::string::erase(0x43d7888,0);
        uVar14 = DAT_043d7890;
        uVar18 = (uint)DAT_043d7888;
        uVar11 = (ulong)(DAT_043d7888 >> 1);
        uVar20 = DAT_043d7888 & 1;
        uVar10 = uVar11;
        if ((_DAT_043d7888 & 1) != 0) {
          uVar10 = DAT_043d7890;
        }
        if (uVar10 == 0) break;
        pbVar15 = &DAT_043d7889;
        if ((_DAT_043d7888 & 1) != 0) {
          pbVar15 = DAT_043d7898;
        }
        iVar8 = isblank((uint)*pbVar15);
      } while (iVar8 != 0);
    }
  }
  bVar7 = uVar20 == 0;
  uVar10 = uVar11;
  if (!bVar7) {
    uVar10 = uVar14;
  }
  if (uVar10 != 0) {
    do {
      uVar11 = (ulong)(uVar18 >> 1);
      uVar10 = uVar11;
      pbVar15 = &DAT_043d7889;
      if (!bVar7) {
        uVar10 = uVar14;
        pbVar15 = DAT_043d7898;
      }
      iVar8 = isblank((uint)pbVar15[uVar10 - 1]);
      if (iVar8 == 0) break;
      FUN_0202c0f0(&DAT_043d7888);
      uVar18 = (uint)DAT_043d7888;
      bVar7 = (_DAT_043d7888 & 1) == 0;
      uVar11 = (ulong)(DAT_043d7888 >> 1);
      uVar10 = uVar11;
      if (!bVar7) {
        uVar10 = DAT_043d7890;
      }
      uVar14 = DAT_043d7890;
    } while (uVar10 != 0);
    uVar20 = uVar18 & 1;
  }
  if (uVar20 != 0) {
    uVar11 = uVar14;
  }
  pbVar15 = &DAT_043d7889;
  if (uVar20 != 0) {
    pbVar15 = DAT_043d7898;
  }
  sVar19 = CONCAT44(_DAT_043d78b4,ram0x043d78b0);
  pbVar2 = DAT_043d78b8;
  if ((DAT_043d78a8 & 1) == 0) {
    sVar19 = (size_t)(DAT_043d78a8 >> 1);
    pbVar2 = (byte *)&DAT_043d78a9;
  }
  if (sVar19 == 0) {
    uVar10 = 0;
LAB_02046ae8:
    do {
      while( true ) {
        std::string::erase(0x43d7888,uVar10);
        sVar19 = CONCAT44(_DAT_043d78b4,ram0x043d78b0);
        if ((_DAT_043d7888 & 1) == 0) {
          uVar11 = _DAT_043d7888 >> 1 & 0x7f;
          pbVar15 = &DAT_043d7889;
        }
        else {
          uVar11 = DAT_043d7890;
          pbVar15 = DAT_043d7898;
        }
        if ((DAT_043d78a8 & 1) == 0) {
          sVar19 = (ulong)(DAT_043d78a8 >> 1);
          pbVar2 = (byte *)&DAT_043d78a9;
        }
        else {
          pbVar2 = DAT_043d78b8;
        }
        if (sVar19 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar11 < (long)sVar19) goto LAB_020469dc;
      bVar3 = *pbVar2;
      pbVar12 = pbVar15;
      uVar10 = uVar11;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar19) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar19) + 1), pbVar12 == (byte *)0x0))
        goto LAB_020469dc;
        iVar8 = memcmp(pbVar12,pbVar2,sVar19);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar15 + uVar11) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar19) goto LAB_020469dc;
      }
      if ((pbVar12 == pbVar15 + uVar11) ||
         (uVar10 = (long)pbVar12 - (long)pbVar15, uVar10 == 0xffffffffffffffff)) goto LAB_020469dc;
    } while( true );
  }
  if ((long)sVar19 <= (long)uVar11) {
    bVar3 = *pbVar2;
    pbVar12 = pbVar15;
    uVar10 = uVar11;
    do {
      if ((0xfffffffffffffffe < uVar10 - sVar19) ||
         (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar19) + 1), pbVar12 == (byte *)0x0))
      break;
      iVar8 = memcmp(pbVar12,pbVar2,sVar19);
      if (iVar8 == 0) {
        if ((pbVar12 != pbVar15 + uVar11) &&
           (uVar10 = (long)pbVar12 - (long)pbVar15, uVar10 != 0xffffffffffffffff))
        goto LAB_02046ae8;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar15 + uVar11) - (long)pbVar12;
    } while ((long)sVar19 <= (long)uVar10);
  }
LAB_020469dc:
  sVar19 = CONCAT26(_DAT_043d78ce,CONCAT51(_DAT_043d78c9,DAT_043d78c1._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043d78d0._7_1_,
                            CONCAT16(DAT_043d78d0._6_1_,
                                     CONCAT51(DAT_043d78d0._1_5_,(char)DAT_043d78d0)));
  if ((DAT_043d78c0 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043d78c1;
    sVar19 = (ulong)(DAT_043d78c0 >> 1);
  }
  if (sVar19 == 0) {
    uVar11 = 0;
    goto LAB_02046ba0;
  }
  if ((long)sVar19 <= (long)uVar11) {
    bVar3 = *pbVar2;
    pbVar1 = pbVar15 + uVar11;
    pbVar12 = pbVar15;
    do {
      if (0xfffffffffffffffe < uVar11 - sVar19) {
        return;
      }
      pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar11 - sVar19) + 1);
      if (pbVar12 == (byte *)0x0) {
        return;
      }
      iVar8 = memcmp(pbVar12,pbVar2,sVar19);
      if (iVar8 == 0) {
        if (pbVar12 == pbVar1) {
          return;
        }
        do {
          uVar11 = (long)pbVar12 - (long)pbVar15;
          if (uVar11 == 0xffffffffffffffff) {
            return;
          }
LAB_02046ba0:
          while( true ) {
            std::string::erase(0x43d7888,uVar11);
            bVar7 = (_DAT_043d7888 & 1) != 0;
            uVar11 = _DAT_043d7888 >> 1 & 0x7f;
            if (bVar7) {
              uVar11 = DAT_043d7890;
            }
            sVar19 = CONCAT26(_DAT_043d78ce,CONCAT51(_DAT_043d78c9,DAT_043d78c1._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043d78d0._7_1_,
                                      CONCAT16(DAT_043d78d0._6_1_,
                                               CONCAT51(DAT_043d78d0._1_5_,(char)DAT_043d78d0)));
            pbVar15 = DAT_043d7898;
            if (!bVar7) {
              pbVar15 = &DAT_043d7889;
            }
            if ((DAT_043d78c0 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043d78c1;
              sVar19 = (ulong)(DAT_043d78c0 >> 1);
            }
            if (sVar19 != 0) break;
            uVar11 = 0;
          }
          if ((long)uVar11 < (long)sVar19) {
            return;
          }
          bVar3 = *pbVar2;
          pbVar1 = pbVar15 + uVar11;
          pbVar12 = pbVar15;
          while( true ) {
            if (0xfffffffffffffffe < uVar11 - sVar19) {
              return;
            }
            pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar11 - sVar19) + 1);
            if (pbVar12 == (byte *)0x0) {
              return;
            }
            iVar8 = memcmp(pbVar12,pbVar2,sVar19);
            if (iVar8 == 0) break;
            pbVar12 = pbVar12 + 1;
            uVar11 = (long)pbVar1 - (long)pbVar12;
            if ((long)uVar11 < (long)sVar19) {
              return;
            }
          }
          if (pbVar12 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar12 = pbVar12 + 1;
      uVar11 = (long)pbVar1 - (long)pbVar12;
    } while ((long)sVar19 <= (long)uVar11);
  }
  return;
}


