/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed8e1c; name: FUN_02ed8e1c
 */


void FUN_02ed8e1c(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar12 = *param_3 & *(ulong *)(lVar4 + 8);
    if (uVar12 == 0) {
      uVar5 = *(uint *)(lVar4 + 0x18);
      if (uVar5 != 0) {
        uVar12 = (ulong)uVar5;
        puVar9 = *(undefined8 **)(lVar4 + 0x10);
        do {
          puVar6 = puVar9 + 2;
          if (puVar9[1] == param_2) {
            puVar11 = *(undefined8 **)(lVar4 + 0x10) + (ulong)uVar5 * 2 + -2;
            if (puVar9 < puVar11) {
              *puVar9 = *puVar6;
              puVar9[1] = puVar9[3];
              if (puVar6 < puVar11) {
                puVar9 = puVar9 + 3;
                do {
                  puVar6 = puVar9 + 1;
                  puVar9[-1] = *puVar6;
                  *puVar9 = puVar9[2];
                  puVar9 = puVar9 + 2;
                } while (puVar6 < puVar11);
              }
              uVar5 = *(uint *)(lVar4 + 0x18);
            }
            *(uint *)(lVar4 + 0x18) = uVar5 - 1;
            return;
          }
          uVar12 = uVar12 - 1;
          puVar9 = puVar6;
        } while (uVar12 != 0);
      }
    }
    else {
      uVar5 = *(uint *)(lVar4 + 0x18);
      uVar7 = (ulong)uVar5;
      if (uVar5 != 0) {
        plVar10 = (long *)(*(long *)(lVar4 + 0x10) + 8);
        do {
          if (*plVar10 == param_2) {
            plVar10[-1] = uVar12;
            return;
          }
          plVar10 = plVar10 + 2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar3 = *(uint *)(lVar4 + 0x1c);
      if (uVar3 <= uVar5) {
        iVar1 = uVar3 + (uVar3 >> 1);
        if (uVar3 == 0) {
          iVar1 = 1;
        }
        uVar3 = iVar1 + uVar3;
        lVar8 = (*DAT_0442d148)(0,*(undefined8 *)(lVar4 + 0x10),(ulong)uVar3 << 4);
        if (lVar8 == 0) {
          return;
        }
        *(long *)(lVar4 + 0x10) = lVar8;
        *(uint *)(lVar4 + 0x1c) = uVar3;
      }
      if (uVar5 < uVar3) {
        uVar5 = *(uint *)(lVar4 + 0x18);
        lVar8 = *(long *)(lVar4 + 0x10);
        *(uint *)(lVar4 + 0x18) = uVar5 + 1;
        puVar2 = (ulong *)(lVar8 + (ulong)uVar5 * 0x10);
        if (puVar2 != (ulong *)0x0) {
          *puVar2 = uVar12;
          *(long *)(lVar8 + (ulong)uVar5 * 0x10 + 8) = param_2;
        }
      }
    }
  }
  return;
}


