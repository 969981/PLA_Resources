/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fa8fe0; name: FUN_01fa8fe0
 */


void FUN_01fa8fe0(undefined8 *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined4 local_e0;
  undefined2 local_dc;
  long *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [104];
  long *local_48;
  
  if (*(char *)(param_2 + 0x162) == '\0') {
    uVar10 = *(ulong *)(param_2 + 0x70);
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = (ulong)((uint)uVar10 - 1) & 0x23;
      }
      else {
        uVar13 = 0x23;
        if (uVar10 < 0x24) {
          uVar2 = (uint)uVar10 & 0xff;
          uVar6 = 0;
          if ((uVar10 & 0xff) != 0) {
            uVar6 = 0x23 / uVar2;
          }
          uVar13 = (ulong)(0x23 - uVar6 * uVar2);
        }
      }
      plVar14 = *(long **)(*(long *)(param_2 + 0x68) + uVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar14[1] == 0x23) {
              if ((int)plVar14[2] == 0x23) goto LAB_01fa90d4;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar13) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar14[1];
            if (uVar12 == 0x23) {
              if ((int)plVar14[2] == 0x23) goto LAB_01fa90d4;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar7 = 0;
                if (uVar10 != 0) {
                  uVar7 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar7 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    FUN_01fa81f0();
LAB_01fa9374:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  goto LAB_01fa92b4;
LAB_01fa90d4:
  lVar15 = plVar14[7];
  (*(code *)**(undefined8 **)(lVar15 + 0x50))((undefined8 *)(lVar15 + 0x50));
  uVar10 = FUN_01fa9478();
  if ((uVar10 & 1) != 0) {
    FUN_01fa938c(&local_48,lVar15);
    plVar14 = local_48;
    local_48[0x14] = *(long *)(*param_3 + 0xa8);
    FUN_01d53a44(local_48,param_3);
    FUN_009addb0(param_1,plVar14,*(undefined8 *)(lVar15 + 0x68));
    local_d8 = (long *)0x0;
    local_d0 = 0;
    local_b8 = 0;
    local_e0 = 0x23;
    local_dc = 0;
    local_c8 = (code *)0x0;
    local_c0 = 0;
    if (plVar14 == (long *)0x0) {
      local_d8 = plVar14;
    }
    else {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01fa9374;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar9;
      }
      plVar8 = local_d8;
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_d8 = plVar14;
      if (plVar8 != (long *)0x0) {
        lVar15 = plVar8[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
    }
    pcVar11 = local_c8;
    if (local_c8 == (code *)0x0) {
      pcVar11 = (code *)param_4[2];
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar11)(auStack_b0);
      pcVar11 = (code *)param_4[2];
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(param_4 + 4,auStack_b0);
      local_d0 = *param_4;
      local_c8 = (code *)param_4[1];
      local_c0 = param_4[2];
      local_b8 = param_4[3];
    }
    lVar15 = nn::os::GetCurrentThread();
    plVar14 = (long *)(param_2 + 0x150);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
          while (*plVar14 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar15;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01fa9224;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01fa9224:
    FUN_01fa8198(param_2 + 0x108,&local_e0);
    *(undefined1 *)(param_2 + 0x160) = 1;
    *(undefined8 *)(param_2 + 0x150) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
    pcVar11 = local_c8;
    if (local_c8 == (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar11)(auStack_b0);
    }
    if (local_d8 != (long *)0x0) {
      lVar15 = local_d8[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_d8 + 0x20))();
      }
    }
    if (local_48 == (long *)0x0) {
      return;
    }
    lVar15 = local_48[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      return;
    }
    return;
  }
LAB_01fa92b4:
  *param_1 = 0;
  return;
}


