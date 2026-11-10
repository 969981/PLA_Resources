/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01517a94; name: FUN_01517a94
 */


void FUN_01517a94(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long *)(param_2 + 0x238) != 0) {
    plVar8 = *(long **)(param_2 + 0x230);
    do {
      plVar7 = plVar8 + 1;
      (*(code *)**(undefined8 **)(*plVar8 + 0x50))();
      uVar4 = FUN_0151a98c();
      if ((uVar4 & 1) != 0) {
        lVar6 = *plVar8;
        (*(code *)**(undefined8 **)(lVar6 + 0x50))();
        uVar4 = FUN_0151a98c();
        if ((uVar4 & 1) == 0) {
          lVar6 = 0;
        }
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
          uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
          *(undefined8 *)(lVar6 + 0x10) = uVar5;
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
      plVar8 = plVar7;
    } while (plVar7 != (long *)(*(long *)(param_2 + 0x230) + *(long *)(param_2 + 0x238) * 8));
  }
  *param_1 = 0;
  return;
}


