/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f29158; name: FUN_02f29158
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02f29158(long param_1,uint param_2)

{
  undefined8 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  float fVar17;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  lVar14 = *(long *)(param_1 + 0x68);
  if (lVar14 == 0) {
    uVar16 = 0;
    goto LAB_02f29250;
  }
  lVar8 = *(long *)(param_1 + 0x70);
  if ((lVar8 != -1) && (uVar16 = *(uint *)(DAT_0440a140 + 0x38), uVar16 != 0)) {
    uVar3 = 0;
    if (uVar16 != 0) {
      uVar3 = (uint)lVar8 / uVar16;
    }
    for (plVar10 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                             (ulong)((uint)lVar8 - uVar3 * uVar16) * 8); plVar10 != (long *)0x0;
        plVar10 = (long *)*plVar10) {
      if (plVar10[1] == lVar8) {
        *(int *)(plVar10[2] + 0x50) = *(int *)(plVar10[2] + 0x50) + 1;
        puVar15 = (undefined8 *)plVar10[2];
        lVar8 = *(long *)(lVar14 + 0x68);
        goto joined_r0x02f291f8;
      }
    }
  }
  puVar15 = (undefined8 *)0x0;
  lVar8 = *(long *)(lVar14 + 0x68);
joined_r0x02f291f8:
  if (lVar8 == 0) {
    uVar16 = 0;
    lVar8 = *(long *)(lVar14 + 0x38);
    if (lVar8 == 0) goto LAB_02f29214;
LAB_02f2920c:
    if ((*(byte *)(lVar8 + 4) >> 1 & 1) == 0) goto LAB_02f29214;
LAB_02f293a8:
    local_60 = 0;
    local_68 = 0;
    local_58 = 0xff;
    local_50 = 0xff;
    local_48 = 0;
    local_70 = puVar15;
    fVar17 = (float)FUN_02ed2e94(lVar14,0x21,&local_70);
    uVar16 = (uint)fVar17;
  }
  else {
    uVar16 = *(byte *)(lVar8 + 0x24) >> 4 & 1;
    lVar8 = *(long *)(lVar14 + 0x38);
    if (lVar8 != 0) goto LAB_02f2920c;
LAB_02f29214:
    uVar7 = (**(code **)(*(long *)(lVar14 + 0x18) + 0x20))((long *)(lVar14 + 0x18),0x21);
    if ((uVar7 & 1) != 0) goto LAB_02f293a8;
    puVar11 = *(undefined8 **)(lVar14 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
LAB_02f29234:
      lVar14 = *(long *)(lVar14 + 0x58);
      if (lVar14 != 0) goto LAB_02f295cc;
    }
    else {
      puVar9 = (undefined8 *)*puVar11;
      uVar3 = *(uint *)(puVar11 + 1);
      if ((uVar3 == 0) || ((undefined8 *)*puVar9 == puVar15)) {
        puVar11 = puVar9;
      }
      else {
        lVar8 = (ulong)uVar3 * 0x10;
        puVar12 = puVar9;
        do {
          lVar8 = lVar8 + -0x10;
          if (lVar8 == 0) goto LAB_02f29234;
          puVar11 = puVar12 + 2;
          puVar1 = puVar12 + 2;
          puVar12 = puVar11;
        } while ((undefined8 *)*puVar1 != puVar15);
      }
      if (puVar11 == puVar9 + (ulong)uVar3 * 2) goto LAB_02f29234;
      lVar14 = puVar11[1];
LAB_02f295cc:
      uVar16 = *(byte *)(lVar14 + 0x20) >> 4 & 1;
    }
  }
  if ((puVar15 != (undefined8 *)0x0) &&
     (iVar13 = *(int *)(puVar15 + 10), *(int *)(puVar15 + 10) = iVar13 + -1, iVar13 + -1 == 0)) {
    (**(code **)*puVar15)(puVar15);
    (*DAT_0442d150)(4,puVar15);
  }
LAB_02f29250:
  sVar2 = *(short *)(param_1 + 0x338);
  *(short *)(param_1 + 0x338) = (short)uVar16;
  bVar6 = sVar2 != 0;
  *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfd | ((uVar16 != 0) != bVar6) << 1;
  if (((uVar16 != 0) != bVar6) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
  }
  local_70._4_4_ = *(int *)(param_1 + 0x80);
  local_70._0_4_ = DAT_042ab258;
  local_68 = CONCAT13(local_68._3_1_,0x50000);
  local_68 = CONCAT22(local_68._2_2_,(short)(local_70._4_4_ << 8)) | 0x20;
  iVar13 = local_70._4_4_;
  if (((*(long *)(param_1 + 0x2b0) != 0) && (*(short *)(param_1 + 0x12a) == 0)) &&
     (*(short *)(param_1 + 0x33a) == 0)) {
    iVar13 = *(int *)(param_1 + 0x2b8);
  }
  if ((param_2 & 1) == 0) {
    if (((*(long *)(param_1 + 0x2b0) != 0) && (*(short *)(param_1 + 0x128) == 0)) &&
       (*(short *)(param_1 + 0x338) == 0)) {
      local_70._4_4_ = *(int *)(param_1 + 0x2b8);
    }
  }
  else {
    FUN_02f26ec4(param_1,0,&local_70);
  }
  iVar4 = iVar13;
  if (((*(long *)(param_1 + 0x2c8) != 0) && (*(short *)(param_1 + 0x1aa) == 0)) &&
     (*(short *)(param_1 + 0x33a) == 0)) {
    iVar4 = *(int *)(param_1 + 0x2d0);
  }
  if (((param_2 >> 1 & 1) == 0) && (local_70._4_4_ == iVar13)) {
    if (((*(long *)(param_1 + 0x2c8) != 0) && (*(short *)(param_1 + 0x1a8) == 0)) &&
       (*(short *)(param_1 + 0x338) == 0)) {
      iVar13 = *(int *)(param_1 + 0x2d0);
      local_70._4_4_ = iVar13;
    }
  }
  else {
    FUN_02f26ec4(param_1,1,&local_70);
    iVar13 = local_70._4_4_;
  }
  iVar5 = iVar4;
  if (((*(long *)(param_1 + 0x2e0) != 0) && (*(short *)(param_1 + 0x22a) == 0)) &&
     (*(short *)(param_1 + 0x33a) == 0)) {
    iVar5 = *(int *)(param_1 + 0x2e8);
  }
  if (((param_2 >> 2 & 1) == 0) && (iVar13 == iVar4)) {
    if (((*(long *)(param_1 + 0x2e0) != 0) && (*(short *)(param_1 + 0x228) == 0)) &&
       (*(short *)(param_1 + 0x338) == 0)) {
      local_70._4_4_ = *(int *)(param_1 + 0x2e8);
      iVar4 = local_70._4_4_;
    }
  }
  else {
    FUN_02f26ec4(param_1,2,&local_70);
    iVar4 = local_70._4_4_;
  }
  if (((param_2 >> 3 & 1) == 0) && (iVar4 == iVar5)) {
    lVar14 = *(long *)(param_1 + 0x2f8);
  }
  else {
    FUN_02f26ec4(param_1,3,&local_70);
    lVar14 = *(long *)(param_1 + 0x2f8);
  }
  *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfc | 1;
  if (((lVar14 == 0) || (*(short *)(param_1 + 0x2a8) != 0)) || (*(short *)(param_1 + 0x338) != 0)) {
    if (((*(long *)(param_1 + 0x2e0) == 0) || (*(short *)(param_1 + 0x228) != 0)) ||
       (*(short *)(param_1 + 0x338) != 0)) {
      if (((*(long *)(param_1 + 0x2c8) == 0) || (*(short *)(param_1 + 0x1a8) != 0)) ||
         (*(short *)(param_1 + 0x338) != 0)) {
        if (((*(long *)(param_1 + 0x2b0) == 0) || (*(short *)(param_1 + 0x128) != 0)) ||
           (*(short *)(param_1 + 0x338) != 0)) {
          lVar14 = param_1 + 0x78;
        }
        else {
          lVar14 = param_1 + 0x2b0;
        }
      }
      else {
        lVar14 = param_1 + 0x2c8;
      }
    }
    else {
      lVar14 = param_1 + 0x2e0;
    }
  }
  else {
    lVar14 = param_1 + 0x2f8;
  }
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(lVar14 + 8);
  *(uint *)(param_1 + 0x310) =
       (byte)(*(byte *)(param_1 + 0xa1) | *(byte *)(param_1 + 0xa0) >> 2) & 0x1f;
  return;
}


