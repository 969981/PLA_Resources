/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4d9dc; name: FUN_02f4d9dc
 */


void FUN_02f4d9dc(long param_1,uint param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined2 *puVar10;
  undefined2 *puVar9;
  ushort *puVar11;
  ushort *puVar13;
  ushort *puVar12;
  ulong uVar14;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    uVar14 = (ulong)(param_2 >> 3) & 0x1fff;
    bVar3 = *(byte *)(*(long *)(param_4 + 0x28) + uVar14);
    uVar5 = 1 << (ulong)(param_2 & 7);
    bVar4 = (byte)uVar5;
    if ((uVar5 & bVar3) == 0) {
      *(byte *)(*(long *)(param_4 + 0x28) + uVar14) = bVar3 | bVar4;
      *(short *)(param_4 + 0x12) = *(short *)(param_4 + 0x12) + -1;
    }
    if (*(short *)(param_1 + 0x38) == 0) {
      return;
    }
    *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + -1;
    uVar1 = *(uint *)(param_4 + 0x20);
    uVar5 = *(uint *)(param_4 + 0x24);
    if (uVar5 <= uVar1) {
      iVar2 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar2 = 1;
      }
      uVar5 = iVar2 + uVar5;
      lVar7 = (*DAT_0442d148)(0,*(undefined8 *)(param_4 + 0x18),(ulong)uVar5 << 1);
      if (lVar7 == 0) goto LAB_02f4dbc4;
      *(long *)(param_4 + 0x18) = lVar7;
      *(uint *)(param_4 + 0x24) = uVar5;
    }
    if (uVar1 < uVar5) {
      puVar8 = (undefined2 *)(*(long *)(param_4 + 0x18) + (ulong)*(uint *)(param_4 + 0x20) * 2);
      *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) + 1;
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = (short)param_2;
        *(byte *)(*(long *)(param_4 + 0x30) + uVar14) =
             *(byte *)(*(long *)(param_4 + 0x30) + uVar14) | bVar4;
        *(int *)(param_4 + 0xc) =
             *(int *)(param_4 + 0xc) -
             *(int *)(*(long *)(*param_3 + ((ulong)param_2 & 0xffff) * 8) + 0x1c);
        uVar6 = *(ushort *)(param_1 + 0x38);
        if ((ushort)((short)param_3[1] - 1U) <= *(ushort *)(param_1 + 0x38)) {
          uVar6 = (short)param_3[1] - 1;
        }
        if (*(uint *)(param_4 + 0x20) <= (uint)uVar6) {
          return;
        }
        uVar6 = **(ushort **)(param_4 + 0x18);
        *(byte *)(*(long *)(param_4 + 0x30) + (ulong)(uVar6 >> 3)) =
             *(byte *)(*(long *)(param_4 + 0x30) + (ulong)(uVar6 >> 3)) &
             ((byte)(1 << ((ulong)uVar6 & 7)) ^ 0xff);
        iVar2 = *(int *)(*(long *)(*param_3 + (ulong)uVar6 * 8) + 0x1c);
        *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + 1;
        *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + iVar2;
        uVar5 = *(uint *)(param_4 + 0x20);
        lVar7 = (ulong)uVar5 - 1;
        if (0 < lVar7) {
          puVar8 = *(undefined2 **)(param_4 + 0x18);
          *puVar8 = puVar8[1];
          if (1 < lVar7) {
            puVar9 = puVar8 + 1;
            do {
              puVar10 = puVar9 + 1;
              *puVar9 = *puVar10;
              puVar9 = puVar10;
            } while (puVar10 < puVar8 + lVar7);
          }
          uVar5 = *(uint *)(param_4 + 0x20);
        }
        *(uint *)(param_4 + 0x20) = uVar5 - 1;
        return;
      }
    }
  }
  else {
    uVar14 = (ulong)(param_2 >> 3) & 0x1fff;
    uVar6 = *(ushort *)(param_1 + 0x38);
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_4 + 0xc) =
         *(int *)(param_4 + 0xc) -
         *(int *)(*(long *)(*param_3 + ((ulong)param_2 & 0xffff) * 8) + 0x1c);
    *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + -1;
    *(short *)(param_4 + 0x12) = *(short *)(param_4 + 0x12) + -1;
    bVar3 = (byte)(1 << (ulong)(param_2 & 7));
    *(byte *)(*(long *)(param_4 + 0x28) + uVar14) =
         *(byte *)(*(long *)(param_4 + 0x28) + uVar14) | bVar3;
    uVar1 = *(uint *)(param_4 + 0x20);
    uVar5 = *(uint *)(param_4 + 0x24);
    if (uVar5 <= uVar1) {
      iVar2 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar2 = 1;
      }
      uVar5 = iVar2 + uVar5;
      lVar7 = (*DAT_0442d148)(0,*(undefined8 *)(param_4 + 0x18),(ulong)uVar5 << 1);
      if (lVar7 == 0) goto LAB_02f4dbc4;
      *(long *)(param_4 + 0x18) = lVar7;
      *(uint *)(param_4 + 0x24) = uVar5;
    }
    if (uVar1 < uVar5) {
      puVar8 = (undefined2 *)(*(long *)(param_4 + 0x18) + (ulong)*(uint *)(param_4 + 0x20) * 2);
      *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) + 1;
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = (short)param_2;
        *(byte *)(*(long *)(param_4 + 0x30) + uVar14) =
             *(byte *)(*(long *)(param_4 + 0x30) + uVar14) | bVar3;
        uVar5 = *(uint *)(param_4 + 0x20);
        if ((ushort)((short)param_3[1] - 1U) <= uVar6) {
          uVar6 = (short)param_3[1] - 1;
        }
        if (uVar5 <= uVar6) {
          return;
        }
        puVar11 = *(ushort **)(param_4 + 0x18);
        lVar7 = (ulong)uVar5 - 1;
        uVar6 = *puVar11;
        if (0 < lVar7) {
          *puVar11 = puVar11[1];
          if (1 < lVar7) {
            puVar12 = puVar11 + 1;
            do {
              puVar13 = puVar12 + 1;
              *puVar12 = *puVar13;
              puVar12 = puVar13;
            } while (puVar13 < puVar11 + lVar7);
          }
          uVar5 = *(uint *)(param_4 + 0x20);
        }
        *(uint *)(param_4 + 0x20) = uVar5 - 1;
        uVar5 = 1 << (ulong)(uVar6 & 7);
        uVar14 = (ulong)(uVar6 >> 3);
        *(byte *)(*(long *)(param_4 + 0x30) + uVar14) =
             *(byte *)(*(long *)(param_4 + 0x30) + uVar14) & ((byte)uVar5 ^ 0xff);
        if ((uVar5 & *(byte *)(*(long *)(param_4 + 0x28) + uVar14)) == 0) {
          *(int *)(param_4 + 0xc) =
               *(int *)(param_4 + 0xc) +
               *(int *)(*(long *)(*param_3 + (ulong)(uint)uVar6 * 8) + 0x1c);
          *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + 1;
          return;
        }
        return;
      }
    }
  }
LAB_02f4dbc4:
  *(undefined2 *)(param_4 + 0x12) = 0;
  return;
}


