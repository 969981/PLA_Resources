/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02034840; name: FUN_02034840
 */


/* WARNING: Removing unreachable block (ram,0x02034fe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02034840(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  size_t sVar19;
  uint uVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043d71b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043d71b0), iVar6 != 0)) {
    DAT_043d7180 = 0x16;
    DAT_043d7190 = (byte *)0x0;
    _DAT_043d718c = 0;
    DAT_043d7181._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d7188 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d7198 = 0x2a;
    DAT_043d71a8._7_1_ = 0;
    DAT_043d71a8._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d71a8._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d71a8._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d71a8._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d71a8._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d71a1 = s__anonymous_namespace__039071f8[8];
    DAT_043d71a1_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d71a1_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d71a1_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d71a1_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d71a6 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d71a8._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d7199._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d7199._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d71a8._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d7180,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d71b0);
  }
  plVar4 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar11 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar11 = plVar4;
  }
  puVar7 = (undefined1 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x430,8);
  _DAT_043d7160 = 0x431;
  DAT_043d7168 = 0x428;
  DAT_043d7170 = puVar7;
  memcpy(puVar7,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::EventLandmarkCoroutineParam, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9>, char const (&)[10], field::EventLandmarkType field::EventLandmarkCoroutineParam::*, char const (&)[24], field::PlayerInputInfoHandler *field::EventLandmarkCoroutineParam::*, char const (&)[18], field::player::PlayerControllerComponent *field::EventLandmarkCoroutineParam::*, char const (&)[24], field::content::PokemonControllerComponent *field::EventLandmarkCoroutineParam::*, char const (&)[10], field::LandmarkItemComponent *field::EventLandmarkCoroutineParam::*, char const (&)[17], field::player::FieldPlayerComponent *field::EventLandmarkCoroutineParam::*, char const (&)[16], field::content::FieldCharacterComponent *field::EventLandmarkCoroutineParam::*, char const (&)[11], gfl::math::Vector3 field::EventLandmarkCoroutineParam::*, char const (&)[4], sol::constructor_list<sol::types<> > &, char const (&)[5], const sol::destructor_wrapper<void> &>, seperator_mark = int]"
         ,0x428);
  puVar7[0x428] = 0;
  std::string::find('`',0x5b);
  uVar8 = std::string::find('`',0x3d);
  uVar9 = std::string::rfind('`',0x5d);
  if (uVar9 == 0xffffffffffffffff) {
    if ((_DAT_043d7160 & 1) == 0) {
      uVar9 = (ulong)(DAT_043d7160 >> 1);
    }
    else {
      uVar9 = DAT_043d7168;
    }
    uVar12 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar12 = uVar8;
    }
    uVar8 = uVar9;
  }
  else {
    uVar12 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar12 = uVar8;
    }
    if ((_DAT_043d7160 & 1) == 0) {
      uVar8 = (ulong)(DAT_043d7160 >> 1);
    }
    else {
      uVar8 = DAT_043d7168;
    }
  }
  if (uVar12 < uVar8 - 1) {
    uVar12 = uVar12 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043d7160,uVar12,uVar9 - uVar12,
                      (allocator *)&DAT_043d7160);
  if ((_DAT_043d7160 & 1) != 0) {
    *DAT_043d7170 = 0;
    plVar4 = DAT_043f1798;
    puVar7 = DAT_043d7170;
    DAT_043d7168 = 0;
    if (((_DAT_043d7160 & 1) != 0) && (DAT_043d7170 != (undefined1 *)0x0)) {
      plVar11 = *(long **)(lVar14 + 0x20);
      if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
        *(long **)(lVar14 + 0x20) = DAT_043f1798;
        plVar11 = plVar4;
      }
      uVar9 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar11,puVar7,0,8);
          goto LAB_02034a50;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,0,8);
    }
  }
LAB_02034a50:
  uVar18 = (uint)local_78 & 0xff;
  uVar20 = (uint)local_78 & 1;
  uVar9 = local_78 >> 1 & 0x7f;
  _DAT_043d7160 = local_78;
  DAT_043d7168 = uStack_70;
  DAT_043d7170 = local_68;
  if ((local_78 & 1) == 0) {
    local_68 = &DAT_043d7161;
    uStack_70 = uVar9;
    if (uVar9 < 0xe) goto LAB_02034b20;
  }
  else if ((long)uStack_70 < 0xe) goto LAB_02034b20;
  pbVar13 = local_68 + uStack_70;
  lVar14 = 1;
  while (uStack_70 != 0xd) {
    uStack_70 = uStack_70 - 1;
    if (local_68[uStack_70] == 0x6b) {
      lVar15 = 0;
      do {
        if (lVar15 == -0xd) {
          if ((lVar14 != -0xd) && (pbVar13 + (~(ulong)local_68 - 0xd) != (byte *)0xffffffffffffffff)
             ) {
            std::string::erase(0x43d7160,(ulong)(pbVar13 + (~(ulong)local_68 - 0xd) + -2));
            uVar18 = (uint)DAT_043d7160;
            uVar20 = DAT_043d7160 & 1;
            uVar9 = (ulong)(DAT_043d7160 >> 1);
          }
          goto LAB_02034b20;
        }
        lVar2 = lVar15 + -2;
        lVar3 = lVar15 + 0xc;
        lVar15 = lVar15 + -1;
      } while (pbVar13[lVar2] == "seperator_mark"[lVar3]);
    }
    pbVar13 = pbVar13 + -1;
    lVar14 = lVar14 + 1;
  }
LAB_02034b20:
  pbVar13 = DAT_043d7170;
  uVar12 = DAT_043d7168;
  bVar5 = uVar20 == 0;
  uVar8 = uVar9;
  if (!bVar5) {
    uVar8 = DAT_043d7168;
  }
  if (uVar8 != 0) {
    pbVar16 = &DAT_043d7161;
    if (uVar20 != 0) {
      pbVar16 = DAT_043d7170;
    }
    iVar6 = isblank((uint)*pbVar16);
    if (iVar6 == 0) {
      uVar20 = uVar18 & 1;
      uVar9 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        pbVar10 = &DAT_043d7161;
        if (!bVar5) {
          pbVar10 = pbVar13;
        }
        std::string::erase(0x43d7160,(long)pbVar10 - (long)pbVar16);
        pbVar13 = DAT_043d7170;
        uVar12 = DAT_043d7168;
        uVar18 = (uint)DAT_043d7160;
        bVar5 = (_DAT_043d7160 & 1) == 0;
        uVar9 = (ulong)(DAT_043d7160 >> 1);
        uVar20 = DAT_043d7160 & 1;
        uVar8 = uVar9;
        if (!bVar5) {
          uVar8 = DAT_043d7168;
        }
        if (uVar8 == 0) break;
        pbVar16 = &DAT_043d7161;
        if ((_DAT_043d7160 & 1) != 0) {
          pbVar16 = DAT_043d7170;
        }
        iVar6 = isblank((uint)*pbVar16);
      } while (iVar6 != 0);
    }
  }
  bVar5 = uVar20 == 0;
  uVar8 = uVar9;
  if (!bVar5) {
    uVar8 = uVar12;
  }
  if (uVar8 != 0) {
    do {
      uVar9 = (ulong)(uVar18 >> 1);
      uVar8 = uVar9;
      pbVar13 = &DAT_043d7161;
      if (!bVar5) {
        uVar8 = uVar12;
        pbVar13 = DAT_043d7170;
      }
      iVar6 = isblank((uint)pbVar13[uVar8 - 1]);
      if (iVar6 == 0) break;
      FUN_0202c0f0(&DAT_043d7160);
      uVar18 = (uint)DAT_043d7160;
      bVar5 = (_DAT_043d7160 & 1) == 0;
      uVar9 = (ulong)(DAT_043d7160 >> 1);
      uVar8 = uVar9;
      if (!bVar5) {
        uVar8 = DAT_043d7168;
      }
      uVar12 = DAT_043d7168;
    } while (uVar8 != 0);
    uVar20 = uVar18 & 1;
  }
  if (uVar20 != 0) {
    uVar9 = uVar12;
  }
  pbVar13 = &DAT_043d7161;
  if (uVar20 != 0) {
    pbVar13 = DAT_043d7170;
  }
  sVar19 = CONCAT44(_DAT_043d718c,ram0x043d7188);
  pbVar16 = DAT_043d7190;
  if ((DAT_043d7180 & 1) == 0) {
    sVar19 = (size_t)(DAT_043d7180 >> 1);
    pbVar16 = (byte *)&DAT_043d7181;
  }
  if (sVar19 == 0) {
    uVar8 = 0;
    goto LAB_02034d80;
  }
  if ((long)sVar19 <= (long)uVar9) {
    bVar1 = *pbVar16;
    pbVar17 = pbVar13 + uVar9;
    pbVar10 = pbVar13;
    uVar8 = uVar9;
    do {
      if ((0xfffffffffffffffe < uVar8 - sVar19) ||
         (pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar8 - sVar19) + 1), pbVar10 == (byte *)0x0))
      break;
      iVar6 = memcmp(pbVar10,pbVar16,sVar19);
      if (iVar6 == 0) goto LAB_02034fec;
      pbVar10 = pbVar10 + 1;
      uVar8 = (long)pbVar17 - (long)pbVar10;
    } while ((long)sVar19 <= (long)uVar8);
  }
LAB_02034c74:
  sVar19 = CONCAT26(_DAT_043d71a6,CONCAT51(_DAT_043d71a1,DAT_043d7199._7_1_));
  pbVar16 = (byte *)CONCAT17(DAT_043d71a8._7_1_,
                             CONCAT16(DAT_043d71a8._6_1_,
                                      CONCAT51(DAT_043d71a8._1_5_,(char)DAT_043d71a8)));
  if ((DAT_043d7198 & 1) == 0) {
    pbVar16 = (byte *)&DAT_043d7199;
    sVar19 = (ulong)(DAT_043d7198 >> 1);
  }
  if (sVar19 == 0) {
    uVar9 = 0;
    goto LAB_02034e30;
  }
  if ((long)sVar19 <= (long)uVar9) {
    bVar1 = *pbVar16;
    pbVar17 = pbVar13 + uVar9;
    pbVar10 = pbVar13;
    do {
      if (0xfffffffffffffffe < uVar9 - sVar19) {
        return;
      }
      pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar9 - sVar19) + 1);
      if (pbVar10 == (byte *)0x0) {
        return;
      }
      iVar6 = memcmp(pbVar10,pbVar16,sVar19);
      if (iVar6 == 0) {
        if (pbVar10 == pbVar17) {
          return;
        }
        do {
          uVar9 = (long)pbVar10 - (long)pbVar13;
          if (uVar9 == 0xffffffffffffffff) {
            return;
          }
LAB_02034e30:
          while( true ) {
            std::string::erase(0x43d7160,uVar9);
            bVar5 = (_DAT_043d7160 & 1) != 0;
            uVar9 = _DAT_043d7160 >> 1 & 0x7f;
            if (bVar5) {
              uVar9 = DAT_043d7168;
            }
            sVar19 = CONCAT26(_DAT_043d71a6,CONCAT51(_DAT_043d71a1,DAT_043d7199._7_1_));
            pbVar16 = (byte *)CONCAT17(DAT_043d71a8._7_1_,
                                       CONCAT16(DAT_043d71a8._6_1_,
                                                CONCAT51(DAT_043d71a8._1_5_,(char)DAT_043d71a8)));
            pbVar13 = DAT_043d7170;
            if (!bVar5) {
              pbVar13 = &DAT_043d7161;
            }
            if ((DAT_043d7198 & 1) == 0) {
              pbVar16 = (byte *)&DAT_043d7199;
              sVar19 = (ulong)(DAT_043d7198 >> 1);
            }
            if (sVar19 != 0) break;
            uVar9 = 0;
          }
          if ((long)uVar9 < (long)sVar19) {
            return;
          }
          bVar1 = *pbVar16;
          pbVar17 = pbVar13 + uVar9;
          pbVar10 = pbVar13;
          while( true ) {
            if (0xfffffffffffffffe < uVar9 - sVar19) {
              return;
            }
            pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar9 - sVar19) + 1);
            if (pbVar10 == (byte *)0x0) {
              return;
            }
            iVar6 = memcmp(pbVar10,pbVar16,sVar19);
            if (iVar6 == 0) break;
            pbVar10 = pbVar10 + 1;
            uVar9 = (long)pbVar17 - (long)pbVar10;
            if ((long)uVar9 < (long)sVar19) {
              return;
            }
          }
          if (pbVar10 == pbVar17) {
            return;
          }
        } while( true );
      }
      pbVar10 = pbVar10 + 1;
      uVar9 = (long)pbVar17 - (long)pbVar10;
    } while ((long)sVar19 <= (long)uVar9);
  }
  return;
LAB_02034fec:
  if (pbVar10 == pbVar17) goto LAB_02034c74;
  uVar8 = (long)pbVar10 - (long)pbVar13;
  while( true ) {
    if (uVar8 == 0xffffffffffffffff) goto LAB_02034c74;
LAB_02034d80:
    std::string::erase(0x43d7160,uVar8);
    sVar19 = CONCAT44(_DAT_043d718c,ram0x043d7188);
    if ((_DAT_043d7160 & 1) == 0) {
      uVar9 = _DAT_043d7160 >> 1 & 0x7f;
      pbVar13 = &DAT_043d7161;
    }
    else {
      uVar9 = DAT_043d7168;
      pbVar13 = DAT_043d7170;
    }
    if ((DAT_043d7180 & 1) == 0) {
      sVar19 = (ulong)(DAT_043d7180 >> 1);
      pbVar16 = (byte *)&DAT_043d7181;
    }
    else {
      pbVar16 = DAT_043d7190;
    }
    if (sVar19 != 0) break;
    uVar8 = 0;
  }
  if ((long)uVar9 < (long)sVar19) goto LAB_02034c74;
  bVar1 = *pbVar16;
  pbVar17 = pbVar13 + uVar9;
  pbVar10 = pbVar13;
  uVar8 = uVar9;
  while( true ) {
    if ((0xfffffffffffffffe < uVar8 - sVar19) ||
       (pbVar10 = memchr(pbVar10,(uint)bVar1,(uVar8 - sVar19) + 1), pbVar10 == (byte *)0x0))
    goto LAB_02034c74;
    iVar6 = memcmp(pbVar10,pbVar16,sVar19);
    if (iVar6 == 0) break;
    pbVar10 = pbVar10 + 1;
    uVar8 = (long)pbVar17 - (long)pbVar10;
    if ((long)uVar8 < (long)sVar19) goto LAB_02034c74;
  }
  goto LAB_02034fec;
}


