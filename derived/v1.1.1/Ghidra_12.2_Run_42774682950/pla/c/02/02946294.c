/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02946294; name: FUN_02946294
 */


void FUN_02946294(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x390);
  **(undefined2 **)(lVar1 + 0x168) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 2) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 4) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 6) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 8) = *(undefined2 *)(param_1 + 0x124);
  if (-1 < *(int *)(*(long *)(param_1 + 0x58) + 0x10cc)) {
    lVar3 = 0;
    if (*(long *)(param_1 + 0x3b8) != 0) {
      puVar2 = *(uint **)(*(long *)(param_1 + 0x3b8) + 0x250);
      lVar3 = (long)puVar2 + (ulong)*puVar2;
    }
    *(long *)(*(long *)(lVar1 + 0x188) + 8) = lVar3;
  }
  lVar1 = *(long *)(param_1 + 0x370);
  **(undefined2 **)(lVar1 + 0x168) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 2) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 4) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 6) = *(undefined2 *)(param_1 + 0x124);
  *(undefined2 *)(*(long *)(lVar1 + 0x168) + 8) = *(undefined2 *)(param_1 + 0x124);
  if (-1 < *(int *)(*(long *)(param_1 + 0x58) + 0x10cc)) {
    lVar3 = 0;
    if (*(long *)(param_1 + 0x3b8) != 0) {
      puVar2 = *(uint **)(*(long *)(param_1 + 0x3b8) + 0x250);
      lVar3 = (long)puVar2 + (ulong)*puVar2;
    }
    *(long *)(*(long *)(lVar1 + 0x188) + 8) = lVar3;
  }
  return;
}


