/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1e19c; name: FUN_00b1e19c
 */


int FUN_00b1e19c(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  int iVar7;
  
  if ((param_2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x70);
  }
  else {
    lVar4 = *(long *)(param_1 + 0xa0);
  }
  if ((lVar4 != 0) &&
     (piVar1 = (int *)((long)*(uint **)(lVar4 + 0x250) + (ulong)**(uint **)(lVar4 + 0x250)),
     piVar1 != (int *)0x0)) {
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
      puVar5 = (uint *)0x0;
      uVar2 = uRam0000000000000000;
    }
    else {
      puVar5 = (uint *)((long)piVar1 + uVar6);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      uVar2 = *puVar5;
    }
    if (uVar2 != 0) {
      uVar6 = (ulong)uVar2;
      iVar7 = 0;
      do {
        puVar5 = puVar5 + 1;
        iVar3 = FUN_00b1dcc0((long)puVar5 + (ulong)*puVar5);
        if (iVar3 == param_3) {
          iVar7 = iVar7 + 1;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return iVar7;
    }
  }
  return 0;
}


