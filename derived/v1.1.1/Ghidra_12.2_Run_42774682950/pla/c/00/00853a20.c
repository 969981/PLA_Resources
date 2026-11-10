/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853a20; name: FUN_00853a20
 */


void FUN_00853a20(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(int *)(param_2 + 0x78) == 4) {
    uVar1 = 9;
  }
  else {
    if (*(int *)(param_2 + 0x78) != 1) {
      local_30[0] = 0x10408;
      goto LAB_00853a70;
    }
    uVar1 = 8;
  }
  *(undefined4 *)(param_2 + 0x78) = uVar1;
  local_30[0] = 0;
LAB_00853a70:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


