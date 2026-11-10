/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002042f8; name: FUN_002042f8
 */


void FUN_002042f8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00203a1c(0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00204344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)PTR_PTR_04372758 + 0x78))(param_1,param_2);
    return;
  }
  return;
}


