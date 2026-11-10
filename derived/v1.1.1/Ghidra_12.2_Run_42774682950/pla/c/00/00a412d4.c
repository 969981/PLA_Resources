/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a412d4; name: FUN_00a412d4
 */


void FUN_00a412d4(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong unaff_x24;
  float fVar16;
  uint local_5c;
  long *local_58 [3];
  
  uVar15 = *(ulong *)(param_1 + 0x10);
  plVar6 = (long *)(param_1 + 8);
  uVar13 = (ulong)param_2;
  local_5c = param_2;
  if (uVar15 == 0) goto LAB_00a41470;
  uVar8 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar10 = (ulong)((int)uVar15 - 1U & param_2);
  }
  else {
    uVar10 = uVar13;
    if (uVar15 <= uVar13) {
      uVar10 = 0;
      if (uVar15 != 0) {
        uVar10 = uVar13 / uVar15;
      }
      uVar10 = uVar13 - uVar10 * uVar15;
    }
  }
  lVar9 = *plVar6;
  plVar11 = *(long **)(lVar9 + uVar10 * 8);
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if (uVar8 < 2) {
      do {
        if (plVar11[1] == uVar13) {
          if (*(uint *)(plVar11 + 2) == param_2) {
LAB_00a41380:
            plVar6 = (long *)FUN_00a41690(plVar6,&local_5c);
            lVar9 = *param_3;
            if (lVar9 != 0) {
              lVar14 = *(long *)(lVar9 + 0x58);
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar14 + 0x10) == 0) {
                uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                *(undefined8 *)(lVar14 + 0x10) = uVar7;
              }
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plVar11 = (long *)*plVar6;
            *plVar6 = lVar9;
            if (plVar11 == (long *)0x0) {
              return;
            }
            lVar9 = plVar11[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar11 + 0x20))();
              return;
            }
            return;
          }
        }
        else if ((plVar11[1] & uVar15 - 1) != uVar10) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        uVar12 = plVar11[1];
        if (uVar12 == uVar13) {
          if (*(uint *)(plVar11 + 2) == param_2) goto LAB_00a41380;
        }
        else {
          if (uVar15 <= uVar12) {
            uVar5 = 0;
            if (uVar15 != 0) {
              uVar5 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar5 * uVar15;
          }
          if (uVar12 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  if (uVar8 < 2) {
    unaff_x24 = (ulong)((int)uVar15 - 1U & param_2);
LAB_00a415f4:
    plVar11 = *(long **)(lVar9 + unaff_x24 * 8);
  }
  else {
    unaff_x24 = uVar13;
    if (uVar13 < uVar15) goto LAB_00a415f4;
    uVar10 = 0;
    if (uVar15 != 0) {
      uVar10 = uVar13 / uVar15;
    }
    unaff_x24 = uVar13 - uVar10 * uVar15;
    plVar11 = *(long **)(lVar9 + unaff_x24 * 8);
  }
  if (plVar11 != (long *)0x0) {
    if (uVar8 < 2) {
      while ((plVar11 = (long *)*plVar11, plVar11 != (long *)0x0 &&
             (plVar11[1] == uVar13 || (plVar11[1] & uVar15 - 1) == unaff_x24))) {
        if (*(uint *)(plVar11 + 2) == param_2) {
          return;
        }
      }
    }
    else {
      while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
        uVar8 = plVar11[1];
        if (uVar8 != uVar13) {
          if (uVar15 <= uVar8) {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar8 / uVar15;
            }
            uVar8 = uVar8 - uVar10 * uVar15;
          }
          if (uVar8 != unaff_x24) break;
        }
        if (*(uint *)(plVar11 + 2) == param_2) {
          return;
        }
      }
    }
  }
LAB_00a41470:
  FUN_00a418e4(local_58,plVar6,uVar13,&local_5c,param_3);
  fVar16 = (float)(*(long *)(param_1 + 0x60) + 1);
  if ((uVar15 == 0) || (*(float *)(param_1 + 0x68) * (float)uVar15 < fVar16)) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar8 = (ulong)(fVar16 / *(float *)(param_1 + 0x68));
    if (uVar8 <= uVar15) {
      uVar8 = uVar15;
    }
    FUN_009aae54(plVar6,uVar8);
    uVar15 = *(ulong *)(param_1 + 0x10);
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar15 - 1U & param_2);
    }
    else if (uVar13 < uVar15) {
      unaff_x24 = uVar13;
    }
    else {
      uVar8 = 0;
      if (uVar15 != 0) {
        uVar8 = uVar13 / uVar15;
      }
      unaff_x24 = uVar13 - uVar8 * uVar15;
    }
  }
  plVar11 = *(long **)(*plVar6 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(param_1 + 0x38);
    *local_58[0] = *plVar11;
    *plVar11 = (long)local_58[0];
    *(long **)(*(long *)(param_1 + 8) + unaff_x24 * 8) = plVar11;
    if (*local_58[0] != 0) {
      uVar13 = *(ulong *)(*local_58[0] + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar13 = uVar13 & uVar15 - 1;
      }
      else if (uVar15 <= uVar13) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar13 / uVar15;
        }
        uVar13 = uVar13 - uVar8 * uVar15;
      }
      *(long **)(*plVar6 + uVar13 * 8) = local_58[0];
    }
  }
  else {
    *local_58[0] = *plVar11;
    *plVar11 = (long)local_58[0];
  }
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  return;
}


