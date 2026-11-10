/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a43e4c; name: FUN_02a43e4c
 */


void FUN_02a43e4c(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar7 = FUN_02a43fdc(param_2 + 0xd8);
  uVar7 = uVar7 & 0xffffffff;
  lVar8 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_2 + 0x60);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x54));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02a43ec4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a43ec4:
  uVar9 = *(ulong *)(param_2 + 0xb0);
  if (uVar9 <= uVar7) {
    do {
      local_48 = (undefined4)uVar9;
      uStack_44 = 0;
      lVar8 = *(long *)(param_2 + 0x70);
      lVar10 = *(long *)(param_2 + 0x78);
      uVar4 = 0;
      if (lVar10 - lVar8 != 0) {
        uVar4 = (lVar10 - lVar8) * 0x10 - 1;
      }
      uVar9 = *(long *)(param_2 + 0xa8) + uVar9;
      if (uVar4 == uVar9) {
        FUN_02a46154(param_2 + 0x68);
        uVar9 = *(long *)(param_2 + 0xa8) + *(long *)(param_2 + 0xb0);
        lVar8 = *(long *)(param_2 + 0x70);
        lVar10 = *(long *)(param_2 + 0x78);
      }
      if (lVar10 == lVar8) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar8 + (uVar9 >> 4 & 0xffffffffffffff8)) + (uVar9 & 0x7f) * 0x20;
      }
      FUN_02a46f6c(param_2 + 0xb8,lVar8,&local_48);
      uVar9 = *(long *)(param_2 + 0xb0) + 1;
      *(ulong *)(param_2 + 0xb0) = uVar9;
    } while (uVar9 <= uVar7);
  }
  uVar7 = *(long *)(param_2 + 0xa8) + uVar7;
  lVar8 = *(long *)(*(long *)(param_2 + 0x70) + (uVar7 >> 4 & 0xffffffffffffff8)) +
          (uVar7 & 0x7f) * 0x20;
  iVar1 = *(int *)(lVar8 + 4) + 1;
  if (*(int *)(lVar8 + 4) == -1) {
    iVar1 = 1;
  }
  *(undefined8 *)(lVar8 + 0x18) = param_3;
  *(int *)(lVar8 + 4) = iVar1;
  *param_1 = lVar8;
  if (lVar8 != 0) {
    piVar3 = (int *)(lVar8 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x54));
  return;
}


