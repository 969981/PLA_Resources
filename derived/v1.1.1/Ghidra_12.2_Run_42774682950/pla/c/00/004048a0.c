/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004048a0; name: FUN_004048a0
 */


undefined8 FUN_004048a0(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if ((int)param_2 <= (int)param_3) {
    param_3 = param_2;
  }
  iVar2 = param_3 + 1;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_004044c0(param_1,&DAT_038bdc00);
  } while (iVar1 == 1);
  return 0;
}


