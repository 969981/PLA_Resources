/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951b38; name: FUN_02951b38
 */


bool FUN_02951b38(long param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0x2e4) < '\x01';
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x2e4) = 1;
    *(undefined1 *)(param_1 + 0x2e7) = 0;
  }
  bVar1 = *(char *)(param_1 + 0x2e5) < '\x01';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x2e5) = 1;
    *(undefined1 *)(param_1 + 0x2e8) = 0;
  }
  if (*(char *)(param_1 + 0x2e6) < '\x01') {
    *(undefined1 *)(param_1 + 0x2e6) = 1;
    *(undefined1 *)(param_1 + 0x2e9) = 0;
    return true;
  }
  return bVar1 || bVar2;
}


