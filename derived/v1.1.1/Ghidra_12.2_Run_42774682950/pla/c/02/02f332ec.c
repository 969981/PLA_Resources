/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f332ec; name: FUN_02f332ec
 */


undefined4 FUN_02f332ec(void)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_02f59e30(0x10,0x110);
  if (lVar1 != 0) {
    FUN_02f33334(lVar1);
  }
  DAT_0440b298 = lVar1;
  uVar2 = 0x34;
  if (lVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


