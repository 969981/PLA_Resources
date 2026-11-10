/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c108c; name: FUN_001c108c
 */


void FUN_001c108c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  puVar5 = PTR_PTR_04372408;
  plVar9 = (long *)(param_1 + 0x20);
  plVar7 = (long *)*plVar9;
  if (plVar7 != (long *)0x0) {
    plVar8 = *(long **)PTR_PTR_04372408;
    lVar6 = *plVar7;
    plVar3 = (long *)plVar7[1];
    while( true ) {
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar3;
      }
      plVar1 = plVar9;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
      *plVar1 = lVar6;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      lVar6 = plVar7[8];
      iVar4 = *(int *)(lVar6 + 0xa18) + -1;
      *(int *)(lVar6 + 0xa18) = iVar4;
      if (iVar4 == 0) {
        puVar2 = (undefined8 *)(param_1 + 0x18);
        if (*(long *)(lVar6 + 0xa08) != 0) {
          puVar2 = (undefined8 *)(*(long *)(lVar6 + 0xa08) + 0xa10);
        }
        *puVar2 = *(undefined8 *)(lVar6 + 0xa10);
        if (*(long *)(lVar6 + 0xa10) != 0) {
          *(undefined8 *)(*(long *)(lVar6 + 0xa10) + 0xa08) = *(undefined8 *)(lVar6 + 0xa08);
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,0xa20);
      }
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) break;
      lVar6 = *plVar7;
      plVar3 = (long *)plVar7[1];
    }
  }
  plVar9 = (long *)(param_1 + 0x38);
  plVar7 = (long *)*plVar9;
  if (plVar7 != (long *)0x0) {
    plVar8 = *(long **)puVar5;
    lVar6 = *plVar7;
    plVar3 = (long *)plVar7[1];
    while( true ) {
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar3;
      }
      plVar1 = plVar9;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
      *plVar1 = lVar6;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      lVar6 = plVar7[0xe];
      iVar4 = *(int *)(lVar6 + 0x1018) + -1;
      *(int *)(lVar6 + 0x1018) = iVar4;
      if (iVar4 == 0) {
        puVar2 = (undefined8 *)(param_1 + 0x30);
        if (*(long *)(lVar6 + 0x1008) != 0) {
          puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x1008) + 0x1010);
        }
        *puVar2 = *(undefined8 *)(lVar6 + 0x1010);
        if (*(long *)(lVar6 + 0x1010) != 0) {
          *(undefined8 *)(*(long *)(lVar6 + 0x1010) + 0x1008) = *(undefined8 *)(lVar6 + 0x1008);
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,0x1020);
      }
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) break;
      lVar6 = *plVar7;
      plVar3 = (long *)plVar7[1];
    }
  }
  return;
}


