/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f00ac; name: FUN_012f00ac
 */


void FUN_012f00ac(long param_1)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar7 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
    piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
    if ((((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 != 0)) &&
        (puVar7 = (uint *)((long)piVar1 + uVar8), puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7),
        puVar7 != (uint *)0x0)) && (uVar2 = *puVar7, (ulong)uVar2 != 0)) {
      lVar10 = 0;
      do {
        uVar8 = (ulong)*(uint *)((long)puVar7 + lVar10 + 4);
        lVar4 = lVar10 + (uVar8 - (long)*(int *)((long)puVar7 + lVar10 + uVar8 + 4));
        uVar3 = *(ushort *)((long)puVar7 + lVar4 + 4);
        if (uVar3 < 5) {
          uVar5 = 0;
LAB_012f0154:
          uVar6 = 0;
        }
        else {
          uVar9 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 8);
          if (uVar9 != 0) {
            uVar5 = *(undefined4 *)((long)puVar7 + lVar10 + uVar8 + uVar9 + 4);
            if (6 < uVar3) goto LAB_012f014c;
            goto LAB_012f0154;
          }
          uVar5 = 0;
          if (uVar3 < 7) goto LAB_012f0154;
LAB_012f014c:
          uVar9 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 10);
          if (uVar9 == 0) goto LAB_012f0154;
          uVar6 = *(undefined4 *)((long)puVar7 + lVar10 + uVar8 + uVar9 + 4);
        }
        FUN_012f01b4(uVar5,uVar6);
        lVar10 = lVar10 + 4;
      } while ((ulong)uVar2 * 4 != lVar10);
    }
  }
  return;
}


