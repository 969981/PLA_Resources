/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00406ae0; name: FUN_00406ae0
 */


undefined8 FUN_00406ae0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00405480(&DAT_0439e6d8,0);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_00405480(&DAT_0439e6e0,0);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_004055e0(&DAT_0439e6d8);
    uVar2 = 0;
  }
  return uVar2;
}


