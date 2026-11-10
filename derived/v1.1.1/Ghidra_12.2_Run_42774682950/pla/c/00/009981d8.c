/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009981d8; name: FUN_009981d8
 */


void FUN_009981d8(long param_1,char *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *local_38;
  
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 != (long *)0x0) {
    do {
      while (*param_2 == '\0') {
        if ((int)plVar6[4] != 0) goto LAB_00998204;
LAB_0099821c:
        local_38 = (long *)plVar6[3];
        if (local_38 != (long *)0x0) {
          lVar7 = local_38[0xb];
          if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar7 + 0x10) == 0) {
            uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
            *(undefined8 *)(lVar7 + 0x10) = uVar5;
          }
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_00ab044c(&local_38,param_3 & 1);
        if (local_38 == (long *)0x0) goto LAB_00998204;
        lVar7 = local_38[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 != 0) goto LAB_00998204;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
      if ((int)plVar6[4] != 0) goto LAB_0099821c;
LAB_00998204:
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


