/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8d1bc; name: FUN_02e8d1bc
 */


void FUN_02e8d1bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_02e8e374(param_2,param_1 + 0x68);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (((puVar1 == (undefined8 *)0x0) || (*(int *)(param_1 + 100) != 0)) ||
     (*(int *)(param_1 + 0x8c) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e8d214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_1);
  return;
}


