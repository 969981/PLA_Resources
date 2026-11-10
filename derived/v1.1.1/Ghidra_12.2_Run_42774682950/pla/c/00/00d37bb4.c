/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d37bb4; name: FUN_00d37bb4
 */


void FUN_00d37bb4(long *param_1,long param_2,long *param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  
  if (*(uint *)(param_2 + 400) != 0) {
    uVar7 = 0;
    piVar6 = (int *)(param_2 + 0x20);
    do {
      plVar1 = (long *)PTR_DAT_04379c88;
      if (*(long *)(piVar6 + -4) != 0) {
        plVar1 = (long *)(*(long *)(piVar6 + -4) + 0x58);
      }
      if ((*plVar1 == *param_3) && (*piVar6 == param_4)) {
        if ((uint)uVar7 < 0x10) {
          lVar5 = *(long *)(piVar6 + -2);
          *param_1 = lVar5;
          if (lVar5 == 0) {
            return;
          }
          lVar5 = *(long *)(lVar5 + 0x58);
          if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar5 + 0x10) == 0) {
            uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
            *(undefined8 *)(lVar5 + 0x10) = uVar4;
          }
          piVar6 = (int *)(lVar5 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          return;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 6;
    } while (*(uint *)(param_2 + 400) != uVar7);
  }
  *param_1 = 0;
  return;
}


