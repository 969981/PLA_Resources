/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251090; name: FUN_00251090
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00251090(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04372850;
  if (*(long *)(param_2 + *(long *)PTR_DAT_04372850) != 0) {
    pcVar3 = *(char **)(*(long *)(param_2 + *(long *)PTR_DAT_04372850) + 0x68);
    if (*pcVar3 != '\0') {
      return 0;
    }
    uVar4 = FUN_0087ccc4(pcVar3,param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  lVar5 = *(long *)(param_2 + *(long *)(puVar1 + 8));
  if (lVar5 != 0) {
    pcVar3 = *(char **)(lVar5 + 0x68);
    if (*pcVar3 != '\0') {
      return 1;
    }
    iVar2 = FUN_0087ccc4(pcVar3,param_1);
    if (iVar2 == 0) {
      return 1;
    }
  }
  lVar5 = *(long *)(param_2 + *(long *)(puVar1 + 0x10));
  if (lVar5 == 0) {
    pcVar3 = _DAT_00000068;
  }
  else {
    pcVar3 = *(char **)(lVar5 + 0x68);
    if (*pcVar3 != '\0') {
      return 2;
    }
  }
  FUN_0087ccc4(pcVar3,param_1);
  return 2;
}


