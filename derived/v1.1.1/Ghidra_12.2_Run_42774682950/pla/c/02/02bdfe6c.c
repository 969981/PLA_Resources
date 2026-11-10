/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdfe6c; name: FUN_02bdfe6c
 */


void FUN_02bdfe6c(long *param_1,ulong *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  
  uVar11 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar4 * uVar10;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      if (uVar6 < 2) {
        while ((plVar7 = (long *)*plVar7, plVar7 != (long *)0x0 &&
               (plVar7[1] == uVar11 || (plVar7[1] & uVar10 - 1) == unaff_x25))) {
          if (plVar7[2] == uVar11) {
            return;
          }
        }
      }
      else {
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          uVar6 = plVar7[1];
          if (uVar6 != uVar11) {
            if (uVar10 <= uVar6) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar4 * uVar10;
            }
            if (uVar6 != unaff_x25) break;
          }
          if (plVar7[2] == uVar11) {
            return;
          }
        }
      }
    }
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x20,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  plVar7[2] = *param_2;
  lVar8 = *param_3;
  plVar7[3] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *plVar7 = 0;
  plVar7[1] = uVar11;
  if ((uVar10 == 0) || (*(float *)(param_1 + 10) * (float)uVar10 < (float)(param_1[9] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    FUN_02bdd5d4(param_1,uVar6);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else if (uVar11 < uVar10) {
      unaff_x25 = uVar11;
    }
    else {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar11 / uVar10;
      }
      unaff_x25 = uVar11 - uVar6 * uVar10;
    }
  }
  plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 5;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_02be00ec;
    uVar11 = *(ulong *)(*plVar7 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar6 * uVar10;
    }
    plVar9 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_02be00ec:
  param_1[9] = param_1[9] + 1;
  return;
}


