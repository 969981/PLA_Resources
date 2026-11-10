/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b9300; name: FUN_016b9300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_016b9300(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(param_1 + 0x88);
  if (plVar8 == (long *)0x0) {
    bVar6 = 1;
  }
  else {
    bVar6 = 1;
    do {
      plVar7 = (long *)plVar8[3];
      if (plVar7 == (long *)0x0) {
        bVar4 = false;
        if ((_DAT_00000158 != 0) && (bVar4 = false, *(long *)(_DAT_00000158 + 0x70) != 0)) {
          bVar4 = *(char *)(*(long *)(_DAT_00000158 + 0x70) + 0x1e1) != '\0';
        }
        bVar6 = bVar6 & bVar4;
      }
      else {
        lVar9 = plVar7[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar4 = false;
        if ((plVar7[0x2b] != 0) &&
           (lVar9 = *(long *)(plVar7[0x2b] + 0x70), bVar4 = false, lVar9 != 0)) {
          bVar4 = *(char *)(lVar9 + 0x1e1) != '\0';
        }
        bVar6 = bVar6 & bVar4;
        lVar9 = plVar7[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
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
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return bVar6;
}


