/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080b3dc; name: FUN_0080b3dc
 */


void FUN_0080b3dc(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if ((param_3 == (void *)0x0) || (0x40 < param_4)) {
    local_48[0] = 0x10407;
  }
  else {
    memset((void *)(param_2 + 0x12e0),0,0x40);
    memcpy((void *)(param_2 + 0x12e0),param_3,(ulong)param_4);
    *(char *)(param_2 + 0x1320) = (char)param_4;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


