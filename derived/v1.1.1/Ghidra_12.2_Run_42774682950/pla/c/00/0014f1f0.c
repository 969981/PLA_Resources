/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f1f0; name: FUN_0014f1f0
 */


uint FUN_0014f1f0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  
  if ((*(byte *)(param_1 + 0x370) >> 1 & 1) != 0) {
    piVar1 = (int *)(param_1 + 0x374);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 != 0) {
      uVar6 = 0;
LAB_0014f23c:
      if (*piVar1 == 0) {
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 0) goto LAB_0014f264;
      }
      uVar6 = uVar6 + 1;
      if ((uVar6 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014f23c;
    }
  }
LAB_0014f264:
  uVar3 = *(uint *)(param_1 + 0x370);
  uVar6 = uVar3 | 1;
  if (param_2 != 0) {
    uVar6 = uVar3 & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x370) = uVar6;
  if ((uVar6 >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x374) = 0;
  }
  return ~uVar3 & 1;
}


