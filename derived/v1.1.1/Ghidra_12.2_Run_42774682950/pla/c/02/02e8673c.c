/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8673c; name: FUN_02e8673c
 */


undefined8 FUN_02e8673c(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    if (puVar5 == (undefined8 *)0x0) {
LAB_02e8678c:
      for (plVar3 = *(long **)(param_1 + 0x50); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3[2] == param_2) {
          if (*(short *)(*(long *)(param_2 + 8) + 0x34) == 0x503) {
            *(int *)(param_2 + 0x34) =
                 *(int *)(param_2 + 0x34) + *(int *)(*(long *)(param_2 + 8) + 0xe8);
            return 1;
          }
          *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
          return 1;
        }
      }
    }
    else {
      if (puVar5[2] == param_2) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        do {
          puVar6 = puVar5;
          puVar5 = (undefined8 *)*puVar6;
          if (puVar5 == (undefined8 *)0x0) goto LAB_02e8678c;
        } while (puVar5[2] != param_2);
      }
      lVar4 = *(long *)(param_2 + 8);
      if (*(short *)(lVar4 + 0x34) == 0x503) {
        iVar2 = *(int *)(lVar4 + 0xe8);
        *(undefined4 *)(lVar4 + 0xe8) = 0;
        iVar2 = iVar2 + -1;
      }
      else {
        iVar2 = 0;
      }
      FUN_02e8425c(param_1,*(undefined4 *)(lVar4 + 0x30),param_2,iVar2);
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if (*(undefined8 **)(param_1 + 0x28) != puVar5) {
        puVar1 = puVar6;
      }
      *puVar1 = *puVar5;
      if (*(undefined8 **)(param_1 + 0x30) == puVar5) {
        *(undefined8 **)(param_1 + 0x30) = puVar6;
      }
      *puVar5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar5;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    }
  }
  return 1;
}


