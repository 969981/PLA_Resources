/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f1614; name: FUN_030f1614
 */


void FUN_030f1614(ulong *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_032cf5b0(0x28);
  *plVar1 = (long)(PTR_DAT_04388248 + 0x10);
  plVar1[1] = *param_1 & 0xfffffffffffffffc;
  plVar1[2] = param_2;
  *param_1 = *param_1 & 3 | (ulong)plVar1;
  *plVar1 = (long)&PTR_LAB_042b5330;
  plVar1[3] = param_3;
  plVar1[4] = param_4;
  return;
}


