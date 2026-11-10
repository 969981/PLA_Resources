/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00401430; name: FUN_00401430
 */


undefined8 FUN_00401430(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00401150();
  if ((int)uVar1 != 0) {
    FUN_00400140(DAT_0439de50);
    lVar2 = *param_1;
    while (lVar2 != 0) {
      FUN_00405810(DAT_0439de58,param_1);
      param_1 = param_1 + 2;
      lVar2 = *param_1;
    }
    FUN_00400160(DAT_0439de50);
    uVar1 = 1;
  }
  return uVar1;
}


