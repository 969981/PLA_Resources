/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d27c54; name: FUN_00d27c54
 */


bool FUN_00d27c54(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x590);
  if (uVar1 == 0) {
    return true;
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(*(long *)(param_1 + 0x98) + 0x1e1) != '\0';
  }
  if (uVar1 != 1) {
    lVar5 = (ulong)uVar1 - 1;
    plVar4 = (long *)(param_1 + 0x148);
    do {
      bVar3 = false;
      if (*plVar4 != 0) {
        bVar3 = *(char *)(*plVar4 + 0x1e1) != '\0';
      }
      bVar2 = (bool)(bVar2 & bVar3);
      lVar5 = lVar5 + -1;
      plVar4 = plVar4 + 0x16;
    } while (lVar5 != 0);
  }
  return bVar2;
}


