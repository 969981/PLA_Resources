/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278d284; name: FUN_0278d284
 */


void FUN_0278d284(undefined1 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *__dest;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  byte bVar12;
  size_t __n;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong unaff_x26;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  lVar14 = *param_3;
  if (param_3[1] != lVar14) {
    fVar23 = *(float *)(param_2 + 8);
    fVar24 = *(float *)((long)param_2 + 0x44);
    fVar25 = 3.4028235e+38;
    fVar26 = *(float *)(param_2 + 9);
    lVar18 = 0;
    uVar19 = 0;
    bVar12 = *(byte *)((long)param_2 + 0x3c);
    bVar13 = false;
    do {
      if (*(byte *)(lVar14 + lVar18) <= bVar12) {
        lVar14 = lVar14 + lVar18;
        fVar21 = *(float *)(lVar14 + 8) - fVar24;
        fVar20 = *(float *)(lVar14 + 4) - fVar23;
        fVar22 = *(float *)(lVar14 + 0xc) - fVar26;
        fVar21 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
        fVar20 = SQRT(fVar21);
        if (NAN(fVar20)) {
          fVar20 = sqrtf(fVar21);
        }
        if (fVar20 < fVar25) {
          bVar13 = true;
          unaff_x26 = uVar19 & 0xffffffff;
          fVar25 = fVar20;
        }
      }
      lVar14 = *param_3;
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x10;
      uVar15 = param_3[1] - lVar14 >> 4;
    } while (uVar19 < uVar15);
    if (bVar13) {
      if (uVar15 <= (ulong)(long)(int)unaff_x26) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      __dest = (undefined8 *)(lVar14 + (long)(int)unaff_x26 * 0x10);
      uVar1 = *__dest;
      uVar5 = __dest[1];
      __n = param_3[1] - (long)(__dest + 2);
      if (__n != 0) {
        memmove(__dest,__dest + 2,__n);
      }
      param_3[1] = (long)(__dest + ((long)__n >> 4) * 2);
      uVar16 = param_2[2];
      uVar6 = param_2[1];
      uVar2 = param_2[3];
      uVar7 = param_2[4];
      uVar3 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[10];
      local_c0 = (undefined4)param_2[7];
      uStack_ac = (undefined4)((ulong)param_2[9] >> 0x20);
      uVar17 = param_2[0xd];
      uVar4 = param_2[0xb];
      uVar10 = param_2[0xc];
      uVar11 = *(undefined4 *)(param_2 + 0xe);
      uStack_b4 = (undefined4)uVar5;
      local_b0 = (undefined4)((ulong)uVar5 >> 0x20);
      uStack_bc = (undefined4)uVar1;
      local_b8 = (undefined4)((ulong)uVar1 >> 0x20);
      *(undefined8 *)(param_1 + 4) = *param_2;
      *(undefined8 *)(param_1 + 0xc) = uVar6;
      *(undefined8 *)(param_1 + 0x14) = uVar16;
      *(undefined8 *)(param_1 + 0x24) = uVar7;
      *(undefined8 *)(param_1 + 0x2c) = uVar3;
      *(undefined8 *)(param_1 + 0x34) = uVar8;
      *(undefined8 *)(param_1 + 100) = uVar10;
      *(undefined8 *)(param_1 + 0x6c) = uVar17;
      *(undefined4 *)(param_1 + 0x74) = uVar11;
      *(undefined8 *)(param_1 + 0x5c) = uVar4;
      *(ulong *)(param_1 + 0x3c) = CONCAT44(uStack_bc,local_c0);
      *(undefined8 *)(param_1 + 0x54) = uVar9;
      *(undefined8 *)(param_1 + 0x1c) = uVar2;
      *(ulong *)(param_1 + 0x44) = CONCAT44(uStack_b4,local_b8);
      *(ulong *)(param_1 + 0x4c) = CONCAT44(uStack_ac,local_b0);
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


