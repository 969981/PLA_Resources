/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01318c14; name: FUN_01318c14
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01318c14(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = &PTR_FUN_04204808;
  param_1[9] = &PTR_LAB_042048f0;
  param_1[10] = &PTR_LAB_04204938;
  plVar5 = (long *)param_1[0x3c0];
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
  lVar6 = param_1[0x3bc];
  param_1[0x3bc] = 0;
  if (lVar6 != 0) {
    FUN_0131954c(param_1 + 0x3bd);
  }
  lVar6 = param_1[0x3b8];
  param_1[0x3b8] = 0;
  if (lVar6 == 0) {
    pcVar7 = (code *)param_1[0x19b];
  }
  else {
    FUN_013192f4(param_1 + 0x3b9);
    pcVar7 = (code *)param_1[0x19b];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0x19d] = 0;
    param_1[0x19c] = 0;
    param_1[0x19b] = 0;
    param_1[0x19a] = 0;
    (*pcVar7)(param_1 + 0x19e);
  }
  pcVar7 = (code *)param_1[0x18b];
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0x17b];
  }
  else {
    param_1[0x18d] = 0;
    param_1[0x18c] = 0;
    param_1[0x18b] = 0;
    param_1[0x18a] = 0;
    (*pcVar7)(param_1 + 0x18e);
    pcVar7 = (code *)param_1[0x17b];
  }
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0x16b];
  }
  else {
    param_1[0x17d] = 0;
    param_1[0x17c] = 0;
    param_1[0x17b] = 0;
    param_1[0x17a] = 0;
    (*pcVar7)(param_1 + 0x17e);
    pcVar7 = (code *)param_1[0x16b];
  }
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0x15b];
  }
  else {
    param_1[0x16d] = 0;
    param_1[0x16c] = 0;
    param_1[0x16b] = 0;
    param_1[0x16a] = 0;
    (*pcVar7)(param_1 + 0x16e);
    pcVar7 = (code *)param_1[0x15b];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
    param_1[0x15b] = 0;
    param_1[0x15a] = 0;
    (*pcVar7)(param_1 + 0x15e);
  }
  pcVar7 = (code *)param_1[0x14b];
  if (pcVar7 != (code *)0x0) {
    param_1[0x14d] = 0;
    param_1[0x14c] = 0;
    param_1[0x14b] = 0;
    param_1[0x14a] = 0;
    (*pcVar7)(param_1 + 0x14e);
  }
  pcVar7 = (code *)param_1[0x13b];
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[299];
  }
  else {
    param_1[0x13d] = 0;
    param_1[0x13c] = 0;
    param_1[0x13b] = 0;
    param_1[0x13a] = 0;
    (*pcVar7)(param_1 + 0x13e);
    pcVar7 = (code *)param_1[299];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0x12d] = 0;
    param_1[300] = 0;
    param_1[299] = 0;
    param_1[0x12a] = 0;
    (*pcVar7)(param_1 + 0x12e);
  }
  pcVar7 = (code *)param_1[0x11b];
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0x10b];
  }
  else {
    param_1[0x11d] = 0;
    param_1[0x11c] = 0;
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    (*pcVar7)(param_1 + 0x11e);
    pcVar7 = (code *)param_1[0x10b];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0x10d] = 0;
    param_1[0x10c] = 0;
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    (*pcVar7)(param_1 + 0x10e);
  }
  pcVar7 = (code *)param_1[0xfb];
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0xeb];
  }
  else {
    param_1[0xfd] = 0;
    param_1[0xfc] = 0;
    param_1[0xfb] = 0;
    param_1[0xfa] = 0;
    (*pcVar7)(param_1 + 0xfe);
    pcVar7 = (code *)param_1[0xeb];
  }
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0xdb];
  }
  else {
    param_1[0xed] = 0;
    param_1[0xec] = 0;
    param_1[0xeb] = 0;
    param_1[0xea] = 0;
    (*pcVar7)(param_1 + 0xee);
    pcVar7 = (code *)param_1[0xdb];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0xdd] = 0;
    param_1[0xdc] = 0;
    param_1[0xdb] = 0;
    param_1[0xda] = 0;
    (*pcVar7)(param_1 + 0xde);
  }
  pcVar7 = (code *)param_1[0xcb];
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0xbb];
  }
  else {
    param_1[0xcd] = 0;
    param_1[0xcc] = 0;
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    (*pcVar7)(param_1 + 0xce);
    pcVar7 = (code *)param_1[0xbb];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    (*pcVar7)(param_1 + 0xbe);
  }
  FUN_00d415d4(param_1);
  return;
}


