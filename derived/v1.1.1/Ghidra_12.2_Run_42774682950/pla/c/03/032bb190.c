/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bb190; name: FUN_032bb190
 */


uint FUN_032bb190(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x811c9dc5;
  uVar2 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      param_1 = param_1 + 1;
      uVar1 = (uVar1 ^ uVar2) * 0x1000193;
      uVar2 = (uint)*param_1;
    } while (uVar2 != 0);
  }
  return uVar1;
}


