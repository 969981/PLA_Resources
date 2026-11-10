/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c8e50; name: FUN_032c8e50
 */


undefined8 FUN_032c8e50(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = fpcr;
  uVar1 = uVar2 | 0x1000000;
  if ((param_1 & 1) == 0) {
    uVar1 = uVar2 & 0xfffffffffeffffff;
  }
  fpcr = uVar1;
  return 0;
}


