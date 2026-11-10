/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017cf760; name: FUN_017cf760
 */


/* WARNING: Removing unreachable block (ram,0x017cfe64) */
/* WARNING: Removing unreachable block (ram,0x017cfe74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017cf760(void)

{
  byte *pbVar1;
  size_t sVar2;
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
  uint uVar19;
  byte *pbVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043d10d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d10d8), iVar8 != 0)) {
    DAT_043d10a8 = 0x16;
    DAT_043d10b8 = (byte *)0x0;
    _DAT_043d10b4 = 0;
    DAT_043d10a9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d10b0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d10c0 = 0x2a;
    DAT_043d10d0._7_1_ = 0;
    DAT_043d10d0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d10d0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d10d0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d10d0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d10d0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d10c9 = s__anonymous_namespace__039071f8[8];
    DAT_043d10c9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d10c9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d10c9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d10c9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d10ce = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d10d0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d10c1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d10c1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d10d0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d10a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d10d8);
  }
  plVar6 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar13 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  puVar9 = (undefined1 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x620,8);
  _DAT_043d1088 = 0x621;
  DAT_043d1090 = 0x61e;
  DAT_043d1098 = puVar9;
  memcpy(puVar9,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::buddy::BuddyStateContext, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11>, char const (&)[38], bool (field::buddy::BuddyStateContext::*)() const, char const (&)[37], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/include/content/script/generated/buddy_state_context_glue.cpp:19:46), char const (&)[33], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/include/content/script/generated/buddy_state_context_glue.cpp:20:42), char const (&)[35], field::content::PokemonControllerComponent *(field::buddy::BuddyStateContext::*)() const, char const (&)[38], bool (field::buddy::BuddyStateContext::*)() const, char const (&)[33], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/include/content/script/generated/buddy_state_context_glue.cpp:23:42), char const (&)[43], bool (field::buddy::BuddyStateContext::*)() const, char const (&)[38], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/include/content/script/generated/buddy_state_context_glue.cpp:25:47), char const (&)[30], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/include/content/script/generated/buddy_state_context_glue.cpp:26:39), char const (&)[12], gfl::math::Vector3 field::buddy::BuddyStateContext::*, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x61e);
  puVar9[0x61e] = 0;
  std::string::find(-0x78,0x5b);
  uVar10 = std::string::find(-0x78,0x3d);
  uVar11 = std::string::rfind(-0x78,0x5d);
  if (uVar11 == 0xffffffffffffffff) {
    if ((_DAT_043d1088 & 1) == 0) {
      uVar11 = (ulong)(DAT_043d1088 >> 1);
    }
    else {
      uVar11 = DAT_043d1090;
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
    if ((_DAT_043d1088 & 1) == 0) {
      uVar10 = (ulong)(DAT_043d1088 >> 1);
    }
    else {
      uVar10 = DAT_043d1090;
    }
  }
  if (uVar14 < uVar10 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043d1088,uVar14,uVar11 - uVar14,
                      (allocator *)&DAT_043d1088);
  if ((_DAT_043d1088 & 1) != 0) {
    *DAT_043d1098 = 0;
    plVar6 = DAT_043f1798;
    puVar9 = DAT_043d1098;
    DAT_043d1090 = 0;
    if (((_DAT_043d1088 & 1) != 0) && (DAT_043d1098 != (undefined1 *)0x0)) {
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
          goto LAB_017cf970;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar9,0,8);
    }
  }
LAB_017cf970:
  uVar11 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  _DAT_043d1088 = local_78;
  DAT_043d1090 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar11;
    pbVar20 = &DAT_043d1089;
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043d1098 = local_68;
  if (0xd < (long)uStack_70) {
    pbVar15 = pbVar20 + uStack_70;
    lVar16 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (pbVar20[uStack_70] == 0x6b) {
        lVar17 = 0;
        do {
          if (lVar17 == -0xd) {
            if ((lVar16 != -0xd) &&
               (pbVar15 + (~(ulong)pbVar20 - 0xd) != (byte *)0xffffffffffffffff)) {
              std::string::erase(0x43d1088,(ulong)(pbVar15 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)DAT_043d1088;
              uVar19 = DAT_043d1088 & 1;
              uVar11 = (ulong)(DAT_043d1088 >> 1);
            }
            goto LAB_017cfa44;
          }
          lVar4 = lVar17 + -2;
          lVar5 = lVar17 + 0xc;
          lVar17 = lVar17 + -1;
        } while (pbVar15[lVar4] == "seperator_mark"[lVar5]);
      }
      pbVar15 = pbVar15 + -1;
      lVar16 = lVar16 + 1;
    }
  }
LAB_017cfa44:
  uVar14 = DAT_043d1090;
  uVar10 = uVar11;
  if (uVar19 != 0) {
    uVar10 = DAT_043d1090;
  }
  if (uVar10 != 0) {
    pbVar20 = &DAT_043d1089;
    if (uVar19 != 0) {
      pbVar20 = DAT_043d1098;
    }
    iVar8 = isblank((uint)*pbVar20);
    if (iVar8 == 0) {
      uVar19 = uVar18 & 1;
      uVar11 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        std::string::erase(0x43d1088,0);
        uVar14 = DAT_043d1090;
        uVar18 = (uint)DAT_043d1088;
        uVar11 = (ulong)(DAT_043d1088 >> 1);
        uVar19 = DAT_043d1088 & 1;
        uVar10 = uVar11;
        if ((_DAT_043d1088 & 1) != 0) {
          uVar10 = DAT_043d1090;
        }
        if (uVar10 == 0) break;
        pbVar20 = &DAT_043d1089;
        if ((_DAT_043d1088 & 1) != 0) {
          pbVar20 = DAT_043d1098;
        }
        iVar8 = isblank((uint)*pbVar20);
      } while (iVar8 != 0);
    }
  }
  bVar7 = uVar19 == 0;
  uVar10 = uVar11;
  if (!bVar7) {
    uVar10 = uVar14;
  }
  if (uVar10 != 0) {
    do {
      uVar11 = (ulong)(uVar18 >> 1);
      uVar10 = uVar11;
      pbVar20 = &DAT_043d1089;
      if (!bVar7) {
        uVar10 = uVar14;
        pbVar20 = DAT_043d1098;
      }
      iVar8 = isblank((uint)pbVar20[uVar10 - 1]);
      if (iVar8 == 0) break;
      FUN_017c0e44(&DAT_043d1088);
      uVar18 = (uint)DAT_043d1088;
      bVar7 = (_DAT_043d1088 & 1) == 0;
      uVar11 = (ulong)(DAT_043d1088 >> 1);
      uVar10 = uVar11;
      if (!bVar7) {
        uVar10 = DAT_043d1090;
      }
      uVar14 = DAT_043d1090;
    } while (uVar10 != 0);
    uVar19 = uVar18 & 1;
  }
  if (uVar19 != 0) {
    uVar11 = uVar14;
  }
  pbVar20 = &DAT_043d1089;
  if (uVar19 != 0) {
    pbVar20 = DAT_043d1098;
  }
  sVar2 = CONCAT44(_DAT_043d10b4,ram0x043d10b0);
  if ((DAT_043d10a8 & 1) == 0) {
    sVar2 = (ulong)(DAT_043d10a8 >> 1);
    pbVar15 = (byte *)&DAT_043d10a9;
  }
  else {
    pbVar15 = DAT_043d10b8;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
LAB_017cfc7c:
    do {
      while( true ) {
        std::string::erase(0x43d1088,uVar10);
        sVar2 = CONCAT44(_DAT_043d10b4,ram0x043d10b0);
        if ((_DAT_043d1088 & 1) == 0) {
          uVar11 = _DAT_043d1088 >> 1 & 0x7f;
          pbVar20 = &DAT_043d1089;
        }
        else {
          uVar11 = DAT_043d1090;
          pbVar20 = DAT_043d1098;
        }
        if ((DAT_043d10a8 & 1) == 0) {
          sVar2 = (ulong)(DAT_043d10a8 >> 1);
          pbVar15 = (byte *)&DAT_043d10a9;
        }
        else {
          pbVar15 = DAT_043d10b8;
        }
        if (sVar2 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar11 < (long)sVar2) goto LAB_017cfb84;
      bVar3 = *pbVar15;
      pbVar12 = pbVar20;
      uVar10 = uVar11;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar2) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
        goto LAB_017cfb84;
        iVar8 = memcmp(pbVar12,pbVar15,sVar2);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar20 + uVar11) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar2) goto LAB_017cfb84;
      }
      if ((pbVar12 == pbVar20 + uVar11) ||
         (uVar10 = (long)pbVar12 - (long)pbVar20, uVar10 == 0xffffffffffffffff)) goto LAB_017cfb84;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar11) {
    bVar3 = *pbVar15;
    pbVar12 = pbVar20;
    uVar10 = uVar11;
    do {
      if ((0xfffffffffffffffe < uVar10 - sVar2) ||
         (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
      break;
      iVar8 = memcmp(pbVar12,pbVar15,sVar2);
      if (iVar8 == 0) {
        if ((pbVar12 != pbVar20 + uVar11) &&
           (uVar10 = (long)pbVar12 - (long)pbVar20, uVar10 != 0xffffffffffffffff))
        goto LAB_017cfc7c;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar20 + uVar11) - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar10);
  }
LAB_017cfb84:
  sVar2 = CONCAT26(_DAT_043d10ce,CONCAT51(_DAT_043d10c9,DAT_043d10c1._7_1_));
  pbVar15 = (byte *)CONCAT17(DAT_043d10d0._7_1_,
                             CONCAT16(DAT_043d10d0._6_1_,
                                      CONCAT51(DAT_043d10d0._1_5_,(char)DAT_043d10d0)));
  if ((DAT_043d10c0 & 1) == 0) {
    pbVar15 = (byte *)&DAT_043d10c1;
    sVar2 = (ulong)(DAT_043d10c0 >> 1);
  }
  if (sVar2 == 0) {
    uVar11 = 0;
    goto LAB_017cfd28;
  }
  if ((long)sVar2 <= (long)uVar11) {
    bVar3 = *pbVar15;
    pbVar1 = pbVar20 + uVar11;
    pbVar12 = pbVar20;
    do {
      if (0xfffffffffffffffe < uVar11 - sVar2) {
        return;
      }
      pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar11 - sVar2) + 1);
      if (pbVar12 == (byte *)0x0) {
        return;
      }
      iVar8 = memcmp(pbVar12,pbVar15,sVar2);
      if (iVar8 == 0) {
        if (pbVar12 == pbVar1) {
          return;
        }
        do {
          uVar11 = (long)pbVar12 - (long)pbVar20;
          if (uVar11 == 0xffffffffffffffff) {
            return;
          }
LAB_017cfd28:
          while( true ) {
            std::string::erase(0x43d1088,uVar11);
            bVar7 = (_DAT_043d1088 & 1) != 0;
            uVar11 = _DAT_043d1088 >> 1 & 0x7f;
            if (bVar7) {
              uVar11 = DAT_043d1090;
            }
            sVar2 = CONCAT26(_DAT_043d10ce,CONCAT51(_DAT_043d10c9,DAT_043d10c1._7_1_));
            pbVar15 = (byte *)CONCAT17(DAT_043d10d0._7_1_,
                                       CONCAT16(DAT_043d10d0._6_1_,
                                                CONCAT51(DAT_043d10d0._1_5_,(char)DAT_043d10d0)));
            pbVar20 = DAT_043d1098;
            if (!bVar7) {
              pbVar20 = &DAT_043d1089;
            }
            if ((DAT_043d10c0 & 1) == 0) {
              pbVar15 = (byte *)&DAT_043d10c1;
              sVar2 = (ulong)(DAT_043d10c0 >> 1);
            }
            if (sVar2 != 0) break;
            uVar11 = 0;
          }
          if ((long)uVar11 < (long)sVar2) {
            return;
          }
          bVar3 = *pbVar15;
          pbVar1 = pbVar20 + uVar11;
          pbVar12 = pbVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar11 - sVar2) {
              return;
            }
            pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar11 - sVar2) + 1);
            if (pbVar12 == (byte *)0x0) {
              return;
            }
            iVar8 = memcmp(pbVar12,pbVar15,sVar2);
            if (iVar8 == 0) break;
            pbVar12 = pbVar12 + 1;
            uVar11 = (long)pbVar1 - (long)pbVar12;
            if ((long)uVar11 < (long)sVar2) {
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
    } while ((long)sVar2 <= (long)uVar11);
  }
  return;
}


