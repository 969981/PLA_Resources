/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02070060; name: FUN_02070060
 */


/* WARNING: Removing unreachable block (ram,0x0207080c) */
/* WARNING: Removing unreachable block (ram,0x0207081c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02070060(void)

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
  
  if (((DAT_043d8960 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d8960), iVar8 != 0)) {
    DAT_043d8930 = 0x16;
    DAT_043d8940 = (byte *)0x0;
    _DAT_043d893c = 0;
    DAT_043d8931._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d8938 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d8948 = 0x2a;
    DAT_043d8958._7_1_ = 0;
    DAT_043d8958._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d8958._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d8958._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d8958._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d8958._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d8951 = s__anonymous_namespace__039071f8[8];
    DAT_043d8951_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d8951_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d8951_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d8951_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d8956 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d8958._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d8949._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d8949._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d8958._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d8930,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d8960);
  }
  plVar6 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar13 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  puVar9 = (undefined1 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x990,8);
  _DAT_043d8910 = 0x991;
  DAT_043d8918 = 0x987;
  DAT_043d8920 = puVar9;
  memcpy(puVar9,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::AreaModules, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15>, char const (&)[17], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:22:26), char const (&)[19], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:23:28), char const (&)[22], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:24:31), char const (&)[15], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:25:24), char const (&)[19], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:26:28), char const (&)[20], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:27:29), char const (&)[26], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:28:35), char const (&)[28], void (field::AreaModules::*)(), char const (&)[31], void (field::AreaModules::*)(), char const (&)[19], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:31:28), char const (&)[12], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:32:21), char const (&)[14], field::AreaStatus (field::AreaModules::*)() const, char const (&)[25], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/field/source/content/script/generated/field_area_modules_glue.cpp:34:34), char const (&)[16], (..." /* TRUNCATED STRING LITERAL */
         ,0x987);
  puVar9[0x987] = 0;
  std::string::find('\x10',0x5b);
  uVar10 = std::string::find('\x10',0x3d);
  uVar11 = std::string::rfind('\x10',0x5d);
  if (uVar11 == 0xffffffffffffffff) {
    if ((_DAT_043d8910 & 1) == 0) {
      uVar11 = (ulong)(DAT_043d8910 >> 1);
    }
    else {
      uVar11 = DAT_043d8918;
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
    if ((_DAT_043d8910 & 1) == 0) {
      uVar10 = (ulong)(DAT_043d8910 >> 1);
    }
    else {
      uVar10 = DAT_043d8918;
    }
  }
  if (uVar14 < uVar10 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043d8910,uVar14,uVar11 - uVar14,
                      (allocator *)&DAT_043d8910);
  if ((_DAT_043d8910 & 1) != 0) {
    *DAT_043d8920 = 0;
    plVar6 = DAT_043f1798;
    puVar9 = DAT_043d8920;
    DAT_043d8918 = 0;
    if (((_DAT_043d8910 & 1) != 0) && (DAT_043d8920 != (undefined1 *)0x0)) {
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
          goto LAB_02070270;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar9,0,8);
    }
  }
LAB_02070270:
  uVar18 = (uint)local_78 & 0xff;
  uVar20 = (uint)local_78 & 1;
  uVar11 = local_78 >> 1 & 0x7f;
  _DAT_043d8910 = local_78;
  DAT_043d8918 = uStack_70;
  DAT_043d8920 = local_68;
  if ((local_78 & 1) == 0) {
    local_68 = &DAT_043d8911;
    uStack_70 = uVar11;
    if (uVar11 < 0xe) goto LAB_02070340;
  }
  else if ((long)uStack_70 < 0xe) goto LAB_02070340;
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
            std::string::erase(0x43d8910,(ulong)(pbVar15 + (~(ulong)local_68 - 0xd) + -2));
            uVar18 = (uint)DAT_043d8910;
            uVar20 = DAT_043d8910 & 1;
            uVar11 = (ulong)(DAT_043d8910 >> 1);
          }
          goto LAB_02070340;
        }
        lVar4 = lVar17 + -2;
        lVar5 = lVar17 + 0xc;
        lVar17 = lVar17 + -1;
      } while (pbVar15[lVar4] == "seperator_mark"[lVar5]);
    }
    pbVar15 = pbVar15 + -1;
    lVar16 = lVar16 + 1;
  }
LAB_02070340:
  uVar14 = DAT_043d8918;
  uVar10 = uVar11;
  if (uVar20 != 0) {
    uVar10 = DAT_043d8918;
  }
  if (uVar10 != 0) {
    pbVar15 = &DAT_043d8911;
    if (uVar20 != 0) {
      pbVar15 = DAT_043d8920;
    }
    iVar8 = isblank((uint)*pbVar15);
    if (iVar8 == 0) {
      uVar20 = uVar18 & 1;
      uVar11 = (ulong)(uVar18 >> 1);
    }
    else {
      do {
        std::string::erase(0x43d8910,0);
        uVar14 = DAT_043d8918;
        uVar18 = (uint)DAT_043d8910;
        uVar11 = (ulong)(DAT_043d8910 >> 1);
        uVar20 = DAT_043d8910 & 1;
        uVar10 = uVar11;
        if ((_DAT_043d8910 & 1) != 0) {
          uVar10 = DAT_043d8918;
        }
        if (uVar10 == 0) break;
        pbVar15 = &DAT_043d8911;
        if ((_DAT_043d8910 & 1) != 0) {
          pbVar15 = DAT_043d8920;
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
      pbVar15 = &DAT_043d8911;
      if (!bVar7) {
        uVar10 = uVar14;
        pbVar15 = DAT_043d8920;
      }
      iVar8 = isblank((uint)pbVar15[uVar10 - 1]);
      if (iVar8 == 0) break;
      FUN_02057e90(&DAT_043d8910);
      uVar18 = (uint)DAT_043d8910;
      bVar7 = (_DAT_043d8910 & 1) == 0;
      uVar11 = (ulong)(DAT_043d8910 >> 1);
      uVar10 = uVar11;
      if (!bVar7) {
        uVar10 = DAT_043d8918;
      }
      uVar14 = DAT_043d8918;
    } while (uVar10 != 0);
    uVar20 = uVar18 & 1;
  }
  if (uVar20 != 0) {
    uVar11 = uVar14;
  }
  pbVar15 = &DAT_043d8911;
  if (uVar20 != 0) {
    pbVar15 = DAT_043d8920;
  }
  sVar19 = CONCAT44(_DAT_043d893c,ram0x043d8938);
  pbVar2 = DAT_043d8940;
  if ((DAT_043d8930 & 1) == 0) {
    sVar19 = (size_t)(DAT_043d8930 >> 1);
    pbVar2 = (byte *)&DAT_043d8931;
  }
  if (sVar19 == 0) {
    uVar10 = 0;
LAB_02070590:
    do {
      while( true ) {
        std::string::erase(0x43d8910,uVar10);
        sVar19 = CONCAT44(_DAT_043d893c,ram0x043d8938);
        if ((_DAT_043d8910 & 1) == 0) {
          uVar11 = _DAT_043d8910 >> 1 & 0x7f;
          pbVar15 = &DAT_043d8911;
        }
        else {
          uVar11 = DAT_043d8918;
          pbVar15 = DAT_043d8920;
        }
        if ((DAT_043d8930 & 1) == 0) {
          sVar19 = (ulong)(DAT_043d8930 >> 1);
          pbVar2 = (byte *)&DAT_043d8931;
        }
        else {
          pbVar2 = DAT_043d8940;
        }
        if (sVar19 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar11 < (long)sVar19) goto LAB_0207047c;
      bVar3 = *pbVar2;
      pbVar12 = pbVar15;
      uVar10 = uVar11;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar19) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar3,(uVar10 - sVar19) + 1), pbVar12 == (byte *)0x0))
        goto LAB_0207047c;
        iVar8 = memcmp(pbVar12,pbVar2,sVar19);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar15 + uVar11) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar19) goto LAB_0207047c;
      }
      if ((pbVar12 == pbVar15 + uVar11) ||
         (uVar10 = (long)pbVar12 - (long)pbVar15, uVar10 == 0xffffffffffffffff)) goto LAB_0207047c;
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
        goto LAB_02070590;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar15 + uVar11) - (long)pbVar12;
    } while ((long)sVar19 <= (long)uVar10);
  }
LAB_0207047c:
  sVar19 = CONCAT26(_DAT_043d8956,CONCAT51(_DAT_043d8951,DAT_043d8949._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043d8958._7_1_,
                            CONCAT16(DAT_043d8958._6_1_,
                                     CONCAT51(DAT_043d8958._1_5_,(char)DAT_043d8958)));
  if ((DAT_043d8948 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043d8949;
    sVar19 = (ulong)(DAT_043d8948 >> 1);
  }
  if (sVar19 == 0) {
    uVar11 = 0;
    goto LAB_0207063c;
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
LAB_0207063c:
          while( true ) {
            std::string::erase(0x43d8910,uVar11);
            bVar7 = (_DAT_043d8910 & 1) != 0;
            uVar11 = _DAT_043d8910 >> 1 & 0x7f;
            if (bVar7) {
              uVar11 = DAT_043d8918;
            }
            sVar19 = CONCAT26(_DAT_043d8956,CONCAT51(_DAT_043d8951,DAT_043d8949._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043d8958._7_1_,
                                      CONCAT16(DAT_043d8958._6_1_,
                                               CONCAT51(DAT_043d8958._1_5_,(char)DAT_043d8958)));
            pbVar15 = DAT_043d8920;
            if (!bVar7) {
              pbVar15 = &DAT_043d8911;
            }
            if ((DAT_043d8948 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043d8949;
              sVar19 = (ulong)(DAT_043d8948 >> 1);
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


