/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ce2c0; name: FUN_004ce2c0
 */


long FUN_004ce2c0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_004c3380();
  uVar2 = FUN_00404920(uVar1,0x31,0,0);
  return 0x100 - (uVar2 & 0xffffffff);
}


