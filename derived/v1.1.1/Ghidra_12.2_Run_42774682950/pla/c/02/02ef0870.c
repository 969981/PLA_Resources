/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef0870; name: FUN_02ef0870
 */


void FUN_02ef0870(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  lVar2 = DAT_0440a160;
  local_90 = *(undefined8 *)(param_1 + 8);
  local_80 = 0;
  local_88 = 0;
  fVar6 = 0.0;
  local_78 = 0xff;
  local_70 = 0xff;
  local_68 = 0;
  fVar12 = *(float *)(param_2 + 0x24);
  if (fVar12 <= 0.0) {
LAB_02ef0d44:
    fVar5 = 0.0;
  }
  else {
    fVar11 = *(float *)(param_2 + 0x1c) - *(float *)(param_3 + 0x7c);
    fVar10 = *(float *)(param_2 + 0x18) - *(float *)(param_3 + 0x78);
    fVar9 = *(float *)(param_2 + 0x20) - *(float *)(param_3 + 0x80);
    fVar7 = *(float *)(param_3 + 0x3c) * fVar10 + fVar11 * *(float *)(param_3 + 0x40) +
            fVar9 * *(float *)(param_3 + 0x44);
    fVar5 = *(float *)(param_3 + 0x48) * fVar10 + fVar11 * *(float *)(param_3 + 0x4c) +
            fVar9 * *(float *)(param_3 + 0x50);
    fVar9 = *(float *)(param_3 + 0x54) * fVar10 + fVar11 * *(float *)(param_3 + 0x58) +
            fVar9 * *(float *)(param_3 + 0x5c);
    if (fVar9 == 0.0) {
      if (fVar7 == 0.0) {
        if (fVar5 != 0.0) {
          if (0.0 < fVar5) {
            fVar5 = 1.5707964;
          }
          else {
            fVar5 = -1.5707964;
          }
          goto LAB_02ef0a44;
        }
        goto LAB_02ef0d44;
      }
      fVar6 = 1.5707964;
      if (fVar7 <= 0.0) {
        fVar6 = -1.5707964;
      }
      fVar7 = (float)NEON_fminnm(fVar5 / fVar12,0x3f800000);
      if (fVar7 <= -1.0) {
        fVar7 = -1.0;
      }
      fVar10 = ABS(fVar7);
      fVar9 = fVar10 * (fVar10 * (fVar10 * (fVar10 * (fVar10 * 84.31466 + -242.71996) + 262.81305) +
                                 -131.11235) + 29.66154);
    }
    else {
      fVar10 = fVar7 / fVar9;
      fVar11 = fVar10 / (fVar10 * fVar10 + 0.28);
      fVar6 = 1.5707964 - fVar11;
      if (fVar7 < 0.0) {
        fVar6 = -1.5707964 - fVar11;
      }
      fVar11 = fVar10 / (fVar10 * fVar10 * 0.28 + 1.0);
      fVar8 = fVar11 + 3.1415927;
      if (fVar7 < 0.0) {
        fVar8 = fVar11 + -3.1415927;
      }
      if (fVar9 < 0.0) {
        fVar11 = fVar8;
      }
      fVar7 = (float)NEON_fminnm(fVar5 / fVar12,0x3f800000);
      if (ABS(fVar10) < 1.0) {
        fVar6 = fVar11;
      }
      if (fVar7 <= -1.0) {
        fVar7 = -1.0;
      }
      fVar10 = ABS(fVar7);
      fVar9 = fVar10 * (fVar10 * (fVar10 * (fVar10 * (fVar10 * 84.31466 + -242.71996) + 262.81305) +
                                 -131.11235) + 29.66154);
    }
    fVar5 = fVar10 * (fVar9 + -1.4518384) + 0.0328437;
    if (fVar7 < 0.0) {
      fVar5 = -((fVar9 + -1.4518384) * fVar10) - 0.0328437;
    }
  }
LAB_02ef0a44:
  if (*(int *)(DAT_0440a160 + 0x48) == 0) {
    iVar1 = *(int *)(DAT_0440a160 + 0x58);
  }
  else {
    puVar3 = *(undefined4 **)(DAT_0440a160 + 0x40);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_02ee0d64(fVar12,lVar2,*puVar3,&local_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x40) + (ulong)*(uint *)(lVar2 + 0x48) * 4))
    ;
    iVar1 = *(int *)(DAT_0440a160 + 0x58);
    lVar2 = DAT_0440a160;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0x68);
  }
  else {
    puVar3 = *(undefined4 **)(lVar2 + 0x50);
    DAT_0440a160 = lVar2;
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_02ee0d64(fVar6 * 57.295776,lVar2,*puVar3,&local_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x50) + (ulong)*(uint *)(lVar2 + 0x58) * 4))
    ;
    iVar1 = *(int *)(DAT_0440a160 + 0x68);
    lVar2 = DAT_0440a160;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0x78);
  }
  else {
    puVar3 = *(undefined4 **)(lVar2 + 0x60);
    DAT_0440a160 = lVar2;
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_02ee0d64(fVar5 * 57.295776,lVar2,*puVar3,&local_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x60) + (ulong)*(uint *)(lVar2 + 0x68) * 4))
    ;
    iVar1 = *(int *)(DAT_0440a160 + 0x78);
    lVar2 = DAT_0440a160;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0x88);
  }
  else {
    fVar6 = *(float *)(param_2 + 0x28);
    puVar3 = *(undefined4 **)(lVar2 + 0x70);
    DAT_0440a160 = lVar2;
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_02ee0d64(fVar6 * 57.295776,lVar2,*puVar3,&local_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x70) + (ulong)*(uint *)(lVar2 + 0x78) * 4))
    ;
    iVar1 = *(int *)(DAT_0440a160 + 0x88);
    lVar2 = DAT_0440a160;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0x98);
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x40);
    puVar3 = *(undefined4 **)(lVar2 + 0x80);
    DAT_0440a160 = lVar2;
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_02ee0d64(uVar13,lVar2,*puVar3,&local_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x80) + (ulong)*(uint *)(lVar2 + 0x88) * 4))
    ;
    iVar1 = *(int *)(DAT_0440a160 + 0x98);
    lVar2 = DAT_0440a160;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0xa8);
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x3c);
    puVar3 = *(undefined4 **)(lVar2 + 0x90);
    DAT_0440a160 = lVar2;
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_02ee0d64(uVar13,lVar2,*puVar3,&local_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x90) + (ulong)*(uint *)(lVar2 + 0x98) * 4))
    ;
    iVar1 = *(int *)(DAT_0440a160 + 0xa8);
    lVar2 = DAT_0440a160;
  }
  DAT_0440a160 = lVar2;
  if (iVar1 != 0) {
    fVar6 = *(float *)(param_2 + 0x2c);
    puVar3 = *(undefined4 **)(lVar2 + 0xa0);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_02ee0d64(fVar6 * 57.295776,lVar2,*puVar3,&local_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0xa0) + (ulong)*(uint *)(lVar2 + 0xa8) * 4))
    ;
  }
  return;
}


