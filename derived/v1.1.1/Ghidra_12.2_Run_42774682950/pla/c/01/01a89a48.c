/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a89a48; name: FUN_01a89a48
 */


uint FUN_01a89a48(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long *local_58;
  long local_50;
  long lStack_48;
  long *local_38;
  long local_30;
  long lStack_28;
  
  FUN_009c69bc(&local_58);
  lStack_48 = local_58[0x1b];
  local_50 = local_58[0x1a];
  FUN_009c69bc(&local_38,param_2);
  lStack_28 = local_38[0x19];
  local_30 = local_38[0x18];
  uVar5 = FUN_01a89bd4(param_1,param_2,&local_50,&local_30);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar6 = local_58[0xb];
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
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return uVar5 & 1;
}


