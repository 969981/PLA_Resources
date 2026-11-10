/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d530c; name: FUN_001d530c
 */


void FUN_001d530c(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  int iVar22;
  undefined1 auVar19 [12];
  int iVar21;
  undefined1 auVar20 [16];
  int iVar23;
  int iVar25;
  int iVar26;
  undefined1 auVar24 [16];
  
  lVar2 = *(long *)(param_1 + 0x18);
  plVar3 = (long *)(lVar2 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x34);
  lVar6 = *plVar3 + (long)plVar3;
  lVar7 = 0;
  if (*plVar3 != 0) {
    lVar7 = lVar6;
  }
  if (uVar1 == param_2) {
    *(undefined4 *)(lVar2 + 0x34) = 0;
  }
  else {
    puVar4 = (undefined8 *)(lVar7 + (ulong)param_2 * 0x30);
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar16 = puVar4[3];
    uVar15 = puVar4[2];
    puVar5 = (uint *)(lVar7 + (ulong)param_2 * 0x30 + 0x20);
    lVar12 = lVar7 + (ulong)*puVar5 * 0x30;
    uVar9 = (ulong)*(uint *)(lVar12 + (ulong)(*(uint *)(lVar12 + 0x28) != param_2) * 4 + 0x24);
    lVar11 = lVar7 + uVar9 * 0x30;
    uVar18 = *(uint *)(lVar12 + 0x20);
    if (uVar18 == 0) {
      *(undefined4 *)(lVar6 + (long)(int)uVar1 * 0x30) = *(undefined4 *)(lVar2 + 0x28);
      lVar6 = 0;
      if (*(long *)(lVar2 + 0x18) != 0) {
        lVar6 = *(long *)(lVar2 + 0x18) + (long)plVar3;
      }
      *(int *)(lVar2 + 0x34) = (int)((ulong)(lVar11 - lVar6) >> 4) * -0x55555555;
      *(uint *)(lVar2 + 0x28) = uVar1;
      *(undefined4 *)(lVar7 + uVar9 * 0x30 + 0x20) = 0;
    }
    else {
      lVar7 = lVar7 + uVar9 * 0x30;
      *(uint *)(lVar7 + 0x20) = uVar18;
      lVar6 = 0;
      if (*(long *)(lVar2 + 0x18) != 0) {
        lVar6 = *(long *)(lVar2 + 0x18) + (long)plVar3;
      }
      lVar12 = lVar6 + (ulong)*(uint *)(lVar12 + 0x20) * 0x30;
      *(int *)(lVar12 + (ulong)(*(uint *)(lVar12 + 0x28) == *puVar5) * 4 + 0x24) =
           (int)((ulong)(lVar11 - lVar6) >> 4) * -0x55555555;
      uVar1 = *puVar5;
      *(undefined4 *)((long)plVar3 + (long)(int)uVar1 * 0x30 + *(long *)(lVar2 + 0x18)) =
           *(undefined4 *)(lVar2 + 0x28);
      *(uint *)(lVar2 + 0x28) = uVar1;
      lVar11 = *(long *)(lVar2 + 0x18);
      lVar6 = 0;
      if (lVar11 != 0) {
        lVar6 = lVar11 + (long)plVar3;
      }
      lVar6 = lVar6 + (ulong)*(uint *)(lVar7 + 0x20) * 0x30;
      do {
        lVar7 = 0;
        if (lVar11 != 0) {
          lVar7 = lVar11 + (long)plVar3;
        }
        uVar1 = *(uint *)(lVar6 + 0x20);
        puVar4 = (undefined8 *)
                 (lVar7 + (ulong)(uint)((int)((ulong)(lVar6 - lVar7) >> 4) * -0x55555555) * 0x30);
        pauVar10 = (undefined1 (*) [16])(lVar7 + (ulong)*(uint *)((long)puVar4 + 0x24) * 0x30);
        pauVar8 = (undefined1 (*) [16])(lVar7 + (ulong)*(uint *)(puVar4 + 5) * 0x30);
        auVar24 = NEON_fmax(pauVar10[1],pauVar8[1],4);
        auVar20 = NEON_fmin(*pauVar10,*pauVar8,4);
        puVar4[1] = auVar20._8_8_;
        *puVar4 = auVar20._0_8_;
        puVar4[3] = auVar24._8_8_;
        puVar4[2] = auVar24._0_8_;
        if (uVar1 == 0) break;
        iVar17 = -(uint)(auVar20._0_4_ <= (float)uVar13);
        iVar21 = -(uint)(auVar20._4_4_ <= (float)((ulong)uVar13 >> 0x20));
        iVar22 = -(uint)(auVar20._8_4_ <= (float)uVar14);
        iVar23 = -(uint)((float)uVar15 <= auVar24._0_4_);
        iVar25 = -(uint)((float)((ulong)uVar15 >> 0x20) <= auVar24._4_4_);
        iVar26 = -(uint)((float)uVar16 <= auVar24._8_4_);
        uVar18 = CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                          CONCAT12((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                                   CONCAT11((byte)((uint)iVar23 >> 8) & (byte)((uint)iVar17 >> 8),
                                            (byte)iVar23 & (byte)iVar17)));
        auVar19._0_8_ =
             CONCAT17((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                      CONCAT16((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                               CONCAT15((byte)((uint)iVar25 >> 8) & (byte)((uint)iVar21 >> 8),
                                        CONCAT14((byte)iVar25 & (byte)iVar21,uVar18))));
        auVar19[8] = (byte)iVar26 & (byte)iVar22;
        auVar19[9] = (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar22 >> 8);
        auVar19[10] = (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar22 >> 0x10);
        auVar19[0xb] = (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar22 >> 0x18);
        if ((uVar18 & (uint)((ulong)auVar19._0_8_ >> 0x20) & auVar19._8_4_) != 0) break;
        lVar11 = *plVar3;
        lVar6 = 0;
        if (lVar11 != 0) {
          lVar6 = lVar11 + (long)plVar3;
        }
        lVar6 = lVar6 + (ulong)uVar1 * 0x30;
      } while (lVar6 != 0);
    }
  }
  *(undefined4 *)((long)plVar3 + (long)(int)param_2 * 0x30 + *(long *)(lVar2 + 0x18)) =
       *(undefined4 *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = param_2;
  *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + -1;
  return;
}


