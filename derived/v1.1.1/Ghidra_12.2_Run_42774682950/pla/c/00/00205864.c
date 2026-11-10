/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205864; name: FUN_00205864
 */


undefined8 FUN_00205864(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  if (0x7fffffff - iVar2 < *param_1) {
    return 0xfffffdf4;
  }
  *param_1 = *param_1 + iVar2;
  iVar3 = *param_3;
  iVar1 = iVar3;
  if (iVar2 <= iVar3) {
    iVar1 = iVar2;
  }
  *param_3 = iVar3 - iVar1;
  *param_2 = *param_2 + iVar1;
  *param_4 = *param_4 - iVar1;
  return 0;
}


