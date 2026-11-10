/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01933a2c; name: FUN_01933a2c
 */


long FUN_01933a2c(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = *(uint **)(*(long *)(param_2 + 8) + 0x250);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  uVar2 = *puVar4;
  if ((ulong)uVar2 != 0) {
    lVar7 = 0;
    do {
      uVar5 = (ulong)*(uint *)((long)puVar4 + lVar7 + 4);
      lVar3 = lVar7 + (uVar5 - (long)*(int *)((long)puVar4 + lVar7 + uVar5 + 4));
      if (((0x18 < *(ushort *)((long)puVar4 + lVar3 + 4)) &&
          (uVar6 = (ulong)*(ushort *)((long)puVar4 + lVar3 + 0x1c), uVar6 != 0)) &&
         (*(char *)((long)puVar4 + lVar7 + uVar5 + uVar6 + 4) != '\0')) {
        uVar6 = (ulong)*(ushort *)((long)puVar4 + lVar3 + 0xc);
        if (uVar6 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = uVar5 + uVar6;
          lVar3 = (long)puVar4 +
                  lVar7 + lVar3 + (ulong)*(uint *)((long)puVar4 + lVar7 + lVar3 + 4) + 4;
        }
        lVar3 = FUN_01931870(lVar3,param_1);
        if (lVar3 != 0) {
          return (long)puVar4 + lVar7 + uVar5 + 4;
        }
      }
      lVar7 = lVar7 + 4;
    } while ((ulong)uVar2 * 4 != lVar7);
  }
  return 0;
}


