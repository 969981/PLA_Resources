/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c33dc; name: FUN_001c33dc
 */


void FUN_001c33dc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = param_1 + 6;
  *param_1 = (long)(PTR_DAT_04372560 + 0x10);
  puVar4 = PTR_PTR_04372408;
  plVar9 = param_1 + 7;
  plVar6 = (long *)*plVar9;
  if (plVar6 != (long *)0x0) {
    plVar7 = *(long **)PTR_PTR_04372408;
    lVar5 = *plVar6;
    plVar2 = (long *)plVar6[1];
    while( true ) {
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      plVar1 = plVar9;
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2;
      }
      *plVar1 = lVar5;
      *(int *)(param_1 + 8) = (int)param_1[8] + -1;
      lVar5 = plVar6[0xe];
      iVar3 = *(int *)(lVar5 + 0x1018) + -1;
      *(int *)(lVar5 + 0x1018) = iVar3;
      if (iVar3 == 0) {
        plVar6 = plVar8;
        if (*(long *)(lVar5 + 0x1008) != 0) {
          plVar6 = (long *)(*(long *)(lVar5 + 0x1008) + 0x1010);
        }
        *plVar6 = *(long *)(lVar5 + 0x1010);
        if (*(long *)(lVar5 + 0x1010) != 0) {
          *(undefined8 *)(*(long *)(lVar5 + 0x1010) + 0x1008) = *(undefined8 *)(lVar5 + 0x1008);
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0x1020);
      }
      plVar6 = (long *)*plVar9;
      if (plVar6 == (long *)0x0) break;
      lVar5 = *plVar6;
      plVar2 = (long *)plVar6[1];
    }
  }
  lVar5 = *plVar8;
  if (lVar5 != 0) {
    plVar6 = *(long **)puVar4;
    do {
      plVar9 = plVar8;
      if (*(long *)(lVar5 + 0x1008) != 0) {
        plVar9 = (long *)(*(long *)(lVar5 + 0x1008) + 0x1010);
      }
      *plVar9 = *(long *)(lVar5 + 0x1010);
      if (*(long *)(lVar5 + 0x1010) != 0) {
        *(undefined8 *)(*(long *)(lVar5 + 0x1010) + 0x1008) = *(undefined8 *)(lVar5 + 0x1008);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0x1020);
      lVar5 = *plVar8;
    } while (lVar5 != 0);
  }
  plVar9 = param_1 + 4;
  plVar6 = (long *)*plVar9;
  plVar8 = param_1 + 3;
  if (plVar6 != (long *)0x0) {
    plVar7 = *(long **)puVar4;
    lVar5 = *plVar6;
    plVar2 = (long *)plVar6[1];
    while( true ) {
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      plVar1 = plVar9;
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2;
      }
      *plVar1 = lVar5;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      lVar5 = plVar6[8];
      iVar3 = *(int *)(lVar5 + 0xa18) + -1;
      *(int *)(lVar5 + 0xa18) = iVar3;
      if (iVar3 == 0) {
        plVar6 = plVar8;
        if (*(long *)(lVar5 + 0xa08) != 0) {
          plVar6 = (long *)(*(long *)(lVar5 + 0xa08) + 0xa10);
        }
        *plVar6 = *(long *)(lVar5 + 0xa10);
        if (*(long *)(lVar5 + 0xa10) != 0) {
          *(undefined8 *)(*(long *)(lVar5 + 0xa10) + 0xa08) = *(undefined8 *)(lVar5 + 0xa08);
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0xa20);
      }
      plVar6 = (long *)*plVar9;
      if (plVar6 == (long *)0x0) break;
      lVar5 = *plVar6;
      plVar2 = (long *)plVar6[1];
    }
  }
  lVar5 = *plVar8;
  if (lVar5 != 0) {
    plVar6 = *(long **)puVar4;
    do {
      plVar9 = plVar8;
      if (*(long *)(lVar5 + 0xa08) != 0) {
        plVar9 = (long *)(*(long *)(lVar5 + 0xa08) + 0xa10);
      }
      *plVar9 = *(long *)(lVar5 + 0xa10);
      if (*(long *)(lVar5 + 0xa10) != 0) {
        *(undefined8 *)(*(long *)(lVar5 + 0xa10) + 0xa08) = *(undefined8 *)(lVar5 + 0xa08);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0xa20);
      lVar5 = *plVar8;
    } while (lVar5 != 0);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


