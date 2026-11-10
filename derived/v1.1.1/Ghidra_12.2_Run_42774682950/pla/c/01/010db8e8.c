/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010db8e8; name: FUN_010db8e8
 */


int FUN_010db8e8(long param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_50 [16];
  
  FUN_02c4fb44(auStack_50);
  uVar5 = FUN_02c4fc60(auStack_50,0xe);
  iVar2 = (int)uVar5;
  uVar3 = FUN_010dac08(uVar5,uVar5 & 0xffffffff);
  if (iVar2 == 0) {
    param_1 = param_1 + 0x68;
  }
  else if (iVar2 == 1) {
    param_1 = param_1 + 0xaf4;
  }
  else {
    if (iVar2 != 2) {
      return param_3;
    }
    param_1 = param_1 + 0xc84;
  }
  if ((param_4 < uVar3) && (*(ushort *)(param_1 + (ulong)param_4 * 4) == param_2)) {
    FUN_02c4fb44(auStack_50,param_2);
    uVar4 = FUN_02c4fc60(auStack_50,0x1b);
    param_1 = param_1 + (ulong)param_4 * 4;
    uVar3 = (uint)*(ushort *)(param_1 + 2) + param_3;
    uVar1 = uVar4;
    if (uVar4 > uVar3 || uVar3 - uVar4 == 0) {
      uVar1 = uVar3;
    }
    param_3 = 0;
    if (uVar4 <= uVar3) {
      param_3 = uVar3 - uVar4;
    }
    *(short *)(param_1 + 2) = (short)uVar1;
  }
  return param_3;
}


