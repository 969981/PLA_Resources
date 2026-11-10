/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eae6d0; name: FUN_02eae6d0
 */


void FUN_02eae6d0(long param_1)

{
  char cVar1;
  undefined2 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x68) != 0)) {
    cVar1 = *(char *)(*(undefined2 **)(lVar3 + 0x60) + 1);
    puVar2 = *(undefined2 **)(lVar3 + 0x60);
    while( true ) {
      if (cVar1 != '\0') {
        FUN_02eafc5c(*(undefined4 *)(puVar2 + 2),param_1,*puVar2);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      if (puVar2 + 4 == (undefined2 *)(*(long *)(lVar3 + 0x60) + (ulong)*(uint *)(lVar3 + 0x68) * 8)
         ) break;
      cVar1 = *(char *)(puVar2 + 5);
      puVar2 = puVar2 + 4;
    }
  }
  return;
}


