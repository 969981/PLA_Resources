/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef1428; name: FUN_02ef1428
 */


undefined8 FUN_02ef1428(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar11 = (ulong)uVar4;
  uVar6 = FUN_02ef1684();
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar4 != 0) {
      uVar5 = *(uint *)(param_1 + 1);
      if (uVar4 < uVar5) {
        uVar6 = ~uVar11;
        if ((uVar5 - uVar4 & 1) != 0) {
          puVar1 = (undefined8 *)(*param_1 + (ulong)(uVar4 - 1) * 0x10);
          puVar2 = (undefined8 *)(*param_1 + uVar11 * 0x10);
          uVar7 = puVar1[1];
          uVar11 = uVar11 + 1;
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
        }
        if (uVar6 + uVar5 != 0) {
          lVar8 = uVar5 - uVar11;
          lVar10 = uVar11 << 4;
          lVar9 = (ulong)(uVar4 - 1) * 0x10;
          do {
            puVar1 = (undefined8 *)(*param_1 + lVar9);
            puVar2 = (undefined8 *)(*param_1 + lVar10);
            uVar7 = puVar1[1];
            lVar8 = lVar8 + -2;
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar1 = (undefined8 *)(*param_1 + lVar9);
            lVar3 = *param_1 + lVar10;
            lVar10 = lVar10 + 0x20;
            uVar7 = puVar1[1];
            *(undefined8 *)(lVar3 + 0x10) = *puVar1;
            *(undefined8 *)(lVar3 + 0x18) = uVar7;
          } while (lVar8 != 0);
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


