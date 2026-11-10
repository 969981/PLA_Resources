/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022774a4; name: FUN_022774a4
 */


void FUN_022774a4(byte *param_1)

{
  long lVar1;
  byte bVar2;
  
  if ((*param_1 & 1) == 0) {
    bVar2 = *param_1 >> 1;
    *param_1 = (bVar2 - 1) * '\x02';
    param_1[bVar2] = 0;
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1 + -1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1 + -1) = 0;
  return;
}


