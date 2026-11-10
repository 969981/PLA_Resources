/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00834f04; name: FUN_00834f04
 */


void FUN_00834f04(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = (int *)(param_2 + 0x68);
  if (*piVar1 == 1) {
    local_40[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  }
  else {
    if (*(int *)(param_2 + 0x98) != 0) {
      FUN_007e5bd8(piVar1);
      *(undefined4 *)(param_2 + 0x98) = 0;
    }
    FUN_00834dd0(local_40,param_2,piVar1);
    if (local_40[0] == 0) {
      *(undefined4 *)(param_2 + 0x98) = 4;
    }
  }
  FUN_007ee578(param_1,local_40);
  return;
}


