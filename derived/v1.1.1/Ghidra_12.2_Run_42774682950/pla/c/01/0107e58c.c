/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107e58c; name: FUN_0107e58c
 */


void FUN_0107e58c(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  
  lVar3 = *param_1;
  lVar9 = param_1[1];
  FUN_0107d6a8(lVar9,lVar9 + 0x70);
  plVar8 = *(long **)(lVar9 + 0x148);
  *(undefined8 *)(lVar9 + 0x148) = 0;
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  uVar11 = *(undefined8 *)(lVar9 + 0x100);
  *(undefined8 *)(lVar9 + 0x100) = 0;
  *(undefined8 *)(lVar9 + 0x148) = uVar11;
  *(undefined1 *)(lVar9 + 0x120) = 1;
  if ((*(byte *)(lVar3 + 0x79) & 1) != 0) {
    return;
  }
  lVar9 = nn::os::GetCurrentThread();
  plVar8 = (long *)(lVar3 + 0x90);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar3 + 0x84));
        while (*plVar8 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0107e63c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0107e63c:
  puVar13 = *(undefined8 **)(lVar3 + 0x98);
  puVar4 = *(undefined8 **)(lVar3 + 0xa0);
  if (puVar13 != puVar4) {
    do {
      if ((*(byte *)(lVar3 + 0x79) & 1) == 0) {
        (*(code *)*puVar13)(puVar13 + 4);
      }
      if ((*(byte *)(lVar3 + 0x79) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar13[0x10])();
        *(int *)(lVar3 + 0x7c) = *(int *)(lVar3 + 0x7c) + 1;
      }
      puVar13 = puVar13 + 0x12;
    } while (puVar4 != puVar13);
    puVar13 = *(undefined8 **)(lVar3 + 0x98);
    puVar4 = *(undefined8 **)(lVar3 + 0xa0);
    while (puVar7 = puVar4, puVar7 != puVar13) {
      pcVar12 = (code *)puVar7[-0x11];
      puVar4 = puVar7 + -0x12;
      if (pcVar12 != (code *)0x0) {
        puVar7[-0x10] = 0;
        puVar7[-0xf] = 0;
        puVar7[-0x12] = 0;
        puVar7[-0x11] = 0;
        (*pcVar12)(puVar7 + -0xe);
      }
    }
  }
  *(undefined8 **)(lVar3 + 0xa0) = puVar13;
  *(undefined1 *)(lVar3 + 0x78) = 1;
  *(undefined1 *)(lVar3 + 0x68) = 1;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar3 + 0x84));
  return;
}


