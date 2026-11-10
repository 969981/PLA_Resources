/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030eb214; name: FUN_030eb214
 */


void FUN_030eb214(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if (*(long *)(param_2 + 8) == 0) {
    lVar7 = 0;
  }
  else {
    FUN_032d5af0(*(long *)(param_2 + 8),"TtShiftWorldSubTask",0x13);
    lVar7 = *(long *)(param_2 + 8);
  }
  dVar15 = (double)(float)*(undefined8 *)(param_1 + 0x1ae0);
  dVar16 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x1ae0) >> 0x20);
  dVar17 = (double)(float)*(undefined8 *)(param_1 + 0x1ae8);
  lVar8 = *(long *)(*(long *)(param_1 + 0x1ad0) + 0x150);
  uStack_54 = *(undefined4 *)(param_2 + 0x18);
  local_68 = param_1 + 0x30;
  local_58 = 0;
  local_60 = 0;
  while ((local_68 != 0 && (iVar3 = FUN_0332c1f8(local_68,&local_68), -1 < iVar3))) {
    uVar1 = (uint)local_60;
    do {
      lVar6 = lVar8 + (ulong)uVar1 * 0x80;
      if (*(char *)(lVar6 + 0x5f) != '\0') {
        *(double *)(lVar6 + 0x18) = *(double *)(lVar6 + 0x18) + dVar16;
        *(double *)(lVar6 + 0x10) = *(double *)(lVar6 + 0x10) + dVar15;
        *(double *)(lVar6 + 0x20) = *(double *)(lVar6 + 0x20) + dVar17;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_60._4_4_);
  }
  uVar18 = *(undefined8 *)(param_1 + 0x1ae0);
  uStack_6c = *(undefined4 *)(param_2 + 0x18);
  fVar21 = (float)*(undefined8 *)(param_1 + 0x1ae8);
  fVar22 = *(float *)(param_1 + 0x1ae8);
  local_80 = param_1 + 0x11f0;
  local_70 = 0;
  local_78 = 0;
  lVar8 = *(long *)(param_1 + 0x1ad0);
  while( true ) {
    fVar19 = (float)uVar18;
    fVar20 = (float)((ulong)uVar18 >> 0x20);
    if ((local_80 == 0) || (iVar3 = FUN_0332c1f8(local_80,&local_80), iVar3 < 0)) break;
    uVar1 = (uint)local_78;
    do {
      puVar5 = (undefined8 *)(*(long *)(lVar8 + 0x80) + (long)(int)uVar1 * 0x18);
      uVar1 = uVar1 + 1;
      puVar5[1] = CONCAT44(fVar22 + (float)((ulong)puVar5[1] >> 0x20),fVar21 + (float)puVar5[1]);
      *puVar5 = CONCAT44(fVar20 + (float)((ulong)*puVar5 >> 0x20),fVar19 + (float)*puVar5);
      puVar5[2] = CONCAT44(fVar20 + (float)((ulong)puVar5[2] >> 0x20),fVar19 + (float)puVar5[2]);
    } while (uVar1 < local_78._4_4_);
  }
  uStack_84 = *(undefined4 *)(param_2 + 0x18);
  local_98 = param_1 + 0x910;
  local_90 = 0;
  local_88 = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x1ad0) + 0x38);
  while ((local_98 != 0 && (iVar3 = FUN_0332c1f8(local_98,&local_98), -1 < iVar3))) {
    uVar1 = (uint)local_90;
    do {
      uVar4 = (ulong)uVar1;
      uVar2 = *(uint *)(lVar8 + uVar4 * 0xc0 + 0x54);
      if ((uVar2 & 3) != 0) {
        if ((uVar2 >> 4 & 1) == 0) {
          lVar6 = lVar8 + uVar4 * 0xc0;
          dVar10 = (double)(float)*(undefined8 *)(lVar6 + 0x30) +
                   (double)(float)*(undefined8 *)(lVar6 + 0x40) + dVar15;
          dVar11 = (double)(float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20) +
                   (double)(float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) + dVar16;
          fVar12 = (float)dVar10;
          dVar9 = (double)(float)*(undefined8 *)(lVar6 + 0x38) +
                  (double)(float)*(undefined8 *)(lVar6 + 0x48) + dVar17;
          fVar13 = (float)dVar11;
          fVar14 = (float)dVar9;
          *(ulong *)(lVar6 + 0x30) = CONCAT44(fVar13,fVar12);
          *(float *)(lVar6 + 0x38) = fVar14;
          *(ulong *)(lVar6 + 0x40) =
               CONCAT44((float)(dVar11 - (double)fVar13),(float)(dVar10 - (double)fVar12));
          *(float *)(lVar6 + 0x48) = (float)(dVar9 - (double)fVar14);
        }
        lVar6 = lVar8 + uVar4 * 0xc0;
        *(ulong *)(lVar6 + 0x68) =
             CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(lVar6 + 0x68) >> 0x20),
                      fVar21 + (float)*(undefined8 *)(lVar6 + 0x68));
        *(ulong *)(lVar6 + 0x60) =
             CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20),
                      fVar19 + (float)*(undefined8 *)(lVar6 + 0x60));
        *(ulong *)(lVar6 + 0x70) =
             CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(lVar6 + 0x70) >> 0x20),
                      fVar19 + (float)*(undefined8 *)(lVar6 + 0x70));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_90._4_4_);
  }
  if (lVar7 != 0) {
    FUN_032d5b34(lVar7,&DAT_0390f40e);
  }
  return;
}


