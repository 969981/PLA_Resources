/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a6dc; name: FUN_0082a6dc
 */


void FUN_0082a6dc(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined4 local_58 [4];
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  int local_30 [4];
  
  piVar1 = *(int **)(param_2 + 0xa8);
  if (*piVar1 == 1) {
    local_30[0] = 0x10408;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_58);
  }
  else {
    if (*(int *)(param_2 + 0xb0) != 0) {
      local_30[0] = 0;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_58);
      FUN_007ee660(param_2 + 0x120,local_30);
      FUN_007e5bd8(*(undefined8 *)(param_2 + 0xa8));
      piVar1 = *(int **)(param_2 + 0xa8);
      *(undefined4 *)(param_2 + 0xb0) = 0;
    }
    FUN_0082c5a4(local_30,*(undefined8 *)(param_2 + 0x38),piVar1);
    if (local_30[0] == 0) {
      FUN_007e5e70(*(undefined8 *)(param_2 + 0x38),0);
      *(undefined4 *)(param_2 + 0xb0) = 5;
    }
    local_58[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    FUN_007ee578(auStack_48,local_58);
    *(undefined4 *)(param_2 + 0x118) = 1;
  }
  FUN_007ee578(param_1,local_30);
  return;
}


