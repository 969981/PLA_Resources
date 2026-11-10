/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56b80; name: FUN_02e56b80
 */


void FUN_02e56b80(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x28);
  lVar1 = lVar4;
  if (*(uint *)(*(long *)(param_2 + 8) + 0x40) < 6) {
    lVar1 = 0;
  }
  lVar4 = *(long *)(lVar4 + 0xa8);
  lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x38) + 0x28) +
                   0xa8);
  if ((lVar4 == lVar9) && (*(uint *)(param_1 + 0x20) != 0)) {
    iVar8 = 0;
    lVar5 = (ulong)*(uint *)(param_1 + 0x20) * 0x50;
    plVar6 = (long *)(*(long *)(param_1 + 0x18) + 8);
    do {
      if (*plVar6 == lVar4) {
        iVar8 = iVar8 + 1;
      }
      lVar5 = lVar5 + -0x50;
      plVar6 = plVar6 + 10;
    } while (lVar5 != 0);
  }
  else {
    iVar8 = 0;
  }
  uVar2 = FUN_02e56d0c(param_1,iVar8);
  if ((((uVar2 & 1) != 0) && (iVar8 != 0)) &&
     (uVar2 = (ulong)*(uint *)(param_1 + 0x20), *(uint *)(param_1 + 0x20) != 0)) {
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    iVar8 = 0;
    puVar10 = puVar7;
    do {
      if (*(long *)(puVar10 + 2) == lVar4 && *(long *)(puVar10 + 2) == lVar9) {
        FUN_02e56e44(param_1,iVar8,*puVar10,puVar10 + 4);
        puVar7 = *(undefined4 **)(param_1 + 0x18);
        iVar8 = iVar8 + 1;
        uVar2 = (ulong)*(uint *)(param_1 + 0x20);
      }
      puVar10 = puVar10 + 0x14;
    } while (puVar10 != puVar7 + uVar2 * 0x14);
  }
  local_58 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x48);
  local_60 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
  FUN_02e56ed8(param_1,&local_58,&local_60);
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*(long *)(param_1 + 8) + 8) != 0) {
      FUN_02ef75a0(lVar1,uVar3);
      return;
    }
  }
  FUN_02ef75c4(lVar1,uVar3);
  return;
}


