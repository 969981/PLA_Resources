/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cbc9e0; name: FUN_01cbc9e0
 */


void FUN_01cbc9e0(long param_1,undefined8 param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_38;
  byte local_2c [4];
  undefined1 auStack_28 [8];
  
  local_2c[0] = param_3 & 1;
  local_38 = (long *)FUN_01cbdf28(auStack_28,*(undefined8 *)(param_1 + 8),param_2,local_2c);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(ulong *)(param_1 + 0x70) < *(ulong *)(param_1 + 0x78)) {
    FUN_01cbe3f4(param_1 + 0x80,*(ulong *)(param_1 + 0x70),&local_38);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 8;
  }
  else {
    FUN_01cbe190(param_1 + 0x68,&local_38);
  }
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
  return;
}


