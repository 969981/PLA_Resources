/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff094; name: FUN_007ff094
 */


void FUN_007ff094(undefined8 *param_1,void *param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_3 <= *(uint *)(param_1 + 1)) {
    uVar1 = param_3;
  }
  memcpy((void *)*param_1,param_2,(ulong)uVar1);
  *(uint *)((long)param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  return;
}


