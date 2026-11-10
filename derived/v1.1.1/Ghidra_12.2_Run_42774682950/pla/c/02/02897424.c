/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02897424; name: FUN_02897424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02897424(long param_1,undefined8 *param_2,int *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong *puVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  long lVar32;
  undefined1 auStack_b0 [8];
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  long *local_70 [2];
  
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  lVar28 = tpidr_el0;
  lVar23 = *(long *)(lVar28 + 0x38d490);
  if (lVar23 == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar28 + 0x38d490) = lVar23;
  }
  plVar15 = *(long **)(*(long *)(lVar23 + 8) + 0x58);
  plVar15 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,8,0);
  lVar23 = *(long *)(lVar28 + 0x38d490);
  if (lVar23 == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar28 + 0x38d490) = lVar23;
  }
  plVar16 = *(long **)(*(long *)(lVar23 + 8) + 0x58);
  lVar23 = (**(code **)(*plVar16 + 0x10))(plVar16,0xc0,0);
  FUN_03309708();
  *plVar15 = lVar23;
  local_80 = 1;
  local_78 = 0;
  local_88 = 0;
  *(undefined1 *)(lVar23 + 0x5d) = 0;
  lVar23 = *(long *)(param_1 + 0x78);
  if (lVar23 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(lVar23 + 0x240);
  }
  local_90 = plVar15;
  FUN_0339ee08(local_70,&local_a8,*(undefined8 *)(lVar23 + 0x250),uVar22,0);
  FUN_0339e0a4(&local_a8);
  lVar23 = (**(code **)(*local_70[0] + 0x40))(local_70[0],&DAT_0436f848);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  puVar24 = &DAT_042fd7a0;
  while( true ) {
    uVar27 = (uint)*puVar24;
    if ((uVar27 >> 3 & 1) != 0) break;
    if (((*puVar24 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
    goto LAB_0289754c;
  }
  if (puVar24 != (ulong *)0x0) {
    uVar27 = (uVar27 & 7) - (uVar27 >> 1 & 1);
    uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
    uVar21 = puVar24[(ulong)((uVar27 + (uVar27 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    goto LAB_02897594;
  }
LAB_0289754c:
  uVar21 = 0;
LAB_02897594:
  plVar15 = (long *)FUN_0339aad4(lVar23,uVar21,0);
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    plVar16 = plVar15 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar24 = &DAT_042f9e10;
  while( true ) {
    uVar27 = (uint)*puVar24;
    if ((uVar27 >> 3 & 1) != 0) break;
    if (((*puVar24 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
    goto LAB_028975e0;
  }
  if (puVar24 != (ulong *)0x0) {
    uVar27 = (uVar27 & 7) - (uVar27 >> 1 & 1);
    uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
    uVar21 = puVar24[(ulong)((uVar27 + (uVar27 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    goto LAB_02897628;
  }
LAB_028975e0:
  uVar21 = 0;
LAB_02897628:
  plVar16 = (long *)FUN_0339aad4(lVar23,uVar21,0);
  if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
    plVar1 = plVar16 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar14 = DAT_0388a148;
  lVar13 = DAT_0388a140;
  lVar12 = _UNK_0388a138;
  lVar11 = _DAT_0388a130;
  lVar10 = _UNK_03889a88;
  lVar9 = _DAT_03889a80;
  lVar8 = _UNK_03888d18;
  lVar7 = _DAT_03888d10;
  iVar30 = 0;
  plVar1 = (long *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)(param_1 + 0xb8);
  do {
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    local_88 = CONCAT44(local_88._4_4_,0xffffffff);
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      if (plVar15[1] != 0) {
        plVar17 = plVar15 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_a8 = plVar15;
    }
    if (plVar16 != (long *)0x0) {
      if (plVar16[1] != 0) {
        plVar17 = plVar16 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_98 = plVar16;
    }
    lVar25 = *(long *)(lVar28 + 0x38d490);
    if (lVar25 == 0) {
      lVar25 = FUN_0333d16c(0,1);
      *(long *)(lVar28 + 0x38d490) = lVar25;
    }
    plVar17 = *(long **)(*(long *)(lVar25 + 8) + 0x58);
    plVar17 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0xd0,0);
    FUN_0318be20();
    local_a0 = plVar17;
    lVar25 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x29));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_028977ac;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_028977ac:
    lVar25 = *(long *)(param_3 + 0x24);
    if (lVar25 == 0) {
      iVar31 = param_3[2];
      param_3[2] = iVar31 + 1;
    }
    else {
      iVar31 = param_3[lVar25 + 3];
      *(long *)(param_3 + 0x24) = lVar25 + -1;
    }
    *(ulong *)(param_3 + 0x26) =
         1L << ((long)iVar31 - (long)*param_3 & 0x3fU) | *(ulong *)(param_3 + 0x26);
    param_3[3] = param_3[3] + 1;
    param_3[0x2c] = 0;
    param_3[0x2d] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_3 + 0x29));
    plVar17 = local_a0;
    local_88 = CONCAT44(local_88._4_4_,iVar31);
    FUN_0318c5c4(local_a0,local_a8,iVar31);
    plVar17[0xd] = lVar10;
    plVar17[0xc] = lVar9;
    plVar17[0xf] = lVar14;
    plVar17[0xe] = lVar13;
    plVar17[0x11] = lVar8;
    plVar17[0x10] = lVar7;
    plVar17[0x13] = lVar12;
    plVar17[0x12] = lVar11;
    if ((char)plVar17[6] == '\x01') {
      lVar25 = plVar17[4];
    }
    else {
      lVar25 = FUN_02898b44();
    }
    *(int *)(lVar25 + 0x180) = iVar30;
    lVar25 = *(long *)(lVar28 + 0x38d490);
    if (lVar25 == 0) {
      lVar25 = FUN_0333d16c(0,1);
      *(long *)(lVar28 + 0x38d490) = lVar25;
    }
    plVar18 = *(long **)(*(long *)(lVar25 + 8) + 0x58);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x90,0);
    FUN_0315acb4();
    if (local_90 != (long *)0x0) {
      if (local_90[1] != 0) {
        plVar17 = local_90 + 2;
        do {
          lVar25 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 + -1 == 0) {
          lVar25 = *local_90;
          local_90 = plVar18;
          (**(code **)(lVar25 + 0x18))();
          plVar18 = local_90;
        }
      }
      local_90 = plVar18;
      plVar17 = local_a0;
      iVar31 = (int)local_88;
      plVar18 = local_90;
    }
    local_90 = plVar18;
    plVar18 = local_90;
    FUN_0289805c(local_90,local_98,iVar31);
    FUN_031c8500(auStack_b0,*param_2,plVar17,0,0,plVar18,0,0);
    lVar25 = *(long *)(param_1 + 0xa8);
    if (lVar25 == *(long *)(param_1 + 0xb0)) {
      uVar21 = *(ulong *)(param_1 + 0xc0);
      lVar25 = lVar25 - *(long *)(param_1 + 0xa0) >> 3;
      if (0x7ffffffffffffffe < uVar21) {
        uVar21 = 0x7fffffffffffffff;
      }
      uVar3 = lVar25 * -0x3333333333333333 + 1;
      if (uVar21 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar26 = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa0) >> 3;
      uVar29 = lVar26 * -0x6666666666666666;
      if (uVar3 <= uVar29) {
        uVar3 = uVar29;
      }
      if ((ulong)(lVar26 * -0x3333333333333333) < uVar21 >> 1) {
        uVar21 = uVar3;
      }
      if (uVar21 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar21 * 0x28,8);
        if (lVar26 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xb8))();
        }
      }
      lVar32 = lVar26 + lVar25 * 8;
      FUN_02898fbc(puVar2,lVar32,&local_a8);
      plVar17 = *(long **)(param_1 + 0xa0);
      plVar18 = *(long **)(param_1 + 0xa8);
      lVar25 = lVar32 + 0x28;
      if (plVar18 == plVar17) {
        plVar18 = plVar17;
      }
      else {
        do {
          lVar32 = lVar32 + -0x28;
          plVar18 = plVar18 + -5;
          FUN_02898fbc(puVar2,lVar32,plVar18);
        } while (plVar17 != plVar18);
        plVar17 = *(long **)(param_1 + 0xa0);
        plVar18 = *(long **)(param_1 + 0xa8);
      }
      *(long *)(param_1 + 0xa0) = lVar32;
      *(long *)(param_1 + 0xa8) = lVar25;
      lVar25 = *(long *)(param_1 + 0xb0);
      *(ulong *)(param_1 + 0xb0) = lVar26 + uVar21 * 0x28;
joined_r0x02897a70:
      plVar20 = plVar18;
      if (plVar18 != plVar17) {
        do {
          plVar18 = (long *)plVar20[-2];
          if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
            plVar19 = plVar18 + 2;
            do {
              lVar26 = *plVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = lVar26 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar26 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))();
            }
          }
          plVar19 = (long *)plVar20[-3];
          plVar18 = plVar20 + -5;
          if ((plVar19 == (long *)0x0) || (plVar19[1] == 0)) {
LAB_02897dd8:
            plVar20 = (long *)plVar20[-4];
            if (plVar20 == (long *)0x0) goto LAB_02897e00;
LAB_02897de0:
            if (plVar20[1] == 0) goto LAB_02897e00;
            plVar19 = plVar20 + 2;
            do {
              lVar26 = *plVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = lVar26 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar26 + -1 != 0) goto LAB_02897e00;
            (**(code **)(*plVar20 + 0x18))();
            plVar20 = (long *)*plVar18;
          }
          else {
            plVar4 = plVar19 + 2;
            do {
              lVar26 = *plVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar6) {
                *plVar4 = lVar26 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar26 + -1 != 0) goto LAB_02897dd8;
            (**(code **)(*plVar19 + 0x18))();
            plVar20 = (long *)plVar20[-4];
            if (plVar20 != (long *)0x0) goto LAB_02897de0;
LAB_02897e00:
            plVar20 = (long *)*plVar18;
          }
          if ((plVar20 == (long *)0x0) || (plVar20[1] == 0)) goto joined_r0x02897a70;
          plVar19 = plVar20 + 2;
          do {
            lVar26 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar26 + -1 != 0) goto joined_r0x02897a70;
          (**(code **)(*plVar20 + 0x18))();
          plVar20 = plVar18;
          if (plVar18 == plVar17) break;
        } while( true );
      }
      if (plVar17 != (long *)0x0) {
        lVar25 = lVar25 - (long)plVar17;
        plVar18 = (long *)*puVar2;
        uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar21 & 1) != 0) {
          if (*(char *)(lVar28 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar28 + 0x38d488) = 1;
            *(undefined8 *)(lVar28 + 0x38d478) = 0;
            *(undefined8 *)(lVar28 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar28 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar28 + 0x38d480)) {
            FUN_02bcc824(plVar18,plVar17,lVar25,8);
            goto LAB_02897af8;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,plVar17,lVar25,8);
      }
    }
    else {
      FUN_02898fbc(puVar2,lVar25,&local_a8);
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 0x28;
    }
LAB_02897af8:
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    puVar24 = &DAT_042fd7a0;
    while( true ) {
      uVar27 = (uint)*puVar24;
      if ((uVar27 >> 3 & 1) != 0) break;
      if (((*puVar24 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
      goto LAB_02897b24;
    }
    if (puVar24 != (ulong *)0x0) {
      uVar27 = (uVar27 & 7) - (uVar27 >> 1 & 1);
      uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
      uVar21 = puVar24[(ulong)((uVar27 + (uVar27 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_02897b6c;
    }
LAB_02897b24:
    uVar21 = 0;
LAB_02897b6c:
    plVar17 = (long *)FUN_0339aad4(lVar23,uVar21,plVar15);
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar18 = plVar17 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = *plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      plVar18 = plVar15 + 2;
      do {
        lVar25 = *plVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))();
      }
    }
    puVar24 = &DAT_042f9e10;
    while( true ) {
      uVar27 = (uint)*puVar24;
      if ((uVar27 >> 3 & 1) != 0) break;
      if (((*puVar24 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
      goto LAB_02897bf0;
    }
    if (puVar24 != (ulong *)0x0) {
      uVar27 = (uVar27 & 7) - (uVar27 >> 1 & 1);
      uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
      uVar21 = puVar24[(ulong)((uVar27 + (uVar27 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_02897c38;
    }
LAB_02897bf0:
    uVar21 = 0;
LAB_02897c38:
    plVar18 = (long *)FUN_0339aad4(lVar23,uVar21,plVar16);
    if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
      plVar15 = plVar18 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
      plVar15 = plVar16 + 2;
      do {
        lVar25 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    if (plVar17 != (long *)0x0) {
      iVar30 = iVar30 + 1;
    }
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar15 = local_90 + 2;
      do {
        lVar25 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))();
      }
    }
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar15 = local_98 + 2;
      do {
        lVar25 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*local_98 + 0x18))();
      }
    }
    if ((local_a0 != (long *)0x0) && (local_a0[1] != 0)) {
      plVar15 = local_a0 + 2;
      do {
        lVar25 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*local_a0 + 0x18))();
      }
    }
    if ((local_a8 != (long *)0x0) && (local_a8[1] != 0)) {
      plVar15 = local_a8 + 2;
      do {
        lVar25 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*local_a8 + 0x18))();
      }
    }
    plVar15 = plVar17;
    plVar16 = plVar18;
    if (plVar17 == (long *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = 2;
      if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
        plVar15 = plVar18 + 2;
        do {
          lVar28 = *plVar15;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar28 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar28 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      if ((local_70[0] != (long *)0x0) && (local_70[0][1] != 0)) {
        plVar15 = local_70[0] + 2;
        do {
          lVar28 = *plVar15;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar28 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar28 + -1 == 0) {
          (**(code **)(*local_70[0] + 0x18))();
        }
      }
      return 1;
    }
  } while( true );
}


