/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e64a2c; name: FUN_01e64a2c
 */


void FUN_01e64a2c(long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_38;
  
  puVar4 = *(uint **)(*(long *)(param_1 + 0x1f0) + 0x250);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  uVar2 = *puVar4;
  if ((ulong)uVar2 != 0) {
    lVar7 = 0;
    do {
      uVar5 = (ulong)*(uint *)((long)puVar4 + lVar7 + 4);
      lVar3 = lVar7 + (uVar5 - (long)*(int *)((long)puVar4 + lVar7 + uVar5 + 4));
      if ((*(ushort *)((long)puVar4 + lVar3 + 4) < 5) ||
         (uVar6 = (ulong)*(ushort *)((long)puVar4 + lVar3 + 8), uVar6 == 0)) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined8 *)((long)puVar4 + lVar7 + uVar5 + uVar6 + 4);
      }
      FUN_01e70840(param_1 + 0x7c8,&local_38,(long)puVar4 + lVar7 + uVar5 + 4);
      lVar7 = lVar7 + 4;
    } while ((ulong)uVar2 * 4 != lVar7);
  }
  return;
}


