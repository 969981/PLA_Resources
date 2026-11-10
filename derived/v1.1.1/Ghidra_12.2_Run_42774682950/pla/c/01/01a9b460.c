/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9b460; name: FUN_01a9b460
 */


void FUN_01a9b460(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long *local_18;
  
  *(undefined4 *)(*(long *)(param_1 + 0x5c0) + 0x68) = param_2;
  FUN_009c685c(&local_18,param_1 + 0x5c8);
  if (local_18 == (long *)0x0) {
    return;
  }
  switch(*(undefined4 *)(*(long *)(param_1 + 0x5c0) + 0x68)) {
  case 0:
    pcVar6 = *(code **)(*local_18 + 0x158);
    break;
  case 1:
    pcVar6 = *(code **)(*local_18 + 0x110);
    break;
  case 2:
    pcVar6 = *(code **)(*local_18 + 0x128);
    break;
  case 3:
    pcVar6 = *(code **)(*local_18 + 0x140);
    break;
  default:
    goto switchD_01a9b4b0_default;
  }
  (*pcVar6)();
switchD_01a9b4b0_default:
  if (local_18 != (long *)0x0) {
    lVar5 = local_18[0xb];
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
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


