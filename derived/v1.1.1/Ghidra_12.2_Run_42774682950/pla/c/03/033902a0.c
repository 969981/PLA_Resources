/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033902a0; name: FUN_033902a0
 */


void FUN_033902a0(long *param_1,int param_2,int *param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (*param_1 - param_1[2]) + param_1[4];
  iVar3 = 0;
  if ((long)param_2 != 0) {
    iVar3 = (int)(uVar1 / (ulong)(long)param_2);
  }
  iVar3 = (int)uVar1 - iVar3 * param_2;
  iVar2 = param_2 - iVar3;
  if (iVar3 != 0 && iVar2 != 0) {
    do {
      iVar3 = iVar2;
      if (0x1f < iVar2) {
        iVar3 = 0x20;
      }
      FUN_032afb80(param_1,param_4,(long)iVar3);
      iVar2 = iVar2 - iVar3;
    } while (iVar2 != 0);
  }
  iVar3 = *param_3;
  if (*param_3 <= param_2) {
    iVar3 = param_2;
  }
  *param_3 = iVar3;
  return;
}


