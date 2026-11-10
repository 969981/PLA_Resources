/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02953584; name: FUN_02953584
 */


void FUN_02953584(undefined2 *param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte local_58 [4];
  byte local_54 [4];
  
  *param_1 = 0x500;
  *(undefined2 *)((long)param_1 + 3) = 0x500;
  param_1[3] = 0x500;
  *(undefined2 *)((long)param_1 + 9) = 0x500;
  param_1[6] = 0x500;
  *(undefined2 *)((long)param_1 + 0xf) = 0x500;
  *(undefined1 *)(param_1 + 1) = 0x1f;
  *(undefined1 *)((long)param_1 + 5) = 0x1f;
  *(undefined1 *)(param_1 + 4) = 0x1f;
  *(undefined1 *)((long)param_1 + 0xb) = 0x1f;
  *(undefined1 *)(param_1 + 7) = 0x1f;
  *(undefined1 *)((long)param_1 + 0x11) = 0x1f;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar5 = 0;
    do {
      puVar8 = param_1 + 0x1e;
      if (*(long *)(param_1 + 0x18) != 0) {
        puVar8 = (undefined2 *)(*(long *)(param_1 + 0x18) + uVar5);
      }
      *(undefined1 *)puVar8 = 6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x1c));
  }
  uVar10 = (ulong)*(uint *)(param_2 + 0x110);
  puVar7 = (undefined1 *)((long)param_1 + 1);
  uVar5 = uVar10 * 2 + 2;
  if (2 < *(uint *)(param_2 + 0x110)) {
    uVar5 = 4;
  }
  lVar6 = 0;
  do {
    iVar9 = (int)uVar10;
    uVar11 = (uint)*(byte *)(*(long *)(param_2 + 0x58) + 0x55);
    if (iVar9 == 0) {
      puVar3 = (undefined4 *)&DAT_03a7eb50;
LAB_029536a8:
      if ((puVar3[lVar6] != 5) && (puVar7[-1] == '\0')) {
        if (iVar9 == 0) {
          puVar3 = (undefined4 *)&DAT_03a7eb50;
        }
        else if (iVar9 == 2) {
          puVar3 = (undefined4 *)&DAT_03a7ebc8;
        }
        else {
          if (iVar9 != 1) goto joined_r0x02953730;
          uVar11 = uVar11 - 1;
          puVar3 = &DAT_03a7eb68;
          if (uVar11 < 5) {
            puVar3 = (undefined4 *)(&PTR_DAT_04276a08)[(char)uVar11];
          }
        }
        uVar11 = puVar3[lVar6];
        if ((uVar11 & 0xff) != 5) {
          puVar7[-1] = 1;
          *puVar7 = (char)uVar11;
          puVar7[1] = 0x1f;
        }
      }
    }
    else {
      if (iVar9 == 2) {
        puVar3 = (undefined4 *)&DAT_03a7ebc8;
        goto LAB_029536a8;
      }
      if (iVar9 == 1) {
        uVar2 = uVar11 - 1;
        puVar3 = &DAT_03a7eb68;
        if (uVar2 < 5) {
          puVar3 = (undefined4 *)(&PTR_DAT_04276a08)[(char)uVar2];
        }
        goto LAB_029536a8;
      }
    }
joined_r0x02953730:
    if (uVar5 - 1 == lVar6) {
      uVar10 = 0;
      pbVar12 = (byte *)(param_1 + 1);
      do {
        FUN_02947b84(param_2,uVar10 & 0xffffffff,local_54,local_58);
        uVar4 = (ulong)local_54[0];
        if (uVar4 != 5) {
          if (((local_58[0] < *(byte *)(param_3 + uVar4 * 0x38 + 0x38)) &&
              (lVar6 = *(long *)(param_3 + uVar4 * 0x38 + (ulong)local_58[0] * 8 + 8), lVar6 != 0))
             && (*(short *)(lVar6 + 0x74) != 0)) {
            bVar1 = *(byte *)(lVar6 + 0x7d);
            *pbVar12 = bVar1;
            puVar8 = param_1 + 0x1e;
            if ((*(long *)(param_1 + 0x18) != 0) &&
               ((uint)bVar1 <= *(uint *)(param_1 + 0x1c) && *(uint *)(param_1 + 0x1c) != (uint)bVar1
               )) {
              puVar8 = (undefined2 *)(*(long *)(param_1 + 0x18) + (ulong)bVar1);
            }
            *(char *)puVar8 = (char)uVar10;
          }
          else {
            *pbVar12 = 0x1f;
          }
        }
        uVar10 = uVar10 + 1;
        pbVar12 = pbVar12 + 3;
      } while (uVar5 != uVar10);
      return;
    }
    uVar10 = (ulong)*(uint *)(param_2 + 0x110);
    lVar6 = lVar6 + 1;
    puVar7 = puVar7 + 3;
  } while( true );
}


