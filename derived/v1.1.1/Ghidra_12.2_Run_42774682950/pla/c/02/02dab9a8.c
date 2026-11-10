/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dab9a8; name: FUN_02dab9a8
 */


void FUN_02dab9a8(long param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if (*(byte *)(param_1 + 0x228) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x228) = param_2 & 1;
    FUN_009c69bc(&local_18);
    if (*(char *)(param_1 + 0x228) == '\0') {
      local_18[0x19] = *(long *)(param_1 + 600);
      local_18[0x18] = *(long *)(param_1 + 0x250);
      *(undefined1 *)(local_18 + 0x1c) = 1;
      local_18[0x1b] = *(long *)(param_1 + 0x268);
      local_18[0x1a] = *(long *)(param_1 + 0x260);
      *(undefined1 *)(local_18 + 0x1c) = 1;
    }
    else {
      lVar5 = local_18[0x18];
      *(long *)(param_1 + 600) = local_18[0x19];
      *(long *)(param_1 + 0x250) = lVar5;
      lVar5 = local_18[0x1a];
      *(long *)(param_1 + 0x268) = local_18[0x1b];
      *(long *)(param_1 + 0x260) = lVar5;
    }
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


