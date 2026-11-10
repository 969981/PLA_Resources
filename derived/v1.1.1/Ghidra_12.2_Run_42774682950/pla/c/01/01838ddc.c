/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01838ddc; name: FUN_01838ddc
 */


void FUN_01838ddc(long param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  byte local_68 [8];
  long *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_48 [8];
  
  FUN_009c69bc(&local_60);
  plVar10 = local_60;
  if (local_60 != (long *)0x0) {
    lVar13 = local_60[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01839104:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((param_2 & 1) == 0) {
    pcVar9 = *(code **)(*plVar10 + 0xa0);
  }
  else {
    pcVar9 = *(code **)(*plVar10 + 0x98);
  }
  (*pcVar9)(plVar10,0);
  lVar13 = plVar10[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x45c) = 0;
  }
  lVar13 = FUN_00b13c20(local_60 + 0x1e,auStack_58);
  if (lVar13 != 0) {
    plVar10 = (long *)(lVar13 + 0x220);
    lVar11 = *plVar10;
    local_68[0] = param_2 & 1;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar11) {
      bVar4 = false;
      lVar8 = 0;
    }
    else {
      lVar8 = lVar13 + 0x210;
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar10 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x214));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01838f00;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01838f00:
      bVar4 = true;
    }
    puVar14 = *(undefined8 **)(lVar13 + 0x230);
    for (puVar12 = *(undefined8 **)(lVar13 + 0x228); puVar12 != puVar14; puVar12 = puVar12 + 2) {
      FUN_01841388(puVar12[1],local_68);
      plVar10 = (long *)*puVar12;
      if (plVar10 != (long *)0x0) {
        lVar13 = plVar10[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01839104;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar13 = FUN_009aff90(plVar10 + 0x1e,auStack_48);
      bVar6 = local_68[0];
      if (lVar13 == 0) {
        if (plVar10 != (long *)0x0) {
          lVar13 = plVar10[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01839104;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (bVar6 == 0) {
          pcVar9 = *(code **)(*plVar10 + 0xa0);
        }
        else {
          pcVar9 = *(code **)(*plVar10 + 0x98);
        }
        (*pcVar9)(plVar10,0);
        lVar13 = plVar10[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
      else {
        FUN_015916d0(lVar13,local_68[0] != 0,0x2000,0);
      }
      if (plVar10 != (long *)0x0) {
        lVar13 = plVar10[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
    }
    if (bVar4) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
    }
  }
  if (local_60 != (long *)0x0) {
    lVar13 = local_60[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return;
}


