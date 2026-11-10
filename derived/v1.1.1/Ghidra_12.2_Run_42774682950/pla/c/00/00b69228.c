/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b69228; name: FUN_00b69228
 */


undefined1  [16] FUN_00b69228(undefined8 *param_1)

{
  uint *puVar1;
  ushort uVar2;
  int *piVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ulong uVar7;
  undefined1 auVar6 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  piVar3 = (int *)param_1[1];
  if ((piVar3 == (int *)0x0) && (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) {
    return ZEXT816(0);
  }
  puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar5 = 0;
  uVar7 = 0;
  if ((((6 < *puVar4) && ((ulong)puVar4[3] != 0)) &&
      (8 < *puVar4 && *(char *)((long)piVar3 + (ulong)puVar4[3]) == '\x04')) &&
     (((ulong)puVar4[4] != 0 &&
      (puVar1 = (uint *)((long)piVar3 + (ulong)puVar4[4]),
      piVar3 = (int *)((long)puVar1 + (ulong)*puVar1), piVar3 != (int *)0x0)))) {
    puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar2 = *puVar4;
    if (uVar2 < 5) {
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
      if ((ulong)puVar4[2] != 0) {
        uVar9 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[2]);
      }
      if (uVar2 < 7) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        uVar8 = 0;
        if ((ulong)puVar4[3] != 0) {
          uVar8 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[3]);
        }
        if ((8 < uVar2) && ((ulong)puVar4[4] != 0)) {
          uVar10 = *(uint *)((long)piVar3 + (ulong)puVar4[4]);
        }
      }
    }
    uVar5 = CONCAT44(uVar8,uVar9);
    uVar7 = (ulong)uVar10;
  }
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


