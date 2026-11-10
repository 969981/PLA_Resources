/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085aed8; name: FUN_0085aed8
 */


void FUN_0085aed8(undefined8 param_1,long param_2)

{
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_2 + 0x13a8) == 1) {
    local_40[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  }
  else {
    if (*(int *)(param_2 + 0x13d8) != 0) {
      FUN_007e5bd8(param_2 + 0x13a8);
      *(undefined4 *)(param_2 + 0x13d8) = 0;
    }
    FUN_0085af84(local_40,param_2,param_2 + 0x13a8);
    if (local_40[0] == 0) {
      *(undefined4 *)(param_2 + 0x13d8) = 2;
    }
  }
  FUN_007ee578(param_1,local_40);
  return;
}


