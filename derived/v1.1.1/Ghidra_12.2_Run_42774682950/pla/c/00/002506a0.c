/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002506a0; name: FUN_002506a0
 */


int FUN_002506a0(int *param_1,int param_2,ulong param_3,void *param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar3 = 0;
    param_1 = param_1 + 1;
    do {
      uVar1 = (ulong)(uint)param_1[1];
      if ((*param_1 == param_2 && uVar1 == param_3) &&
         (iVar2 = memcmp(param_1 + 2,param_4,uVar1 * 4), iVar2 == 0)) {
        return iVar3;
      }
      param_1 = param_1 + 2 + uVar1;
      iVar3 = iVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}


