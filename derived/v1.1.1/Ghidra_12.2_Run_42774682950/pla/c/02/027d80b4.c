/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d80b4; name: FUN_027d80b4
 */


void FUN_027d80b4(undefined4 *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = FUN_027d816c(*param_2);
  if ((ulong)param_3[1] < (ulong)(param_3[2] + lVar3)) {
    *param_1 = 0xd;
    return;
  }
  iVar2 = *param_2;
  iVar4 = -0x7b;
  if (iVar2 != (short)iVar2) {
    iVar4 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar2 != (char)iVar2) {
    iVar1 = iVar4;
  }
  if (iVar2 + 0x40U < 0xc0) {
    iVar1 = iVar2;
  }
  *(char *)(*param_3 + param_3[2]) = (char)iVar1;
  param_3[2] = param_3[2] + 1;
  FUN_027d8194(param_1,iVar1,*param_2,param_3);
  return;
}


