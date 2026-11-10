/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03384bac; name: FUN_03384bac
 */


void FUN_03384bac(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  puVar2 = PTR_PTR_0434a080;
  uVar6 = *(uint *)(param_1 + 0x134);
  iVar5 = *(int *)(param_1 + 0x130);
  iVar1 = iVar5 + 1;
  if (iVar5 < (int)(uVar6 & 0x3fffffff)) {
    lVar3 = *(long *)(param_1 + 0x128);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    if (0x3ffffffe < iVar5) {
      FUN_032bd0a8(iVar1);
      uVar6 = *(uint *)(param_1 + 0x134);
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    if ((int)uVar6 < iVar1) {
      uVar6 = iVar5 + 1;
    }
    lVar3 = FUN_032bd1d4(puVar2,uVar6,4,uVar4);
    iVar5 = *(int *)(param_1 + 0x130);
    *(long *)(param_1 + 0x128) = lVar3;
  }
  *(undefined4 *)(lVar3 + (long)iVar5 * 4) = param_2;
  *(int *)(param_1 + 0x130) = iVar1;
  return;
}


