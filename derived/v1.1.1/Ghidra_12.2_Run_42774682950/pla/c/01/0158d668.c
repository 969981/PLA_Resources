/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158d668; name: FUN_0158d668
 */


void FUN_0158d668(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  
  *param_1 = &PTR_FUN_0421e2c8;
  param_1[9] = &PTR_LAB_0421e338;
  param_1[10] = &PTR_LAB_0421e380;
  plVar5 = (long *)param_1[0xd2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      pcVar6 = (code *)param_1[0xc3];
      goto joined_r0x0158d6b4;
    }
  }
  pcVar6 = (code *)param_1[0xc3];
joined_r0x0158d6b4:
  if (pcVar6 != (code *)0x0) {
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    param_1[0xc3] = 0;
    param_1[0xc2] = 0;
    (*pcVar6)(param_1 + 0xc6);
  }
  FUN_0125ba14(param_1 + 0xf);
  FUN_00d89520(param_1);
  return;
}


