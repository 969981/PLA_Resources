/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c62c8; name: FUN_011c62c8
 */


void FUN_011c62c8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_041f71c0;
  param_1[9] = &PTR_LAB_041f7260;
  param_1[10] = &PTR_LAB_041f72a8;
  pcVar6 = (code *)param_1[0x119];
  if (pcVar6 != (code *)0x0) {
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    param_1[0x119] = 0;
    param_1[0x118] = 0;
    (*pcVar6)(param_1 + 0x11c);
  }
  pcVar6 = (code *)param_1[0x109];
  if (pcVar6 != (code *)0x0) {
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    param_1[0x109] = 0;
    param_1[0x108] = 0;
    (*pcVar6)(param_1 + 0x10c);
  }
  plVar5 = (long *)param_1[0x103];
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
      plVar5 = (long *)param_1[0x102];
      goto joined_r0x011c6358;
    }
  }
  plVar5 = (long *)param_1[0x102];
joined_r0x011c6358:
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
  FUN_011c1070(param_1 + 0x101);
  FUN_011c134c(param_1 + 0xf8);
  FUN_011c0184(param_1 + 0xf4);
  FUN_011bf380(param_1 + 0xea);
  FUN_011bf380(param_1 + 0xe0);
  FUN_011bf380(param_1 + 0xd6);
  FUN_011bf380(param_1 + 0xcc);
  FUN_00d415d4(param_1);
  return;
}


