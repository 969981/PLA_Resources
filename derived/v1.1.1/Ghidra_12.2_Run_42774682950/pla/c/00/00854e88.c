/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00854e88; name: FUN_00854e88
 */


void FUN_00854e88(undefined8 param_1,long param_2,undefined8 *param_3,char param_4)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined8 *)0x0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(char *)(param_2 + 0xc0) != '\0') {
      if ((param_4 == -1) || (param_4 == -3)) {
        *param_3 = 0;
        local_28[0] = 0;
        goto LAB_00854efc;
      }
      if (*(long **)(param_2 + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00854eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x60) + 0x88))(param_1);
        return;
      }
    }
    local_28[0] = 0x10408;
  }
LAB_00854efc:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


