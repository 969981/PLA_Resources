/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01911d44; name: FUN_01911d44
 */


void FUN_01911d44(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 local_28;
  
  if (*param_1 != 0) {
    plVar7 = *(long **)(*param_1 + 0x5e8);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_28 = 0xc09bba82558ccb11;
    uVar6 = FUN_02c6849c(plVar7[0x13]);
    uVar5 = FUN_02c6f924(plVar7[0x13]);
    FUN_0165b1f8(&local_28,uVar6,uVar5,*(undefined8 *)(*param_1 + 0x750),&DAT_cbf29ce484222645,
                 &DAT_cbf29ce484222645);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return;
}


