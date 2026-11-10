/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00244288; name: FUN_00244288
 */


undefined8 FUN_00244288(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x002442c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0);
  return uVar2;
}


