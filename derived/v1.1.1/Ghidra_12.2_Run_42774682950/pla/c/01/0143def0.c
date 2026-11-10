/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143def0; name: FUN_0143def0
 */


long * FUN_0143def0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_1;
  *param_1 = 0;
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
    }
  }
  lVar6 = *param_2;
  *param_2 = 0;
  *param_1 = lVar6;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar5 = (long *)param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar6 = param_2[4];
  param_2[4] = 0;
  param_1[4] = lVar6;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar5 = (long *)param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar6 = param_2[8];
  param_2[8] = 0;
  param_1[8] = lVar6;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  plVar5 = (long *)param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar6 = param_2[0xc];
  param_2[0xc] = 0;
  param_1[0xc] = lVar6;
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  plVar5 = (long *)param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar6 = param_2[0x10];
  param_2[0x10] = 0;
  param_1[0x10] = lVar6;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar5 = (long *)param_1[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar6 = param_2[0x14];
  param_2[0x14] = 0;
  param_1[0x14] = lVar6;
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  plVar5 = (long *)param_1[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar6 = param_2[0x18];
  param_2[0x18] = 0;
  param_1[0x18] = lVar6;
  return param_1;
}


