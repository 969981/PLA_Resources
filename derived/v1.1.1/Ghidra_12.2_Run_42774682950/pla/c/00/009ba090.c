/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009ba090; name: FUN_009ba090
 */


void FUN_009ba090(undefined8 *param_1,long param_2,int param_3,long *param_4,undefined8 *param_5,
                 byte param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  int local_e0;
  byte local_dc;
  undefined1 local_db;
  long *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  long *local_48;
  
  if (*(char *)(param_2 + 0x162) == '\0') {
    uVar10 = *(ulong *)(param_2 + 0x70);
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar8 = (ulong)param_3;
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & uVar8;
      }
      else if (uVar8 < uVar10) {
        uVar12 = uVar8;
      }
      else {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar8 / uVar10;
        }
        uVar12 = uVar8 - uVar12 * uVar10;
      }
      plVar13 = *(long **)(*(long *)(param_2 + 0x68) + uVar12 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar13[1] == uVar8) {
              if ((int)plVar13[2] == param_3) goto LAB_009ba150;
            }
            else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar13[1];
            if (uVar11 == uVar8) {
              if ((int)plVar13[2] == param_3) goto LAB_009ba150;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar5 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_009adf60();
  }
LAB_009ba34c:
  *param_1 = 0;
  return;
LAB_009ba150:
  lVar14 = plVar13[7];
  (*(code *)**(undefined8 **)(lVar14 + 0x50))((undefined8 *)(lVar14 + 0x50));
  uVar10 = FUN_009ba564();
  if ((uVar10 & 1) != 0) {
    param_6 = param_6 & 1;
    FUN_009ba478(&local_48,lVar14);
    local_48[0x14] = *(long *)(*param_4 + 0xa8);
    FUN_01d4d160(local_48,param_4);
    FUN_009addb0(param_1,local_48,*(undefined8 *)(lVar14 + 0x68));
    plVar13 = local_48;
    local_db = 0;
    local_b8 = 0;
    local_d8 = (long *)0x0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_c0 = 0;
    local_e0 = param_3;
    local_dc = param_6;
    if (local_48 == (long *)0x0) {
      local_d8 = local_48;
    }
    else {
      lVar14 = local_48[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar7;
      }
      plVar6 = local_d8;
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_d8 = plVar13;
      if (plVar6 != (long *)0x0) {
        lVar14 = plVar6[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))();
        }
      }
    }
    pcVar9 = local_c8;
    if (local_c8 == (code *)0x0) {
      pcVar9 = (code *)param_5[2];
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar9)(auStack_b0);
      pcVar9 = (code *)param_5[2];
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(param_5 + 4,auStack_b0);
      local_d0 = *param_5;
      local_c8 = (code *)param_5[1];
      local_c0 = param_5[2];
      local_b8 = param_5[3];
    }
    lVar14 = nn::os::GetCurrentThread();
    plVar13 = (long *)(param_2 + 0x150);
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_009ba2a4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_009ba2a4:
    if (*(long *)(param_2 + 0x110) == *(long *)(param_2 + 0x118)) {
      FUN_009af390(param_2 + 0x108,&local_e0);
    }
    else {
      FUN_009af634(param_2 + 0x120,*(long *)(param_2 + 0x110),&local_e0);
      *(long *)(param_2 + 0x110) = *(long *)(param_2 + 0x110) + 0x90;
    }
    *(undefined1 *)(param_2 + 0x160) = 1;
    *(undefined8 *)(param_2 + 0x150) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
    pcVar9 = local_c8;
    if (local_c8 == (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar9)(auStack_b0);
    }
    if (local_d8 != (long *)0x0) {
      lVar14 = local_d8[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_d8 + 0x20))();
      }
    }
    if (local_48 == (long *)0x0) {
      return;
    }
    lVar14 = local_48[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      return;
    }
    return;
  }
  goto LAB_009ba34c;
}


