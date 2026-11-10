/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b200; name: FUN_0082b200
 */


void FUN_0082b200(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == 0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(long **)(param_2 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0082b22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x18) + 0xd0))(param_1);
      return;
    }
    local_28[0] = 0xc0b;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


