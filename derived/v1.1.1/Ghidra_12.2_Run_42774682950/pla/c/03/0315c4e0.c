/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c4e0; name: FUN_0315c4e0
 */


void FUN_0315c4e0(void *param_1,undefined8 param_2,void *param_3,long param_4,uint param_5)

{
  uint uVar1;
  ulong __n;
  
  __n = -(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3;
  memcpy(param_1,param_3,__n);
  uVar1 = (int)((ulong)(param_4 - (long)param_3) >> 3) + ~param_5;
  memcpy((void *)((long)param_1 + __n),(void *)((long)param_3 + __n + 8),
         -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
  return;
}


