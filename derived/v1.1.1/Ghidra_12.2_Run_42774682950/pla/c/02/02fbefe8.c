/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbefe8; name: FUN_02fbefe8
 */


bool FUN_02fbefe8(long param_1,ulong param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = param_2 >> 1 & 0x7fffffff;
  if ((param_2 & 1) == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x50) + 0x78))(*(long **)(param_1 + 0x50),uVar5);
    uVar4 = (uint)(((uVar2 ^ 0xffffffff) & 7) == 0 || (uVar2 & 1) == 0);
    uVar2 = uVar4 ^ 1;
  }
  else {
    uVar2 = 0;
    uVar4 = 1;
  }
  iVar1 = (int)uVar5 + uVar4;
  *param_3 = uVar2 | iVar1 * 2;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x60))();
  return iVar1 < iVar3;
}


