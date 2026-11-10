/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137cbc0; name: FUN_0137cbc0
 */


ulong FUN_0137cbc0(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong *puVar16;
  float fVar17;
  byte local_890 [1024];
  byte local_490 [1024];
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  undefined8 uStack_78;
  
  uVar7 = *(uint *)(param_1 + 0x30);
  if ((uVar7 | 2) != 3) {
    return param_1;
  }
  lVar15 = *(long *)(param_1 + 0x10);
  puVar14 = &DAT_cbf29ce484222645;
  memset(local_890,0,0x400);
  uVar7 = snprintf((char *)local_890,0x400,"anime_L_button_list_%02d_%s",*(int *)(param_1 + 8),
                   (&PTR_s_pguide_off_state_04207cd8)[(int)uVar7]);
  uVar8 = (ulong)uVar7;
  puVar9 = &DAT_cbf29ce484222645;
  if (local_890[0] != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_890 | 1);
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)local_890[0]) * 0x100000001b3);
      local_890[0] = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (local_890[0] != 0);
  }
  lVar15 = *(long *)(lVar15 + 0x2c8);
  if (lVar15 != 0) {
    puVar2 = *(undefined8 **)(lVar15 + 0x1a0);
    lVar15 = *(long *)(lVar15 + 0x1a8);
    if ((lVar15 == 0) || ((undefined1 *)*puVar2 == puVar9)) {
      puVar13 = puVar2;
    }
    else {
      lVar12 = lVar15 * 0x30;
      puVar5 = puVar2;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) goto LAB_0137cd94;
        puVar1 = puVar5 + 6;
        puVar13 = puVar5 + 6;
        puVar5 = puVar5 + 6;
      } while ((undefined1 *)*puVar1 != puVar9);
    }
    if (puVar13 != puVar2 + lVar15 * 6) {
      uVar10 = (ulong)*(uint *)(puVar13 + 5);
      if (((*(uint *)(puVar13 + 5) < *(uint *)(puVar13[4] + 0x278)) &&
          (lVar15 = *(long *)(puVar13[4] + 600), *(char *)(lVar15 + uVar10 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar15 + uVar10 * 0x48 + 0xb) != '\0')) {
        puVar16 = (ulong *)(lVar15 + uVar10 * 0x48 + 0x10);
        uVar8 = *puVar16;
        if (uVar8 == 0) {
          return 0;
        }
        if (*(char *)(lVar15 + uVar10 * 0x48 + 9) != '\0') {
          return uVar8;
        }
        fVar17 = *(float *)(uVar8 + 0x20);
        uVar6 = FUN_00227728();
        uVar8 = FUN_00227744(*puVar16);
        if (fVar17 < (float)uVar6) {
          return uVar8;
        }
        if ((uVar8 & 1) != 0) {
          return uVar8;
        }
      }
    }
  }
LAB_0137cd94:
  uVar7 = *(uint *)(param_1 + 0x30);
  uVar4 = (uint)((long)(int)uVar7 == 3) * 2;
  if (uVar7 != uVar4) {
    lVar15 = *(long *)(param_1 + 0x10);
    memset(local_490,0,0x400);
    snprintf((char *)local_490,0x400,"anime_L_button_list_%02d_%s",*(int *)(param_1 + 8),
             (&PTR_s_pguide_off_state_04207cd8)[(int)uVar7]);
    local_80 = strlen((char *)local_490);
    local_90 = &DAT_cbf29ce484222645;
    if (local_490[0] != 0) {
      local_90 = &DAT_cbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_490 | 1);
      bVar3 = local_490[0];
      do {
        local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar3 != 0);
    }
    uStack_78 = 0;
    lVar12 = *(long *)(lVar15 + 0x2c8);
    pbStack_88 = local_490;
    if (lVar12 != 0) {
      FUN_0283b430(lVar12,&local_90);
    }
    *(uint *)(param_1 + 0x30) = uVar4;
    snprintf((char *)local_490,0x400,"anime_L_button_list_%02d_%s",*(int *)(param_1 + 8),
             (&PTR_s_pguide_off_state_04207cd8)[uVar4]);
    local_80 = strlen((char *)local_490);
    if (local_490[0] != 0) {
      pbVar11 = (byte *)((ulong)local_490 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)local_490[0]) * 0x100000001b3);
        local_490[0] = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (local_490[0] != 0);
    }
    uStack_78 = 0;
    lVar15 = *(long *)(lVar15 + 0x2c8);
    uVar8 = 0;
    if (lVar15 != 0) {
      local_90 = puVar14;
      pbStack_88 = local_490;
      uVar8 = FUN_0283b1e8(lVar15,&local_90);
    }
  }
  return uVar8;
}


