/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00973f14; name: FUN_00973f14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00973f14(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *local_18;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    local_18 = (long *)0x0;
    lVar5 = _DAT_000006a8;
  }
  else {
    FUN_00931034(&local_18);
    lVar5 = local_18[0xd5];
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[0xb];
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
        (**(code **)(*local_18 + 0x20))();
      }
    }
  }
  FUN_00d428b0(lVar5,0);
  return;
}


