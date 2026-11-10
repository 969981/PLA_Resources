/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00878498; name: FUN_00878498
 */


void FUN_00878498(long *param_1,undefined8 *param_2,long param_3)

{
  undefined1 auStack_60 [64];
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = *(long *)(param_3 + 8);
  (**(code **)PTR_DAT_04378630)(auStack_60,*param_2);
  FUN_0087c33c(auStack_60,param_3);
  (**(code **)PTR_DAT_04378638)(*param_1,auStack_60);
  *(byte *)((long)param_1 + 0x111) = *(byte *)((long)param_1 + 0x111) & 0xfe;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}


