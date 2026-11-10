/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec6df0; name: FUN_01ec6df0
 */


void FUN_01ec6df0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  
  plVar6 = *(long **)(param_1 + 0x250);
  do {
    while( true ) {
      if (plVar6 == *(long **)(param_1 + 600)) {
        return;
      }
      if (((plVar6[2] == *param_2) && (lVar8 = *plVar6, lVar8 != 0)) && (*(int *)(lVar8 + 0xc) != 0)
         ) break;
LAB_01ec6e2c:
      plVar6 = plVar6 + 6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    iVar9 = *(int *)(lVar8 + 0xc);
    while( true ) {
      uVar5 = FUN_01ecab44(*(undefined8 *)(lVar8 + 0x10));
      if ((uVar5 & 1) == 0) goto LAB_01ec6e2c;
      iVar2 = *piVar1;
      if (iVar2 == iVar9) break;
      ClearExclusiveLocal();
LAB_01ec6e5c:
      iVar9 = iVar2;
      if (iVar2 == 0) goto LAB_01ec6e2c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01ec6e5c;
    lVar8 = *(long *)(lVar8 + 0x18);
    plVar7 = (long *)(lVar8 + -0x50);
    if (lVar8 == 0) goto LAB_01ec6e2c;
    FUN_01e9c61c(plVar7);
    lVar8 = *(long *)(lVar8 + 8);
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 != 0) goto LAB_01ec6e2c;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    plVar6 = plVar6 + 6;
  } while( true );
}


