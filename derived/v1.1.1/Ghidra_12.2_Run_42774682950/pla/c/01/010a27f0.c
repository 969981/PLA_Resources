/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a27f0; name: FUN_010a27f0
 */


undefined8 FUN_010a27f0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_010bcff0(DAT_043ba448);
  if ((((uVar1 & 1) == 0) || (uVar1 = FUN_010bcff0(DAT_043ba450), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_010bcff0(DAT_043ba458), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_010bcff0(DAT_043ba460);
  return uVar2;
}


