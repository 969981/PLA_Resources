/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01272cd4; name: FUN_01272cd4
 */


void FUN_01272cd4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04200550;
  param_1[9] = &PTR_LAB_042005f0;
  param_1[10] = &PTR_LAB_04200638;
  pcVar6 = (code *)param_1[0x167];
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)param_1[0x157];
  }
  else {
    param_1[0x169] = 0;
    param_1[0x168] = 0;
    param_1[0x167] = 0;
    param_1[0x166] = 0;
    (*pcVar6)(param_1 + 0x16a);
    pcVar6 = (code *)param_1[0x157];
  }
  if (pcVar6 == (code *)0x0) {
    plVar5 = (long *)param_1[0x151];
  }
  else {
    param_1[0x159] = 0;
    param_1[0x158] = 0;
    param_1[0x157] = 0;
    param_1[0x156] = 0;
    (*pcVar6)(param_1 + 0x15a);
    plVar5 = (long *)param_1[0x151];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if ((long *)param_1[0x150] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x150] + 0x20))();
  }
  if ((long *)param_1[0x14d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14d] + 0x20))();
  }
  if ((long *)param_1[0x14c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14c] + 0x20))();
  }
  if ((long *)param_1[0x149] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x149] + 0x20))();
  }
  if ((long *)param_1[0x148] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x148] + 0x20))();
  }
  if ((long *)param_1[0x143] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x143] + 0x20))();
  }
  if ((long *)param_1[0x142] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x142] + 0x20))();
  }
  if ((long *)param_1[0x13f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13f] + 0x20))();
  }
  if ((long *)param_1[0x13e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13e] + 0x20))();
  }
  if ((long *)param_1[0x13b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13b] + 0x20))();
  }
  if ((long *)param_1[0x13a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13a] + 0x20))();
  }
  if ((long *)param_1[0x135] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x135] + 0x20))();
  }
  if ((long *)param_1[0x134] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x134] + 0x20))();
  }
  if ((long *)param_1[0x131] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x131] + 0x20))();
  }
  if ((long *)param_1[0x130] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x130] + 0x20))();
  }
  if ((long *)param_1[0x12d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12d] + 0x20))();
  }
  if ((long *)param_1[300] != (long *)0x0) {
    (**(code **)(*(long *)param_1[300] + 0x20))();
  }
  FUN_01268f64(param_1 + 0x101);
  FUN_0126897c(param_1 + 0xe3);
  FUN_012684fc(param_1 + 0xc5);
  FUN_012731f0(param_1 + 0xbe);
  FUN_012731f0(param_1 + 0xb7);
  plVar5 = (long *)param_1[0xb6];
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_00d415d4(param_1);
  return;
}


