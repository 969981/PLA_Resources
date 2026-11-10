/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01915830; name: FUN_01915830
 */


undefined1  [16] FUN_01915830(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 extraout_d0;
  undefined1 auVar10 [16];
  
  lVar6 = *param_1;
  uVar9 = 0;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    piVar1 = (int *)(lVar6 + 0xc);
    iVar7 = *(int *)(lVar6 + 0xc);
    do {
      plVar8 = *(long **)(lVar6 + 0x10);
      lVar5 = FUN_01913b5c(uVar9);
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_01915850;
        if (plVar8 == (long *)lVar5) break;
        plVar8 = (long *)*plVar8;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x18);
          plVar8 = (long *)(lVar6 + -0x50);
          if (lVar6 == 0) {
            return ZEXT816(0);
          }
          auVar10 = FUN_01b7674c(0,plVar8);
          lVar6 = *(long *)(lVar6 + 8);
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))(plVar8);
            return auVar10;
          }
          return auVar10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar9 = extraout_d0;
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01915850:
  return ZEXT816(0);
}


