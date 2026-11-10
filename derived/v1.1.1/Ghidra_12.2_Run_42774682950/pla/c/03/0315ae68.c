/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315ae68; name: FUN_0315ae68
 */


void FUN_0315ae68(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_LAB_0430b098;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar5 = *(long *)(param_2 + 0x20);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 8) == 0) {
      param_1[4] = lVar5;
    }
    else {
      plVar4 = (long *)(lVar5 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)param_1[4];
      param_1[4] = *(undefined8 *)(param_2 + 0x20);
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar1 = plVar4 + 2;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x30) = 0;
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = uVar6;
  return;
}


