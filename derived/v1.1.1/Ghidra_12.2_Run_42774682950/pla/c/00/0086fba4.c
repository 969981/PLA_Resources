/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086fba4; name: FUN_0086fba4
 */


void FUN_0086fba4(undefined8 param_1,long param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (uint *)0x0) || (param_4 < 0x10)) {
    local_30[0] = 0x10407;
  }
  else {
    uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
    *(uint *)(param_2 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_3[3] & 0xff00ff00) >> 8 | (param_3[3] & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


