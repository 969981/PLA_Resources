/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020bdd0; name: FUN_0020bdd0
 */


void FUN_0020bdd0(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_2 + 0x100;
  if (0x3fff < uVar1) {
    uVar1 = 0x4000;
  }
  lVar3 = FUN_0020b8a8(param_1,param_2,uVar1);
  if (-0x385 < (int)lVar3) {
    lVar4 = *param_2;
    iVar2 = FUN_0020d6e8(param_1 + 0x158,param_2,lVar3 - lVar4,0);
    if (iVar2 == 0) {
      param_2[2] = lVar3 - lVar4;
    }
  }
  return;
}


