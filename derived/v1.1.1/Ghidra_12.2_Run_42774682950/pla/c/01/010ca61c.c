/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ca61c; name: FUN_010ca61c
 */


void FUN_010ca61c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x78) - 1U < 2) {
    lVar6 = 0;
    do {
      lVar7 = param_1 + lVar6 * 0xa0;
      FUN_00937d80(lVar7 + 0xc0);
      FUN_010a18d0(lVar7 + 0xf0);
      plVar5 = *(long **)(lVar7 + 0xb8);
      *(undefined8 *)(lVar7 + 0xb8) = 0;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 10;
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
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x11);
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


