/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5d460; name: FUN_00d5d460
 */


int FUN_00d5d460(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = *(int *)(param_1 + 0x6d8);
  lVar8 = (long)iVar1;
  if (iVar1 == 2) {
    iVar1 = 0;
  }
  lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  uVar2 = *(uint *)(param_1 + lVar8 * 0x60 + 0x640);
  uVar3 = *(int *)(*(long *)(lVar7 + 0x8b0) + 0x14) +
          uVar2 * *(int *)(*(long *)(lVar7 + 0x8b0) + 0x10);
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = uVar3 / uVar2;
  }
  uVar3 = uVar3 - uVar6 * uVar2;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = (int)(uint)*(ushort *)(param_1 + 0x6ec) / (int)uVar2;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x6ec) - uVar5 * uVar2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if (uVar5 <= uVar6) {
    uVar6 = uVar5;
  }
  return uVar3 + uVar6 * uVar2;
}


