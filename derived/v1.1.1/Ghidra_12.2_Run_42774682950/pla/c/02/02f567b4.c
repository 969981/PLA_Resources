/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f567b4; name: FUN_02f567b4
 */


void FUN_02f567b4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = (long *)(param_1 + 0x70);
  plVar6 = (long *)*plVar9;
  if (plVar6 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((iVar2 == 1) && (plVar6[3] == param_2)) {
      plVar8 = (long *)plVar6[1];
      plVar5 = plVar9;
      if ((long *)*plVar9 != plVar6) {
        plVar5 = (long *)&DAT_00000008;
      }
      *plVar5 = (long)plVar8;
      if (*(long **)(param_1 + 0x68) == plVar6) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      (**(code **)*plVar6)(plVar6);
      (*DAT_0442d150)(0,plVar6);
      plVar6 = (long *)0x0;
    }
    else {
      plVar8 = (long *)plVar6[1];
    }
    while (plVar5 = plVar8, plVar8 != (long *)0x0) {
      while ((iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5), iVar2 != 1 || (plVar5[3] != param_2)))
      {
        plVar8 = plVar5 + 1;
        plVar6 = plVar5;
        plVar5 = (long *)*plVar8;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_02f567e0;
      }
      plVar8 = (long *)plVar5[1];
      plVar4 = plVar9;
      if ((long *)*plVar9 != plVar5) {
        plVar4 = plVar6 + 1;
      }
      *plVar4 = (long)plVar8;
      if (*(long **)(param_1 + 0x68) == plVar5) {
        *(long **)(param_1 + 0x68) = plVar6;
      }
      (**(code **)*plVar5)(plVar5);
      (*DAT_0442d150)(0,plVar5);
    }
  }
LAB_02f567e0:
  plVar6 = (long *)(param_1 + 0x78);
  if (*plVar6 != 0) {
    lVar10 = *plVar6;
    lVar7 = 0;
    do {
      while( true ) {
        lVar3 = lVar10;
        lVar10 = *(long *)(lVar3 + 0x18);
        lVar1 = 0;
        if (*(long *)(lVar3 + 8) != 0) {
          lVar1 = *(long *)(lVar3 + 8) + 0x300;
        }
        if (lVar1 == param_2) break;
        lVar7 = lVar3;
        if (lVar10 == 0) {
          return;
        }
      }
      plVar9 = plVar6;
      if (*plVar6 != lVar3) {
        plVar9 = (long *)(lVar7 + 0x18);
      }
      *plVar9 = lVar10;
      (*DAT_0442d150)(0);
    } while (lVar10 != 0);
  }
  return;
}


