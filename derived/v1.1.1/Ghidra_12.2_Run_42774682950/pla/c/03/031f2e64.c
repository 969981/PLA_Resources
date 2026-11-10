/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f2e64; name: FUN_031f2e64
 */


void FUN_031f2e64(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_031f3d28();
    lVar2 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (lVar2 != 0) {
      FUN_032d647c();
    }
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    *(undefined1 *)(param_1 + 0x118) = 1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    lVar2 = *(long *)(param_1 + 0x1a0);
    iVar1 = iVar3 + 1;
    if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) <= iVar3) {
      lVar2 = FUN_031f35d8(PTR_PTR_0434a080,iVar1);
      iVar3 = *(int *)(param_1 + 0x1a8);
      *(long *)(param_1 + 0x1a0) = lVar2;
    }
    puVar4 = (undefined4 *)(lVar2 + (long)iVar3 * 0x50);
    *(int *)(param_1 + 0x1a8) = iVar1;
    *puVar4 = 4;
    puVar4[4] = param_2;
    if ((*(char *)(param_1 + 0x100) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_031f205c(param_1,param_3);
      return;
    }
  }
  return;
}


