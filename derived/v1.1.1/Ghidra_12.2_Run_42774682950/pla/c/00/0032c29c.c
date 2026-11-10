/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c29c; name: FUN_0032c29c
 */


void FUN_0032c29c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_04373af0;
  do {
    lVar5 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[4] = lVar5;
  param_1[1] = 0;
  *param_1 = 0;
  puVar6 = (undefined8 *)param_1[3];
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    return;
  }
  puVar6[2] = param_1[8];
  *puVar6 = 0;
  puVar6[1] = 0x18;
  lVar5 = tpidr_el0;
  lVar4 = FUN_0032c348(puVar6,(long *)(lVar5 + 0x10),param_1);
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *param_1 = lVar4;
  param_1[2] = param_1[8];
  *(long *)(lVar5 + 0x10) = param_1[4];
  *(long *)(lVar5 + 0x18) = lVar4;
  param_1[1] = lVar4;
  return;
}


