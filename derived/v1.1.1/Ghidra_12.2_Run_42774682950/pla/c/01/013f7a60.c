/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f7a60; name: FUN_013f7a60
 */


void FUN_013f7a60(long param_1,uint param_2,undefined2 *param_3)

{
  long lVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  int *piVar9;
  
  *(undefined1 *)(param_3 + 1) = 0x12;
  *param_3 = 0x1212;
  if (((int)param_2 < 0x38a) && (piVar9 = *(int **)(param_1 + 0x38), piVar9 != (int *)0x0)) {
    lVar1 = param_1 + (ulong)param_2 * 0x10;
    uVar3 = *(ushort *)(lVar1 + 0x42);
    uVar4 = uVar3 >> 4 & 0xf;
    puVar2 = (ushort *)(lVar1 + 0x40);
    uVar5 = uVar3 >> 8 & 0xf;
    if (uVar4 != 0xf) {
      puVar6 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)));
      puVar6 = (uint *)((long)puVar6 + (ulong)uVar4 * 4 + (ulong)*puVar2 * 4 + (ulong)*puVar6 + 4);
      piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 0xd) ||
         (uVar7 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[6], uVar7 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (undefined1)*(undefined4 *)((long)piVar9 + uVar7);
      }
      *(undefined1 *)param_3 = uVar8;
    }
    if (uVar5 != 0xf) {
      piVar9 = *(int **)(param_1 + 0x38);
      puVar6 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)));
      puVar6 = (uint *)((long)puVar6 + (ulong)uVar5 * 4 + (ulong)*puVar2 * 4 + (ulong)*puVar6 + 4);
      piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 0xd) ||
         (uVar7 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[6], uVar7 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (undefined1)*(undefined4 *)((long)piVar9 + uVar7);
      }
      *(undefined1 *)((long)param_3 + 1) = uVar8;
    }
    if (uVar3 >> 0xc != 0xf) {
      piVar9 = *(int **)(param_1 + 0x38);
      puVar6 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)));
      puVar6 = (uint *)((long)puVar6 +
                       (ulong)(uVar3 >> 0xc) * 4 + (ulong)*puVar2 * 4 + (ulong)*puVar6 + 4);
      piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 0xd) ||
         (uVar7 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[6], uVar7 == 0)) {
        *(undefined1 *)(param_3 + 1) = 0;
        return;
      }
      *(char *)(param_3 + 1) = (char)*(undefined4 *)((long)piVar9 + uVar7);
      return;
    }
  }
  return;
}


