/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f017cc; name: FUN_02f017cc
 */


bool FUN_02f017cc(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar2 = FUN_02ec2e50(param_1,*param_1,(ulong)*(uint *)(param_1 + 1) << 4,(ulong)uVar1 << 4);
  if (lVar2 != 0) {
    *param_1 = lVar2;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar2 != 0;
}


