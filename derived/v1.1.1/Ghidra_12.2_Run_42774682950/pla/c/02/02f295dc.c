/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f295dc; name: FUN_02f295dc
 */


void FUN_02f295dc(long param_1,long *param_2,long param_3)

{
  size_t __n;
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  
  if (*(short *)((long)param_2 + 0x12) != 0) {
    *(undefined4 *)(param_1 + 0x84) = 0x2d;
    if (*(int *)(param_1 + 0x340) == 4) {
      *(undefined4 *)(param_1 + 0x340) = 1;
    }
    uVar4 = *(ushort *)((long)param_2 + 0x12);
    uVar10 = *(ushort *)(param_2 + 2);
    if ((uint)uVar10 != (uint)uVar4) {
      bVar3 = *(byte *)(param_2 + 1);
      if (bVar3 != 0) {
        __n = (ulong)(~(uint)uVar4 + (uint)uVar10) * 4 + 4;
        memset((void *)(*param_2 + (ulong)uVar4 * 4),0,__n);
        uVar10 = *(ushort *)(param_2 + 2);
        if (bVar3 != 1) {
          lVar11 = (ulong)bVar3 - 1;
          lVar12 = 4;
          do {
            memset((void *)(*param_2 + (ulong)uVar4 * 4 + lVar12 * (ulong)uVar10),0,__n);
            uVar10 = *(ushort *)(param_2 + 2);
            lVar12 = lVar12 + 4;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      *(ushort *)((long)param_2 + 0x12) = uVar10;
    }
    fVar14 = (float)NEON_fminnm(*(undefined4 *)(param_3 + 0xd8),0x42c80000);
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (fVar14 != *(float *)(param_3 + 0x134)) {
      *(undefined1 *)(param_3 + 0x13b) = 1;
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x138));
      fVar5 = (float)NEON_ucvtf((uint)DAT_042ab26c);
      *(float *)(param_3 + 0x130) =
           ((*(float *)(param_3 + 0x134) - *(float *)(param_3 + 0x130)) * fVar6) / fVar5 +
           *(float *)(param_3 + 0x130);
      *(float *)(param_3 + 0x134) = fVar14;
    }
    lVar12 = param_1 + 0x78;
    fVar14 = (float)NEON_fminnm(*(undefined4 *)(param_3 + 0xdc),0x42c80000);
    if (fVar14 == *(float *)(param_3 + 0x144)) {
      lVar11 = *(long *)(param_1 + 800);
    }
    else {
      *(undefined1 *)(param_3 + 0x14b) = 1;
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x148));
      fVar5 = (float)NEON_ucvtf((uint)DAT_042ab26c);
      *(float *)(param_3 + 0x140) =
           ((*(float *)(param_3 + 0x144) - *(float *)(param_3 + 0x140)) * fVar6) / fVar5 +
           *(float *)(param_3 + 0x140);
      *(float *)(param_3 + 0x144) = fVar14;
      lVar11 = *(long *)(param_1 + 800);
    }
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
      plVar9 = (long *)(param_3 + 0xe0);
      local_90 = (void *)CONCAT44(*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x14),
                                  *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x10));
      uVar4 = *(ushort *)(param_1 + 0x88);
      uVar8 = FUN_02f238e0(plVar9);
      if (((uVar8 & 1) == 0) ||
         (((*plVar9 != 0 && (*(long *)(param_3 + 0x108) != 0)) &&
          ((*(char *)(param_3 + 0x13e) == '\0' || (*(char *)(param_3 + 0x14e) == '\0')))))) {
        FUN_02f1a590(1.0 / (float)uVar4,param_2,lVar12,&local_90,*(undefined8 *)(param_3 + 0x38),
                     *(undefined8 *)(param_3 + 0x30),uVar4,plVar9);
      }
      else {
        uVar1 = *(undefined8 *)(param_3 + 0x30);
        uVar2 = *(undefined8 *)(param_3 + 0x38);
        bVar3 = *(byte *)(param_2 + 1);
        if ((bVar3 != 0) && (FUN_02f23748(plVar9,param_2,0), bVar3 != 1)) {
          FUN_02f23748(plVar9,param_2,1);
          if (bVar3 != 2) {
            uVar13 = 2;
            do {
              FUN_02f23748(plVar9,param_2,uVar13);
              uVar13 = uVar13 + 1;
            } while (bVar3 != uVar13);
          }
        }
        FUN_02f1ba60(1.0 / (float)uVar4,param_2,lVar12,&local_90,uVar2,uVar1,uVar4);
      }
      *(ushort *)(param_1 + 0x8a) = uVar4;
    }
    else {
      local_90 = (void *)0x0;
      local_84 = 0x2b;
      local_7c = 0;
      local_88 = (undefined4)param_2[1];
      local_80 = (uint)*(ushort *)(param_2 + 2);
      iVar7 = FUN_02ea6570(&local_90);
      if (iVar7 == 1) {
        memcpy(local_90,(void *)*param_2,
               (ulong)*(ushort *)(param_2 + 2) * (ulong)*(byte *)(param_2 + 1) * 4);
        local_80 = CONCAT22((short)param_2[2],(undefined2)local_80);
        FUN_02f21628(param_3 + 0xe0,&local_90);
      }
      else {
        local_90 = (void *)*param_2;
        local_88 = (undefined4)param_2[1];
        local_80 = CONCAT22((short)param_2[2],(short)param_2[2]);
      }
      plVar9 = *(long **)(*(long *)(param_1 + 800) + 0x60);
      (**(code **)(*plVar9 + 0x50))
                (*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                 *(undefined4 *)(param_3 + 0x18),(short)*(undefined4 *)(param_3 + 0x1c),plVar9,
                 param_3,&local_90,lVar12);
      if (iVar7 == 1) {
        FUN_02ea6640(&local_90);
      }
    }
  }
  return;
}


