/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008219e0; name: FUN_008219e0
 */


int FUN_008219e0(long param_1,ulong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return -1;
  }
  iVar1 = nn::util::VSNPrintf();
  if ((iVar1 < 0) || (param_2 <= (ulong)(long)iVar1)) {
    *(undefined *)(param_2 + param_1 + -1) = *PTR_DAT_04377b60;
  }
  if (param_2 <= (ulong)(long)iVar1) {
    iVar1 = (int)param_2 + -1;
  }
  return iVar1;
}


