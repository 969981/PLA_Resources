/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a5e0; name: FUN_0082a5e0
 */


void FUN_0082a5e0(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_40[0] = 0x10407;
  }
  else {
    piVar1 = *(int **)(param_2 + 0xa8);
    if ((*piVar1 != 1) && (*(char *)(param_2 + 0x470) != '\0')) {
      if (*(int *)(param_2 + 0xb0) != 0) {
        local_40[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
        FUN_007ee660(param_2 + 0x120,local_40);
        FUN_007e5bd8(*(undefined8 *)(param_2 + 0xa8));
        piVar1 = *(int **)(param_2 + 0xa8);
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      FUN_0082b840(local_40,*(undefined8 *)(param_2 + 0x50),piVar1,param_3);
      if (local_40[0] == 0) {
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x50),0);
        *(undefined4 *)(param_2 + 0xb0) = 4;
      }
      goto LAB_0082a6bc;
    }
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
LAB_0082a6bc:
  FUN_007ee578(param_1,local_40);
  return;
}


