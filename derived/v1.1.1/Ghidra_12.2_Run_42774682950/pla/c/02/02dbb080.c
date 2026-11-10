/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dbb080; name: FUN_02dbb080
 */


int FUN_02dbb080(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ushort *puVar7;
  long lVar8;
  uint *puVar9;
  
  puVar7 = (ushort *)((long)param_2 - (long)*param_2);
  if (((*puVar7 < 0xb) || ((ulong)puVar7[5] == 0)) ||
     (puVar9 = (uint *)((long)param_2 + (ulong)puVar7[5]),
     piVar1 = (int *)((long)puVar9 + (ulong)*puVar9), piVar1 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 == 0)) {
      lVar8 = 0;
    }
    else {
      puVar9 = (uint *)((long)piVar1 + uVar5);
      lVar8 = (long)puVar9 + (ulong)*puVar9;
    }
    iVar2 = FUN_02dbb180(param_1,lVar8);
  }
  puVar9 = (uint *)((long)((long)param_2 + (ulong)puVar7[7]) +
                   (ulong)*(uint *)((long)param_2 + (ulong)puVar7[7]));
  if (*puVar9 == 0) {
    iVar4 = 0;
  }
  else {
    lVar8 = (ulong)*puVar9 << 2;
    uVar6 = 0;
    do {
      puVar9 = puVar9 + 1;
      uVar3 = FUN_02dbb080(param_1,(long)puVar9 + (ulong)*puVar9);
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      lVar8 = lVar8 + -4;
      uVar6 = uVar3;
    } while (lVar8 != 0);
    iVar4 = uVar3 << 1;
  }
  return iVar4 + iVar2;
}


