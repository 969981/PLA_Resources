/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00815588; name: FUN_00815588
 */


void FUN_00815588(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (void *)0x0) || (0x200 < param_4)) || (param_4 < 0x7c)) {
    local_48[0] = 0x10407;
  }
  else {
    memset((void *)(param_2 + 0xb8),0,0x200);
    memcpy((void *)(param_2 + 0xb8),param_3,(ulong)param_4);
    *(uint *)(param_2 + 0x28) = param_4;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


