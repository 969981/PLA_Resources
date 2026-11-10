/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7bd70; name: FUN_02a7bd70
 */


void FUN_02a7bd70(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar18 = (long *)(param_1 + 0x150);
  do {
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x144));
        while (*plVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a7bde0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a7bde0:
  puVar8 = PTR_DAT_04379c88;
  puVar7 = PTR_DAT_043794a0;
  uVar20 = *(ulong *)(param_1 + 0x78);
  uVar14 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar12 = *(ulong *)(param_2 + 0x70);
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar19 = uVar20 - 1 & uVar12;
  }
  else {
    uVar19 = uVar12;
    if (uVar20 <= uVar12) {
      uVar19 = 0;
      if (uVar20 != 0) {
        uVar19 = uVar12 / uVar20;
      }
      uVar19 = uVar12 - uVar19 * uVar20;
    }
  }
  puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar19 * 8);
  plVar18 = (long *)0x0;
  if (puVar17 != (undefined8 *)0x0) {
    plVar18 = (long *)*puVar17;
  }
  if (plVar18 != (long *)0x0) {
    if (uVar14 < 2) {
      bVar11 = 0;
      bVar5 = true;
      do {
        plVar2 = (long *)puVar8;
        if (plVar18[2] != 0) {
          plVar2 = (long *)(plVar18[2] + 0x58);
        }
        plVar21 = (long *)puVar8;
        if (*(long *)(param_2 + 0x68) != 0) {
          plVar21 = (long *)(*(long *)(param_2 + 0x68) + 0x58);
        }
        if (*plVar2 == *plVar21) {
          lVar10 = plVar18[8];
          if (*(long *)(param_2 + 0x1e8) == 0) {
            if (lVar10 == *(long *)(param_2 + 8)) goto LAB_02a7c0e4;
LAB_02a7c100:
            bVar5 = (bool)(bVar5 & lVar10 == 0);
            goto LAB_02a7c10c;
          }
          if (lVar10 != *(long *)(param_2 + 0x1e8)) goto LAB_02a7c100;
LAB_02a7c0e4:
          lVar10 = plVar18[9];
          if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
            lVar10 = plVar18[8];
            goto LAB_02a7c100;
          }
          local_70 = 0;
          local_90 = (undefined8 *)0x0;
          uStack_88 = 0;
          local_80 = 0;
          local_78 = (undefined8 *)0x0;
          FUN_00880560(&local_78,&local_90);
          plVar18[8] = 0;
          FUN_0093bcac(plVar18 + 9,&local_78);
          puVar17 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78 + 1);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)puVar7;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_68 = *puVar17;
              FUN_02a44274(lVar10 + 0xd8,&local_68);
            }
          }
          puVar17 = local_90;
          if (local_90 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_90 + 1);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)puVar7;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_68 = *puVar17;
              FUN_02a44274(lVar10 + 0xd8,&local_68);
            }
          }
          bVar11 = 1;
          plVar18 = (long *)*plVar18;
        }
        else {
LAB_02a7c10c:
          plVar18 = (long *)*plVar18;
        }
        if ((plVar18 != (long *)0x0) && ((plVar18[1] & uVar20 - 1) != uVar19)) {
          plVar18 = (long *)0x0;
        }
      } while ((bVar5 || (bool)(bVar11 ^ 1)) && (plVar18 != (long *)0x0));
    }
    else {
      bVar11 = 0;
      bVar5 = true;
      do {
        plVar2 = (long *)puVar8;
        if (plVar18[2] != 0) {
          plVar2 = (long *)(plVar18[2] + 0x58);
        }
        plVar21 = (long *)puVar8;
        if (*(long *)(param_2 + 0x68) != 0) {
          plVar21 = (long *)(*(long *)(param_2 + 0x68) + 0x58);
        }
        if (*plVar2 == *plVar21) {
          lVar10 = plVar18[8];
          if (*(long *)(param_2 + 0x1e8) == 0) {
            if (lVar10 == *(long *)(param_2 + 8)) goto LAB_02a7bec0;
LAB_02a7bedc:
            bVar5 = (bool)(bVar5 & lVar10 == 0);
            goto LAB_02a7bee8;
          }
          if (lVar10 != *(long *)(param_2 + 0x1e8)) goto LAB_02a7bedc;
LAB_02a7bec0:
          lVar10 = plVar18[9];
          if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
            lVar10 = plVar18[8];
            goto LAB_02a7bedc;
          }
          local_70 = 0;
          local_90 = (undefined8 *)0x0;
          uStack_88 = 0;
          local_80 = 0;
          local_78 = (undefined8 *)0x0;
          FUN_00880560(&local_78,&local_90);
          plVar18[8] = 0;
          FUN_0093bcac(plVar18 + 9,&local_78);
          puVar17 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78 + 1);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)puVar7;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_68 = *puVar17;
              FUN_02a44274(lVar10 + 0xd8,&local_68);
            }
          }
          puVar17 = local_90;
          if (local_90 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_90 + 1);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)puVar7;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_68 = *puVar17;
              FUN_02a44274(lVar10 + 0xd8,&local_68);
            }
          }
          bVar11 = 1;
          plVar18 = (long *)*plVar18;
        }
        else {
LAB_02a7bee8:
          plVar18 = (long *)*plVar18;
        }
        if (plVar18 != (long *)0x0) {
          uVar14 = plVar18[1];
          if (uVar20 <= uVar14) {
            uVar12 = 0;
            if (uVar20 != 0) {
              uVar12 = uVar14 / uVar20;
            }
            uVar14 = uVar14 - uVar12 * uVar20;
          }
          if (uVar14 != uVar19) {
            plVar18 = (long *)0x0;
          }
        }
      } while ((bVar5 || (bool)(bVar11 ^ 1)) && (plVar18 != (long *)0x0));
    }
    if (!bVar5) goto LAB_02a7c758;
    uVar12 = *(ulong *)(param_2 + 0x70);
    uVar20 = *(ulong *)(param_1 + 0x78);
  }
  if (uVar20 != 0) {
    uVar14 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar19 = uVar20 - 1 & uVar12;
    }
    else {
      uVar19 = uVar12;
      if (uVar20 <= uVar12) {
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar12 / uVar20;
        }
        uVar19 = uVar12 - uVar19 * uVar20;
      }
    }
    puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar19 * 8);
    if ((puVar17 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar17, plVar18 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar18[1] == uVar12) {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (plVar18[2] != 0) {
              plVar2 = (long *)(plVar18[2] + 0x58);
            }
            plVar21 = (long *)PTR_DAT_04379c88;
            if (*(long *)(param_2 + 0x68) != 0) {
              plVar21 = (long *)(*(long *)(param_2 + 0x68) + 0x58);
            }
            if (*plVar2 == *plVar21) goto LAB_02a7c3f0;
          }
          else if ((plVar18[1] & uVar20 - 1) != uVar19) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar18[1];
          if (uVar14 == uVar12) {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (plVar18[2] != 0) {
              plVar2 = (long *)(plVar18[2] + 0x58);
            }
            plVar21 = (long *)PTR_DAT_04379c88;
            if (*(long *)(param_2 + 0x68) != 0) {
              plVar21 = (long *)(*(long *)(param_2 + 0x68) + 0x58);
            }
            if (*plVar2 == *plVar21) goto LAB_02a7c3f0;
          }
          else {
            if (uVar20 <= uVar14) {
              uVar6 = 0;
              if (uVar20 != 0) {
                uVar6 = uVar14 / uVar20;
              }
              uVar14 = uVar14 - uVar6 * uVar20;
            }
            if (uVar14 != uVar19) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_02a7c750:
  plVar18 = *(long **)(param_2 + 0x88);
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
LAB_02a7c758:
  *(undefined8 *)(param_1 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x144));
  return;
LAB_02a7c3f0:
  lVar10 = tpidr_el0;
  do {
    uVar14 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    plVar2 = (long *)*plVar18;
    uVar12 = plVar18[1];
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar12 = uVar20 - 1 & uVar12;
    }
    else if (uVar20 <= uVar12) {
      uVar19 = 0;
      if (uVar20 != 0) {
        uVar19 = uVar12 / uVar20;
      }
      uVar12 = uVar12 - uVar19 * uVar20;
    }
    plVar21 = *(long **)(*(long *)(param_1 + 0x70) + uVar12 * 8);
    do {
      plVar16 = plVar21;
      plVar21 = (long *)*plVar16;
    } while ((long *)*plVar16 != plVar18);
    if (plVar16 == (long *)(param_1 + 0xa0)) {
LAB_02a7c4b4:
      if (*plVar18 != 0) {
        uVar19 = *(ulong *)(*plVar18 + 8);
        if (uVar14 < 2) {
          uVar19 = uVar19 & uVar20 - 1;
        }
        else if (uVar20 <= uVar19) {
          uVar6 = 0;
          if (uVar20 != 0) {
            uVar6 = uVar19 / uVar20;
          }
          uVar19 = uVar19 - uVar6 * uVar20;
        }
        if (uVar19 == uVar12) goto LAB_02a7c4f8;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar12 * 8) = 0;
    }
    else {
      uVar19 = plVar16[1];
      if (uVar14 < 2) {
        uVar19 = uVar19 & uVar20 - 1;
      }
      else if (uVar20 <= uVar19) {
        uVar6 = 0;
        if (uVar20 != 0) {
          uVar6 = uVar19 / uVar20;
        }
        uVar19 = uVar19 - uVar6 * uVar20;
      }
      if (uVar19 != uVar12) goto LAB_02a7c4b4;
    }
LAB_02a7c4f8:
    if (*plVar18 != 0) {
      uVar19 = *(ulong *)(*plVar18 + 8);
      if (uVar14 < 2) {
        uVar19 = uVar19 & uVar20 - 1;
      }
      else if (uVar20 <= uVar19) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = uVar19 / uVar20;
        }
        uVar19 = uVar19 - uVar14 * uVar20;
      }
      if (uVar19 != uVar12) {
        *(long **)(*(long *)(param_1 + 0x70) + uVar19 * 8) = plVar16;
      }
    }
    *plVar16 = *plVar18;
    *plVar18 = 0;
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + -1;
    if (plVar18 != (long *)0x0) {
      puVar17 = (undefined8 *)plVar18[9];
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_80 = *puVar17;
          FUN_02a44274(lVar13 + 0xd8,&local_80);
        }
      }
      if ((long *)plVar18[6] != (long *)0x0) {
        (**(code **)(*(long *)plVar18[6] + 0x20))();
      }
      if ((long *)plVar18[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar18[2] + 0x20))();
      }
      plVar21 = *(long **)(param_1 + 0xa8);
      uVar14 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar14 & 1) != 0) {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar21,plVar18,0x58,8);
          goto joined_r0x02a7c650;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,plVar18,0x58,8);
    }
joined_r0x02a7c650:
    if (plVar2 == (long *)0x0) goto LAB_02a7c750;
    lVar13 = *(long *)(param_2 + 0x68);
    if (plVar2[2] == 0) {
      lVar15 = *(long *)PTR_DAT_04379c88;
      if (lVar13 == 0) goto LAB_02a7c744;
LAB_02a7c66c:
      plVar18 = (long *)(lVar13 + 0x58);
    }
    else {
      lVar15 = *(long *)(plVar2[2] + 0x58);
      if (lVar13 != 0) goto LAB_02a7c66c;
LAB_02a7c744:
      plVar18 = (long *)PTR_DAT_04379c88;
    }
    if (lVar15 != *plVar18) goto LAB_02a7c750;
    uVar20 = *(ulong *)(param_1 + 0x78);
    plVar18 = plVar2;
  } while( true );
}


