/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016c570; name: FUN_0016c570
 */


undefined4 FUN_0016c570(uint *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 local_70;
  int local_68;
  
  plVar12 = *(long **)(param_1 + 0x12);
  lVar7 = plVar12[1];
  uVar1 = plVar12[2];
  uVar2 = *param_1;
  uVar10 = lVar7 + 1;
  if (uVar1 < uVar10) {
    if (0x3ffffffffffffffe < uVar1) goto LAB_0016c9f4;
    lVar5 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
    lVar7 = plVar12[1];
    uVar10 = lVar7 + 1;
    *plVar12 = lVar5;
    plVar12[2] = uVar1 << 1;
  }
  else {
    lVar5 = *plVar12;
  }
  plVar12[1] = uVar10;
  *(char *)(lVar5 + lVar7) = (char)uVar2;
  lVar7 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar7 + -1;
  if (lVar7 == 0) {
    uVar11 = FUN_001790d0();
    *param_1 = uVar11;
  }
  else {
    pbVar8 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
    *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar8 + 1;
    bVar3 = *pbVar8;
    uVar11 = (uint)bVar3;
    *param_1 = (uint)bVar3;
  }
  if ((uVar2 == 0x30) && ((uVar11 | 0x20) == 0x78)) {
    plVar12 = *(long **)(param_1 + 0x12);
    lVar7 = plVar12[1];
    uVar1 = plVar12[2];
    uVar10 = lVar7 + 1;
    if (uVar1 < uVar10) {
      if (0x3ffffffffffffffe < uVar1) {
LAB_0016c9f4:
        FUN_0016a190(param_1,"lexical element too long",0);
LAB_0016ca08:
        FUN_0016a190(param_1,"malformed number",0x122);
                    /* WARNING: Does not return */
        pcVar4 = (code *)UndefinedInstructionException(0,0x16ca1c);
        (*pcVar4)();
      }
      lVar5 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
      lVar7 = plVar12[1];
      uVar10 = lVar7 + 1;
      *plVar12 = lVar5;
      plVar12[2] = uVar1 << 1;
    }
    else {
      lVar5 = *plVar12;
    }
    plVar12[1] = uVar10;
    *(char *)(lVar5 + lVar7) = (char)uVar11;
    lVar7 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar7 + -1;
    if (lVar7 == 0) {
      uVar11 = FUN_001790d0();
    }
    else {
      pbVar8 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar8 + 1;
      uVar11 = (uint)*pbVar8;
    }
    pbVar8 = &DAT_039793ef;
    *param_1 = uVar11;
  }
  else {
    pbVar8 = &DAT_038f9027;
  }
  if (uVar11 == *pbVar8) goto LAB_0016c730;
  do {
    if (uVar11 != pbVar8[1]) goto LAB_0016c7bc;
LAB_0016c730:
    do {
      plVar12 = *(long **)(param_1 + 0x12);
      lVar7 = plVar12[1];
      uVar1 = plVar12[2];
      uVar10 = lVar7 + 1;
      if (uVar1 < uVar10) {
        if (0x3ffffffffffffffe < uVar1) goto LAB_0016c9f4;
        lVar5 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
        lVar7 = plVar12[1];
        uVar10 = lVar7 + 1;
        *plVar12 = lVar5;
        plVar12[2] = uVar1 << 1;
      }
      else {
        lVar5 = *plVar12;
      }
      plVar12[1] = uVar10;
      *(char *)(lVar5 + lVar7) = (char)uVar11;
      lVar7 = **(long **)(param_1 + 0x10);
      **(long **)(param_1 + 0x10) = lVar7 + -1;
      if (lVar7 == 0) {
        uVar11 = FUN_001790d0();
        *param_1 = uVar11;
        if (uVar11 != 0x2d) goto LAB_0016c7b4;
LAB_0016c828:
        plVar12 = *(long **)(param_1 + 0x12);
        lVar7 = plVar12[1];
        uVar1 = plVar12[2];
        uVar10 = lVar7 + 1;
        if (uVar1 < uVar10) {
          if (0x3ffffffffffffffe < uVar1) goto LAB_0016c9f4;
          lVar5 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
          lVar7 = plVar12[1];
          uVar10 = lVar7 + 1;
          *plVar12 = lVar5;
          plVar12[2] = uVar1 << 1;
        }
        else {
          lVar5 = *plVar12;
        }
        plVar12[1] = uVar10;
        *(char *)(lVar5 + lVar7) = (char)uVar11;
        lVar7 = **(long **)(param_1 + 0x10);
        **(long **)(param_1 + 0x10) = lVar7 + -1;
        if (lVar7 == 0) {
          uVar11 = FUN_001790d0();
          *param_1 = uVar11;
          bVar3 = (&DAT_039c5d39)[(int)uVar11];
          goto joined_r0x0016c958;
        }
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
        *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar9 + 1;
        uVar11 = (uint)*pbVar9;
        *param_1 = uVar11;
        if (((byte)(&DAT_039c5d39)[(int)uVar11] >> 4 & 1) != 0) goto LAB_0016c8b0;
LAB_0016c7c8:
        plVar12 = *(long **)(param_1 + 0x12);
        lVar7 = plVar12[1];
        uVar1 = plVar12[2];
        uVar10 = lVar7 + 1;
        if (uVar11 != 0x2e) {
          if (uVar1 < uVar10) {
            if (0x3ffffffffffffffe < uVar1) goto LAB_0016c9f4;
            lVar5 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
            lVar7 = plVar12[1];
            uVar10 = lVar7 + 1;
            *plVar12 = lVar5;
            plVar12[2] = uVar1 << 1;
          }
          else {
            lVar5 = *plVar12;
          }
          plVar12[1] = uVar10;
          *(undefined1 *)(lVar5 + lVar7) = 0;
          lVar7 = FUN_00162710(**(undefined8 **)(param_1 + 0x12),&local_70);
          if (lVar7 != 0) {
            *param_2 = local_70;
            uVar6 = 0x122;
            if (local_68 == 0x13) {
              uVar6 = 0x123;
            }
            return uVar6;
          }
          goto LAB_0016ca08;
        }
        if (uVar1 < uVar10) {
          if (0x3ffffffffffffffe < uVar1) goto LAB_0016c9f4;
          lVar5 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
          lVar7 = plVar12[1];
          uVar10 = lVar7 + 1;
          *plVar12 = lVar5;
          plVar12[2] = uVar1 << 1;
        }
        else {
          lVar5 = *plVar12;
        }
        plVar12[1] = uVar10;
        *(undefined1 *)(lVar5 + lVar7) = 0x2e;
      }
      else {
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
        *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar9 + 1;
        uVar11 = (uint)*pbVar9;
        *param_1 = uVar11;
        if (uVar11 == 0x2d) goto LAB_0016c828;
LAB_0016c7b4:
        if (uVar11 == 0x2b) goto LAB_0016c828;
LAB_0016c7bc:
        bVar3 = (&DAT_039c5d39)[(int)uVar11];
joined_r0x0016c958:
        if ((bVar3 >> 4 & 1) == 0) goto LAB_0016c7c8;
LAB_0016c8b0:
        plVar12 = *(long **)(param_1 + 0x12);
        lVar7 = plVar12[1];
        uVar1 = plVar12[2];
        uVar10 = lVar7 + 1;
        if (uVar1 < uVar10) {
          if (0x3ffffffffffffffe < uVar1) goto LAB_0016c9f4;
          lVar5 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
          lVar7 = plVar12[1];
          uVar10 = lVar7 + 1;
          *plVar12 = lVar5;
          plVar12[2] = uVar1 << 1;
        }
        else {
          lVar5 = *plVar12;
        }
        plVar12[1] = uVar10;
        *(char *)(lVar5 + lVar7) = (char)uVar11;
      }
      lVar7 = **(long **)(param_1 + 0x10);
      **(long **)(param_1 + 0x10) = lVar7 + -1;
      if (lVar7 == 0) {
        uVar11 = FUN_001790d0();
        *param_1 = uVar11;
        if (uVar11 != *pbVar8) break;
        goto LAB_0016c730;
      }
      pbVar9 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar9 + 1;
      uVar11 = (uint)*pbVar9;
      *param_1 = uVar11;
    } while (uVar11 == *pbVar8);
  } while( true );
}


