/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c2260; name: FUN_010c2260
 */


uint FUN_010c2260(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  long *local_28;
  
  uVar2 = *(ushort *)(*param_2 + 0x7a);
  uVar6 = FUN_0024d260(**(undefined8 **)(param_1 + 0x58));
  if (uVar6 < uVar2) {
    uVar7 = 0;
  }
  else {
    param_2 = (long *)*param_2;
    local_28 = param_2;
    if (param_2 == (long *)0x0) {
      uVar7 = FUN_010c1200(param_1,&local_28);
    }
    else {
      plVar1 = param_2 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar7 = FUN_010c1200(param_1,&local_28);
      if (param_2 != (long *)0x0) {
        plVar1 = param_2 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
        }
      }
    }
  }
  return uVar7 & 1;
}


