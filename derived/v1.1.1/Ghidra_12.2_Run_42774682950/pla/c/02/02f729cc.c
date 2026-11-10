/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f729cc; name: FUN_02f729cc
 */


void FUN_02f729cc(ulong *param_1,long param_2,long param_3,long param_4,undefined2 param_5)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_032cf5b0(0x30);
  *plVar1 = (long)(PTR_DAT_04388248 + 0x10);
  plVar1[1] = *param_1 & 0xfffffffffffffffc;
  plVar1[2] = param_2;
  *param_1 = *param_1 & 3 | (ulong)plVar1;
  *(undefined2 *)(plVar1 + 5) = param_5;
  plVar1[3] = param_3;
  plVar1[4] = param_4;
  *plVar1 = (long)&PTR_LAB_042b0038;
  return;
}


