/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099d470; name: FUN_0099d470
 */


void FUN_0099d470(long *param_1,long param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_2 + 0x98);
  if (plVar5 != (long *)0x0) {
    do {
      if ((int)plVar5[4] == *param_3) {
        lVar6 = plVar5[3];
        *param_1 = lVar6;
        if (lVar6 == 0) {
          return;
        }
        lVar6 = *(long *)(lVar6 + 0x58);
        if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar6 + 0x10) == 0) {
          uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
          *(undefined8 *)(lVar6 + 0x10) = uVar4;
        }
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  *param_1 = 0;
  return;
}


