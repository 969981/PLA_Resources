/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025d3b0c; name: FUN_025d3b0c
 */


void FUN_025d3b0c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if (((*(long *)(param_1 + 0x1f0) != 0) &&
      (FUN_009cf990(&local_18,*(long *)(param_1 + 0x1f0)), local_18 != (long *)0x0)) &&
     (FUN_01bae7c0(local_18), local_18 != (long *)0x0)) {
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
      (**(code **)(*local_18 + 0x20))(local_18);
      cVar3 = *(char *)(param_1 + 600);
      goto joined_r0x025d3bc0;
    }
  }
  cVar3 = *(char *)(param_1 + 600);
joined_r0x025d3bc0:
  if (cVar3 == '\0') {
    cVar3 = *(char *)(param_1 + 0x288);
  }
  else {
    *(undefined1 *)(param_1 + 600) = 0;
    cVar3 = *(char *)(param_1 + 0x288);
  }
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x288) = 0;
  }
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(ulong *)(param_1 + 0x250) = *(ulong *)(param_1 + 0x250) & 0xfffffffffffffffd;
  return;
}


