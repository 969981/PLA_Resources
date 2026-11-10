/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3eb0; name: FUN_004e3eb0
 */


uint FUN_004e3eb0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
  if ((param_3 >> 0xb & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      iVar2 = **(int **)(param_1 + 2);
      bVar3 = 0x303 < iVar2 && iVar2 != 0x10000;
      goto joined_r0x004e3ef8;
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((param_2 >> 2 & 1) != 0) && ((uVar1 >> 3 & 1) != 0)) {
    return 0;
  }
joined_r0x004e3ef8:
  if ((((((param_2 >> 3 & 1) != 0) || (*param_1 != 0x300)) &&
       (((param_2 >> 4 & 1) == 0 || (!bVar3)))) &&
      ((((param_3 >> 7 & 1) != 0 || ((param_2 >> 5 & 1) == 0)) || (bVar3)))) &&
     ((((param_2 >> 5 & 1) == 0 || (bVar3)) || (param_1[0xe] == 0)))) {
    return (param_2 >> 6 ^ 0xffffffff) & 1 | (uint)(param_1[0x32] == 0);
  }
  return 0;
}


