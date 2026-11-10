/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064cd98; name: FUN_0064cd98
 */


void FUN_0064cd98(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0064cd98(param_1,*param_2);
  FUN_0064cd98(param_1,param_2[1]);
  FUN_006e4b9c(param_2 + 8);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    (**(code **)(*(long *)param_2[7] + 0x18))
              ((long *)param_2[7],param_2[6],param_2[4] & 0xfffffffffffffffe,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0064ce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x48,8);
  return;
}


