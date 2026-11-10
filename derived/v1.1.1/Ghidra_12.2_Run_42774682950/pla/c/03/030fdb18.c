/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fdb18; name: FUN_030fdb18
 */


void FUN_030fdb18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x1658) != '\0') {
    if (0 < *(int *)(param_1 + 0x1640)) {
      lVar2 = *(long *)(param_1 + 0x1648);
      lVar1 = 0;
      lVar3 = *(long *)(param_1 + 0x1638);
      do {
        *(int *)(lVar2 + (ulong)*(uint *)(lVar3 + lVar1 * 0x10 + 0xc) * 4) = (int)lVar1;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x1640));
    }
    *(char *)(param_1 + 0x1658) = '\0';
  }
  return;
}


