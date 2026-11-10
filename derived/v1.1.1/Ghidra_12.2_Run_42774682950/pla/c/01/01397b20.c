/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01397b20; name: FUN_01397b20
 */


undefined8 FUN_01397b20(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 3;
  }
                    /* WARNING: Could not recover jumptable at 0x01397b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK_01397b50 + (ulong)(byte)(&DAT_03a7b3a7)[*(byte *)(param_2 + 0xf)] * 4))
                    (param_1,3);
  return uVar1;
}


