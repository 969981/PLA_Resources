/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841680; name: FUN_00841680
 */


void FUN_00841680(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  lVar1 = FUN_00847424();
  if (((lVar1 == 0) || (*(long *)(param_2 + 0x70) == 0)) ||
     (lVar1 = FUN_00847388(param_2), lVar1 == 0)) {
    local_38[0] = 0x10408;
  }
  else {
    uVar2 = FUN_0084bbb0(*(undefined8 *)(param_2 + 0x70));
    if ((uVar2 & 1) == 0) {
      local_38[0] = 0x2c27;
    }
    else {
      uVar2 = FUN_0084e640(*(undefined8 *)(param_2 + 0x70),param_3);
      if ((uVar2 & 1) == 0) {
        local_38[0] = 0x4c0d;
      }
      else {
        local_38[0] = 0;
      }
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


