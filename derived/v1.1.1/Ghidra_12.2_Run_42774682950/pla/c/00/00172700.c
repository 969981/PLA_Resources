/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00172700; name: FUN_00172700
 */


uint FUN_00172700(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar6 = (ulong)uVar7;
  if ((uVar7 != 0) && (*(int *)(*(long *)(param_1 + 0x10) + (ulong)(uVar7 - 1) * 0x10 + 8) == 0)) {
    if (uVar7 < 2) {
      return 0;
    }
    uVar7 = 0;
    do {
      uVar10 = uVar7 + (uint)uVar6 >> 1;
      bVar5 = *(int *)(*(long *)(param_1 + 0x10) + (ulong)(uVar10 - 1) * 0x10 + 8) != 0;
      uVar4 = uVar10;
      if (bVar5) {
        uVar4 = (uint)uVar6;
      }
      uVar6 = (ulong)uVar4;
      if (bVar5) {
        uVar7 = uVar10;
      }
    } while (1 < uVar4 - uVar7);
    return uVar7;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return uVar7;
  }
  uVar4 = uVar7 + 1;
  do {
    uVar10 = uVar4;
    uVar11 = (ulong)uVar10 - 1;
    if (uVar11 < uVar6) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x10) + uVar11 * 0x10 + 8);
    }
    else {
      puVar12 = (undefined8 *)
                (*(long *)(param_1 + 0x18) +
                (long)(int)(uVar10 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU))
                * 0x20);
      if (*(int *)(puVar12 + 3) == 0x13) goto LAB_0017279c;
      do {
        do {
          piVar1 = (int *)((long)puVar12 + 0x1c);
          puVar12 = puVar12 + (long)*piVar1 * 4;
          if (*piVar1 == 0) {
            puVar12 = &DAT_039c5c28;
            goto LAB_001727b0;
          }
        } while (*(int *)(puVar12 + 3) != 0x13);
LAB_0017279c:
      } while (puVar12[2] != (ulong)uVar10);
LAB_001727b0:
      iVar2 = *(int *)(puVar12 + 1);
    }
    if (iVar2 == 0) {
      uVar4 = uVar10 - uVar7;
      do {
        if (uVar4 < 2) {
          return uVar7;
        }
        uVar3 = uVar10 + uVar7 >> 1;
        uVar11 = (ulong)uVar3 - 1;
        if (uVar11 < uVar6) {
          puVar12 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar11 * 0x10);
        }
        else {
          puVar12 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) +
                    (ulong)(uVar3 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU))
                    * 0x20);
          if (*(int *)(puVar12 + 3) == 0x13) goto LAB_00172898;
          do {
            do {
              piVar1 = (int *)((long)puVar12 + 0x1c);
              puVar12 = puVar12 + (long)*piVar1 * 4;
              if (*piVar1 == 0) {
                puVar12 = &DAT_039c5c28;
                goto LAB_00172830;
              }
            } while (*(int *)(puVar12 + 3) != 0x13);
LAB_00172898:
          } while (puVar12[2] != (ulong)uVar3);
        }
LAB_00172830:
        if (*(int *)(puVar12 + 1) != 0) {
          uVar7 = uVar3;
          uVar3 = uVar10;
        }
        uVar4 = uVar3 - uVar7;
        uVar10 = uVar3;
      } while( true );
    }
    if (uVar10 >> 0x1e != 0) {
      uVar11 = 1;
      uVar8 = 0;
      if (uVar6 == 0) goto LAB_001728f8;
      do {
        lVar9 = *(long *)(param_1 + 0x10) + uVar8 * 0x10;
LAB_001728dc:
        uVar7 = (uint)uVar11;
        iVar2 = *(int *)(lVar9 + 8);
        while( true ) {
          if (iVar2 == 0) {
            return (int)uVar11 - 1;
          }
          uVar11 = (ulong)(uVar7 + 1);
          uVar8 = uVar11 - 1;
          if (uVar8 < uVar6) break;
LAB_001728f8:
          uVar7 = (uint)uVar11;
          lVar9 = *(long *)(param_1 + 0x18) +
                  (long)(int)(uVar7 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)
                             ) * 0x20;
          iVar2 = *(int *)(lVar9 + 0x18);
          while( true ) {
            if ((iVar2 == 0x13) && (*(ulong *)(lVar9 + 0x10) == uVar11)) goto LAB_001728dc;
            piVar1 = (int *)(lVar9 + 0x1c);
            lVar9 = lVar9 + (long)*piVar1 * 0x20;
            iVar2 = (int)DAT_039c5c30;
            if (*piVar1 == 0) break;
            iVar2 = *(int *)(lVar9 + 0x18);
          }
        }
      } while( true );
    }
    uVar4 = uVar10 << 1;
    uVar7 = uVar10;
  } while( true );
}


