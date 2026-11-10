/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027ffb88; name: FUN_027ffb88
 */


void FUN_027ffb88(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar7 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar7;
    lVar7 = *(long *)(*(long *)(lVar7 + 0x50) + 0x28);
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x68) = lVar7;
  }
  return;
}


