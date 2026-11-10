/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010beaa0; name: FUN_010beaa0
 */


void FUN_010beaa0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  long *local_68 [4];
  long *local_48;
  undefined1 auStack_38 [8];
  
  lVar12 = *param_1;
  FUN_010c4d00(local_68,param_1 + 1,(int)param_1[5]);
  FUN_010bd598(lVar12 + 0xa8,0,local_68,0,*(undefined8 *)(lVar12 + 8),param_1[6]);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68[0] != (long *)0x0) {
    (**(code **)(*local_68[0] + 0x20))();
  }
  if ((*(byte *)(lVar12 + 0xd8) & 1) == 0) {
    if (*(long *)(lVar12 + 0x68) == 0) {
      local_68[0] = *(long **)(*(long *)(lVar12 + 0x80) + 0x250);
      lVar8 = FUN_00d12804(auStack_38,*(undefined8 *)(lVar12 + 8),local_68);
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar9 = *(long **)(lVar12 + 0x68);
      *(undefined8 *)(lVar12 + 0x68) = 0;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 10;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *(long *)(lVar12 + 0x68) = lVar8;
      FUN_02c2e92c(lVar8 + 0xa8,lVar12 + 0xa8);
      pcVar10 = *(code **)(lVar12 + 0xe0);
    }
    else {
      pcVar10 = *(code **)(lVar12 + 0xe0);
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(lVar12 + 0x100);
    }
    *(undefined1 *)(lVar12 + 0xd8) = 1;
  }
  lVar12 = param_1[7];
  if ((*(byte *)(lVar12 + 0x79) & 1) == 0) {
    lVar8 = nn::os::GetCurrentThread();
    plVar9 = (long *)(lVar12 + 0x90);
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x84));
          while (*plVar9 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_010beb90;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_010beb90:
    puVar11 = *(undefined8 **)(lVar12 + 0x98);
    puVar3 = *(undefined8 **)(lVar12 + 0xa0);
    if (puVar11 != puVar3) {
      do {
        if ((*(byte *)(lVar12 + 0x79) & 1) == 0) {
          (*(code *)*puVar11)(puVar11 + 4);
        }
        if ((*(byte *)(lVar12 + 0x79) & 1) != 0) {
          (*(code *)**(undefined8 **)puVar11[0x10])();
          *(int *)(lVar12 + 0x7c) = *(int *)(lVar12 + 0x7c) + 1;
        }
        puVar11 = puVar11 + 0x12;
      } while (puVar3 != puVar11);
      puVar11 = *(undefined8 **)(lVar12 + 0x98);
      puVar3 = *(undefined8 **)(lVar12 + 0xa0);
      while (puVar7 = puVar3, puVar7 != puVar11) {
        pcVar10 = (code *)puVar7[-0x11];
        puVar3 = puVar7 + -0x12;
        if (pcVar10 != (code *)0x0) {
          puVar7[-0x10] = 0;
          puVar7[-0xf] = 0;
          puVar7[-0x12] = 0;
          puVar7[-0x11] = 0;
          (*pcVar10)(puVar7 + -0xe);
        }
      }
    }
    *(undefined8 **)(lVar12 + 0xa0) = puVar11;
    *(undefined1 *)(lVar12 + 0x78) = 1;
    *(undefined1 *)(lVar12 + 0x68) = 1;
    *(undefined8 *)(lVar12 + 0x90) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x84));
  }
  return;
}


