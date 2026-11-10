/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03079200; name: FUN_03079200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03079200(long param_1,undefined8 param_2,long *param_3,long param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined1 auStack_100 [64];
  undefined8 auStack_c0 [8];
  long local_80;
  long local_78;
  int local_70;
  uint local_6c;
  
  uVar15 = param_4 - (long)param_3;
  iVar13 = (int)(uVar15 >> 4);
  if (iVar13 == 0) {
    return;
  }
  iVar8 = 0;
  if (param_5 != (long *)0x0) {
    plVar11 = param_5;
    do {
      iVar8 = *(int *)((long)plVar11 + 0xc) + iVar8;
      plVar11 = (long *)plVar11[2];
    } while (plVar11 != (long *)0x0);
  }
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar9;
  }
  lVar9 = *(long *)(lVar9 + 8);
  uVar7 = (ulong)(int)((iVar8 + iVar13) * 0x60 + 0x7fU & 0xffffff80);
  if (uVar7 <= *(ulong *)(lVar9 + 0x10)) {
    lVar6 = *(long *)(lVar9 + 0x18);
    if (lVar6 + uVar7 <= *(ulong *)(lVar9 + 0x20)) {
      *(ulong *)(lVar9 + 0x18) = lVar6 + uVar7;
      goto LAB_030792b4;
    }
  }
  lVar6 = FUN_032ce670();
LAB_030792b4:
  uVar2 = *(uint *)(*param_3 + 4);
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  if (0 < iVar13) {
    uVar10 = uVar15 >> 4 & 0xffffffff;
    puVar14 = (undefined8 *)(lVar6 + 0x50);
    param_3 = param_3 + 1;
    do {
      lVar12 = *param_3;
      uVar23 = *(undefined8 *)(lVar12 + 0x18);
      uVar19 = *(undefined8 *)(lVar12 + 0x10);
      puVar14[-3] = uVar23;
      puVar14[-4] = uVar19;
      bVar4 = *(byte *)(*(long *)(lVar12 + 0x98) + 0x14);
      *(undefined1 *)(puVar14 + -8) = 0;
      puVar14[-7] = lVar12;
      *(undefined2 *)((long)puVar14 + -0x3e) = 0;
      bVar4 = bVar4 & 3;
      *(byte *)((long)puVar14 + -0x3f) = bVar4;
      puVar14[-6] = *(undefined8 *)(lVar12 + 0x98);
      *(undefined4 *)(puVar14 + -10) = *(undefined4 *)(lVar12 + 4);
      uVar20 = *(undefined8 *)(lVar12 + 0x80);
      puVar14[1] = *(undefined8 *)(lVar12 + 0x88);
      *puVar14 = uVar20;
      *(undefined4 *)((long)puVar14 + -0x3c) = *(undefined4 *)param_3[-1];
      if (*(char *)(lVar12 + 0x94) != '\0') {
        *(undefined1 *)(puVar14 + -8) = 1;
      }
      uVar25 = *(undefined8 *)(lVar12 + 0x28);
      uVar20 = *(undefined8 *)(lVar12 + 0x20);
      fVar16 = (float)uVar19 * (float)uVar20 +
               (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar20 >> 0x20) +
               (float)uVar23 * (float)uVar25;
      puVar14[-1] = uVar25;
      puVar14[-2] = uVar20;
      if (0.99607843 < fVar16) {
        *(undefined1 *)((long)puVar14 + -0x3f) = 3;
        puVar14[-3] = uVar25;
        puVar14[-4] = uVar20;
        uVar1 = 0;
        if (*(uint *)(lVar12 + 0xa0) != 0xffffffff) {
          uVar1 = *(uint *)(lVar12 + 0xa0);
        }
LAB_03079314:
        lVar12 = (ulong)uVar1 << 0x20;
      }
      else {
        uVar1 = 0;
        if (*(uint *)(lVar12 + 0xa0) != 0xffffffff) {
          uVar1 = *(uint *)(lVar12 + 0xa0);
        }
        if (bVar4 == 3) goto LAB_03079314;
        fVar16 = *(float *)(lVar12 + 4) +
                 fVar16 * (float)((uint)*(ushort *)(*(long *)(lVar12 + 0x98) + 0x38) << 0x10) *
                          -0.14285715;
        lVar12 = CONCAT44(uVar1,((int)fVar16 >> 0x1f | 0x80000000U) ^ (uint)fVar16);
      }
      uVar10 = uVar10 - 1;
      puVar14[-9] = lVar12;
      puVar14 = puVar14 + 0xc;
      param_3 = param_3 + 2;
    } while (uVar10 != 0);
  }
  uVar23 = _UNK_03889708;
  uVar19 = _DAT_03889700;
  iVar8 = 0;
  if (param_5 == (long *)0x0) {
LAB_0307958c:
    FUN_0307b3e0(param_1,lVar9 + ((ulong)uVar2 & 0xffffff) * 0xc0,param_2,lVar6,iVar8 + iVar13,
                 *(undefined8 *)(*(long *)(param_1 + 8) + 0x650));
    lVar9 = *(long *)(lVar5 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar9;
    }
    lVar5 = *(long *)(lVar9 + 8);
    if (((*(ulong *)(lVar5 + 0x10) < uVar7) || (*(long *)(lVar5 + 0x18) != lVar6 + uVar7)) ||
       (*(long *)(lVar5 + 0x28) == lVar6)) {
      FUN_032cedf0(lVar5,lVar6);
    }
    else {
      *(long *)(lVar5 + 0x18) = lVar6;
    }
    return;
  }
  iVar18 = *(int *)((long)param_5 + 0xc);
  if (iVar18 != 0) goto LAB_03079454;
  do {
    local_78 = 0;
    while( true ) {
      param_5 = (long *)param_5[2];
      if (param_5 == (long *)0x0) goto LAB_0307958c;
      iVar18 = *(int *)((long)param_5 + 0xc);
      if (iVar18 == 0) break;
LAB_03079454:
      local_80 = *param_5;
      lVar12 = local_80 + (ulong)*(ushort *)(param_5 + 1) + 0x20;
      local_6c = (uint)*(ushort *)((long)param_5 + 10);
      local_70 = iVar18 - local_6c;
      if (*(ushort *)((long)param_5 + 10) == 0) break;
      puVar14 = (undefined8 *)
                (lVar6 + 0x50 + (((long)(uVar15 * 0x10000000) >> 0x20) + (long)iVar8) * 0x60);
      local_78 = lVar12;
      do {
        puVar14[-7] = 0;
        uVar20 = *(undefined8 *)(lVar12 + 0x10);
        puVar14[-3] = *(undefined8 *)(lVar12 + 0x18);
        puVar14[-4] = uVar20;
        uVar20 = *(undefined8 *)(lVar12 + 0x10);
        puVar14[-1] = *(undefined8 *)(lVar12 + 0x18);
        puVar14[-2] = uVar20;
        *(byte *)((long)puVar14 + -0x3f) = *(byte *)(lVar12 + 6) >> 3 & 3;
        uVar17 = FUN_03025700(lVar12,param_2);
        *(undefined4 *)(puVar14 + -10) = uVar17;
        *(undefined1 *)(puVar14 + -8) = 5;
        puVar14[-6] = *(undefined8 *)(lVar12 + 0x20);
        FUN_03025120(param_2,lVar12,
                     *(long *)(*(long *)(param_1 + 8) + 0x150) +
                     (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x38) +
                                      ((ulong)*(uint *)(lVar12 + 8) & 0xffffff) * 0xc0 + 0x80) *
                     0x80,0,auStack_100);
        fVar16 = *(float *)((ulong)auStack_100 | 4);
        iVar18 = -(uint)(auStack_100._48_4_ == fVar16);
        iVar21 = -(uint)(auStack_100._52_4_ == fVar16);
        iVar22 = -(uint)(auStack_100._56_4_ == fVar16);
        iVar24 = -(uint)(auStack_100._60_4_ == fVar16);
        iVar18 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((ulong)uVar19 >> 0x18),
                          CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((ulong)uVar19 >> 0x10),
                                   CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((ulong)uVar19 >> 8),
                                            (byte)iVar18 & (byte)uVar19)));
        iVar22 = CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((ulong)uVar23 >> 0x18),
                          CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((ulong)uVar23 >> 0x10),
                                   CONCAT11((byte)((uint)iVar22 >> 8) & (byte)((ulong)uVar23 >> 8),
                                            (byte)iVar22 & (byte)uVar23)));
        uVar20 = auStack_c0
                 [(long)(char)(&DAT_03aadfb0)
                              [(uint)(iVar18 + (int)(CONCAT17((byte)((uint)iVar21 >> 0x18) &
                                                              (byte)((ulong)uVar19 >> 0x38),
                                                              CONCAT16((byte)((uint)iVar21 >> 0x10)
                                                                       & (byte)((ulong)uVar19 >>
                                                                               0x30),
                                                                       CONCAT15((byte)((uint)iVar21
                                                                                      >> 8) &
                                                                                (byte)((ulong)uVar19
                                                                                      >> 0x28),
                                                                                CONCAT14((byte)
                                                  iVar21 & (byte)((ulong)uVar19 >> 0x20),iVar18))))
                                                  >> 0x20) +
                                     iVar22 + (int)(CONCAT17((byte)((uint)iVar24 >> 0x18) &
                                                             (byte)((ulong)uVar23 >> 0x38),
                                                             CONCAT16((byte)((uint)iVar24 >> 0x10) &
                                                                      (byte)((ulong)uVar23 >> 0x30),
                                                                      CONCAT15((byte)((uint)iVar24
                                                                                     >> 8) &
                                                                               (byte)((ulong)uVar23
                                                                                     >> 0x28),
                                                                               CONCAT14((byte)iVar24
                                                                                        & (byte)((
                                                  ulong)uVar23 >> 0x20),iVar22)))) >> 0x20))] * 2];
        puVar14[1] = auStack_c0
                     [(long)(char)(&DAT_03aadfb0)
                                  [(uint)(iVar18 + (int)(CONCAT17((byte)((uint)iVar21 >> 0x18) &
                                                                  (byte)((ulong)uVar19 >> 0x38),
                                                                  CONCAT16((byte)((uint)iVar21 >>
                                                                                 0x10) &
                                                                           (byte)((ulong)uVar19 >>
                                                                                 0x30),
                                                                           CONCAT15((byte)((uint)
                                                  iVar21 >> 8) & (byte)((ulong)uVar19 >> 0x28),
                                                  CONCAT14((byte)iVar21 &
                                                           (byte)((ulong)uVar19 >> 0x20),iVar18))))
                                                  >> 0x20) +
                                         iVar22 + (int)(CONCAT17((byte)((uint)iVar24 >> 0x18) &
                                                                 (byte)((ulong)uVar23 >> 0x38),
                                                                 CONCAT16((byte)((uint)iVar24 >>
                                                                                0x10) &
                                                                          (byte)((ulong)uVar23 >>
                                                                                0x30),
                                                                          CONCAT15((byte)((uint)
                                                  iVar24 >> 8) & (byte)((ulong)uVar23 >> 0x28),
                                                  CONCAT14((byte)iVar24 &
                                                           (byte)((ulong)uVar23 >> 0x20),iVar22))))
                                                  >> 0x20))] * 2 + 1];
        *puVar14 = uVar20;
        uVar3 = *(uint *)(*(long *)(lVar12 + 0x20) + 4);
        uVar1 = 0;
        if (uVar3 != 0xffffffff) {
          uVar1 = uVar3;
        }
        puVar14[-9] = (ulong)uVar1 << 0x20;
        local_6c = local_6c - 1;
        if ((int)local_6c < 1) {
          lVar12 = FUN_032bf9c8(&local_80,1);
        }
        else {
          lVar12 = local_78 + (ulong)*(byte *)(lVar12 + 3) * 0x10;
          local_78 = lVar12;
        }
        puVar14 = puVar14 + 0xc;
        iVar8 = iVar8 + 1;
      } while (lVar12 != 0);
    }
  } while( true );
}


