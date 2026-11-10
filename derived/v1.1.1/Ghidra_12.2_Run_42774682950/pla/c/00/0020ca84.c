/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020ca84; name: FUN_0020ca84
 */


int FUN_0020ca84(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar4 = 0;
  if ((*(byte *)((long)param_2 + 0xd) & 0x20) != 0) {
    lVar4 = 5;
  }
  lVar1 = *(long *)(lVar6 + 0x18) + lVar4;
  *(long *)(lVar6 + 0x18) = lVar1;
  *(long *)(lVar6 + 0x20) = lVar1;
  iVar3 = FUN_0020db9c(param_3,param_1,param_2[5],param_2[6]);
  iVar2 = -0x20b;
  if (iVar3 != -0x1f6) {
    iVar2 = iVar3;
  }
  lVar4 = *(long *)(lVar6 + 0x18) - lVar4;
  *(long *)(lVar6 + 0x18) = lVar4;
  if (iVar2 == 0) {
    if ((*(byte *)((long)param_2 + 0xd) >> 5 & 1) != 0) {
      FUN_0020cb34(lVar4,param_2 + 3);
    }
    param_2[2] = 0;
    uVar5 = FUN_0020c47c(param_1);
    *param_2 = uVar5;
    FUN_0020cb7c(param_1,param_2);
  }
  return iVar2;
}


