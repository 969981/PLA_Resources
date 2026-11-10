/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009980fc; name: FUN_009980fc
 */


void FUN_009980fc(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *local_28;
  
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 != (long *)0x0) {
    do {
      while( true ) {
        local_28 = (long *)plVar6[3];
        if (local_28 != (long *)0x0) {
          lVar7 = local_28[0xb];
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
        FUN_00ab044c(&local_28,param_2 & 1);
        if (local_28 != (long *)0x0) break;
LAB_0099818c:
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
      lVar7 = local_28[0xb];
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
      if (iVar2 + -1 != 0) goto LAB_0099818c;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


