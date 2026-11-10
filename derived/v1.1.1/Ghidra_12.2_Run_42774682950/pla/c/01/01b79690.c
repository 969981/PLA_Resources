/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b79690; name: FUN_01b79690
 */


void FUN_01b79690(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar10 = *(long *)(param_1 + 8);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar12 = *(int *)(lVar10 + 0xc);
    do {
      plVar13 = *(long **)(lVar10 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == (long *)puVar5) break;
        plVar13 = (long *)*plVar13;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          plVar13 = (long *)(lVar10 + -0x50);
          if (lVar10 == 0) {
            return;
          }
          uVar7 = FUN_00ad3ac4(param_1 + 0x18,1,param_2,0,0,0);
          if (((uVar7 & 1) != 0) && (plVar11 = *(long **)(param_1 + 0x40), plVar11 != (long *)0x0))
          {
            lVar9 = plVar11[0xb];
            if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar9 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
              *(undefined8 *)(lVar9 + 0x10) = uVar8;
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
            lVar9 = plVar11[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar11 + 0x20))(plVar11);
            }
          }
          FUN_02c90b20(plVar13,param_1 + 0x18);
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b797c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar13 + 0x20))(plVar13);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


