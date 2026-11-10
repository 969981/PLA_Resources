/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7ce0; name: FUN_02ea7ce0
 */


int FUN_02ea7ce0(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  if (*(uint *)(param_1 + 0x10) == 0) {
    return 0;
  }
  iVar3 = 0;
  puVar4 = *(ulong **)(param_1 + 8);
  puVar5 = *(ulong **)(param_2 + 8);
  puVar1 = puVar4 + *(uint *)(param_1 + 0x10);
  puVar2 = puVar5 + *(uint *)(param_2 + 0x10);
  do {
    while( true ) {
      if (puVar5 == puVar2) {
        return iVar3;
      }
      if (*puVar4 != *puVar5) break;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
LAB_02ea7d30:
      puVar5 = puVar5 + 1;
      if (puVar4 == puVar1) {
        return iVar3;
      }
    }
    if (*puVar5 <= *puVar4) goto LAB_02ea7d30;
    puVar4 = puVar4 + 1;
    if (puVar4 == puVar1) {
      return iVar3;
    }
  } while( true );
}


