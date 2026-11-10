/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0139d3f8; name: FUN_0139d3f8
 */


void FUN_0139d3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *local_50;
  long *local_48;
  
  uVar5 = FUN_00d400a0();
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_013a33fc(&local_48,param_3,param_4,param_5,param_6);
  FUN_011debe0(param_1,local_48);
  local_50 = local_48;
  local_48 = (long *)0x0;
  FUN_00d400dc(param_2,&local_50,3,0);
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[0xb];
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
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[0xb];
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
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


