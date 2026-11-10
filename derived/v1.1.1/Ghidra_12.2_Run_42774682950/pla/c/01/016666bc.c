/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016666bc; name: FUN_016666bc
 */


void FUN_016666bc(long param_1)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 local_48;
  
  puVar2 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if (((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar4 != 0)) &&
     (puVar2 = (uint *)((long)piVar1 + uVar4), puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2),
     puVar2 != (uint *)0x0)) {
    FUN_016668d8(param_1 + 0x78,*puVar2);
    if (*puVar2 != 0) {
      uVar4 = 0;
      puVar7 = puVar2;
      do {
        puVar7 = puVar7 + 1;
        uVar3 = (ulong)*puVar7;
        lVar5 = uVar3 - (long)*(int *)((long)puVar7 + uVar3);
        if ((*(ushort *)((long)puVar7 + lVar5) < 5) ||
           (uVar6 = (ulong)*(ushort *)((long)puVar7 + lVar5 + 4), uVar6 == 0)) {
          local_48 = 0;
        }
        else {
          local_48 = *(undefined8 *)((long)puVar7 + uVar3 + uVar6);
        }
        if (*(ulong *)(param_1 + 0x80) < *(ulong *)(param_1 + 0x88)) {
          FUN_01666d2c(param_1 + 0x90,*(ulong *)(param_1 + 0x80),&local_48);
          *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 8;
        }
        else {
          FUN_01666e04(param_1 + 0x78,&local_48);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *puVar2);
    }
  }
  return;
}


