/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d55560; name: FUN_00d55560
 */


void FUN_00d55560(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar6 = *(long **)(param_1 + 0x2c8);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)plVar6[0x29];
  lVar9 = plVar6[0x2a];
  if ((lVar9 != 0) && (*plVar7 != 0x2dc110817bf2fd6c)) {
    plVar8 = plVar7 + lVar9 * 6;
    lVar9 = lVar9 * 0x30;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) {
        plVar7 = plVar8;
        break;
      }
      plVar2 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar2;
    } while (*plVar1 != 0x2dc110817bf2fd6c);
  }
  *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) & 0xfe;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_00d55688(param_1);
  FUN_00d4d908(param_1,0);
  FUN_00d5c5d0(param_1);
  FUN_00d59a08(param_1);
  FUN_00d59d7c(param_1);
  FUN_00d59fe4(param_1);
  FUN_00d5a3b0(param_1,1);
  FUN_00d5cb18(param_1);
  *(undefined4 *)(param_1 + 0x5ac) = 7;
  return;
}


