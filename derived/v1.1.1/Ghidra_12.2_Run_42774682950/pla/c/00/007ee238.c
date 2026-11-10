/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ee238; name: FUN_007ee238
 */


void FUN_007ee238(int *param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_48[0] = 0x10407;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x40);
    if (param_4 <= uVar1) {
      if ((ulong)uVar1 < *(long *)(param_2 + 0x18) + (ulong)param_4 + 6) {
        uVar1 = (uVar1 - (int)*(long *)(param_2 + 0x18)) - 6;
        FUN_007ee238(param_1,param_2,param_3,uVar1);
        if (*param_1 == 0) {
          FUN_007ee238(local_48,param_2,param_3 + (ulong)uVar1,param_4 - uVar1);
          FUN_007ee660(param_1,local_48);
          return;
        }
        return;
      }
      *(long *)(param_2 + 0x20) = param_3;
      *(uint *)(param_2 + 0x28) = param_4;
      iVar2 = FUN_00216d50(param_2 + 0x20,2);
      if (iVar2 == 0) {
        if (*(int *)(param_2 + 0x28) == 0) {
          local_48[0] = 0;
        }
        else {
          local_48[0] = 0x10404;
        }
        goto LAB_007ee304;
      }
    }
    local_48[0] = 0x10404;
  }
LAB_007ee304:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


