/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115e11c; name: FUN_0115e11c
 */


undefined4 FUN_0115e11c(long param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  piVar3 = *(int **)(param_1 + 0x60);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar3 + uVar5);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar6 = 0;
  if (4 < param_2) {
    return 0;
  }
  puVar1 = (uint *)(lVar4 + 4);
  switch(param_2) {
  case 0:
    piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[2];
    break;
  case 1:
    piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[3];
    goto joined_r0x0115e1e4;
  case 2:
    piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 9) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[4];
joined_r0x0115e1e4:
    uVar5 = (ulong)uVar2;
    if (uVar5 == 0) {
      return 0;
    }
    goto LAB_0115e238;
  case 3:
    piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[5];
    break;
  case 4:
    piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[6];
  }
  uVar5 = (ulong)uVar2;
  if (uVar5 != 0) {
LAB_0115e238:
    uVar6 = *(undefined4 *)((long)piVar3 + uVar5);
  }
  return uVar6;
}


