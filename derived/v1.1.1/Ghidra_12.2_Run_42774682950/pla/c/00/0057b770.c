/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057b770; name: FUN_0057b770
 */


bool FUN_0057b770(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = strcmp((char *)*param_1,"invalid");
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


