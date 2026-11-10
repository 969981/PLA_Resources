/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0e44; name: FUN_007f0e44
 */


void FUN_007f0e44(undefined8 param_1,long *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((param_3 == (void *)0x0) || (uVar1 = (**(code **)(*param_2 + 0x20))(), param_4 < uVar1)) {
    local_40[0] = 0x10407;
  }
  else {
    memcpy(param_2 + 1,param_3,0x10);
    *(ushort *)(param_2 + 3) =
         *(ushort *)((long)param_3 + 0x10) >> 8 | *(ushort *)((long)param_3 + 0x10) << 8;
    local_40[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


