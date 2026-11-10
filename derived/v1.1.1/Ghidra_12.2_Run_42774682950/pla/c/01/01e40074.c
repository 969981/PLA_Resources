/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e40074; name: FUN_01e40074
 */


void FUN_01e40074(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar9 = *param_2;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (puVar12 == (undefined8 *)0x0) goto LAB_01e40094;
        if (puVar12 == (undefined8 *)puVar5) break;
        puVar12 = (undefined8 *)*puVar12;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          if (*(long *)(lVar9 + 0x18) != 0) {
            plVar10 = (long *)(*(long *)(lVar9 + 0x18) + -8);
            plVar7 = (long *)param_2[2];
            *param_1 = (long)plVar7;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x10))();
            }
                    /* WARNING: Could not recover jumptable at 0x01e4017c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar10 + 0x18))(plVar10);
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01e40094:
  *param_1 = 0;
  return;
}


