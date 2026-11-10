/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e4478; name: FUN_011e4478
 */


byte FUN_011e4478(ushort *param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
LAB_011e449c:
    bVar1 = 0;
  }
  else {
    if ((*param_2 == 0) || (param_2[1] == 0)) {
      bVar1 = 1;
      goto LAB_011e44a0;
    }
    bVar1 = FUN_02c5072c(*param_1,0xd);
    bVar2 = FUN_02c5072c(*param_2,0xd);
    if (((bVar1 & 1) == 0) || ((bVar2 & 1) == 0)) {
      if (((bVar1 | bVar2) & 1) != 0) goto LAB_011e44a0;
      FUN_02c4fb44(auStack_50,*param_1);
      bVar1 = 1;
      iVar3 = FUN_02c4fc60(auStack_50,1);
      FUN_02c4fc5c(auStack_50);
      FUN_02c4fb44(auStack_50,*param_2);
      iVar4 = FUN_02c4fc60(auStack_50,1);
      FUN_02c4fc5c(auStack_50);
      if (iVar4 < iVar3) goto LAB_011e44a0;
      if (iVar3 != iVar4) goto LAB_011e449c;
    }
    bVar1 = *param_1 < *param_2;
  }
LAB_011e44a0:
  return bVar1 & 1;
}


