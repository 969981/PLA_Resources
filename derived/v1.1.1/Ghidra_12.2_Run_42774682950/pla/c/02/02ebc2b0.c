/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebc2b0; name: FUN_02ebc2b0
 */


bool FUN_02ebc2b0(int *param_1,int *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_02ebc314(param_1 + 4,param_2 + 4);
  if (((uVar2 & 1) == 0) && ((param_1[2] == 0 || (param_2[2] != 0)))) {
    if (*param_1 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *param_2 == 0;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


