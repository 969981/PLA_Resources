/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020cfdc; name: FUN_0020cfdc
 */


int FUN_0020cfdc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar5 + 0x18) + 4;
  *(long *)(lVar5 + 0x18) = lVar3;
  *(long *)(lVar5 + 0x20) = lVar3;
  iVar2 = FUN_0020db9c(param_3,param_1,param_2[3],param_2[4]);
  iVar1 = -0x20b;
  if (iVar2 != -0x1f6) {
    iVar1 = iVar2;
  }
  lVar3 = *(long *)(lVar5 + 0x18) + -4;
  *(long *)(lVar5 + 0x18) = lVar3;
  if (iVar1 == 0) {
    FUN_00205718(lVar3,*(undefined4 *)(param_2 + 5));
    param_2[2] = 0;
    uVar4 = FUN_0020c47c(param_1);
    *param_2 = uVar4;
    FUN_0020cb7c(param_1,param_2);
  }
  return iVar1;
}


