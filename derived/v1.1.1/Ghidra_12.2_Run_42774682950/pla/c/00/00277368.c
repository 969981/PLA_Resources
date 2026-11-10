/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00277368; name: FUN_00277368
 */


void FUN_00277368(undefined2 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372f00;
  if (*PTR_DAT_04372ef8 == '\0') {
    *param_1 = (short)param_2;
    *(int *)(param_1 + 2) = (int)param_2;
    param_1[1] = (short)((ulong)param_2 >> 0x10);
    return;
  }
  *param_1 = (short)*(undefined4 *)PTR_DAT_04372f00;
  param_1[1] = *(undefined2 *)(puVar1 + 2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)puVar1;
  return;
}


