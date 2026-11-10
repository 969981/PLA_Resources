/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00995880; name: FUN_00995880
 */


void FUN_00995880(long param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  uVar9 = *(ulong *)(param_1 + 0x70);
  if (uVar9 == 0) {
    return;
  }
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar3 = *param_2;
  uVar8 = (ulong)bVar3;
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar11 = (int)uVar9 - 1 & uVar8;
  }
  else {
    uVar11 = uVar8;
    if (uVar9 <= uVar8) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar8 / uVar9;
      }
      uVar11 = uVar8 - uVar11 * uVar9;
    }
  }
  lVar12 = *(long *)(param_1 + 0x68);
  plVar14 = *(long **)(lVar12 + uVar11 * 8);
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (1 < uVar10) {
    do {
      uVar15 = plVar14[1];
      if (uVar15 == uVar8) {
        if (*(byte *)(plVar14 + 2) == bVar3) goto LAB_0099598c;
      }
      else {
        if (uVar9 <= uVar15) {
          uVar6 = 0;
          if (uVar9 != 0) {
            uVar6 = uVar15 / uVar9;
          }
          uVar15 = uVar15 - uVar6 * uVar9;
        }
        if (uVar15 != uVar11) {
          return;
        }
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar14[1] == uVar8) {
      if (*(byte *)(plVar14 + 2) == bVar3) goto LAB_0099598c;
    }
    else if ((plVar14[1] & uVar9 - 1) != uVar11) {
      return;
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_00995b34:
  lVar12 = (long)(int)plVar13[4];
  goto LAB_00995b38;
LAB_0099598c:
  if (uVar10 < 2) {
    plVar14 = *(long **)(lVar12 + ((int)uVar9 - 1 & uVar8) * 8);
    do {
      do {
        plVar14 = (long *)*plVar14;
      } while (plVar14[1] != uVar8);
    } while (*(byte *)(plVar14 + 2) != bVar3);
  }
  else {
    uVar10 = uVar8;
    if (uVar9 <= uVar8) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar8 / uVar9;
      }
      uVar10 = uVar8 - uVar10 * uVar9;
    }
    plVar14 = *(long **)(lVar12 + uVar10 * 8);
    do {
      do {
        plVar14 = (long *)*plVar14;
      } while (plVar14[1] != uVar8);
    } while (*(byte *)(plVar14 + 2) != bVar3);
  }
  plVar14 = *(long **)((long)plVar14 + 0x18);
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar8 = (ulong)*param_2;
    uVar9 = *(ulong *)(param_1 + 0x70);
  }
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = (int)uVar9 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar9 <= uVar8) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar8 / uVar9;
        }
        uVar11 = uVar8 - uVar11 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x68) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        lVar12 = 0x15;
        do {
          if (plVar13[1] == uVar8) {
            if ((uint)*(byte *)(plVar13 + 2) == (uint)uVar8) goto LAB_00995b34;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        lVar12 = 0x15;
        do {
          uVar10 = plVar13[1];
          if (uVar10 == uVar8) {
            if ((uint)*(byte *)(plVar13 + 2) == (uint)uVar8) goto LAB_00995b34;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar15 = 0;
              if (uVar9 != 0) {
                uVar15 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar15 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_00995b38;
    }
  }
  lVar12 = 0x15;
LAB_00995b38:
  param_1 = param_1 + lVar12 * 0x20;
  uStack_58 = *(undefined8 *)(param_1 + 0x178);
  local_60 = *(undefined8 *)(param_1 + 0x170);
  uStack_48 = *(undefined8 *)(param_1 + 0x188);
  uStack_50 = *(undefined8 *)(param_1 + 0x180);
  lVar12 = FUN_0095992c(plVar14 + 0x1e,auStack_38);
  if (lVar12 != 0) {
    FUN_01a83770(lVar12,&local_60,&uStack_50);
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


