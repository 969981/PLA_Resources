/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02045680; name: FUN_02045680
 */


/* WARNING: Removing unreachable block (ram,0x02045e58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02045680(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  size_t sVar22;
  uint uVar23;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043d7818 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d7818), iVar9 != 0)) {
    DAT_043d77e8 = 0x16;
    DAT_043d77f8 = (byte *)0x0;
    _DAT_043d77f4 = 0;
    DAT_043d77e9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043d77f0 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043d7800 = 0x2a;
    DAT_043d7810._7_1_ = 0;
    DAT_043d7810._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043d7810._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043d7810._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043d7810._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043d7810._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043d7809 = s__anonymous_namespace__039071f8[8];
    DAT_043d7809_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043d7809_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043d7809_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043d7809_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043d780e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043d7810._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043d7801._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043d7801._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043d7810._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043d77e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7818);
  }
  plVar7 = DAT_043f1798;
  lVar17 = tpidr_el0;
  plVar14 = *(long **)(lVar17 + 0x20);
  if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
    *(long **)(lVar17 + 0x20) = DAT_043f1798;
    plVar14 = plVar7;
  }
  pcVar10 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x80,8);
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c90e._88_8_;
  _DAT_043d77c8 = 0x81;
  DAT_043d77d0 = 0x77;
  DAT_043d77d8 = (byte *)pcVar10;
  *(undefined8 *)(pcVar10 + 0x50) = s_std__string_sol__detail__ctti_ge_0393c90e._80_8_;
  *(undefined8 *)(pcVar10 + 0x58) = uVar2;
  uVar3 = CONCAT71(s_std__string_sol__detail__ctti_ge_0393c90e._112_7_,
                   s_std__string_sol__detail__ctti_ge_0393c90e[0x6f]);
  uVar2 = CONCAT17(s_std__string_sol__detail__ctti_ge_0393c90e[0x6f],
                   s_std__string_sol__detail__ctti_ge_0393c90e._104_7_);
  *(undefined8 *)(pcVar10 + 0x60) = s_std__string_sol__detail__ctti_ge_0393c90e._96_8_;
  *(undefined8 *)(pcVar10 + 0x68) = uVar2;
  *(undefined8 *)(pcVar10 + 0x6f) = uVar3;
  uVar6 = s_std__string_sol__detail__ctti_ge_0393c90e._72_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0393c90e._64_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c90e._56_8_;
  *(undefined8 *)(pcVar10 + 0x30) = s_std__string_sol__detail__ctti_ge_0393c90e._48_8_;
  *(undefined8 *)(pcVar10 + 0x38) = uVar2;
  *(undefined8 *)(pcVar10 + 0x40) = uVar3;
  *(undefined8 *)(pcVar10 + 0x48) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0393c90e._40_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0393c90e._32_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c90e._24_8_;
  *(undefined8 *)(pcVar10 + 0x10) = s_std__string_sol__detail__ctti_ge_0393c90e._16_8_;
  *(undefined8 *)(pcVar10 + 0x18) = uVar2;
  *(undefined8 *)(pcVar10 + 0x20) = uVar3;
  *(undefined8 *)(pcVar10 + 0x28) = uVar6;
  uVar3 = s_std__string_sol__detail__ctti_ge_0393c90e._8_8_;
  uVar2 = s_std__string_sol__detail__ctti_ge_0393c90e._0_8_;
  pcVar10[0x77] = '\0';
  *(undefined8 *)pcVar10 = uVar2;
  *(undefined8 *)(pcVar10 + 8) = uVar3;
  std::string::find(-0x38,0x5b);
  uVar11 = std::string::find(-0x38,0x3d);
  uVar12 = std::string::rfind(-0x38,0x5d);
  if (uVar12 == 0xffffffffffffffff) {
    if ((_DAT_043d77c8 & 1) == 0) {
      uVar12 = (ulong)(DAT_043d77c8 >> 1);
    }
    else {
      uVar12 = DAT_043d77d0;
    }
    uVar15 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar15 = uVar11;
    }
    uVar11 = uVar12;
  }
  else {
    uVar15 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar15 = uVar11;
    }
    if ((_DAT_043d77c8 & 1) == 0) {
      uVar11 = (ulong)(DAT_043d77c8 >> 1);
    }
    else {
      uVar11 = DAT_043d77d0;
    }
  }
  if (uVar15 < uVar11 - 1) {
    uVar15 = uVar15 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043d77c8,uVar15,uVar12 - uVar15,
                      (allocator *)&DAT_043d77c8);
  if ((_DAT_043d77c8 & 1) != 0) {
    *DAT_043d77d8 = '\0';
    plVar7 = DAT_043f1798;
    pcVar10 = (char *)DAT_043d77d8;
    DAT_043d77d0 = 0;
    if (((_DAT_043d77c8 & 1) != 0) && (DAT_043d77d8 != (byte *)0x0)) {
      plVar14 = *(long **)(lVar17 + 0x20);
      if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
        *(long **)(lVar17 + 0x20) = DAT_043f1798;
        plVar14 = plVar7;
      }
      uVar12 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar14,pcVar10,0,8);
          goto LAB_020458c8;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,pcVar10,0,8);
    }
  }
LAB_020458c8:
  uVar21 = (uint)local_78 & 0xff;
  uVar23 = (uint)local_78 & 1;
  uVar12 = local_78 >> 1 & 0x7f;
  _DAT_043d77c8 = local_78;
  DAT_043d77d0 = uStack_70;
  DAT_043d77d8 = local_68;
  if ((local_78 & 1) == 0) {
    local_68 = &DAT_043d77c9;
    uStack_70 = uVar12;
    if (uVar12 < 0xe) goto LAB_02045998;
  }
  else if ((long)uStack_70 < 0xe) goto LAB_02045998;
  pbVar16 = local_68 + uStack_70;
  lVar17 = 1;
  while (uStack_70 != 0xd) {
    uStack_70 = uStack_70 - 1;
    if (local_68[uStack_70] == 0x6b) {
      lVar18 = 0;
      do {
        if (lVar18 == -0xd) {
          if ((lVar17 != -0xd) && (pbVar16 + (~(ulong)local_68 - 0xd) != (byte *)0xffffffffffffffff)
             ) {
            std::string::erase(0x43d77c8,(ulong)(pbVar16 + (~(ulong)local_68 - 0xd) + -2));
            uVar21 = (uint)DAT_043d77c8;
            uVar23 = DAT_043d77c8 & 1;
            uVar12 = (ulong)(DAT_043d77c8 >> 1);
          }
          goto LAB_02045998;
        }
        lVar4 = lVar18 + -2;
        lVar5 = lVar18 + 0xc;
        lVar18 = lVar18 + -1;
      } while (pbVar16[lVar4] == "seperator_mark"[lVar5]);
    }
    pbVar16 = pbVar16 + -1;
    lVar17 = lVar17 + 1;
  }
LAB_02045998:
  pbVar16 = DAT_043d77d8;
  uVar15 = DAT_043d77d0;
  bVar8 = uVar23 == 0;
  uVar11 = uVar12;
  if (!bVar8) {
    uVar11 = DAT_043d77d0;
  }
  if (uVar11 != 0) {
    pbVar19 = &DAT_043d77c9;
    if (uVar23 != 0) {
      pbVar19 = DAT_043d77d8;
    }
    iVar9 = isblank((uint)*pbVar19);
    if (iVar9 == 0) {
      uVar23 = uVar21 & 1;
      uVar12 = (ulong)(uVar21 >> 1);
    }
    else {
      do {
        pbVar13 = &DAT_043d77c9;
        if (!bVar8) {
          pbVar13 = pbVar16;
        }
        std::string::erase(0x43d77c8,(long)pbVar13 - (long)pbVar19);
        pbVar16 = DAT_043d77d8;
        uVar15 = DAT_043d77d0;
        uVar21 = (uint)DAT_043d77c8;
        bVar8 = (_DAT_043d77c8 & 1) == 0;
        uVar12 = (ulong)(DAT_043d77c8 >> 1);
        uVar23 = DAT_043d77c8 & 1;
        uVar11 = uVar12;
        if (!bVar8) {
          uVar11 = DAT_043d77d0;
        }
        if (uVar11 == 0) break;
        pbVar19 = &DAT_043d77c9;
        if ((_DAT_043d77c8 & 1) != 0) {
          pbVar19 = DAT_043d77d8;
        }
        iVar9 = isblank((uint)*pbVar19);
      } while (iVar9 != 0);
    }
  }
  bVar8 = uVar23 == 0;
  uVar11 = uVar12;
  if (!bVar8) {
    uVar11 = uVar15;
  }
  if (uVar11 != 0) {
    do {
      uVar12 = (ulong)(uVar21 >> 1);
      uVar11 = uVar12;
      pbVar16 = &DAT_043d77c9;
      if (!bVar8) {
        uVar11 = uVar15;
        pbVar16 = DAT_043d77d8;
      }
      iVar9 = isblank((uint)pbVar16[uVar11 - 1]);
      if (iVar9 == 0) break;
      FUN_0202c0f0(&DAT_043d77c8);
      uVar21 = (uint)DAT_043d77c8;
      bVar8 = (_DAT_043d77c8 & 1) == 0;
      uVar12 = (ulong)(DAT_043d77c8 >> 1);
      uVar11 = uVar12;
      if (!bVar8) {
        uVar11 = DAT_043d77d0;
      }
      uVar15 = DAT_043d77d0;
    } while (uVar11 != 0);
    uVar23 = uVar21 & 1;
  }
  if (uVar23 != 0) {
    uVar12 = uVar15;
  }
  pbVar16 = &DAT_043d77c9;
  if (uVar23 != 0) {
    pbVar16 = DAT_043d77d8;
  }
  sVar22 = CONCAT44(_DAT_043d77f4,ram0x043d77f0);
  pbVar19 = DAT_043d77f8;
  if ((DAT_043d77e8 & 1) == 0) {
    sVar22 = (size_t)(DAT_043d77e8 >> 1);
    pbVar19 = (byte *)&DAT_043d77e9;
  }
  if (sVar22 == 0) {
    uVar11 = 0;
    goto LAB_02045bf8;
  }
  if ((long)sVar22 <= (long)uVar12) {
    bVar1 = *pbVar19;
    pbVar20 = pbVar16 + uVar12;
    pbVar13 = pbVar16;
    uVar11 = uVar12;
    do {
      if ((0xfffffffffffffffe < uVar11 - sVar22) ||
         (pbVar13 = memchr(pbVar13,(uint)bVar1,(uVar11 - sVar22) + 1), pbVar13 == (byte *)0x0))
      break;
      iVar9 = memcmp(pbVar13,pbVar19,sVar22);
      if (iVar9 == 0) goto LAB_02045e64;
      pbVar13 = pbVar13 + 1;
      uVar11 = (long)pbVar20 - (long)pbVar13;
    } while ((long)sVar22 <= (long)uVar11);
  }
LAB_02045aec:
  sVar22 = CONCAT26(_DAT_043d780e,CONCAT51(_DAT_043d7809,DAT_043d7801._7_1_));
  pbVar19 = (byte *)CONCAT17(DAT_043d7810._7_1_,
                             CONCAT16(DAT_043d7810._6_1_,
                                      CONCAT51(DAT_043d7810._1_5_,(char)DAT_043d7810)));
  if ((DAT_043d7800 & 1) == 0) {
    pbVar19 = (byte *)&DAT_043d7801;
    sVar22 = (ulong)(DAT_043d7800 >> 1);
  }
  if (sVar22 == 0) {
    uVar12 = 0;
    goto LAB_02045ca8;
  }
  if ((long)sVar22 <= (long)uVar12) {
    bVar1 = *pbVar19;
    pbVar20 = pbVar16 + uVar12;
    pbVar13 = pbVar16;
    do {
      if (0xfffffffffffffffe < uVar12 - sVar22) {
        return;
      }
      pbVar13 = memchr(pbVar13,(uint)bVar1,(uVar12 - sVar22) + 1);
      if (pbVar13 == (byte *)0x0) {
        return;
      }
      iVar9 = memcmp(pbVar13,pbVar19,sVar22);
      if (iVar9 == 0) {
        if (pbVar13 == pbVar20) {
          return;
        }
        do {
          uVar12 = (long)pbVar13 - (long)pbVar16;
          if (uVar12 == 0xffffffffffffffff) {
            return;
          }
LAB_02045ca8:
          while( true ) {
            std::string::erase(0x43d77c8,uVar12);
            bVar8 = (_DAT_043d77c8 & 1) != 0;
            uVar12 = _DAT_043d77c8 >> 1 & 0x7f;
            if (bVar8) {
              uVar12 = DAT_043d77d0;
            }
            sVar22 = CONCAT26(_DAT_043d780e,CONCAT51(_DAT_043d7809,DAT_043d7801._7_1_));
            pbVar19 = (byte *)CONCAT17(DAT_043d7810._7_1_,
                                       CONCAT16(DAT_043d7810._6_1_,
                                                CONCAT51(DAT_043d7810._1_5_,(char)DAT_043d7810)));
            pbVar16 = DAT_043d77d8;
            if (!bVar8) {
              pbVar16 = &DAT_043d77c9;
            }
            if ((DAT_043d7800 & 1) == 0) {
              pbVar19 = (byte *)&DAT_043d7801;
              sVar22 = (ulong)(DAT_043d7800 >> 1);
            }
            if (sVar22 != 0) break;
            uVar12 = 0;
          }
          if ((long)uVar12 < (long)sVar22) {
            return;
          }
          bVar1 = *pbVar19;
          pbVar20 = pbVar16 + uVar12;
          pbVar13 = pbVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar12 - sVar22) {
              return;
            }
            pbVar13 = memchr(pbVar13,(uint)bVar1,(uVar12 - sVar22) + 1);
            if (pbVar13 == (byte *)0x0) {
              return;
            }
            iVar9 = memcmp(pbVar13,pbVar19,sVar22);
            if (iVar9 == 0) break;
            pbVar13 = pbVar13 + 1;
            uVar12 = (long)pbVar20 - (long)pbVar13;
            if ((long)uVar12 < (long)sVar22) {
              return;
            }
          }
          if (pbVar13 == pbVar20) {
            return;
          }
        } while( true );
      }
      pbVar13 = pbVar13 + 1;
      uVar12 = (long)pbVar20 - (long)pbVar13;
    } while ((long)sVar22 <= (long)uVar12);
  }
  return;
LAB_02045e64:
  if (pbVar13 == pbVar20) goto LAB_02045aec;
  uVar11 = (long)pbVar13 - (long)pbVar16;
  while( true ) {
    if (uVar11 == 0xffffffffffffffff) goto LAB_02045aec;
LAB_02045bf8:
    std::string::erase(0x43d77c8,uVar11);
    sVar22 = CONCAT44(_DAT_043d77f4,ram0x043d77f0);
    if ((_DAT_043d77c8 & 1) == 0) {
      uVar12 = _DAT_043d77c8 >> 1 & 0x7f;
      pbVar16 = &DAT_043d77c9;
    }
    else {
      uVar12 = DAT_043d77d0;
      pbVar16 = DAT_043d77d8;
    }
    if ((DAT_043d77e8 & 1) == 0) {
      sVar22 = (ulong)(DAT_043d77e8 >> 1);
      pbVar19 = (byte *)&DAT_043d77e9;
    }
    else {
      pbVar19 = DAT_043d77f8;
    }
    if (sVar22 != 0) break;
    uVar11 = 0;
  }
  if ((long)uVar12 < (long)sVar22) goto LAB_02045aec;
  bVar1 = *pbVar19;
  pbVar20 = pbVar16 + uVar12;
  pbVar13 = pbVar16;
  uVar11 = uVar12;
  while( true ) {
    if ((0xfffffffffffffffe < uVar11 - sVar22) ||
       (pbVar13 = memchr(pbVar13,(uint)bVar1,(uVar11 - sVar22) + 1), pbVar13 == (byte *)0x0))
    goto LAB_02045aec;
    iVar9 = memcmp(pbVar13,pbVar19,sVar22);
    if (iVar9 == 0) break;
    pbVar13 = pbVar13 + 1;
    uVar11 = (long)pbVar20 - (long)pbVar13;
    if ((long)uVar11 < (long)sVar22) goto LAB_02045aec;
  }
  goto LAB_02045e64;
}


