/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5beb0; name: FUN_02f5beb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f5beb0(long *param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  float fVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  float fVar15;
  byte bVar16;
  float fVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined4 local_420 [256];
  undefined4 *local_20;
  
  uVar4 = _UNK_03889708;
  uVar3 = _DAT_03889700;
  local_20 = (undefined4 *)((ulong)local_420 | 4);
  do {
    puVar5 = local_20 + -1;
    puVar1 = (undefined8 *)((long)param_1 + (long)(int)local_20[-1] * 0x80 + *param_1);
    if (*param_2 == '\0') {
      fVar11 = (float)*(undefined8 *)(param_2 + 0x10);
      fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
      fVar17 = (float)*(undefined8 *)(param_2 + 0x18);
      bVar10 = -(fVar11 <= (float)puVar1[2]) & -((float)*puVar1 <= fVar11) &
               -((float)puVar1[4] <= fVar15) & -(fVar15 <= (float)puVar1[6]) &
               -((float)puVar1[8] <= fVar17) & -(fVar17 <= (float)puVar1[10]);
      bVar14 = -(fVar11 <= (float)((ulong)puVar1[2] >> 0x20)) &
               -((float)((ulong)*puVar1 >> 0x20) <= fVar11) &
               -((float)((ulong)puVar1[4] >> 0x20) <= fVar15) &
               -(fVar15 <= (float)((ulong)puVar1[6] >> 0x20)) &
               -((float)((ulong)puVar1[8] >> 0x20) <= fVar17) &
               -(fVar17 <= (float)((ulong)puVar1[10] >> 0x20));
      bVar16 = -(fVar11 <= (float)puVar1[3]) & -((float)puVar1[1] <= fVar11) &
               -((float)puVar1[5] <= fVar15) & -(fVar15 <= (float)puVar1[7]) &
               -((float)puVar1[9] <= fVar17) & -(fVar17 <= (float)puVar1[0xb]);
      bVar19 = -(fVar11 <= (float)((ulong)puVar1[3] >> 0x20)) &
               -((float)((ulong)puVar1[1] >> 0x20) <= fVar11) &
               -((float)((ulong)puVar1[5] >> 0x20) <= fVar15) &
               -(fVar15 <= (float)((ulong)puVar1[7] >> 0x20)) &
               -((float)((ulong)puVar1[9] >> 0x20) <= fVar17) &
               -(fVar17 <= (float)((ulong)puVar1[0xb] >> 0x20));
      bVar20 = -((int)puVar1[0xc] == (int)*(undefined8 *)(param_2 + 0x20)) & bVar10;
      bVar21 = -((int)((ulong)puVar1[0xc] >> 0x20) ==
                (int)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20)) & bVar14;
      bVar22 = -((int)puVar1[0xd] == (int)*(undefined8 *)(param_2 + 0x28)) & bVar16;
      bVar23 = -((int)((ulong)puVar1[0xd] >> 0x20) ==
                (int)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20)) & bVar19;
      bVar8 = (byte)((ulong)uVar3 >> 0x20);
      bVar9 = (byte)((ulong)uVar4 >> 0x20);
      if (((int)((uint)(byte)(bVar20 | bVar21 | bVar22 | bVar23) << 0x1f) < 0) &&
         (*(char *)(puVar1 + 0xe) != '\0')) {
        bVar10 = (byte)((int)((uint)bVar20 << 0x1f) >> 0x1f);
        iVar13 = CONCAT13(bVar10 & (byte)((ulong)uVar3 >> 0x18),
                          CONCAT12(bVar10 & (byte)((ulong)uVar3 >> 0x10),
                                   CONCAT11(bVar10 & (byte)((ulong)uVar3 >> 8),bVar10 & (byte)uVar3)
                                  ));
        bVar10 = (byte)((int)((uint)bVar21 << 0x1f) >> 0x1f);
        bVar14 = (byte)((int)((uint)bVar22 << 0x1f) >> 0x1f);
        iVar18 = CONCAT13(bVar14 & (byte)((ulong)uVar4 >> 0x18),
                          CONCAT12(bVar14 & (byte)((ulong)uVar4 >> 0x10),
                                   CONCAT11(bVar14 & (byte)((ulong)uVar4 >> 8),bVar14 & (byte)uVar4)
                                  ));
        bVar14 = (byte)((int)((uint)bVar23 << 0x1f) >> 0x1f);
        iVar13 = iVar13 + (int)(CONCAT17(bVar10 & (byte)((ulong)uVar3 >> 0x38),
                                         CONCAT16(bVar10 & (byte)((ulong)uVar3 >> 0x30),
                                                  CONCAT15(bVar10 & (byte)((ulong)uVar3 >> 0x28),
                                                           CONCAT14(bVar10 & bVar8,iVar13)))) >>
                               0x20) +
                 iVar18 + (int)(CONCAT17(bVar14 & (byte)((ulong)uVar4 >> 0x38),
                                         CONCAT16(bVar14 & (byte)((ulong)uVar4 >> 0x30),
                                                  CONCAT15(bVar14 & (byte)((ulong)uVar4 >> 0x28),
                                                           CONCAT14(bVar14 & bVar9,iVar18)))) >>
                               0x20);
        if (iVar13 == 2) {
          *(undefined4 *)((long)puVar1 + 4) = 0x7f7fffee;
          puVar6 = (undefined8 *)((long)puVar1 + 0x54);
          lVar7 = 1;
          *(undefined4 *)((long)puVar1 + 0x14) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x24) = 0x7f7fffee;
          *(undefined4 *)((long)puVar1 + 0x34) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x44) = 0x7f7fffee;
        }
        else if (iVar13 == 4) {
          *(undefined4 *)(puVar1 + 1) = 0x7f7fffee;
          puVar6 = puVar1 + 0xb;
          lVar7 = 2;
          *(undefined4 *)(puVar1 + 3) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 5) = 0x7f7fffee;
          *(undefined4 *)(puVar1 + 7) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 9) = 0x7f7fffee;
        }
        else if (iVar13 == 8) {
          puVar6 = (undefined8 *)((long)puVar1 + 0x5c);
          lVar7 = 3;
          *(undefined4 *)((long)puVar1 + 0xc) = 0x7f7fffee;
          *(undefined4 *)((long)puVar1 + 0x1c) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x2c) = 0x7f7fffee;
          *(undefined4 *)((long)puVar1 + 0x3c) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x4c) = 0x7f7fffee;
        }
        else {
          lVar7 = 0;
          *(undefined4 *)puVar1 = 0x7f7fffee;
          puVar6 = puVar1 + 10;
          *(undefined4 *)(puVar1 + 2) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 4) = 0x7f7fffee;
          *(undefined4 *)(puVar1 + 6) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 8) = 0x7f7fffee;
        }
        *(undefined4 *)puVar6 = 0xff7fffee;
        uVar12 = 0;
        *(undefined4 *)((long)puVar1 + lVar7 * 4 + 0x60) = 0xffffffff;
        *param_2 = '\x01';
        cVar2 = *(char *)(puVar1 + 0xe);
      }
      else {
        uVar12 = (uint)(byte)((byte)((int)((uint)bVar10 << 0x1f) >> 0x1f) & (byte)uVar3) +
                 (uint)((byte)((int)((uint)bVar14 << 0x1f) >> 0x1f) & bVar8) +
                 (uint)(byte)((byte)((int)((uint)bVar16 << 0x1f) >> 0x1f) & (byte)uVar4) +
                 (uint)((byte)((int)((uint)bVar19 << 0x1f) >> 0x1f) & bVar9);
        cVar2 = *(char *)(puVar1 + 0xe);
      }
    }
    else {
      uVar12 = 0;
      cVar2 = *(char *)(puVar1 + 0xe);
    }
    if (cVar2 == '\0') {
      if ((uVar12 & 1) != 0) {
        *puVar5 = *(undefined4 *)(puVar1 + 0xc);
        puVar5 = local_20;
      }
      local_20 = puVar5;
      if ((uVar12 >> 1 & 1) != 0) {
        *local_20 = *(undefined4 *)((long)puVar1 + 100);
        local_20 = local_20 + 1;
      }
      if ((uVar12 >> 2 & 1) != 0) {
        *local_20 = *(undefined4 *)(puVar1 + 0xd);
        local_20 = local_20 + 1;
      }
      puVar5 = local_20;
      if ((uVar12 >> 3 & 1) != 0) {
        *local_20 = *(undefined4 *)((long)puVar1 + 0x6c);
        puVar5 = local_20 + 1;
      }
    }
    local_20 = puVar5;
  } while (local_420 != local_20);
  return;
}


