/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f92f0; name: FUN_012f92f0
 */


void FUN_012f92f0(int *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = FUN_012f050c(*(undefined2 *)(param_2 + 4),param_3);
  if (iVar2 == 1) {
    FUN_012f9398(param_1,param_3);
  }
  else {
    FUN_012f0a78(*(undefined2 *)(param_2 + 4),iVar1);
    FUN_012f9398(param_1,param_3 - iVar1);
    FUN_012f9708(param_1,iVar1);
    if (param_3 - iVar1 == 0) {
      iVar2 = 2;
      goto LAB_012f9360;
    }
    if (iVar1 != 0) {
      iVar2 = 3;
      goto LAB_012f9360;
    }
  }
  iVar2 = 1;
LAB_012f9360:
  param_1[0x7b] = iVar2;
  return;
}


