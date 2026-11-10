/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14c90; name: FUN_02a14c90
 */


bool FUN_02a14c90(long param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  bVar1 = *(char *)(lVar4 + 0x2e4) != '\x01';
  if (bVar1) {
    *(undefined1 *)(lVar4 + 0x2e4) = 1;
    *(undefined1 *)(lVar4 + 0x2e7) = 0;
  }
  bVar2 = *(char *)(lVar4 + 0x2e5) != '\x01';
  if (bVar2) {
    *(undefined1 *)(lVar4 + 0x2e5) = 1;
    *(undefined1 *)(lVar4 + 0x2e8) = 0;
  }
  bVar3 = *(char *)(lVar4 + 0x2e6) != '\x01';
  if (bVar3) {
    *(undefined1 *)(lVar4 + 0x2e6) = 1;
    *(undefined1 *)(lVar4 + 0x2e9) = 0;
  }
  return bVar3 || (bVar2 || bVar1);
}


