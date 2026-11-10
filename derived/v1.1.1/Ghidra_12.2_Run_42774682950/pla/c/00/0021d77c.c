/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021d77c; name: FUN_0021d77c
 */


void FUN_0021d77c(long param_1,undefined8 param_2,uint *param_3)

{
  long *plVar1;
  byte *pbVar2;
  uint uVar3;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  if (((0 < (int)param_3[0x26]) && (pbVar2 = *(byte **)(param_3 + 0x2c), (*pbVar2 >> 1 & 1) == 0))
     && ((int)param_3[0x27] <= *(int *)(param_1 + 0x8c))) {
    plVar1 = (long *)(*(long *)(pbVar2 + 0x10) + (long)*(int *)(pbVar2 + 0x30) * 0x10);
    lStack_48 = plVar1[1];
    local_50 = *plVar1 + (ulong)*param_3;
    lStack_58 = plVar1[1];
    uVar3 = param_3[2];
    local_60 = *plVar1 + (ulong)param_3[1];
    if (*(char *)((long)param_3 + 0xb9) != '\0') {
      FUN_0021d880(param_1,param_2,param_3 + 4,uVar3 & 0xfffffffe,&local_50,&local_60);
      uVar3 = uVar3 | 1;
      local_50 = (*(long *)(*(long *)(param_3 + 0x2c) + 0x20) + 0x7fU &
                 -*(long *)(*(long *)(param_3 + 0x2c) + 0x20)) + local_50;
    }
    FUN_0021d880(param_1,param_2,param_3 + 4,uVar3,&local_50,&local_60);
  }
  return;
}


