/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0a4f0; name: FUN_02e0a4f0
 */


void FUN_02e0a4f0(long *param_1,long param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong __n;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  void *local_b0;
  undefined8 uStack_a8;
  ushort local_a0;
  ushort local_9e;
  void *local_98;
  undefined8 uStack_90;
  ushort local_88;
  ushort local_86;
  
  if (*(int *)((long)param_1 + 0xc) == 0x11) {
    uVar9 = *(uint *)(param_2 + 0x1a0);
    uVar2 = *(uint *)(param_2 + 0x1a8);
    if (uVar9 == 0xffffffff) {
LAB_02e0a86c:
      *(uint *)(param_2 + 0x1a0) = uVar2;
      uVar9 = uVar2;
LAB_02e0a878:
      *(uint *)(param_2 + 0x1a4) = uVar2;
    }
    else {
      if (uVar9 == 0) {
        if (*(short *)((long)param_1 + 0x12) == 0) {
          return;
        }
        goto LAB_02e0a86c;
      }
      if (*(short *)((long)param_1 + 0x12) != 0) goto LAB_02e0a86c;
      if (*(uint *)(param_2 + 0x1a4) < uVar2) {
        uVar9 = (uVar9 + uVar2) - *(uint *)(param_2 + 0x1a4);
        *(uint *)(param_2 + 0x1a0) = uVar9;
        goto LAB_02e0a878;
      }
    }
    uVar4 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
    uVar2 = uVar9;
    if (uVar4 <= uVar9) {
      uVar2 = uVar4;
    }
    iVar7 = uVar9 - uVar2;
    *(int *)(param_2 + 0x1a0) = iVar7;
    uVar8 = (ulong)*(ushort *)((long)param_1 + 0x12);
    iVar5 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
    if (iVar5 != 0) {
      bVar3 = *(byte *)(param_1 + 1);
      if (bVar3 == 0) {
        uVar8 = (ulong)(uint)*(ushort *)(param_1 + 2);
      }
      else {
        __n = (ulong)(uint)(iVar5 * 4);
        memset((void *)(*param_1 + uVar8 * 4),0,__n);
        uVar8 = (ulong)*(ushort *)(param_1 + 2);
        if (bVar3 != 1) {
          memset((void *)(*param_1 + uVar8 * 4 + (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,__n
                );
          uVar8 = (ulong)*(ushort *)(param_1 + 2);
          if (bVar3 != 2) {
            memset((void *)(*param_1 + uVar8 * 8 + (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,
                   __n);
            uVar8 = (ulong)*(ushort *)(param_1 + 2);
            if (bVar3 != 3) {
              lVar10 = (ulong)bVar3 - 3;
              lVar11 = 0xc;
              do {
                memset((void *)(*param_1 + lVar11 * uVar8 +
                               (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,__n);
                uVar8 = (ulong)*(ushort *)(param_1 + 2);
                lVar11 = lVar11 + 4;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
          }
        }
      }
      *(short *)((long)param_1 + 0x12) = (short)uVar8;
      iVar7 = *(int *)(param_2 + 0x1a0);
    }
    uVar9 = (uint)uVar8;
    if (iVar7 != 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1a0) = 0xffffffff;
    uVar9 = (uint)*(ushort *)((long)param_1 + 0x12);
  }
  if (uVar9 < 0x20) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 & 0xfffff000) == 0x8000) {
    return;
  }
  local_a0 = (ushort)uVar9;
  local_b0 = (void *)((long)param_3 + (ulong)(uVar9 << 1) * 4);
  uStack_90 = 0x2b00003102;
  uVar4 = uVar2 >> 0xc;
  uStack_a8 = 0x2b00003102;
  iVar7 = *(int *)(param_2 + 0x138);
  local_9e = local_a0;
  local_98 = param_3;
  local_88 = local_a0;
  local_86 = local_a0;
  if (iVar7 == 0) {
    pvVar6 = (void *)*param_1;
LAB_02e0a594:
    memcpy(param_3,pvVar6,(ulong)(uVar9 << 2));
  }
  else {
    if (iVar7 == 1) {
      pvVar6 = (void *)(*param_1 +
                       (ulong)(((uVar2 ^ 0xffffffff) & 0x5000) == 0) *
                       (ulong)*(ushort *)(param_1 + 2) * 8);
      goto LAB_02e0a594;
    }
    if (iVar7 == 2) {
      pvVar6 = (void *)*param_1;
      if (((uVar2 ^ 0xffffffff) & 0x5000) != 0) goto LAB_02e0a594;
      FUN_02e0aca0(0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,pvVar6,
                   (void *)((long)pvVar6 + (ulong)*(ushort *)(param_1 + 2) * 8),param_3,uVar9);
    }
    else if (iVar7 == 3) {
      memset(param_3,0,(ulong)(uVar9 << 2));
    }
  }
  iVar7 = *(int *)(param_2 + 0x13c);
  param_3 = (void *)((long)param_3 + (ulong)uVar9 * 4);
  uVar1 = uVar4 & 0xfffffff7;
  if (iVar7 == 0) {
    pvVar6 = (void *)*param_1;
    if ((uVar2 >> 0xd & 1) != 0) {
      uVar8 = (ulong)*(ushort *)(param_1 + 2);
LAB_02e0a5b8:
      pvVar6 = (void *)((long)pvVar6 + uVar8 * 4);
    }
  }
  else if (iVar7 == 1) {
    lVar11 = 8;
    if (((uVar2 ^ 0xffffffff) & 0x6000) != 0) {
      lVar11 = (ulong)((uVar2 - (uVar4 - uVar1 >> 3) & 0xff) != 1) << 2;
    }
    pvVar6 = (void *)(*param_1 + lVar11 * (ulong)*(ushort *)(param_1 + 2));
  }
  else {
    if (iVar7 != 2) {
      if (iVar7 == 3) {
        memset(param_3,0,(ulong)(uVar9 << 2));
      }
      goto LAB_02e0a5c8;
    }
    pvVar6 = (void *)*param_1;
    uVar8 = (ulong)*(ushort *)(param_1 + 2);
    if (((uVar2 >> 0xe & 1) != 0) && ((uVar2 >> 0xd & 1) != 0)) {
      FUN_02e0aca0(0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,(void *)((long)pvVar6 + uVar8 * 4),
                   (void *)((long)pvVar6 + uVar8 * 8),param_3,uVar9);
      goto LAB_02e0a5c8;
    }
    if ((uVar2 >> 0xd & 1) != 0) goto LAB_02e0a5b8;
  }
  memcpy(param_3,pvVar6,(ulong)(uVar9 << 2));
LAB_02e0a5c8:
  FUN_02e09080(param_2,&local_98,&local_b0,(undefined8 *)(param_2 + 0x160),
               (undefined8 *)(param_2 + 0x120),param_2 + 0x140,*(undefined1 *)(param_2 + 0x1b4));
  uVar4 = uVar4 & 0x210;
  if (uVar4 == 0) {
    fVar13 = 1.0;
    fVar15 = 1.0;
    fVar12 = 1.0;
    fVar14 = 1.0;
  }
  else {
    fVar14 = ABS(*(float *)(param_2 + 0x158) * 0.005 + 0.5);
    fVar12 = SQRT(fVar14);
    fVar14 = SQRT(1.0 - fVar14);
    fVar15 = ABS(*(float *)(param_2 + 0x198) * 0.005 + 0.5);
    fVar13 = SQRT(fVar15);
    fVar15 = SQRT(1.0 - fVar15);
  }
  pvVar6 = (void *)((long)local_b0 + (ulong)local_a0 * 4);
  if (uVar1 == 4) {
    FUN_02e0aef0(*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),
                 *(undefined4 *)(param_2 + 0x194),*(undefined4 *)(param_2 + 0x154),
                 *(undefined4 *)(param_2 + 0x194),*(undefined4 *)(param_2 + 0x154),*param_1,local_b0
                 ,pvVar6,uVar9);
  }
  else if ((uVar2 >> 0xc & 1) != 0) {
    FUN_02e0add0(*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),
                 *(float *)(param_2 + 0x194) * fVar14,*(float *)(param_2 + 0x154) * fVar15,*param_1,
                 local_b0,uVar9);
    FUN_02e0add0(*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),
                 *(float *)(param_2 + 0x194) * fVar14,*(float *)(param_2 + 0x154) * fVar15,
                 *param_1 + (ulong)*(ushort *)(param_1 + 2) * 4,pvVar6,uVar9);
  }
  if (uVar4 != 0) {
    iVar7 = 2;
    if ((uVar2 & 0x4000) != 0) {
      iVar7 = 3;
    }
    FUN_02e0a320(fVar12,fVar13,&local_98,&local_b0,param_1,param_2,iVar7,1);
    if (uVar4 == 0x210) {
      FUN_02e0a320(fVar12,fVar13,&local_98,&local_b0,param_1,param_2,iVar7 + 2,2);
    }
  }
  if (((uVar2 >> 0xe & 1) == 0) || (uVar1 == 4)) {
    uVar2 = *(uint *)(param_1 + 1);
  }
  else {
    FUN_02e0aae0(*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),
                 *param_1 + (ulong)*(ushort *)(param_1 + 2) * 8,uVar9);
    uVar2 = *(uint *)(param_1 + 1);
  }
  if (((uVar2 >> 0xf & 1) != 0) &&
     (lVar11 = *param_1 + (ulong)((uVar2 & 0xff) - 1) * (ulong)*(ushort *)(param_1 + 2) * 4,
     lVar11 != 0)) {
    FUN_02e0aae0(*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),lVar11,uVar9);
  }
  *(undefined8 *)(param_2 + 0x170) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x196) = *(undefined8 *)(param_2 + 0x156);
  *(undefined8 *)(param_2 + 0x188) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_2 + 0x140);
  return;
}


