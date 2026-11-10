/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c5c0; name: FUN_0315c5c0
 */


void FUN_0315c5c0(void *param_1,undefined8 param_2,void *param_3,long param_4,uint param_5,
                 uint param_6)

{
  ulong uVar1;
  
  uVar1 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
  memcpy(param_1,param_3,uVar1 * (long)(int)param_6);
  memcpy((void *)((long)param_1 + (long)(int)(param_6 * param_5) * 4),
         (void *)((long)param_3 + (long)(int)((param_6 + 1) * param_5) * 4),
         uVar1 * (long)(int)((int)((ulong)(param_4 - (long)param_3) >> 2) + ~param_6));
  return;
}


