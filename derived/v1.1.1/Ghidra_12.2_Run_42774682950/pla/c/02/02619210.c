/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02619210; name: FUN_02619210
 */


void FUN_02619210(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x318);
  FUN_026192c8();
  FUN_01a4f4d4(param_1,param_1 + 0x238,0);
  if (((*(long *)(param_1 + 0xbf0) != 0) && (FUN_009cf990(&local_28), local_28 != (long *)0x0)) &&
     (FUN_01a4f4d4(local_28,param_1 + 0x238,0), local_28 != (long *)0x0)) {
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


