/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecae70; name: FUN_02ecae70
 */


int FUN_02ecae70(long param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  if (*(uint *)(param_1 + 0x10) == 0) {
    return 0;
  }
  iVar2 = 0;
  puVar3 = *(ulong **)(param_1 + 8);
  puVar1 = puVar3 + *(uint *)(param_1 + 0x10);
  puVar4 = *(ulong **)(param_2 + 8);
  do {
    while( true ) {
      if (puVar4 == *(ulong **)(param_2 + 8) + *(uint *)(param_2 + 0x10)) {
        return iVar2;
      }
      if (*puVar3 != *puVar4) break;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
LAB_02ecaec4:
      puVar4 = puVar4 + 1;
      if (puVar3 == puVar1) {
        return iVar2;
      }
    }
    if (*puVar4 <= *puVar3) goto LAB_02ecaec4;
    puVar3 = puVar3 + 1;
    if (puVar3 == puVar1) {
      return iVar2;
    }
  } while( true );
}


