/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4a08; name: FUN_031f4a08
 */


void FUN_031f4a08(undefined8 param_1,undefined8 param_2,int *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int local_44;
  
  bVar5 = (param_4 & 1) == 0;
  piVar2 = param_3 + 2;
  if (bVar5) {
    piVar2 = param_3;
  }
  iVar3 = *piVar2;
  piVar2 = param_3 + 3;
  if (bVar5) {
    piVar2 = param_3 + 1;
  }
  iVar4 = *piVar2;
  iVar6 = 1;
  do {
    FUN_031f4aa0(param_1,param_2,param_3,&local_44);
    if (iVar4 <= iVar6) {
      return;
    }
    iVar1 = iVar6 + 1;
    bVar5 = iVar6 < iVar3;
    iVar6 = iVar1;
  } while ((bVar5) || (local_44 == 0));
  return;
}


