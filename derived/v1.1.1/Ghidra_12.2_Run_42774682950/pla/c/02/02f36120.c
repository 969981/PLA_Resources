/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f36120; name: FUN_02f36120
 */


undefined8 FUN_02f36120(void)

{
  int iVar1;
  
  iVar1 = FUN_02f361b0();
  if (iVar1 == 1) {
    FUN_02e782a0(&LAB_02f361fc,0x10,0,8,0,0x321);
    FUN_02e782a0(&LAB_02f363a4,0x80,0,0,0,0);
    FUN_02e785f0(&LAB_02f363a8);
    FUN_02e78600(FUN_02f38740);
    FUN_02e78610(&LAB_02f38e70);
    return 1;
  }
  return 2;
}


