/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d8a5c; name: FUN_028d8a5c
 */


/* WARNING: Removing unreachable block (ram,0x028d9060) */

void FUN_028d8a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,long *param_6,undefined8 *param_7)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  long *plVar20;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80 [2];
  undefined8 local_78;
  long *local_68;
  
  lVar4 = DAT_043ef5a0;
  if ((param_5 == 0) || (*(long *)(DAT_043ef5a0 + 0x60) == 0)) {
    return;
  }
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_5 + 0xb0);
  do {
    lVar12 = *plVar1;
    lVar14 = *(long *)(param_5 + 0xb8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar12;
      *(long *)(param_5 + 0xb8) = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar12 != 0 && (lVar9 != lVar12))) {
      nn::os::WaitLightEvent((LightEventType *)(param_5 + 0xa4));
      do {
        lVar12 = *plVar1;
        lVar14 = *(long *)(param_5 + 0xb8);
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar12;
          *(long *)(param_5 + 0xb8) = lVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar12 || *(long *)(param_5 + 0xb8) != lVar14) break;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12;
        *(long *)(param_5 + 0xb4) = lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        plVar20 = *(long **)(param_5 + 0x60);
        plVar3 = *(long **)(param_5 + 0x68);
        if (plVar20 == plVar3) goto LAB_028d901c;
        goto LAB_028d8b4c;
      }
    }
    ClearExclusiveLocal();
    lVar12 = *plVar1;
    lVar14 = *(long *)(param_5 + 0xb8);
  } while( true );
LAB_028d8b4c:
  if (*(long *)(*plVar20 + 0x58) == *param_6) {
    puVar19 = (ulong *)(plVar20 + 0xb);
    uVar10 = *puVar19;
    uVar13 = *(ulong *)(param_4 + 0x10);
    if (uVar13 != 0) {
      uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar13 - 1 & uVar10;
      }
      else {
        uVar16 = uVar10;
        if (uVar13 <= uVar10) {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = uVar10 / uVar13;
          }
          uVar16 = uVar10 - uVar16 * uVar13;
        }
      }
      plVar17 = *(long **)(*(long *)(param_4 + 8) + uVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar17[1] == uVar10) {
              if (plVar17[2] == uVar10) goto LAB_028d8c54;
            }
            else if ((plVar17[1] & uVar13 - 1) != uVar16) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 == uVar10) {
              if (plVar17[2] == uVar10) goto LAB_028d8c54;
            }
            else {
              if (uVar13 <= uVar15) {
                uVar8 = 0;
                if (uVar13 != 0) {
                  uVar8 = uVar15 / uVar13;
                }
                uVar15 = uVar15 - uVar8 * uVar13;
              }
              if (uVar15 != uVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_028d8b40;
LAB_028d8c54:
  lVar9 = plVar17[6];
  if ((lVar9 != 0) &&
     (FUN_02b3365c(&local_68,*(undefined8 *)(lVar4 + 0x60),plVar20 + 10), local_68 != (long *)0x0))
  {
    plVar17 = (long *)local_68[0x3b];
    if (plVar17 != (long *)0x0) {
LAB_028d8ca4:
      local_80[0] = CONCAT31(local_80[0]._1_3_,1);
      puVar2 = (ulong *)(plVar17 + 2);
      uVar10 = (*(code *)*param_7)(param_7 + 4,local_80,plVar20 + 1,puVar19,puVar2);
      if (((uVar10 & 1) == 0) && (uVar10 = *(ulong *)(lVar9 + 0x28), uVar10 != 0)) {
        uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar15 = *puVar2;
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar16 = uVar10 - 1 & uVar15;
        }
        else {
          uVar16 = uVar15;
          if (uVar10 <= uVar15) {
            uVar16 = 0;
            if (uVar10 != 0) {
              uVar16 = uVar15 / uVar10;
            }
            uVar16 = uVar15 - uVar16 * uVar10;
          }
        }
        plVar18 = *(long **)(*(long *)(lVar9 + 0x20) + uVar16 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if (uVar13 < 2) {
            do {
              if (plVar18[1] == uVar15) {
                if (plVar18[2] == uVar15) goto LAB_028d8dd0;
              }
              else if ((plVar18[1] & uVar10 - 1) != uVar16) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar13 = plVar18[1];
              if (uVar13 == uVar15) {
                if (plVar18[2] == uVar15) goto LAB_028d8dd0;
              }
              else {
                if (uVar10 <= uVar13) {
                  uVar8 = 0;
                  if (uVar10 != 0) {
                    uVar8 = uVar13 / uVar10;
                  }
                  uVar13 = uVar13 - uVar8 * uVar10;
                }
                if (uVar13 != uVar16) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      goto LAB_028d8c9c;
    }
LAB_028d8e24:
    plVar17 = (long *)local_68[0x48];
    if (plVar17 != (long *)0x0) {
LAB_028d8e48:
      local_80[0] = local_80[0] & 0xffffff00;
      puVar2 = (ulong *)(plVar17 + 2);
      uVar10 = (*(code *)*param_7)(param_7 + 4,local_80,plVar20 + 1,puVar19,puVar2);
      if (((uVar10 & 1) == 0) && (uVar10 = *(ulong *)(lVar9 + 0x90), uVar10 != 0)) {
        uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar15 = *puVar2;
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar16 = uVar10 - 1 & uVar15;
        }
        else {
          uVar16 = uVar15;
          if (uVar10 <= uVar15) {
            uVar16 = 0;
            if (uVar10 != 0) {
              uVar16 = uVar15 / uVar10;
            }
            uVar16 = uVar15 - uVar16 * uVar10;
          }
        }
        plVar18 = *(long **)(*(long *)(lVar9 + 0x88) + uVar16 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if (uVar13 < 2) {
            do {
              if (plVar18[1] == uVar15) {
                if (plVar18[2] == uVar15) goto LAB_028d8f70;
              }
              else if ((plVar18[1] & uVar10 - 1) != uVar16) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar13 = plVar18[1];
              if (uVar13 == uVar15) {
                if (plVar18[2] == uVar15) goto LAB_028d8f70;
              }
              else {
                if (uVar10 <= uVar13) {
                  uVar8 = 0;
                  if (uVar10 != 0) {
                    uVar8 = uVar13 / uVar10;
                  }
                  uVar13 = uVar13 - uVar8 * uVar10;
                }
                if (uVar13 != uVar16) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      goto LAB_028d8e40;
    }
LAB_028d8fe8:
    if (local_68 != (long *)0x0) {
      plVar17 = local_68 + 10;
      do {
        iVar7 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
LAB_028d8b40:
  plVar20 = plVar20 + 0xf;
  if (plVar20 == plVar3) goto LAB_028d901c;
  goto LAB_028d8b4c;
LAB_028d8dd0:
  uVar10 = (**(code **)(*(long *)(local_68[0xc] + 0x58) + 0x98))
                     ((long *)(local_68[0xc] + 0x58),local_80,puVar2,local_68 + 0x1a);
  if ((uVar10 & 1) != 0) {
    pcVar11 = *(code **)(PTR_PTR_04387fe0 + (ulong)*(uint *)(plVar18 + 6) * 0x10);
    uVar10 = *(ulong *)((long)(PTR_PTR_04387fe0 + (ulong)*(uint *)(plVar18 + 6) * 0x10) + 8);
    plVar18 = (long *)((long)(plVar18 + 6) + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar18);
    }
    (*pcVar11)(param_1,plVar18,local_80);
  }
LAB_028d8c9c:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto LAB_028d8e24;
  goto LAB_028d8ca4;
LAB_028d8f70:
  uVar10 = (**(code **)(*(long *)(local_68[0xc] + 0x58) + 0xa8))
                     ((long *)(local_68[0xc] + 0x58),local_80,puVar2,local_68 + 0x1a);
  if ((uVar10 & 1) != 0) {
    local_90 = CONCAT44(*(undefined4 *)((ulong)local_80 | 4),local_80[0]);
    uStack_88 = local_78;
    pcVar11 = *(code **)(PTR_PTR_04387fe8 + (ulong)*(uint *)(plVar18 + 6) * 0x10);
    uVar10 = *(ulong *)((long)(PTR_PTR_04387fe8 + (ulong)*(uint *)(plVar18 + 6) * 0x10) + 8);
    plVar18 = (long *)((long)(plVar18 + 6) + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar18);
    }
    (*pcVar11)(param_1,plVar18,&local_90);
  }
LAB_028d8e40:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto LAB_028d8fe8;
  goto LAB_028d8e48;
LAB_028d901c:
  do {
    lVar4 = *plVar1;
    lVar9 = *(long *)(param_5 + 0xb8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_5 + 0xb8) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    lVar12 = *plVar1;
    lVar14 = *(long *)(param_5 + 0xb8);
    if (lVar12 != lVar4 || lVar14 != lVar9) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_5 + 0xb4) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_028d90a0;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar4 = *plVar1;
      if (lVar4 != lVar12 || *(long *)(param_5 + 0xb8) != lVar14) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_028d906c;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12;
        *(long *)(param_5 + 0xb4) = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_028d906c:
    lVar12 = lVar4;
    lVar14 = *(long *)(param_5 + 0xb8);
  } while (!bVar6);
LAB_028d90a0:
  nn::os::SignalLightEvent((LightEventType *)(param_5 + 0xa4));
  return;
}


