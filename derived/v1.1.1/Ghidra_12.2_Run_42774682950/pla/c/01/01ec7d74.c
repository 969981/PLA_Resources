/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec7d74; name: FUN_01ec7d74
 */


void FUN_01ec7d74(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  plVar6 = (long *)FUN_01ec7b38(param_1 + 0x2c0);
  plVar2 = (long *)*plVar6;
  plVar6 = (long *)plVar6[1];
  do {
    while( true ) {
      if (plVar2 == plVar6) {
        FUN_01eceac4(param_1 + 0x2c0,param_2);
        return;
      }
      lVar9 = *plVar2;
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) break;
LAB_01ec7db0:
      plVar2 = plVar2 + 6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    iVar10 = *(int *)(lVar9 + 0xc);
    while( true ) {
      uVar7 = FUN_01ecab44(*(undefined8 *)(lVar9 + 0x10));
      if ((uVar7 & 1) == 0) goto LAB_01ec7db0;
      iVar3 = *piVar1;
      if (iVar3 == iVar10) break;
      ClearExclusiveLocal();
LAB_01ec7df0:
      iVar10 = iVar3;
      if (iVar3 == 0) goto LAB_01ec7db0;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01ec7df0;
    lVar9 = *(long *)(lVar9 + 0x18);
    plVar8 = (long *)(lVar9 + -0x50);
    if (lVar9 == 0) goto LAB_01ec7db0;
    FUN_01e9abd0(plVar8,1);
    lVar9 = *(long *)(lVar9 + 8);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 != 0) goto LAB_01ec7db0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
    plVar2 = plVar2 + 6;
  } while( true );
}


