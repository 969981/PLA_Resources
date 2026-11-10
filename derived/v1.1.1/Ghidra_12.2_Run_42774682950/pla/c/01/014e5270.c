/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e5270; name: FUN_014e5270
 */


uint FUN_014e5270(int *param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_4c [28];
  
  uVar3 = FUN_02c5be18(*param_2);
  iVar1 = *param_1;
  iVar4 = FUN_02c62bac(*param_2);
  if ((iVar1 == iVar4) &&
     (bVar2 = *(byte *)((long)param_1 + 6), uVar5 = FUN_02c628c4(*param_2), uVar5 == bVar2)) {
    FUN_02c628b0(*param_2,auStack_4c,0xd);
    uVar5 = FUN_02c306b0(auStack_4c,param_1 + 2);
  }
  else {
    uVar5 = 0;
  }
  FUN_02c5bed8(*param_2,uVar3 & 1);
  return uVar5 & 1;
}


