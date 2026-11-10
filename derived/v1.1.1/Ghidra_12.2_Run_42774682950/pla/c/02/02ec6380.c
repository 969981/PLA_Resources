/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6380; name: FUN_02ec6380
 */


bool FUN_02ec6380(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar2 + (uVar2 >> 1);
  if (uVar2 == 0) {
    iVar1 = 1;
  }
  lVar3 = FUN_02f59e50(0,*param_1,(ulong)(iVar1 + uVar2) << 3);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    *(uint *)((long)param_1 + 0xc) = iVar1 + uVar2;
  }
  return lVar3 != 0;
}


