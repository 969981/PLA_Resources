/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e82ec4; name: FUN_02e82ec4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e82ec4(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  for (plVar2 = *(long **)(param_1 + 0x50); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = plVar2[2];
    if ((*(int *)(lVar1 + 0x30) == param_2) && (_DAT_00000034 != 0x1820)) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
    }
  }
  plVar3 = (long *)(param_1 + 0x28);
  plVar2 = (long *)*plVar3;
  if (plVar2 != (long *)0x0) {
    lVar1 = plVar2[2];
    if ((*(int *)(lVar1 + 0x30) == param_2) && (*(short *)(*(long *)(lVar1 + 8) + 0x34) != 0x1820))
    {
      FUN_02e8425c(param_1,*(undefined4 *)(*(long *)(lVar1 + 8) + 0x30),lVar1,0);
      plVar4 = (long *)*plVar2;
      plVar5 = plVar3;
      if (*(long **)(param_1 + 0x28) != plVar2) {
        plVar5 = (long *)0x0;
      }
      *plVar5 = (long)plVar4;
      if (*(long **)(param_1 + 0x30) == plVar2) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *plVar2 = *(long *)(param_1 + 0x38);
      *(long **)(param_1 + 0x38) = plVar2;
      plVar2 = (long *)0x0;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    }
    else {
      plVar4 = (long *)*plVar2;
    }
    while (plVar4 != (long *)0x0) {
      while ((lVar1 = plVar4[2], *(int *)(lVar1 + 0x30) != param_2 ||
             (*(short *)(*(long *)(lVar1 + 8) + 0x34) == 0x1820))) {
        plVar5 = (long *)*plVar4;
        plVar2 = plVar4;
        plVar4 = plVar5;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      FUN_02e8425c(param_1,*(undefined4 *)(*(long *)(lVar1 + 8) + 0x30),lVar1,0);
      lVar1 = *plVar4;
      plVar5 = plVar3;
      if (*(long **)(param_1 + 0x28) != plVar4) {
        plVar5 = plVar2;
      }
      *plVar5 = lVar1;
      if (*(long **)(param_1 + 0x30) == plVar4) {
        *(long **)(param_1 + 0x30) = plVar2;
      }
      *plVar4 = *(long *)(param_1 + 0x38);
      *(long **)(param_1 + 0x38) = plVar4;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      plVar4 = (long *)lVar1;
    }
  }
  return;
}


