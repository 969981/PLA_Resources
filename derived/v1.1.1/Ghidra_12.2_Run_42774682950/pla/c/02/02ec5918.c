/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec5918; name: FUN_02ec5918
 */


undefined8 FUN_02ec5918(long param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  
  if (*(uint *)(param_2 + 0x58) != 0) {
    lVar4 = (ulong)*(uint *)(param_2 + 0x58) << 5;
    piVar7 = (int *)(*(long *)(param_2 + 0x50) + 4);
    do {
      if (*piVar7 == *(int *)(param_1 + 0x10)) {
        return 0;
      }
      lVar4 = lVar4 + -0x20;
      piVar7 = piVar7 + 8;
    } while (lVar4 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x68);
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x60);
    iVar6 = 0;
    uVar10 = uVar3;
    do {
      iVar1 = iVar6 + (uVar10 >> 1);
      uVar11 = *(ulong *)(lVar4 + (long)iVar1 * 8);
      if (uVar11 == param_2) {
        puVar9 = (undefined8 *)(lVar4 + (long)iVar1 * 8);
        if (puVar9 == (undefined8 *)0x0) {
          return 1;
        }
        puVar5 = (undefined8 *)(lVar4 + (ulong)uVar3 * 8 + -8);
        if (puVar9 < puVar5) {
          uVar11 = ((ulong)uVar3 * 8 + (long)iVar1 * -8) - 9;
          uVar3 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
          if ((uVar3 & 3) != 0) {
            lVar4 = -((ulong)uVar3 & 3);
            puVar8 = puVar9;
            do {
              puVar9 = puVar8 + 1;
              *puVar8 = *puVar9;
              bVar2 = lVar4 != -1;
              lVar4 = lVar4 + 1;
              puVar8 = puVar9;
            } while (bVar2);
          }
          if (0x17 < uVar11) {
            do {
              *puVar9 = puVar9[1];
              puVar9[1] = puVar9[2];
              puVar9[2] = puVar9[3];
              puVar8 = puVar9 + 4;
              puVar9[3] = *puVar8;
              puVar9 = puVar8;
            } while (puVar8 < puVar5);
          }
          uVar3 = *(uint *)(param_1 + 0x68);
        }
        *(uint *)(param_1 + 0x68) = uVar3 - 1;
        return 1;
      }
      if ((*(int *)(uVar11 + 0x48) < *(int *)(param_2 + 0x48)) ||
         ((uVar11 < param_2 && (*(int *)(uVar11 + 0x48) == *(int *)(param_2 + 0x48))))) {
        iVar6 = iVar1 + 1;
        uVar10 = uVar10 - 1;
      }
      uVar10 = uVar10 >> 1;
    } while (uVar10 != 0);
  }
  return 1;
}


