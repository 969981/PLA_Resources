/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b04e4; name: FUN_016b04e4
 */


void FUN_016b04e4(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  float fVar9;
  undefined8 local_38;
  
  puVar3 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  if (((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 != 0)) &&
     (puVar3 = (uint *)((long)piVar1 + uVar5), puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3),
     puVar3 != (uint *)0x0)) {
    fVar9 = (float)NEON_ucvtf(*puVar3);
    FUN_01618394(param_1 + 0x78,(long)(fVar9 / *(float *)(param_1 + 0xd8)));
    if (*puVar3 != 0) {
      uVar5 = 0;
      puVar8 = puVar3;
      do {
        puVar8 = puVar8 + 1;
        uVar4 = (ulong)*puVar8;
        lVar6 = uVar4 - (long)*(int *)((long)puVar8 + uVar4);
        if ((*(ushort *)((long)puVar8 + lVar6) < 5) ||
           (uVar7 = (ulong)*(ushort *)((long)puVar8 + lVar6 + 4), uVar7 == 0)) {
          local_38 = 0;
        }
        else {
          local_38 = *(undefined8 *)((long)puVar8 + uVar4 + uVar7);
        }
        plVar2 = (long *)FUN_01617a30(param_1 + 0x78,&local_38);
        *plVar2 = (long)((long)puVar8 + uVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar3);
    }
  }
  return;
}


