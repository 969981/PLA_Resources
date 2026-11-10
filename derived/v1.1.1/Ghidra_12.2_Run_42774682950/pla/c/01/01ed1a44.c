/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed1a44; name: FUN_01ed1a44
 */


void FUN_01ed1a44(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_00d894e4();
  *param_1 = &PTR_LAB_04258938;
  param_1[9] = &PTR_LAB_042589a8;
  param_1[10] = &PTR_FUN_042589f0;
  lVar4 = *param_2;
  param_1[0xf] = lVar4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_00cf9b38(param_1 + 0x10,param_2 + 1);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_009ab200(param_1 + 0x12,param_2 + 3);
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  FUN_009630f4(param_1 + 0x14,param_2 + 5);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  FUN_01b0167c(param_1 + 0x16,param_2 + 7);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_01bfc234(param_1 + 0x18,param_2 + 9);
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x27] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_01ed67d8(param_1 + 0x28);
  return;
}


