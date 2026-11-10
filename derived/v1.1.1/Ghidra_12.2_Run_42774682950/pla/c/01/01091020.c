/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01091020; name: FUN_01091020
 */


void FUN_01091020(long param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *local_38;
  
  if (param_1 != 0) {
    uVar7 = FUN_02c5fcb0();
    if (((uVar7 & 1) == 0) &&
       (uVar7 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98)), (uVar7 & 1) == 0)) {
      if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) {
        uVar5 = FUN_02c6849c();
        uVar6 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
        plVar9 = (long *)*param_3;
        local_38 = plVar9;
        if (plVar9 == (long *)0x0) {
          FUN_01090f00(uVar5,uVar6,param_2,&local_38);
        }
        else {
          lVar10 = plVar9[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar8;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          FUN_01090f00(uVar5,uVar6,param_2,&local_38);
          lVar10 = plVar9[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01091124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x20))(plVar9);
            return;
          }
        }
      }
    }
  }
  return;
}


