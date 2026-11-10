/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3d31c; name: FUN_02f3d31c
 */


void FUN_02f3d31c(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined4 local_90;
  long local_88;
  long *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  *(int *)(*(long *)(param_1 + 0x10) + 0x48) = *(int *)(*(long *)(param_1 + 0x10) + 0x48) + 1;
  plVar4 = *(long **)(param_1 + 0x10);
  if (((*(byte *)((long)plVar4 + 0x5a) >> 4 & 1) == 0) &&
     ((*(byte *)((long)plVar4 + 0x5a) & 3) != 0)) {
    local_90 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_68 = 1;
    (**(code **)(*plVar4 + 0xb8))(plVar4,&local_190,0);
    local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
    if (local_88 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      if (*(long *)(local_88 + 0x18) == 0) {
        plVar4 = (long *)(**(code **)(*local_80 + 0xd0))();
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)(**(code **)(*(long *)local_80[2] + 0xd0))();
        }
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = *(long **)(*(long *)(local_88 + 0x18) + 0x78);
        plVar4 = (long *)plVar3[0x10];
      }
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3;
      }
    }
    if ((plVar4 != (long *)0x0) && (*(char *)(param_1 + 0x50) == '\0')) {
      pfVar6 = (float *)(param_1 + 0x4c);
      fVar7 = *pfVar6;
      if (*(char *)(param_1 + 0x51) != '\0') {
        FUN_02f3c3f4(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
      local_180 = 0;
      local_178 = 0xff;
      local_170 = 0xff;
      local_168 = 0;
      local_190 = *(undefined8 *)(param_1 + 0x30);
      local_188 = *(undefined4 *)(param_1 + 0x2c);
      (**(code **)(*plVar4 + 0x288))(plVar4,pfVar6,&local_190);
      fVar8 = *(float *)(param_1 + 0x4c);
      fVar10 = 4.0;
      if (fVar8 <= 4.0) {
        fVar10 = fVar8;
      }
      fVar9 = 0.25;
      if (0.25 <= fVar8) {
        fVar9 = fVar10;
      }
      fVar9 = fVar9 * (float)param_2;
      fVar10 = 0.5;
      if (fVar9 <= 0.0) {
        fVar10 = -0.5;
      }
      fVar10 = (float)(uint)(int)(fVar10 + fVar9) / (float)param_2;
      *pfVar6 = fVar10;
      if (fVar10 - fVar7 != 0.0) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(*(long **)(param_1 + 0x10),0x36);
      }
      *(undefined2 *)(param_1 + 0x50) = 1;
    }
    fVar7 = *(float *)(param_1 + 0x4c) * (float)param_2;
    fVar10 = 0.5;
    if (fVar7 <= 0.0) {
      fVar10 = -0.5;
    }
    iVar5 = (int)(fVar10 + fVar7);
    *(int *)(param_1 + 0x48) = iVar5;
    local_1a0 = 0;
    local_198 = 0;
    (**(code **)(**(long **)(param_1 + 0x10) + 0xa8))
              (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),iVar5,&local_1a0);
    FUN_02f3e8d4(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x58,iVar5);
    plVar3 = *(long **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x48);
    plVar2 = (long *)plVar3[6];
    *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
    if (plVar2 != (long *)0x0) {
      plVar1 = (long *)plVar2[1];
      (**(code **)(*plVar2 + 8))();
      while (plVar1 != (long *)0x0) {
        plVar2 = (long *)plVar1[1];
        (**(code **)(*plVar1 + 8))(plVar1);
        plVar1 = plVar2;
      }
    }
    if ((*(byte *)((long)plVar3 + 0x5a) >> 1 & 1) != 0) {
      (**(code **)(*plVar3 + 0x70))(plVar3);
    }
    iVar5 = (int)plVar3[9] + -1;
    *(int *)(plVar3 + 9) = iVar5;
    if (iVar5 == 0) {
      if (plVar3[2] == 0) {
        FUN_02f37eb4(plVar3);
      }
      else {
        FUN_02f3b8c0(plVar3[2],plVar3);
        plVar3[2] = 0;
      }
      (**(code **)(*plVar3 + 0x50))(plVar3);
      (*DAT_0442d150)(0,plVar3);
    }
    local_90 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_68 = 1;
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),&local_190,0);
    local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
    plVar3 = (long *)0x0;
    if (local_88 != 0) {
      if (*(long *)(local_88 + 0x18) == 0) {
        plVar3 = (long *)(**(code **)(*local_80 + 0xd0))();
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)(**(code **)(*(long *)local_80[2] + 0xd0))();
        }
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = *(long **)(*(long *)(local_88 + 0x18) + 0x78);
        plVar3 = (long *)plVar2[0x10];
      }
      if (plVar2 != (long *)0x0) {
        plVar3 = plVar2;
      }
    }
    if (plVar3 != plVar4) {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    plVar4 = *(long **)(param_1 + 0x10);
  }
  iVar5 = (int)plVar4[9] + -1;
  *(int *)(plVar4 + 9) = iVar5;
  if (iVar5 == 0) {
    if (plVar4[2] == 0) {
      FUN_02f37eb4(plVar4);
    }
    else {
      FUN_02f3b8c0(plVar4[2],plVar4);
      plVar4[2] = 0;
    }
    (**(code **)(*plVar4 + 0x50))(plVar4);
    (*DAT_0442d150)(0,plVar4);
  }
  return;
}


