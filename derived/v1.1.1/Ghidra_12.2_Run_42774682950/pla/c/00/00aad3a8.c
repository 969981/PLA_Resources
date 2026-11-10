/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad3a8; name: FUN_00aad3a8
 */


undefined8 FUN_00aad3a8(long *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00aad3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x78))();
    return uVar1;
  }
  if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00aad3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x80))();
    return uVar1;
  }
  return 0x1f;
}


