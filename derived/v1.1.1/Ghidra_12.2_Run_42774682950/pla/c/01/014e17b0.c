/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e17b0; name: FUN_014e17b0
 */


void FUN_014e17b0(undefined8 *param_1,long *param_2,char *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_00d894e4();
  *param_1 = &PTR_FUN_04216b48;
  param_1[9] = &PTR_LAB_04216bb8;
  param_1[10] = &PTR_FUN_04216c00;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  lVar5 = *param_2;
  param_1[0x13] = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar5 = param_2[1];
  param_1[0x14] = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x15] = param_2[2];
  lVar6 = param_2[5];
  lVar5 = param_2[3];
  lVar2 = param_2[4];
  *(int *)(param_1 + 0x19) = (int)param_2[6];
  param_1[0x17] = lVar2;
  param_1[0x18] = lVar6;
  param_1[0x16] = lVar5;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (*param_3 != '\0') {
    lVar5 = *(long *)(param_3 + 8);
    param_1[0x1b] = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    cVar3 = param_3[0x18];
    param_1[0x1c] = *(undefined8 *)(param_3 + 0x10);
    *(char *)(param_1 + 0x1d) = cVar3;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  return;
}


