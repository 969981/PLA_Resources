/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00942070; name: FUN_00942070
 */


void FUN_00942070(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long *local_38;
  
  FUN_00928240(&local_38,*(undefined8 *)(*(long *)(param_1 + 8) + 0x178),
               *(undefined1 *)(*(long *)(param_2 + 0x70) + 0x7d));
  if (local_38 != (long *)0x0) {
    uVar4 = FUN_00932190(param_2);
    FUN_02c5fc04(local_38,uVar4);
    iVar5 = FUN_009321a8(param_2);
    if (iVar5 != 0) {
      uVar4 = FUN_009321cc(param_2,0);
      FUN_02c601f0(local_38,0,uVar4);
      if (iVar5 != 1) {
        uVar4 = FUN_009321cc(param_2,1);
        FUN_02c601f0(local_38,1,uVar4);
        if (iVar5 != 2) {
          uVar4 = FUN_009321cc(param_2,2);
          FUN_02c601f0(local_38,2,uVar4);
          if (iVar5 != 3) {
            uVar4 = FUN_009321cc(param_2,3);
            FUN_02c601f0(local_38,3,uVar4);
            if (iVar5 != 4) {
              iVar6 = 4;
              do {
                uVar4 = FUN_009321cc(param_2,iVar6);
                FUN_02c601f0(local_38,iVar6,uVar4);
                iVar6 = iVar6 + 1;
              } while (iVar5 != iVar6);
            }
          }
        }
      }
    }
    plVar1 = local_38 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  return;
}


