/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422bd0; name: FUN_00422bd0
 */


undefined8 FUN_00422bd0(long *param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_3);
  if (sVar1 >> 0x1f == 0) {
                    /* WARNING: Could not recover jumptable at 0x00422c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,sVar1,param_3);
    return uVar2;
  }
  return 0xffffffff;
}


