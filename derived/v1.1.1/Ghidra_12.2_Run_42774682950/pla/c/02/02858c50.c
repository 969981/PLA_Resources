/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02858c50; name: FUN_02858c50
 */


long * FUN_02858c50(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(param_1 + (long)*param_2 * 8 + 0x68);
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)plVar7[0xb];
    if ((undefined8 *)plVar8[3] == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (plVar8[2] == 0) {
      lVar6 = (*(code *)**(undefined8 **)plVar8[3])();
      plVar8[2] = lVar6;
    }
    piVar1 = (int *)((long)plVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((((char)plVar7[0x1c] == '\0') || ((*(byte *)((long)plVar7 + 0xe1) & 1) == 0)) ||
       (plVar7[0xe] == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = *(char *)(plVar7[0xe] + 0x1e1) == '\0';
      plVar8 = plVar7 + 0x13;
    }
    lVar6 = plVar7[0xb];
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
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if (!bVar5) {
      return plVar8;
    }
  }
  return (long *)0x0;
}


