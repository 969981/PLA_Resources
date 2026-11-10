/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ed910; name: FUN_013ed910
 */


bool FUN_013ed910(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(char *)(*(long *)(param_1 + 0xa0) + 8) == '\0') {
    uVar2 = FUN_013e19d0(0);
    uVar3 = FUN_013e19d0(1);
    uVar4 = FUN_013e19d0(2);
    uVar5 = FUN_013e19d0(3);
    uVar6 = FUN_013e19d0(4);
    uVar7 = FUN_013e19d0(5);
    uVar8 = FUN_013e19d0(6);
    uVar9 = FUN_013e19d0(7);
    bVar1 = 1 < (uVar3 & 1) + (uVar2 & 1) + (uVar4 & 1) + (uVar5 & 1) + (uVar6 & 1) + (uVar7 & 1) +
                (uVar8 & 1) + (uVar9 & 1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


