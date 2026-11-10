/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e227fc; name: FUN_02e227fc
 */


void FUN_02e227fc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  param_1[1] = uVar1;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  DAT_044094f8 = param_1;
                    /* WARNING: Could not recover jumptable at 0x02e22868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x48))(param_3,3,0,0x84,&LAB_02e2286c,0x90,0);
  return;
}


