/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853988; name: FUN_00853988
 */


void FUN_00853988(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((((*(long *)(param_2 + 0x70) == 0) || (lVar1 = FUN_00847388(), lVar1 == 0)) ||
      ((*(uint *)(param_2 + 0x78) < 0xb &&
       ((1 << (ulong)(*(uint *)(param_2 + 0x78) & 0x1f) & 0x736U) != 0)))) ||
     (uVar2 = FUN_0084bbb0(*(undefined8 *)(param_2 + 0x70)), (uVar2 & 1) == 0)) {
    local_30[0] = 0x10408;
  }
  else {
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


