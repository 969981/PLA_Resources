/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea71cc; name: FUN_02ea71cc
 */


void FUN_02ea71cc(long param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar5 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    iVar6 = 0;
    uVar9 = uVar5;
    do {
      iVar1 = iVar6 + (uVar9 >> 1);
      uVar10 = *(ulong *)(lVar3 + (long)iVar1 * 8);
      if (uVar10 == param_2) {
        puVar8 = (undefined8 *)(lVar3 + (long)iVar1 * 8);
        if (puVar8 == (undefined8 *)0x0) {
          return;
        }
        puVar4 = (undefined8 *)(lVar3 + (ulong)uVar5 * 8 + -8);
        if (puVar8 < puVar4) {
          uVar10 = ((ulong)uVar5 * 8 + (long)iVar1 * -8) - 9;
          uVar5 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
          if ((uVar5 & 3) != 0) {
            lVar3 = -((ulong)uVar5 & 3);
            puVar7 = puVar8;
            do {
              puVar8 = puVar7 + 1;
              *puVar7 = *puVar8;
              bVar2 = lVar3 != -1;
              lVar3 = lVar3 + 1;
              puVar7 = puVar8;
            } while (bVar2);
          }
          if (0x17 < uVar10) {
            do {
              *puVar8 = puVar8[1];
              puVar8[1] = puVar8[2];
              puVar8[2] = puVar8[3];
              puVar7 = puVar8 + 4;
              puVar8[3] = *puVar7;
              puVar8 = puVar7;
            } while (puVar7 < puVar4);
          }
          uVar5 = *(uint *)(param_1 + 0x10);
        }
        *(uint *)(param_1 + 0x10) = uVar5 - 1;
        return;
      }
      if (uVar10 < param_2) {
        iVar6 = iVar1 + 1;
      }
      uVar9 = uVar9 - (uVar10 < param_2) >> 1;
    } while (uVar9 != 0);
  }
  return;
}


