/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02795848; name: FUN_02795848
 */


undefined8 FUN_02795848(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  
  if (*(int *)(param_1 + 0x48) == 2) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x48) != 1) ||
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x50) + 0x48))(), (uVar5 & 1) != 0)) {
    return 0;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))();
      pcVar8 = *(code **)(param_1 + 0x68);
      goto joined_r0x027958c4;
    }
  }
  pcVar8 = *(code **)(param_1 + 0x68);
joined_r0x027958c4:
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    (*pcVar8)(param_1 + 0x80);
  }
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}


