/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03153e88; name: FUN_03153e88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03153e88(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
                 undefined8 *param_7,long param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  short sVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_58 [2];
  uint local_48;
  byte local_44 [4];
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  *(float *)(param_4 + 0x44) = param_1;
  if (param_3 <= param_1) {
    param_3 = param_1;
  }
  *(float *)(param_4 + 0x3c) = param_2;
  *(float *)(param_4 + 0x40) = param_3;
  local_48 = *(uint *)(param_5 + 0x40);
  local_58[0] = local_48 >> 0x16;
  lVar17 = *(long *)(*(long *)(param_8 + 0x38) + (ulong)local_58[0] * 0xf0);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(*(long *)(lVar17 + 0x20) + 0x60);
  bVar3 = *(byte *)(*(long *)(*(long *)(lVar17 + 0x20) + 0x68) + 0x80);
  local_44[0] = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    uStack_68 = param_7[1];
    local_70 = *param_7;
  }
  else {
    local_78[0] = local_48 & 0x3fffff;
    FUN_031934ec(lVar17,local_78,&local_70);
  }
  FUN_03154104(param_4,*(undefined4 *)(param_6 + 0x20));
  uVar21 = *(uint *)(param_6 + 0x20);
  if ((0 < (int)uVar21) &&
     (FUN_03154264(param_4,param_8,param_9,**(undefined4 **)(param_6 + 0x18),&local_70,&local_48,
                   local_58,local_44,0), uVar21 != 1)) {
    uVar22 = 1;
    do {
      FUN_03154264(param_4,param_8,param_9,*(undefined4 *)(*(long *)(param_6 + 0x18) + uVar22 * 4),
                   &local_70,&local_48,local_58,local_44,(int)uVar22);
      uVar22 = uVar22 + 1;
    } while (uVar21 != uVar22);
  }
  if (*(char *)(param_6 + 0x4c) == '\x01') {
    uVar21 = *(uint *)(*(long *)(param_5 + 0x48) + (long)*(int *)(param_6 + 0x44) * 4);
    puVar18 = (undefined8 *)(*(long *)(param_5 + 0x30) + (long)*(int *)(param_6 + 0x44) * 0x10);
    uVar24 = *puVar18;
    lVar20 = (ulong)(uVar21 >> 0x16) * 0xf0;
    lVar17 = *(long *)(*(long *)(param_8 + 0x38) + lVar20);
    auVar5 = *(undefined1 (*) [16])(lVar17 + 0x80);
    fVar23 = (float)uVar24 - *(float *)(lVar17 + 0x90);
    fVar25 = (float)((ulong)uVar24 >> 0x20) - *(float *)(lVar17 + 0x94);
    fVar26 = (float)puVar18[1] - *(float *)(lVar17 + 0x98);
    auVar6 = *(undefined1 (*) [16])(lVar17 + 0x60);
    auVar7 = *(undefined1 (*) [16])(lVar17 + 0x70);
    auVar28 = NEON_ext(auVar6,auVar6,8,1);
    auVar29 = NEON_ext(auVar7,auVar7,8,1);
    auVar27 = NEON_ext(auVar5,auVar5,8,1);
    uVar24 = CONCAT44(auVar29._0_4_ * fVar26 + auVar7._0_4_ * fVar23 + auVar7._4_4_ * fVar25,
                      auVar28._0_4_ * fVar26 + auVar6._0_4_ * fVar23 + auVar6._4_4_ * fVar25);
    uVar22 = (ulong)(uint)(auVar27._0_4_ * fVar26 + auVar5._0_4_ * fVar23 + auVar5._4_4_ * fVar25);
    puVar18 = (undefined8 *)FUN_03154104(param_4,1);
    sVar19 = -1;
    puVar18[1] = uVar22;
    *puVar18 = uVar24;
    puVar18[3] = uVar22;
    puVar18[2] = uVar24;
    puVar18[5] = uStack_68;
    puVar18[4] = local_70;
    *(undefined2 *)(puVar18 + 0xf) = 0xffff;
    lVar17 = *(long *)(*(long *)(*(long *)(param_8 + 0x38) + lVar20) + 0x20);
    iVar1 = *(int *)(lVar17 + 0x20);
    if (iVar1 <= (int)((ulong)uVar21 & 0x3fffff)) {
      lVar17 = *(long *)(lVar17 + 0x168);
      uVar4 = *(uint *)(lVar17 + ((ulong)uVar21 & 0x3fffff) * 4);
      iVar2 = *(int *)(lVar17 + (long)(int)uVar4 * 4);
      sVar9 = (short)iVar1;
      sVar19 = sVar9 - (short)iVar2;
      if (iVar2 == -2) {
        sVar19 = 1;
      }
      sVar8 = (short)uVar21;
      uVar21 = uVar4 | uVar21 & 0xffc00000;
      sVar19 = (sVar8 - sVar9) + sVar19;
    }
    *(short *)((long)puVar18 + 0x74) = sVar19;
    uVar16 = DAT_0388a148;
    uVar15 = DAT_0388a140;
    uVar12 = _UNK_03889a88;
    uVar11 = _DAT_03889a80;
    uVar10 = _UNK_03888d18;
    uVar24 = _DAT_03888d10;
    *(uint *)(puVar18 + 0xe) = uVar21;
    uVar14 = _UNK_0388a138;
    uVar13 = _DAT_0388a130;
    *(undefined1 *)(puVar18 + 0x10) = 0;
    puVar18[7] = uVar12;
    puVar18[6] = uVar11;
    puVar18[9] = uVar16;
    puVar18[8] = uVar15;
    puVar18[0xb] = uVar10;
    puVar18[10] = uVar24;
    puVar18[0xd] = uVar14;
    puVar18[0xc] = uVar13;
  }
  return;
}


