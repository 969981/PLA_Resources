/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042e120; name: FUN_0042e120
 */


long FUN_0042e120(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_0042d990(*param_1);
    if ((lVar2 == 0) || (iVar1 = FUN_0042dce0(lVar2,param_1), iVar1 != 0)) {
      return lVar2;
    }
    FUN_0042dac0(lVar2);
  }
  return 0;
}


