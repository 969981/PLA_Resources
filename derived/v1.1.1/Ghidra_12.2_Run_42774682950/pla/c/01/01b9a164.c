/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9a164; name: FUN_01b9a164
 */


ulong FUN_01b9a164(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x95f) == '\0') {
    uVar2 = FUN_01b9febc();
    return uVar2;
  }
  uVar1 = FUN_01b9ffe0();
  if (uVar1 != 2) {
    uVar1 = (uint)(uVar1 == 1);
  }
  return (ulong)uVar1;
}


