/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef97b0; name: FUN_02ef97b0
 */


long FUN_02ef97b0(int param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(&DAT_03a9f3d0 + (long)param_1 * 4);
  *param_2 = iVar1;
  lVar2 = (&DAT_0440aae0)[param_1];
  if ((lVar2 == 0) &&
     (lVar2 = FUN_02f59e30(0,(ulong)(uint)((param_1 + 2) * (param_1 + 2) * iVar1) << 2), lVar2 != 0)
     ) {
    FUN_02ef9610(param_1 + 1,lVar2,(&PTR_DAT_042ab730)[param_1],*param_2);
    (&DAT_0440aae0)[param_1] = lVar2;
  }
  return lVar2;
}


