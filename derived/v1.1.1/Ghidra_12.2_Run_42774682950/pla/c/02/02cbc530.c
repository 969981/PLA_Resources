/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbc530; name: FUN_02cbc530
 */


void FUN_02cbc530(undefined8 param_1,long *param_2,uint *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (uint *)0x0) || (param_4 == (int *)0x0)) ||
     (uVar1 = (**(code **)(*param_2 + 0x40))(), param_5 < uVar1)) {
    local_50[0] = 0x10407;
  }
  else {
    uVar1 = (*(uint *)((long)param_2 + 0x14) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_2 + 0x14) & 0xff00ff) << 8;
    *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(char *)(param_3 + 1) = (char)param_2[3];
    memcpy((void *)((long)param_3 + 5),param_2 + 5,(ulong)*(uint *)((long)param_2 + 0x14));
    *param_4 = ((int)(void *)((long)param_3 + 5) + *(int *)((long)param_2 + 0x14)) - (int)param_3;
    local_50[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  return;
}


