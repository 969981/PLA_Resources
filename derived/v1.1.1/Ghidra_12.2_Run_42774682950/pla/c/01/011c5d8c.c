/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c5d8c; name: FUN_011c5d8c
 */


void FUN_011c5d8c(long param_1)

{
  undefined1 local_18 [4];
  byte local_14 [4];
  
  if (*(code **)(param_1 + 0x8c0) != (code *)0x0) {
    local_14[0] = *(byte *)(param_1 + 0x820);
    if (*(int *)(param_1 + (ulong)local_14[0] * 0x2c + 0x5d4) == 1) {
      local_18[0] = 0;
    }
    else {
      local_18[0] = (undefined1)
                    *(undefined4 *)(&DAT_03a7996c + (ulong)*(byte *)(param_1 + 0x821) * 4);
    }
    (**(code **)(param_1 + 0x8c0))(param_1 + 0x8e0,local_14,local_18);
  }
  return;
}


