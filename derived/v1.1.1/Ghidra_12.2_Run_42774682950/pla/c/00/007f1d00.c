/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1d00; name: FUN_007f1d00
 */


void FUN_007f1d00(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_2 + 8) == 0) {
    local_40[0] = 0x2c09;
  }
  else if (((param_3 == 0) || (param_4 == (int *)0x0)) || (iVar1 = *param_4, iVar1 == 0)) {
    local_40[0] = 0x10407;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_2 + 0x18) = param_3;
    *(int *)(param_2 + 0x20) = iVar1;
    uVar2 = FUN_00213030(param_2,2);
    if (uVar2 < 2) {
      *param_4 = *(int *)(param_2 + 0x28) - (int)uVar3;
      local_40[0] = 0;
    }
    else if (uVar2 == 0xfffffffd) {
      local_40[0] = 0x2c03;
    }
    else {
      local_40[0] = 0xc0b;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


