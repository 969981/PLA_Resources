/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f40ed8; name: FUN_01f40ed8
 */


void FUN_01f40ed8(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_1 + 0x138);
  if (plVar7 != (long *)0x0) {
    do {
      while( true ) {
        plVar6 = (long *)plVar7[3];
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[0xb];
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
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(int *)(plVar6[0xe] + 0x220) == 6) {
          FUN_015916d0(plVar6[0xe],param_2 & 1,0x400,5);
        }
        lVar8 = plVar6[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) break;
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      }
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


