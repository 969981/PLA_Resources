/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e666e4; name: FUN_01e666e4
 */


void FUN_01e666e4(long *param_1,long param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *unaff_x20;
  
  puVar3 = &DAT_cbf29ce484222645;
  lVar7 = *(long *)(*(long *)(param_2 + 0x78) + 0x70);
  bVar1 = *param_3;
  while (bVar1 != 0) {
    param_3 = param_3 + 1;
    puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_3;
  }
  puVar4 = *(undefined1 **)(lVar7 + 0x1b0);
  if (puVar4 != (undefined1 *)0x0) {
    uVar5 = (long)puVar4 - ((ulong)puVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      puVar6 = (undefined1 *)((ulong)(puVar4 + -1) & (ulong)puVar3);
    }
    else {
      puVar6 = puVar3;
      if (puVar4 <= puVar3) {
        uVar2 = 0;
        if (puVar4 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar3 / (ulong)puVar4;
        }
        puVar6 = puVar3 + -(uVar2 * (long)puVar4);
      }
    }
    plVar8 = *(long **)(*(long *)(lVar7 + 0x1a8) + (long)puVar6 * 8);
    if ((plVar8 != (long *)0x0) && (unaff_x20 = (long *)*plVar8, unaff_x20 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if ((undefined1 *)unaff_x20[1] == puVar3) {
            if ((undefined1 *)unaff_x20[2] == puVar3) goto LAB_01e66828;
          }
          else if ((undefined1 *)((ulong)unaff_x20[1] & (ulong)(puVar4 + -1)) != puVar6) break;
          unaff_x20 = (long *)*unaff_x20;
        } while (unaff_x20 != (long *)0x0);
      }
      else {
        do {
          puVar9 = (undefined1 *)unaff_x20[1];
          if (puVar9 == puVar3) {
            if ((undefined1 *)unaff_x20[2] == puVar3) goto LAB_01e66828;
          }
          else {
            if (puVar4 <= puVar9) {
              uVar5 = 0;
              if (puVar4 != (undefined1 *)0x0) {
                uVar5 = (ulong)puVar9 / (ulong)puVar4;
              }
              puVar9 = puVar9 + -(uVar5 * (long)puVar4);
            }
            if (puVar9 != puVar6) break;
          }
          unaff_x20 = (long *)*unaff_x20;
        } while (unaff_x20 != (long *)0x0);
      }
    }
  }
  FUN_01e67f80();
LAB_01e66828:
  *param_1 = unaff_x20[4];
  param_1[1] = unaff_x20[5];
  param_1[2] = unaff_x20[6];
  plVar8 = (long *)unaff_x20[7];
  param_1[3] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  lVar7 = unaff_x20[0x13];
  param_1[0xd] = unaff_x20[0x11];
  param_1[0xf] = lVar7;
  lVar7 = unaff_x20[0xf];
  param_1[9] = unaff_x20[0xd];
  param_1[0xb] = lVar7;
  lVar7 = unaff_x20[0xb];
  param_1[5] = unaff_x20[9];
  param_1[7] = lVar7;
  lVar7 = unaff_x20[8];
  param_1[6] = unaff_x20[10];
  param_1[4] = lVar7;
  lVar7 = unaff_x20[0xc];
  param_1[10] = unaff_x20[0xe];
  param_1[8] = lVar7;
  lVar7 = unaff_x20[0x10];
  param_1[0xe] = unaff_x20[0x12];
  param_1[0xc] = lVar7;
  param_1[0x10] = unaff_x20[0x14];
  param_1[0x11] = unaff_x20[0x15];
  param_1[0x12] = unaff_x20[0x16];
  plVar8 = (long *)unaff_x20[0x17];
  param_1[0x13] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[0x14] = unaff_x20[0x18];
  return;
}


