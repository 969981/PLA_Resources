/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a684dc; name: FUN_02a684dc
 */


/* WARNING: Removing unreachable block (ram,0x02a68620) */

void FUN_02a684dc(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar8 = param_1[0x71];
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0xc) == 0) {
LAB_02a68618:
      plVar9 = (long *)0x0;
      goto LAB_02a68510;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    iVar10 = *(int *)(lVar8 + 0xc);
    do {
      puVar11 = *(undefined8 **)(lVar8 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar7 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(puVar4);
      }
      if (puVar11 == (undefined8 *)0x0) goto LAB_02a68618;
      while (puVar11 != (undefined8 *)puVar5) {
        puVar11 = (undefined8 *)*puVar11;
        if (puVar11 == (undefined8 *)0x0) goto LAB_02a6850c;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar9 = (long *)0x0;
          if (*(long *)(lVar8 + 0x18) != 0) {
            plVar9 = (long *)(*(long *)(lVar8 + 0x18) + -8);
          }
          if (plVar9 != (long *)0x0) goto LAB_02a68518;
          goto LAB_02a68510;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_02a6850c:
  plVar9 = (long *)0x0;
LAB_02a68510:
  if (*(char *)((long)param_1 + 0x39c) == '\0') {
LAB_02a68518:
    FUN_02a68a08(param_1 + 0x43,param_2);
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02a68560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9);
      return;
    }
  }
  return;
}


