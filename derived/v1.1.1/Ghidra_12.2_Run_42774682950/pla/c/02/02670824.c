/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02670824; name: FUN_02670824
 */


void FUN_02670824(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long *local_18;
  
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x5a4) = *param_2;
  *(undefined8 *)(param_1 + 0x5ac) = uVar3;
  *(undefined8 *)(param_1 + 0x5b4) = uVar8;
  uVar8 = param_2[5];
  uVar3 = param_2[4];
  uVar4 = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x5bc) = param_2[3];
  *(undefined8 *)(param_1 + 0x5cc) = uVar8;
  *(undefined4 *)(param_1 + 0x5d4) = uVar4;
  *(undefined8 *)(param_1 + 0x5c4) = uVar3;
  if (*(char *)(param_1 + 0x5a0) == '\0') {
    *(undefined1 *)(param_1 + 0x5a0) = 1;
  }
  if (((*(long *)(param_1 + 0x610) != 0) && (FUN_0095deb8(&local_18), local_18 != (long *)0x0)) &&
     (FUN_02641960(local_18,param_2), local_18 != (long *)0x0)) {
    lVar7 = local_18[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


