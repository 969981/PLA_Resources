/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e0de8; name: FUN_018e0de8
 */


void FUN_018e0de8(long param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  param_1 = param_1 + (long)param_2 * 0x10;
  *(undefined1 *)(param_1 + 0x808) = 1;
  *(undefined4 *)(param_1 + 0x80c) = 0;
  iVar1 = FUN_018e0e40(param_5);
  *(int *)(param_1 + 0x810) = iVar1 + param_3;
  *(undefined4 *)(param_1 + 0x814) = param_4;
  return;
}


