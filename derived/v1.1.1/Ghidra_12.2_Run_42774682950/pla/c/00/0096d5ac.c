/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096d5ac; name: FUN_0096d5ac
 */


undefined8 FUN_0096d5ac(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 0xc) != 0)) {
    if (*(long *)(param_1 + 0x68) == 0) {
      local_28 = (long *)0x0;
    }
    else {
      FUN_0096e42c(&local_28);
    }
    uVar5 = FUN_011af914(local_28,param_2);
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[0xb];
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
        (**(code **)(*local_28 + 0x20))();
      }
    }
    if ((uVar5 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x7c) = 0;
      return 1;
    }
  }
  return 0;
}


