/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280fb78; name: FUN_0280fb78
 */


long FUN_0280fb78(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_28 [8];
  
  lVar5 = FUN_028135fc(auStack_28);
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)*param_1;
  *param_1 = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  *param_1 = lVar5;
  *(long *)(lVar5 + 0x68) = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar8 = (undefined8 *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
    if (((*PTR_DAT_04387e08 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04387e08), iVar4 != 0)) {
      uVar6 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_04387e10 = uVar6;
      __cxa_guard_release(PTR_DAT_04387e08);
    }
    if (puVar8 != (undefined8 *)0x0) {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_04387e10) {
          return lVar5;
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


