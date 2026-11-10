/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8130; name: FUN_007e8130
 */


int FUN_007e8130(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1 - param_1[1];
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    uVar1 = (iVar4 + (param_3 & 0xffff) * -2) - 0x1a;
    uVar3 = FUN_007e6cb0(1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    iVar4 = iVar4 + (uVar2 * uVar3 - uVar1);
  }
  return iVar4;
}


