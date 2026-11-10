/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03104190; name: FUN_03104190
 */


void FUN_03104190(long param_1,long param_2,undefined4 param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar12;
  undefined8 uVar11;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_30;
  ulong uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar3 = *(long *)(param_2 + 8);
  if (*(int *)(param_2 + 0x28) == 0) {
    return;
  }
  uVar1 = *(int *)(param_2 + 0x2c) + 1;
  uVar8 = *(uint *)(lVar3 + 8);
  if ((~uVar8 & 0xffffff) == 0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
      uVar8 = *(uint *)(lVar3 + (ulong)uVar4 * 0x10 + 8);
    } while ((~uVar8 & 0xffffff) == 0);
  }
  else {
    uVar4 = 0;
  }
  do {
    lVar2 = *(long *)(*(long *)(param_2 + 8) + (ulong)(uVar8 & 0xffffff) * 0x10);
    uVar5 = (ulong)*(uint *)(lVar2 + 0x150) & 0xffffff;
    if (((((uint)uVar5 != 0xffffff) && ((uint)uVar5 < *(uint *)(*(long *)(lVar2 + 0x140) + 0x40)))
        && (lVar6 = *(long *)(*(long *)(lVar2 + 0x140) + 0x38),
           (*(byte *)(lVar6 + uVar5 * 0xc0 + 0x54) & 3) != 0)) &&
       (((*(uint *)(lVar6 + uVar5 * 0xc0 + 0x50) == *(uint *)(lVar2 + 0x150) &&
         ((*(byte *)(lVar6 + uVar5 * 0xc0 + 0x88) & 1) != 0)) && (*(int *)(lVar2 + 0x15d4) != 0))))
    {
      uStack_18 = param_4[1];
      uStack_20 = *param_4;
      local_30 = param_4[2];
      fVar14 = (float)((ulong)uStack_18 >> 0x20);
      uStack_28 = (ulong)(uint)fVar14;
      fVar12 = (float)((ulong)uStack_20 >> 0x20);
      if ((param_5 >> 2 & 1) == 0) {
        uVar11 = CONCAT44(-(uint)((float)((ulong)*(undefined8 *)(lVar2 + 0x1600) >> 0x20) <= fVar12)
                          ,-(uint)((float)*(undefined8 *)(lVar2 + 0x1600) <= (float)uStack_20));
        fVar17 = (float)*(undefined8 *)(lVar2 + 0x1608);
        fVar16 = (float)*(undefined8 *)(lVar2 + 0x1618);
        uVar15 = *(undefined8 *)(lVar2 + 0x1610);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x38) + uVar5 * 0xc0;
        fVar18 = *(float *)(*(long *)(lVar2 + 0x18) + 0x28);
        fVar18 = fVar18 + fVar18;
        fVar17 = (float)((ulong)*(undefined8 *)(lVar6 + 0x68) >> 0x20) - fVar18;
        uVar15 = CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20) + fVar18,
                          (float)*(undefined8 *)(lVar6 + 0x60) + fVar18);
        fVar16 = (float)*(undefined8 *)(lVar6 + 0x68) + fVar18;
        uVar11 = CONCAT44(-(uint)((float)((ulong)*(undefined8 *)(lVar6 + 0x70) >> 0x20) - fVar18 <=
                                 fVar12),
                          -(uint)((float)*(undefined8 *)(lVar6 + 0x70) - fVar18 <= (float)uStack_20)
                         );
      }
      iVar13 = -(uint)(fVar17 <= (float)uStack_18);
      iVar7 = -(uint)((float)local_30 <= (float)uVar15);
      iVar9 = -(uint)((float)((ulong)local_30 >> 0x20) <= (float)((ulong)uVar15 >> 0x20));
      iVar10 = -(uint)(fVar14 <= fVar16);
      uVar8 = CONCAT13((byte)((uint)iVar7 >> 0x18) & (byte)((ulong)uVar11 >> 0x18),
                       CONCAT12((byte)((uint)iVar7 >> 0x10) & (byte)((ulong)uVar11 >> 0x10),
                                CONCAT11((byte)((uint)iVar7 >> 8) & (byte)((ulong)uVar11 >> 8),
                                         (byte)iVar7 & (byte)uVar11)));
      if ((uVar8 & (uint)(CONCAT17((byte)((uint)iVar9 >> 0x18) & (byte)((ulong)uVar11 >> 0x38),
                                   CONCAT16((byte)((uint)iVar9 >> 0x10) &
                                            (byte)((ulong)uVar11 >> 0x30),
                                            CONCAT15((byte)((uint)iVar9 >> 8) &
                                                     (byte)((ulong)uVar11 >> 0x28),
                                                     CONCAT14((byte)iVar9 &
                                                              (byte)((ulong)uVar11 >> 0x20),uVar8)))
                                  ) >> 0x20) &
          CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                   CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                            CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar13 >> 8),
                                     (byte)iVar10 & (byte)iVar13)))) != 0) {
        FUN_030fe5a4(lVar2,&local_30,param_3,param_5 & 0xff);
      }
    }
    do {
      uVar4 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
      uVar8 = *(uint *)(lVar3 + (ulong)uVar4 * 0x10 + 8);
    } while ((~uVar8 & 0xffffff) == 0);
  } while( true );
}


