/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002490b0; name: FUN_002490b0
 */


void FUN_002490b0(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short *psVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar6 = *(long *)(param_5 + 0x30);
  lVar1 = *(long *)(param_5 + 0x38);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
    lVar6 = lVar1;
  }
  psVar3 = (short *)FUN_0022d1a0(lVar6,param_6);
  if (*psVar3 == 2) {
    puVar4 = (undefined8 *)FUN_00232654(0x20);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    plVar13 = (long *)(param_1 + 0xf8);
    *plVar13 = (long)puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 2);
    plVar5 = (long *)FUN_00232654(0x48);
    lVar6 = 0;
    if (plVar5 != (long *)0x0) {
      FUN_0028eea0(plVar5,5,3,uVar2);
      *plVar5 = (long)(PTR_DAT_04372d18 + 0x10);
      *(long **)(*plVar13 + 0x18) = plVar5;
      psVar11 = (short *)*plVar13;
      goto joined_r0x002491a8;
    }
  }
  else {
    if (*psVar3 != 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return;
    }
    fVar14 = *(float *)(param_4 + 0x4c);
    fVar15 = *(float *)(param_4 + 0x50);
    if (fVar14 <= fVar15) {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(psVar3 + 2));
      fVar16 = ABS(fVar16 / fVar14);
      fVar17 = fVar16 / ABS(fVar15 / fVar14);
      puVar4 = (undefined8 *)FUN_00232654(0x20);
    }
    else {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(psVar3 + 2));
      fVar17 = ABS(fVar16 / fVar15);
      fVar16 = fVar17 / ABS(fVar14 / fVar15);
      puVar4 = (undefined8 *)FUN_00232654(0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 4);
    lVar6 = FUN_00232654(0x50);
    if (lVar6 != 0) {
      FUN_00251634(fVar16,fVar17,lVar6,5,3,uVar2);
    }
  }
  *(long *)(*(long *)(param_1 + 0xf8) + 0x18) = lVar6;
  psVar11 = *(short **)(param_1 + 0xf8);
joined_r0x002491a8:
  if (psVar11 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar11 = *psVar3;
    uVar7 = FUN_0028ee24(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar8 = FUN_0028ee2c(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18);
    uVar9 = FUN_00232654(uVar7);
    uVar10 = FUN_00232654(uVar8);
    FUN_0028ee54(uVar12,uVar9,uVar7,uVar10,uVar8);
    if (param_2 != (long *)0x0) {
      lVar6 = FUN_00250f00(param_3,4,uVar7);
      *param_2 = *param_2 + lVar6;
      lVar6 = FUN_00250f00(param_3,8,uVar8);
      *param_2 = *param_2 + lVar6;
    }
  }
  return;
}


