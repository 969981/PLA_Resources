/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db130; name: FUN_032db130
 */


int FUN_032db130(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  short *psVar8;
  undefined8 local_38;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    uVar5 = FUN_032e35d8(param_1);
    if ((((uVar5 & 0x1f) == 8) &&
        (puVar6 = (undefined8 *)FUN_032e20b0(param_1,1), puVar6 != (undefined8 *)0x0)) &&
       (iVar4 = (int)((ulong)*puVar6 >> 8), iVar4 != 0)) {
      FUN_032e1fec(param_1);
      iVar3 = FUN_032e2120();
      return iVar3 * iVar4;
    }
    if (((*(char *)(param_1 + 2) < '\0') &&
        (puVar6 = (undefined8 *)FUN_032e2008(param_1,0x800000), puVar6 != (undefined8 *)0x0)) &&
       ((psVar8 = (short *)*puVar6, psVar8 != (short *)0x0 && ((long)*psVar8 != 0)))) {
      local_38 = *(undefined8 *)(psVar8 + (long)*psVar8 * 4);
      iVar4 = FUN_032e3f38(&local_38);
      iVar3 = FUN_032e2120(local_38);
      return iVar3 + iVar4;
    }
    if ((((*(byte *)(param_1 + 1) >> 6 & 1) != 0) &&
        (plVar7 = (long *)FUN_032e2008(param_1,0x4000), plVar7 != (long *)0x0)) &&
       (((undefined8 *)*plVar7 != (undefined8 *)0x0 &&
        (iVar4 = (int)*(undefined8 *)*plVar7, iVar4 != 0)))) break;
    uVar2 = FUN_032e2598(param_1);
    param_1 = *(long *)(param_1 + 8);
    if ((uVar2 >> 7 & 1) != 0) {
      if (param_1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_032db130(param_1,param_2);
      }
      return ((param_2 + iVar4) - 1U & -param_2) + param_2;
    }
  }
  iVar3 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    iVar3 = FUN_032db130(*(long *)(param_1 + 8),param_2);
  }
  uVar5 = FUN_032e2598(param_1);
  iVar1 = 0;
  if ((uVar5 & 0x80) != 0) {
    iVar1 = param_2;
  }
  return ((param_2 + iVar3) - 1U & -param_2) + iVar4 * param_2 + iVar1;
}


