/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9b394; name: FUN_02f9b394
 */


void FUN_02f9b394(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ushort uVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  int iVar24;
  undefined1 auVar21 [12];
  int iVar23;
  undefined1 auVar22 [16];
  int iVar25;
  int iVar27;
  int iVar28;
  undefined1 auVar26 [16];
  
  if (*(char *)(param_1 + 0x100) == '\x02') {
    FUN_02f9a080();
    return;
  }
  if (0 < (int)param_3) {
    uVar10 = 0;
    plVar1 = (long *)(param_1 + 200);
    do {
      puVar11 = (ushort *)
                (param_1 + 0x48 +
                (ulong)*(ushort *)(param_2 + uVar10 * 2) * 0x40 + *(long *)(param_1 + 0x48) + 0x1c);
      uVar7 = *puVar11;
      uVar6 = *(ushort *)(param_1 + 0xe4);
      lVar14 = *plVar1 + (long)plVar1;
      lVar3 = 0;
      if (*plVar1 != 0) {
        lVar3 = lVar14;
      }
      if (uVar6 == uVar7) {
        *(undefined2 *)(param_1 + 0xe4) = 0;
      }
      else {
        puVar2 = (undefined8 *)(lVar3 + (ulong)uVar7 * 0x20);
        lVar12 = lVar3 + (ulong)*(ushort *)((long)puVar2 + 0xc) * 0x20;
        lVar3 = lVar3 + (ulong)*(ushort *)
                                (lVar12 + (ulong)(*(ushort *)(lVar12 + 0x1e) != uVar7) * 2 + 0x1c) *
                        0x20;
        if (*(ushort *)(lVar12 + 0xc) == 0) {
          *(undefined2 *)(lVar14 + (ulong)uVar6 * 0x20) = *(undefined2 *)(param_1 + 0xd8);
          iVar19 = 0;
          if (*(long *)(param_1 + 200) != 0) {
            iVar19 = (int)*(long *)(param_1 + 200) + (int)plVar1;
          }
          *(ushort *)(param_1 + 0xd8) = uVar6;
          *(short *)(param_1 + 0xe4) = (short)((uint)((int)lVar3 - iVar19) >> 5);
          *(undefined4 *)(lVar3 + 0xc) = 0x3f000000;
        }
        else {
          uVar16 = puVar2[1];
          uVar15 = *puVar2;
          uVar18 = puVar2[3];
          uVar17 = puVar2[2];
          *(uint *)(lVar3 + 0xc) = *(ushort *)(lVar12 + 0xc) | 0x3f000000;
          lVar9 = *plVar1;
          lVar14 = 0;
          if (lVar9 != 0) {
            lVar14 = lVar9 + (long)plVar1;
          }
          lVar13 = 0;
          if (lVar9 != 0) {
            lVar13 = lVar9 + (long)plVar1;
          }
          lVar13 = lVar13 + (ulong)*(ushort *)(lVar12 + 0xc) * 0x20;
          *(short *)(lVar13 + (ulong)((uint)*(ushort *)(lVar13 + 0x1e) ==
                                     (*(uint *)((long)puVar2 + 0xc) & 0xffff)) * 2 + 0x1c) =
               (short)((ulong)(lVar3 - lVar14) >> 5);
          uVar20 = *(uint *)((long)puVar2 + 0xc);
          *(undefined2 *)((long)plVar1 + ((ulong)uVar20 & 0xffff) * 0x20 + *(long *)(param_1 + 200))
               = *(undefined2 *)(param_1 + 0xd8);
          *(short *)(param_1 + 0xd8) = (short)uVar20;
          lVar12 = *(long *)(param_1 + 200);
          lVar14 = 0;
          if (lVar12 != 0) {
            lVar14 = lVar12 + (long)plVar1;
          }
          lVar14 = lVar14 + (ulong)*(ushort *)(lVar3 + 0xc) * 0x20;
          do {
            uVar6 = *(ushort *)(lVar14 + 0xc);
            lVar3 = 0;
            if (lVar12 != 0) {
              lVar3 = lVar12 + (long)plVar1;
            }
            lVar9 = 0;
            if (lVar12 != 0) {
              lVar9 = lVar12 + (long)plVar1;
            }
            puVar2 = (undefined8 *)(lVar9 + ((ulong)(lVar14 - lVar3) >> 5 & 0xffff) * 0x20);
            pauVar4 = (undefined1 (*) [16])(lVar9 + (ulong)*(ushort *)((long)puVar2 + 0x1c) * 0x20);
            pauVar5 = (undefined1 (*) [16])(lVar9 + (ulong)*(ushort *)((long)puVar2 + 0x1e) * 0x20);
            auVar26 = NEON_fmin(*pauVar4,*pauVar5,4);
            auVar22._12_4_ = 0;
            auVar22._0_12_ = *(undefined1 (*) [12])pauVar4[1];
            auVar8._12_4_ = 0;
            auVar8._0_12_ = *(undefined1 (*) [12])pauVar5[1];
            auVar22 = NEON_fmax(auVar22,auVar8,4);
            puVar2[1] = CONCAT44(*(undefined4 *)((long)puVar2 + 0xc),auVar26._8_4_);
            *puVar2 = auVar26._0_8_;
            puVar2[3] = CONCAT44(*(undefined4 *)((long)puVar2 + 0x1c),auVar22._8_4_);
            puVar2[2] = auVar22._0_8_;
            if (uVar6 == 0) break;
            iVar25 = -(uint)(auVar26._0_4_ <= (float)uVar15);
            iVar27 = -(uint)(auVar26._4_4_ <= (float)((ulong)uVar15 >> 0x20));
            iVar28 = -(uint)(auVar26._8_4_ <= (float)uVar16);
            iVar19 = -(uint)((float)uVar17 <= auVar22._0_4_);
            iVar23 = -(uint)((float)((ulong)uVar17 >> 0x20) <= auVar22._4_4_);
            iVar24 = -(uint)((float)uVar18 <= auVar22._8_4_);
            uVar20 = CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                              CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                       CONCAT11((byte)((uint)iVar19 >> 8) &
                                                (byte)((uint)iVar25 >> 8),
                                                (byte)iVar19 & (byte)iVar25)));
            auVar21._0_8_ =
                 CONCAT17((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                          CONCAT16((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                                   CONCAT15((byte)((uint)iVar23 >> 8) & (byte)((uint)iVar27 >> 8),
                                            CONCAT14((byte)iVar23 & (byte)iVar27,uVar20))));
            auVar21[8] = (byte)iVar24 & (byte)iVar28;
            auVar21[9] = (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar28 >> 8);
            auVar21[10] = (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
            auVar21[0xb] = (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
            if ((uVar20 & (uint)((ulong)auVar21._0_8_ >> 0x20) & auVar21._8_4_) != 0) break;
            lVar12 = *plVar1;
            if (lVar12 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = lVar12 + (long)plVar1;
            }
            lVar14 = lVar14 + (ulong)uVar6 * 0x20;
          } while (lVar14 != 0);
        }
      }
      *(undefined2 *)((long)plVar1 + (ulong)uVar7 * 0x20 + *(long *)(param_1 + 200)) =
           *(undefined2 *)(param_1 + 0xd8);
      *(ushort *)(param_1 + 0xd8) = uVar7;
      uVar10 = uVar10 + 1;
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
      *puVar11 = 0xffff;
    } while (uVar10 != param_3);
  }
  return;
}


