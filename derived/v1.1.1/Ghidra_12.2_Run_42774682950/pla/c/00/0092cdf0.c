/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092cdf0; name: FUN_0092cdf0
 */


undefined8 FUN_0092cdf0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *local_18;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x68);
    if (lVar6 == 0) {
      local_18 = (long *)0x0;
    }
    else {
      FUN_009c66e4(&local_18,lVar6);
      if (local_18 != (long *)0x0) {
        lVar7 = local_18[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        lVar6 = local_18[0xd];
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
          (**(code **)(*local_18 + 0x20))(local_18);
        }
        if ((int)lVar6 != 3) {
          return 0;
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
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
      if (iVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  return 1;
}


