/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a392c; name: FUN_031a392c
 */


void FUN_031a392c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_44;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x38) + lVar3);
      if ((lVar2 != 0) &&
         ((*(int *)(*(long *)(lVar2 + 0x20) + 0x164) != 0 ||
          (*(int *)(*(long *)(lVar2 + 0x20) + 0x160) != 0)))) {
        FUN_031a2388(lVar2,param_1);
        FUN_031a2930(lVar2,param_1,param_2);
        local_44 = 0x7fffffff;
        FUN_031a3034(lVar2,&local_44);
        iVar1 = *(int *)(param_1 + 0x40);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xf0;
    } while (lVar4 < iVar1);
  }
  return;
}


