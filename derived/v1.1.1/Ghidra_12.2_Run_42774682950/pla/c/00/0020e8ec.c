/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020e8ec; name: FUN_0020e8ec
 */


void FUN_0020e8ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0xb8);
  bVar1 = uVar3 <= (ulong)(param_4 - param_3);
  if (bVar1) {
    param_4 = param_3 + uVar3;
  }
  lVar2 = FUN_00210290(param_1 + 0x40,param_2,param_3,param_4 - param_3,bVar1);
  if (-1 < lVar2) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) - lVar2;
  }
  return;
}


