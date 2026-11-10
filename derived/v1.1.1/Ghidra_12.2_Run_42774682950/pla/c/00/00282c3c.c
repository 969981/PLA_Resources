/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00282c3c; name: FUN_00282c3c
 */


long FUN_00282c3c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  while( true ) {
    iVar1 = 0;
    if (iVar2 + 1 < *(int *)(param_1 + 0x70)) {
      iVar1 = iVar2 + 1;
    }
    *(int *)(param_1 + 0x78) = iVar1;
    if (*(long *)(*(long *)(param_1 + 0xa8) + (long)iVar1 * 0x840 + 0x98) == 0) break;
    iVar4 = iVar4 + 1;
    iVar2 = iVar1;
    if (*(int *)(param_1 + 0x70) <= iVar4) {
LAB_00282cac:
      FUN_00271770("There is no available Emitter instance.\n");
      return 0;
    }
  }
  lVar3 = *(long *)(param_1 + 0xa8) + (long)iVar1 * 0x840;
  if (lVar3 != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    return lVar3;
  }
  goto LAB_00282cac;
}


