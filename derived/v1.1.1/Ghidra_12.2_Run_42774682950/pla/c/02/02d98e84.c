/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d98e84; name: FUN_02d98e84
 */


void FUN_02d98e84(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  long lVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    local_38[0] = 0x10408;
  }
  else if ((param_3 == (void *)0x0) || (0xf < param_4 - 1)) {
    local_38[0] = 0x10407;
  }
  else {
    *(undefined8 *)(lVar1 + 0x2d) = 0;
    *(undefined8 *)(lVar1 + 0x25) = 0;
    memcpy((void *)(*(long *)(param_2 + 8) + 0x25),param_3,(ulong)param_4);
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


