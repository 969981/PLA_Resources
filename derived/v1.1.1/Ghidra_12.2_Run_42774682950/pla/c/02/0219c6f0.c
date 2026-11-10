/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0219c6f0; name: FUN_0219c6f0
 */


/* WARNING: Removing unreachable block (ram,0x0219cdf0) */
/* WARNING: Removing unreachable block (ram,0x0219ce00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0219c6f0(void)

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
  
  if (((DAT_043dc7b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dc7b8), iVar8 != 0)) {
    DAT_043dc788 = 0x16;
    DAT_043dc798 = (byte *)0x0;
    _DAT_043dc794 = 0;
    DAT_043dc789._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043dc790 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043dc7a0 = 0x2a;
    DAT_043dc7b0._7_1_ = 0;
    DAT_043dc7b0._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043dc7b0._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043dc7b0._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043dc7b0._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043dc7b0._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043dc7a9 = s__anonymous_namespace__039071f8[8];
    DAT_043dc7a9_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043dc7a9_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043dc7a9_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043dc7a9_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043dc7ae = s__anonymous_namespace__039071f8._13_2_;
    DAT_043dc7b0._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043dc7a1._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043dc7a1._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043dc7b0._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043dc788,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dc7b8);
  }
  plVar6 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar13 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  puVar9 = (undefined1 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x2a0,8);
  _DAT_043dc768 = 0x2a1;
  DAT_043dc770 = 0x29c;
  DAT_043dc778 = puVar9;
  memcpy(puVar9,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::FieldNpcComponent, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3>, char const (&)[5], sol::destructor_wrapper<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_npc_component_glue.cpp:14:31)>, const sol::base_list<> &, sol::base_list<field::content::FieldCharacterComponent>, char const (&)[40], field::content::NpcAnimationController *(field::content::FieldNpcComponent::*)() const, char const (&)[31], field::NpcControllerComponent *(field::content::FieldNpcComponent::*)() const>, seperator_mark = int]"
         ,0x29c);
  puVar9[0x29c] = 0;
  std::string::find('h',0x5b);
  uVar10 = std::string::find('h',0x3d);
  uVar11 = std::string::rfind('h',0x5d);
  if (uVar11 == 0xffffffffffffffff) {
    if ((_DAT_043dc768 & 1) == 0) {
      uVar11 = (ulong)(DAT_043dc768 >> 1);
    }
    else {
      uVar11 = DAT_043dc770;
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
    if ((_DAT_043dc768 & 1) == 0) {
      uVar10 = (ulong)(DAT_043dc768 >> 1);
    }
    else {
      uVar10 = DAT_043dc770;
    }
  }
  if (uVar14 < uVar10 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043dc768,uVar14,uVar11 - uVar14,
                      (allocator *)&DAT_043dc768);
  if ((_DAT_043dc768 & 1) != 0) {
    *DAT_043dc778 = 0;
    plVar6 = DAT_043f1798;
    puVar9 = DAT_043dc778;
    DAT_043dc770 = 0;
    if (((_DAT_043dc768 & 1) != 0) && (DAT_043dc778 != (undefined1 *)0x0)) {
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
          goto LAB_0219c900;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar9,0,8);
    }
  }
LAB_0219c900:
  uVar11 = local_78 >> 1 & 0x7f;
  uVar18 = (uint)local_78 & 0xff;
  _DAT_043dc768 = local_78;
  DAT_043dc770 = uStack_70;
  uVar19 = (uint)local_78 & 1;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar11;
    pbVar20 = &DAT_043dc769;
  }
  else {
    pbVar20 = local_68;
  }
  DAT_043dc778 = local_68;
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
              std::string::erase(0x43dc768,(ulong)(pbVar15 + (~(ulong)pbVar20 - 0xd) + -2));
              uVar18 = (uint)DAT_043dc768;
              uVar19 = DAT_043dc768 & 1;
              uVar11 = (ulong)(DAT_043dc768 >> 1);
            }
            goto LAB_0219c9d4;
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
LAB_0219c9d4:
  uVar14 = DAT_043dc770;
  uVar10 = uVar11;
  if (uVar19 != 0) {
    uVar10 = DAT_043dc770;
  }
  if (uVar10 != 0) {
    pbVar20 = &DAT_043dc769;
    if (uVar19 != 0) {
      pbVar20 = DAT_043dc778;
    }
    iVar8 = isblank((uint)*pbVar20);
    if (iVar8 == 0) {
      uVar19 = uVar18 & 1;
      uVar11 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        std::string::erase(0x43dc768,0);
        uVar14 = DAT_043dc770;
        uVar18 = (uint)DAT_043dc768;
        uVar11 = (ulong)(DAT_043dc768 >> 1);
        uVar19 = DAT_043dc768 & 1;
        uVar10 = uVar11;
        if ((_DAT_043dc768 & 1) != 0) {
          uVar10 = DAT_043dc770;
        }
        if (uVar10 == 0) break;
        pbVar20 = &DAT_043dc769;
        if ((_DAT_043dc768 & 1) != 0) {
          pbVar20 = DAT_043dc778;
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
      pbVar20 = &DAT_043dc769;
      if (!bVar7) {
        uVar10 = uVar14;
        pbVar20 = DAT_043dc778;
      }
      iVar8 = isblank((uint)pbVar20[uVar10 - 1]);
      if (iVar8 == 0) break;
      FUN_02193f90(&DAT_043dc768);
      uVar18 = (uint)DAT_043dc768;
      bVar7 = (_DAT_043dc768 & 1) == 0;
      uVar11 = (ulong)(DAT_043dc768 >> 1);
      uVar10 = uVar11;
      if (!bVar7) {
        uVar10 = DAT_043dc770;
      }
      uVar14 = DAT_043dc770;
    } while (uVar10 != 0);
    uVar19 = uVar18 & 1;
  }
  if (uVar19 != 0) {
    uVar11 = uVar14;
  }
  pbVar20 = &DAT_043dc769;
  if (uVar19 != 0) {
    pbVar20 = DAT_043dc778;
  }
  sVar2 = CONCAT44(_DAT_043dc794,ram0x043dc790);
  if ((DAT_043dc788 & 1) == 0) {
    sVar2 = (ulong)(DAT_043dc788 >> 1);
    pbVar15 = (byte *)&DAT_043dc789;
  }
  else {
    pbVar15 = DAT_043dc798;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
LAB_0219cc08:
    do {
      while( true ) {
        std::string::erase(0x43dc768,uVar10);
        sVar2 = CONCAT44(_DAT_043dc794,ram0x043dc790);
        if ((_DAT_043dc768 & 1) == 0) {
          uVar11 = _DAT_043dc768 >> 1 & 0x7f;
          pbVar20 = &DAT_043dc769;
        }
        else {
          uVar11 = DAT_043dc770;
          pbVar20 = DAT_043dc778;
        }
        if ((DAT_043dc788 & 1) == 0) {
          sVar2 = (ulong)(DAT_043dc788 >> 1);
          pbVar15 = (byte *)&DAT_043dc789;
        }
        else {
          pbVar15 = DAT_043dc798;
        }
        if (sVar2 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar11 < (long)sVar2) goto LAB_0219cb14;
      bVar3 = *pbVar15;
      pbVar12 = pbVar20;
      uVar10 = uVar11;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar2) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
        goto LAB_0219cb14;
        iVar8 = memcmp(pbVar12,pbVar15,sVar2);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar20 + uVar11) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar2) goto LAB_0219cb14;
      }
      if ((pbVar12 == pbVar20 + uVar11) ||
         (uVar10 = (long)pbVar12 - (long)pbVar20, uVar10 == 0xffffffffffffffff)) goto LAB_0219cb14;
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
        goto LAB_0219cc08;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar20 + uVar11) - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar10);
  }
LAB_0219cb14:
  sVar2 = CONCAT26(_DAT_043dc7ae,CONCAT51(_DAT_043dc7a9,DAT_043dc7a1._7_1_));
  pbVar15 = (byte *)CONCAT17(DAT_043dc7b0._7_1_,
                             CONCAT16(DAT_043dc7b0._6_1_,
                                      CONCAT51(DAT_043dc7b0._1_5_,(char)DAT_043dc7b0)));
  if ((DAT_043dc7a0 & 1) == 0) {
    pbVar15 = (byte *)&DAT_043dc7a1;
    sVar2 = (ulong)(DAT_043dc7a0 >> 1);
  }
  if (sVar2 == 0) {
    uVar11 = 0;
    goto LAB_0219ccb4;
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
LAB_0219ccb4:
          while( true ) {
            std::string::erase(0x43dc768,uVar11);
            bVar7 = (_DAT_043dc768 & 1) != 0;
            uVar11 = _DAT_043dc768 >> 1 & 0x7f;
            if (bVar7) {
              uVar11 = DAT_043dc770;
            }
            sVar2 = CONCAT26(_DAT_043dc7ae,CONCAT51(_DAT_043dc7a9,DAT_043dc7a1._7_1_));
            pbVar15 = (byte *)CONCAT17(DAT_043dc7b0._7_1_,
                                       CONCAT16(DAT_043dc7b0._6_1_,
                                                CONCAT51(DAT_043dc7b0._1_5_,(char)DAT_043dc7b0)));
            pbVar20 = DAT_043dc778;
            if (!bVar7) {
              pbVar20 = &DAT_043dc769;
            }
            if ((DAT_043dc7a0 & 1) == 0) {
              pbVar15 = (byte *)&DAT_043dc7a1;
              sVar2 = (ulong)(DAT_043dc7a0 >> 1);
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


