/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6c0d0; name: FUN_02f6c0d0
 */


void FUN_02f6c0d0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  param_2 = param_2 & 0xffffffff;
  do {
    while( true ) {
      iVar16 = (int)param_2;
      fVar18 = *(float *)(param_1 + ((long)((ulong)(iVar16 + param_3) << 0x20) >> 0x21) * 0x80 +
                         0x20);
      uVar11 = (ulong)param_3;
      do {
        uVar12 = -(param_2 >> 0x1f) & 0xffffff8000000000 | param_2 << 7;
        param_2 = (ulong)((int)param_2 - 1);
        do {
          lVar2 = param_1 + uVar12;
          uVar12 = uVar12 + 0x80;
          fVar20 = *(float *)(lVar2 + 0x20);
          iVar17 = (int)param_2;
          uVar1 = iVar17 + 1;
          param_2 = (ulong)uVar1;
        } while (fVar20 < fVar18);
        uVar11 = (ulong)(int)uVar11;
        pfVar13 = (float *)(param_1 + uVar11 * 0x80 + 0x20);
        fVar19 = *pfVar13;
        if (fVar18 < fVar19) {
          pfVar13 = (float *)(param_1 + 0x20 + uVar11 * 0x80);
          do {
            pfVar13 = pfVar13 + -0x20;
            fVar19 = *pfVar13;
            uVar11 = uVar11 - 1;
          } while (fVar18 < fVar19);
        }
        uVar10 = (uint)uVar11;
        if ((int)uVar1 <= (int)uVar10) {
          if (uVar10 != uVar1) {
            puVar3 = (undefined8 *)(param_1 + uVar11 * 0x80);
            uVar22 = puVar3[1];
            uVar21 = *puVar3;
            uVar24 = puVar3[3];
            uVar23 = puVar3[2];
            local_60 = (undefined4)*(undefined8 *)((long)puVar3 + 0x24);
            uStack_5c = (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0x24) >> 0x20);
            uStack_58 = (undefined4)*(undefined8 *)((long)puVar3 + 0x2c);
            local_54 = (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0x2c) >> 0x20);
            uVar4 = *(undefined4 *)(puVar3 + 7);
            uVar6 = *(undefined1 *)((long)puVar3 + 0x3c);
            lVar2 = param_1 + uVar12;
            uVar8 = *(undefined2 *)(puVar3 + 8);
            uStack_68 = (undefined6)((ulong)puVar3[9] >> 0x10);
            uStack_70 = (undefined6)*(undefined8 *)((long)puVar3 + 0x42);
            local_6a = (undefined2)((ulong)*(undefined8 *)((long)puVar3 + 0x42) >> 0x30);
            local_78 = *(undefined4 *)(puVar3 + 0xb);
            local_80 = puVar3[10];
            uVar5 = *(undefined4 *)(puVar3 + 0xc);
            uVar7 = *(undefined1 *)((long)puVar3 + 100);
            uVar9 = *(undefined2 *)(puVar3 + 0xd);
            uStack_88 = (undefined6)((ulong)puVar3[0xe] >> 0x10);
            uStack_90 = (undefined6)*(undefined8 *)((long)puVar3 + 0x6a);
            local_8a = (undefined2)((ulong)*(undefined8 *)((long)puVar3 + 0x6a) >> 0x30);
            uVar14 = *(undefined8 *)(lVar2 + -0x80);
            uVar15 = puVar3[0xf];
            puVar3[1] = *(undefined8 *)(lVar2 + -0x78);
            *puVar3 = uVar14;
            uVar14 = *(undefined8 *)(lVar2 + -0x70);
            puVar3[3] = *(undefined8 *)(lVar2 + -0x68);
            puVar3[2] = uVar14;
            *pfVar13 = fVar20;
            uVar14 = *(undefined8 *)(lVar2 + -0x58);
            *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(lVar2 + -0x50);
            puVar3[5] = uVar14;
            *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(lVar2 + -0x48);
            *(undefined1 *)((long)puVar3 + 0x3c) = *(undefined1 *)(lVar2 + -0x44);
            *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(lVar2 + -0x40);
            uVar14 = *(undefined8 *)(lVar2 + -0x3c);
            *(undefined4 *)((long)puVar3 + 0x4c) = *(undefined4 *)(lVar2 + -0x34);
            *(undefined8 *)((long)puVar3 + 0x44) = uVar14;
            uVar14 = *(undefined8 *)(lVar2 + -0x30);
            *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(lVar2 + -0x28);
            puVar3[10] = uVar14;
            *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(lVar2 + -0x20);
            *(undefined1 *)((long)puVar3 + 100) = *(undefined1 *)(lVar2 + -0x1c);
            *(undefined2 *)(puVar3 + 0xd) = *(undefined2 *)(lVar2 + -0x18);
            uVar14 = *(undefined8 *)(lVar2 + -0x14);
            *(undefined4 *)((long)puVar3 + 0x74) = *(undefined4 *)(lVar2 + -0xc);
            *(undefined8 *)((long)puVar3 + 0x6c) = uVar14;
            puVar3[0xf] = *(undefined8 *)(lVar2 + -8);
            *(float *)(lVar2 + -0x60) = fVar19;
            *(undefined8 *)(lVar2 + -0x78) = uVar22;
            *(undefined8 *)(lVar2 + -0x80) = uVar21;
            *(undefined8 *)(lVar2 + -0x68) = uVar24;
            *(undefined8 *)(lVar2 + -0x70) = uVar23;
            *(undefined4 *)(lVar2 + -0x50) = local_54;
            *(ulong *)(lVar2 + -0x58) = CONCAT44(uStack_58,uStack_5c);
            *(undefined4 *)(lVar2 + -0x48) = uVar4;
            *(undefined1 *)(lVar2 + -0x44) = uVar6;
            *(undefined2 *)(lVar2 + -0x40) = uVar8;
            uVar14 = *(undefined8 *)((ulong)&uStack_70 | 2);
            *(undefined4 *)(lVar2 + -0x34) =
                 *(undefined4 *)((undefined8 *)((ulong)&uStack_70 | 2) + 1);
            *(undefined8 *)(lVar2 + -0x3c) = uVar14;
            *(undefined4 *)(lVar2 + -0x28) = local_78;
            *(undefined8 *)(lVar2 + -0x30) = local_80;
            *(undefined4 *)(lVar2 + -0x20) = uVar5;
            *(undefined1 *)(lVar2 + -0x1c) = uVar7;
            *(undefined2 *)(lVar2 + -0x18) = uVar9;
            uVar14 = *(undefined8 *)((ulong)&uStack_90 | 2);
            *(undefined4 *)(lVar2 + -0xc) =
                 *(undefined4 *)((undefined8 *)((ulong)&uStack_90 | 2) + 1);
            *(undefined8 *)(lVar2 + -0x14) = uVar14;
            *(undefined8 *)(lVar2 + -8) = uVar15;
          }
          uVar11 = (ulong)(uVar10 - 1);
          param_2 = (ulong)(iVar17 + 2);
        }
        iVar17 = (int)param_2;
      } while (iVar17 <= (int)uVar11);
      if ((int)uVar11 <= iVar16) break;
      FUN_02f6c0d0(param_1);
      if ((int)param_3 <= iVar17) {
        return;
      }
    }
  } while (iVar17 < (int)param_3);
  return;
}


