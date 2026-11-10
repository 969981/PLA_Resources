/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002443dc; name: FUN_002443dc
 */


uint * FUN_002443dc(long param_1,char *param_2)

{
  uint uVar1;
  char *__s2;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = *(ushort *)(lVar4 + 8);
      puVar5 = (uint *)(lVar4 + 0xc);
    }
    else {
      uVar2 = *(ushort *)(lVar4 + 8);
      if (uVar2 == 1) {
        return (uint *)0x0;
      }
      puVar5 = (uint *)(lVar4 + 0x18);
    }
    for (uVar1 = (uint)uVar2 - (uint)(*(int *)(param_1 + 0x60) != 0) & 0xffff; uVar1 != 0;
        uVar1 = uVar1 - 1) {
      __s2 = (char *)0x0;
      if (*puVar5 != 0) {
        __s2 = (char *)((long)puVar5 + (ulong)*puVar5);
      }
      iVar3 = strcmp(param_2,__s2);
      if (iVar3 == 0) {
        return puVar5;
      }
      puVar5 = puVar5 + 3;
    }
  }
  return (uint *)0x0;
}


