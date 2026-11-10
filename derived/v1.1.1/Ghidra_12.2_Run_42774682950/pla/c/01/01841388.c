/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01841388; name: FUN_01841388
 */


void FUN_01841388(long param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_58 [8];
  
  plVar10 = (long *)(param_1 + 0x220);
  lVar11 = *plVar10;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar11) {
    bVar6 = false;
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + 0x210;
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x214));
          while (*plVar10 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01841408;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01841408:
    bVar6 = true;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x228);
  puVar13 = *(undefined8 **)(param_1 + 0x230);
  do {
    if (puVar12 == puVar13) {
      if (bVar6) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
      }
      return;
    }
    FUN_01841388(puVar12[1],param_2);
    plVar10 = (long *)*puVar12;
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_018415c4;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar11 = FUN_009aff90(plVar10 + 0x1e,auStack_58);
    cVar5 = *param_2;
    if (lVar11 == 0) {
      if (plVar10 != (long *)0x0) {
        lVar11 = plVar10[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_018415c4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (cVar5 == '\0') {
        pcVar9 = *(code **)(*plVar10 + 0xa0);
      }
      else {
        pcVar9 = *(code **)(*plVar10 + 0x98);
      }
      (*pcVar9)(plVar10,0);
      lVar11 = plVar10[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    else {
      FUN_015916d0(lVar11,cVar5 != '\0',0x2000,0);
    }
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    puVar12 = puVar12 + 2;
  } while( true );
}


