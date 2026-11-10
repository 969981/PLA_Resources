/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00254da4; name: FUN_00254da4
 */


void FUN_00254da4(long param_1,undefined8 param_2,float *param_3,long param_4,float *param_5,
                 undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *__dest;
  void *__src;
  float *pfVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8 [34];
  
  local_e8[0] = *param_3;
  local_e8[1] = param_3[1];
  local_e8[2] = *param_5;
  local_e8[6] = param_5[1];
  local_e8[0x18] = local_e8[0] + local_e8[2];
  pfVar8 = (float *)(param_1 + 0x50);
  local_e8[3] = param_5[2];
  local_e8[0xb] = param_5[3];
  local_e8[4] = (local_e8[0] + *pfVar8) - local_e8[6];
  local_e8[0x11] = local_e8[1] - local_e8[3];
  local_e8[9] = (local_e8[1] - *(float *)(param_1 + 0x54)) + local_e8[0xb];
  local_e8[0x1a] = (*pfVar8 - local_e8[2]) - local_e8[6];
  local_e8[0x13] = (*(float *)(param_1 + 0x54) - local_e8[3]) - local_e8[0xb];
  bVar3 = *(byte *)(param_1 + 0x10a);
  if ((((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
        (*(char *)(param_1 + 0xea) == -1)) &&
       ((*(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) &&
      (((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) &&
       (*(char *)(param_1 + 0xf0) == -1)))) &&
     ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
       (*(char *)(param_1 + 0xf3) == -1)) &&
      (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) &&
       ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) {
    bVar4 = *(char *)(param_1 + 0x5a) != -1;
  }
  else {
    bVar4 = true;
  }
  lVar10 = 0;
  puVar9 = (uint *)PTR_DAT_04372dd0;
  local_e8[5] = local_e8[1];
  local_e8[7] = local_e8[3];
  local_e8[8] = local_e8[0];
  local_e8[10] = local_e8[2];
  local_e8[0xc] = local_e8[4];
  local_e8[0xd] = local_e8[9];
  local_e8[0xe] = local_e8[6];
  local_e8[0xf] = local_e8[0xb];
  local_e8[0x10] = local_e8[0];
  local_e8[0x12] = local_e8[2];
  local_e8[0x14] = local_e8[4];
  local_e8[0x15] = local_e8[0x11];
  local_e8[0x16] = local_e8[6];
  local_e8[0x17] = local_e8[0x13];
  local_e8[0x19] = local_e8[1];
  local_e8[0x1b] = local_e8[3];
  local_e8[0x1c] = local_e8[0x18];
  local_e8[0x1d] = local_e8[9];
  local_e8[0x1e] = local_e8[0x1a];
  local_e8[0x1f] = local_e8[0xb];
  do {
    lVar1 = param_4 + lVar10;
    plVar11 = *(long **)(lVar1 + 8);
    if ((*(byte *)((long)plVar11 + 0x14) & 3) != 0) {
      if ((bVar4) || ((*(byte *)((long)plVar11 + 0x12) >> 1 & 1) != 0)) {
        uVar6 = FUN_002443a8(param_1);
        uVar5 = FUN_00244380(param_1);
        (**(code **)(*plVar11 + 0x20))
                  (plVar11,param_2,param_6,0,0,param_1 + 0x70,pfVar8,uVar6,uVar5);
        if ((bVar3 & 1) != 0) {
          lVar7 = FUN_0023e82c(*(undefined8 *)(lVar1 + 8),param_2);
          *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar7 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar7 + 0x1a0) = *param_5;
          *(float *)(lVar7 + 0x1a4) = param_5[1];
          *(float *)(lVar7 + 0x1a8) = param_5[2];
          *(float *)(lVar7 + 0x1ac) = param_5[3];
          lVar7 = FUN_0023e82c(*(undefined8 *)(lVar1 + 8),param_2);
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
          *(undefined4 *)(lVar7 + 0x1d0) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
          *(undefined4 *)(lVar7 + 0x1d4) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
          *(undefined4 *)(lVar7 + 0x1d8) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
          *(undefined4 *)(lVar7 + 0x1dc) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
          *(undefined4 *)(lVar7 + 0x1e0) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
          *(undefined4 *)(lVar7 + 0x1e4) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
          *(undefined4 *)(lVar7 + 0x1e8) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
          *(undefined4 *)(lVar7 + 0x1ec) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
          *(undefined4 *)(lVar7 + 0x1f0) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
          *(undefined4 *)(lVar7 + 500) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
          *(undefined4 *)(lVar7 + 0x1f8) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
          *(undefined4 *)(lVar7 + 0x1fc) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
          *(undefined4 *)(lVar7 + 0x200) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
          *(undefined4 *)(lVar7 + 0x204) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
          *(undefined4 *)(lVar7 + 0x208) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
          *(undefined4 *)(lVar7 + 0x20c) = uVar12;
        }
LAB_002551d0:
        uVar6 = *(undefined8 *)(lVar1 + 8);
        if ((bVar3 >> 1 & 1) == 0) goto LAB_00254f4c;
LAB_002551d8:
        if (lVar10 == 0) goto LAB_00254f4c;
        __dest = (void *)FUN_0023e82c(uVar6,param_2);
        local_f8 = *(undefined8 *)((long)__dest + 0x1c0);
        uStack_f0 = *(undefined8 *)((long)__dest + 0x1c8);
        __src = (void *)FUN_0023e82c(*(undefined8 *)(param_4 + 8),param_2);
        memcpy(__dest,__src,0x230);
        *(undefined8 *)((long)__dest + 0x1c0) = local_f8;
        *(undefined8 *)((long)__dest + 0x1c8) = uStack_f0;
        uVar2 = *(uint *)(PTR_DAT_04372dd8 + (ulong)*(byte *)(param_4 + lVar10) * 4) | *puVar9;
        if ((bVar3 & 1) == 0) {
          uVar2 = *(uint *)(PTR_DAT_04372dd8 + (ulong)*(byte *)(param_4 + lVar10) * 4) | *puVar9 |
                  0x40000000;
        }
        *(uint *)((long)__dest + 0x22c) = uVar2;
      }
      else {
        uVar6 = FUN_002443a8(param_1);
        uVar5 = FUN_00244380(param_1);
        (**(code **)(*plVar11 + 0x20))
                  (plVar11,param_2,param_6,1,0,param_1 + 0x70,pfVar8,uVar6,uVar5);
        if ((bVar3 & 1) == 0) goto LAB_002551d0;
        lVar7 = FUN_0023e82c(*(undefined8 *)(lVar1 + 8),param_2);
        *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar7 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(float *)(lVar7 + 0x1a0) = *param_5;
        *(float *)(lVar7 + 0x1a4) = param_5[1];
        *(float *)(lVar7 + 0x1a8) = param_5[2];
        *(float *)(lVar7 + 0x1ac) = param_5[3];
        uVar6 = *(undefined8 *)(lVar1 + 8);
        if ((bVar3 >> 1 & 1) != 0) goto LAB_002551d8;
LAB_00254f4c:
        uVar2 = *(uint *)(PTR_DAT_04372dd8 + (ulong)*(byte *)(param_4 + lVar10) * 4) | *puVar9;
        if ((bVar3 & 1) == 0) {
          uVar2 = *(uint *)(PTR_DAT_04372dd8 + (ulong)*(byte *)(param_4 + lVar10) * 4) | *puVar9 |
                  0x40000000;
        }
        lVar7 = FUN_0023e82c(uVar6,param_2);
        *(uint *)(lVar7 + 0x22c) = uVar2;
      }
      uVar6 = FUN_0023e82c(*(undefined8 *)(lVar1 + 8),param_2);
      local_100 = *(undefined4 *)((long)local_e8 + lVar10 + 8);
      uStack_fc = *(undefined4 *)((long)local_e8 + lVar10 + 0xc);
      local_f8 = CONCAT44(*(undefined4 *)((long)local_e8 + lVar10 + 4),
                          *(undefined4 *)((long)local_e8 + lVar10));
      FUN_0022d1c0(param_2,uVar6,&local_f8,&local_100);
    }
    lVar10 = lVar10 + 0x10;
    puVar9 = puVar9 + 1;
    if (lVar10 == 0x80) {
      return;
    }
  } while( true );
}


