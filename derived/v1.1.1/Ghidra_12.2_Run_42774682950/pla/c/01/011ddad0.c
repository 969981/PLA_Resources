/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ddad0; name: FUN_011ddad0
 */


void FUN_011ddad0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_041f9ee8;
  param_1[9] = &PTR_LAB_041f9f88;
  param_1[10] = &PTR_LAB_041f9fd0;
  plVar5 = (long *)param_1[0xde];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_011d5b58(param_1 + 0xdb);
  FUN_011d5b58(param_1 + 0xd8);
  FUN_011d5b58(param_1 + 0xd5);
  FUN_011d5b58(param_1 + 0xd2);
  FUN_011d5b58(param_1 + 0xcf);
  FUN_011d5f84(param_1 + 199);
  FUN_011d5f84(param_1 + 0xbf);
  FUN_011d63e8(param_1 + 0xb6);
  FUN_00d415d4(param_1);
  return;
}


