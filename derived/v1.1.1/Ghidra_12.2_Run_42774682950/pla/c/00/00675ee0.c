/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00675ee0; name: FUN_00675ee0
 */


void FUN_00675ee0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  size_t sVar8;
  ulong *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ulong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  void *pvVar18;
  ulong *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  *param_1 = param_2;
  pbVar11 = *(byte **)(param_3 + 0x28);
  if ((*pbVar11 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
  }
  else {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
  }
  FUN_0067d640(pbVar11);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar6 = FUN_00612290();
  param_1[8] = uVar6;
  plVar20 = (long *)0x0;
  if (*(long *)(param_3 + 0x20) != 0) {
    plVar20 = (long *)(*(long *)(param_3 + 0x20) + 8);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    plVar2 = plVar20 + *(int *)(param_3 + 0x18);
    pbVar11 = *(byte **)(*plVar20 + 0x10);
    if ((*pbVar11 & 1) == 0) goto LAB_00675fe0;
LAB_0067602c:
    pbVar11 = *(byte **)(pbVar11 + 0x10);
    puVar19 = (ulong *)param_1[6];
    puVar9 = (ulong *)param_1[7];
    if (puVar9 <= puVar19) goto LAB_00675ff0;
LAB_0067603c:
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19[2] = 0;
    plVar7 = (long *)FUN_00612290();
    puVar19[3] = (ulong)plVar7;
    sVar8 = strlen((char *)pbVar11);
    if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar8 < 0x17) {
      pvVar18 = (void *)((long)puVar19 + 1);
      *(char *)puVar19 = (char)((int)sVar8 << 1);
      if (sVar8 != 0) goto LAB_00675fa4;
    }
    else {
      uVar16 = sVar8 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar16,1);
      puVar19[1] = sVar8;
      puVar19[2] = (ulong)pvVar18;
      *puVar19 = uVar16 | 1;
LAB_00675fa4:
      memcpy(pvVar18,pbVar11,sVar8);
    }
    *(undefined1 *)((long)pvVar18 + sVar8) = 0;
    param_1[6] = param_1[6] + 0x20;
LAB_00675fc4:
    plVar20 = plVar20 + 1;
    if (plVar20 != plVar2) {
      do {
        pbVar11 = *(byte **)(*plVar20 + 0x10);
        if ((*pbVar11 & 1) != 0) goto LAB_0067602c;
LAB_00675fe0:
        pbVar11 = pbVar11 + 1;
        puVar19 = (ulong *)param_1[6];
        puVar9 = (ulong *)param_1[7];
        if (puVar19 < puVar9) goto LAB_0067603c;
LAB_00675ff0:
        lVar12 = param_1[5];
        lVar17 = (long)puVar19 - lVar12 >> 5;
        uVar16 = lVar17 + 1;
        if (uVar16 >> 0x3b != 0) {
                    /* try { // try from 006762b4 to 006762c3 has its CatchHandler @ 006762ec */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar12 = (long)puVar9 - lVar12;
        if ((ulong)(lVar12 >> 5) < 0x3ffffffffffffff) {
          uVar10 = lVar12 >> 4;
          if (uVar16 <= uVar10) {
            uVar16 = uVar10;
          }
          if (uVar16 != 0) goto LAB_00676080;
          lVar12 = 0;
        }
        else {
          uVar16 = 0x7ffffffffffffff;
LAB_00676080:
          lVar12 = (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],uVar16 << 5,8);
        }
        puVar19 = (ulong *)(lVar12 + lVar17 * 0x20);
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        plVar7 = (long *)FUN_00612290();
        puVar19[3] = (ulong)plVar7;
        sVar8 = strlen((char *)pbVar11);
        if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006762ac to 006762b3 has its CatchHandler @ 006762c4 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar8 < 0x17) {
          pvVar18 = (void *)((long)puVar19 + 1);
          *(char *)puVar19 = (char)((int)sVar8 << 1);
          if (sVar8 != 0) goto LAB_00676118;
        }
        else {
          uVar10 = sVar8 + 0x10 & 0xfffffffffffffff0;
          pvVar18 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar10,1);
          *puVar19 = uVar10 | 1;
          puVar19[1] = sVar8;
          puVar19[2] = (ulong)pvVar18;
LAB_00676118:
          memcpy(pvVar18,pbVar11,sVar8);
        }
        *(undefined1 *)((long)pvVar18 + sVar8) = 0;
        pbVar11 = (byte *)param_1[5];
        pbVar14 = (byte *)param_1[6];
        puVar9 = puVar19 + 4;
        if ((long)pbVar14 - (long)pbVar11 == 0) {
          pbVar14 = pbVar11;
        }
        else {
          uVar10 = ((long)pbVar14 - (long)pbVar11) - 0x20;
          uVar1 = ((uint)(uVar10 >> 5) & 0x7ffffff) + 1;
          if ((uVar1 & 3) != 0) {
            lVar17 = -((ulong)uVar1 & 3);
            pbVar15 = pbVar14;
            puVar13 = puVar19;
            do {
              uVar21 = *(ulong *)(pbVar15 + -0x20);
              uVar23 = *(ulong *)(pbVar15 + -8);
              uVar22 = *(ulong *)(pbVar15 + -0x10);
              puVar19 = puVar13 + -4;
              pbVar14 = pbVar15 + -0x20;
              bVar5 = lVar17 != -1;
              lVar17 = lVar17 + 1;
              puVar13[-3] = *(ulong *)(pbVar15 + -0x18);
              puVar13[-4] = uVar21;
              puVar13[-1] = uVar23;
              puVar13[-2] = uVar22;
              pbVar15[-0x18] = 0;
              pbVar15[-0x17] = 0;
              pbVar15[-0x16] = 0;
              pbVar15[-0x15] = 0;
              pbVar15[-0x14] = 0;
              pbVar15[-0x13] = 0;
              pbVar15[-0x12] = 0;
              pbVar15[-0x11] = 0;
              pbVar15[-0x10] = 0;
              pbVar15[-0xf] = 0;
              pbVar15[-0xe] = 0;
              pbVar15[-0xd] = 0;
              pbVar15[-0xc] = 0;
              pbVar15[-0xb] = 0;
              pbVar15[-10] = 0;
              pbVar15[-9] = 0;
              pbVar15[-0x20] = 0;
              pbVar15[-0x1f] = 0;
              pbVar15[-0x1e] = 0;
              pbVar15[-0x1d] = 0;
              pbVar15[-0x1c] = 0;
              pbVar15[-0x1b] = 0;
              pbVar15[-0x1a] = 0;
              pbVar15[-0x19] = 0;
              pbVar15 = pbVar14;
              puVar13 = puVar19;
            } while (bVar5);
          }
          puVar13 = puVar19;
          if (0x5f < uVar10) {
            do {
              uVar10 = *(ulong *)(pbVar14 + -0x20);
              uVar22 = *(ulong *)(pbVar14 + -8);
              uVar21 = *(ulong *)(pbVar14 + -0x10);
              puVar13[-3] = *(ulong *)(pbVar14 + -0x18);
              puVar13[-4] = uVar10;
              puVar13[-1] = uVar22;
              puVar13[-2] = uVar21;
              pbVar14[-0x20] = 0;
              pbVar14[-0x1f] = 0;
              pbVar14[-0x1e] = 0;
              pbVar14[-0x1d] = 0;
              pbVar14[-0x1c] = 0;
              pbVar14[-0x1b] = 0;
              pbVar14[-0x1a] = 0;
              pbVar14[-0x19] = 0;
              uVar10 = *(ulong *)(pbVar14 + -0x40);
              uVar22 = *(ulong *)(pbVar14 + -0x28);
              uVar21 = *(ulong *)(pbVar14 + -0x30);
              pbVar14[-0x18] = 0;
              pbVar14[-0x17] = 0;
              pbVar14[-0x16] = 0;
              pbVar14[-0x15] = 0;
              pbVar14[-0x14] = 0;
              pbVar14[-0x13] = 0;
              pbVar14[-0x12] = 0;
              pbVar14[-0x11] = 0;
              pbVar14[-0x10] = 0;
              pbVar14[-0xf] = 0;
              pbVar14[-0xe] = 0;
              pbVar14[-0xd] = 0;
              pbVar14[-0xc] = 0;
              pbVar14[-0xb] = 0;
              pbVar14[-10] = 0;
              pbVar14[-9] = 0;
              puVar19 = puVar13 + -0x10;
              puVar13[-7] = *(ulong *)(pbVar14 + -0x38);
              puVar13[-8] = uVar10;
              puVar13[-5] = uVar22;
              puVar13[-6] = uVar21;
              pbVar14[-0x40] = 0;
              pbVar14[-0x3f] = 0;
              pbVar14[-0x3e] = 0;
              pbVar14[-0x3d] = 0;
              pbVar14[-0x3c] = 0;
              pbVar14[-0x3b] = 0;
              pbVar14[-0x3a] = 0;
              pbVar14[-0x39] = 0;
              uVar10 = *(ulong *)(pbVar14 + -0x60);
              uVar22 = *(ulong *)(pbVar14 + -0x48);
              uVar21 = *(ulong *)(pbVar14 + -0x50);
              pbVar14[-0x38] = 0;
              pbVar14[-0x37] = 0;
              pbVar14[-0x36] = 0;
              pbVar14[-0x35] = 0;
              pbVar14[-0x34] = 0;
              pbVar14[-0x33] = 0;
              pbVar14[-0x32] = 0;
              pbVar14[-0x31] = 0;
              pbVar14[-0x30] = 0;
              pbVar14[-0x2f] = 0;
              pbVar14[-0x2e] = 0;
              pbVar14[-0x2d] = 0;
              pbVar14[-0x2c] = 0;
              pbVar14[-0x2b] = 0;
              pbVar14[-0x2a] = 0;
              pbVar14[-0x29] = 0;
              puVar13[-0xb] = *(ulong *)(pbVar14 + -0x58);
              puVar13[-0xc] = uVar10;
              puVar13[-9] = uVar22;
              puVar13[-10] = uVar21;
              pbVar14[-0x60] = 0;
              pbVar14[-0x5f] = 0;
              pbVar14[-0x5e] = 0;
              pbVar14[-0x5d] = 0;
              pbVar14[-0x5c] = 0;
              pbVar14[-0x5b] = 0;
              pbVar14[-0x5a] = 0;
              pbVar14[-0x59] = 0;
              uVar10 = *(ulong *)(pbVar14 + -0x80);
              uVar22 = *(ulong *)(pbVar14 + -0x68);
              uVar21 = *(ulong *)(pbVar14 + -0x70);
              pbVar14[-0x58] = 0;
              pbVar14[-0x57] = 0;
              pbVar14[-0x56] = 0;
              pbVar14[-0x55] = 0;
              pbVar14[-0x54] = 0;
              pbVar14[-0x53] = 0;
              pbVar14[-0x52] = 0;
              pbVar14[-0x51] = 0;
              pbVar14[-0x50] = 0;
              pbVar14[-0x4f] = 0;
              pbVar14[-0x4e] = 0;
              pbVar14[-0x4d] = 0;
              pbVar14[-0x4c] = 0;
              pbVar14[-0x4b] = 0;
              pbVar14[-0x4a] = 0;
              pbVar14[-0x49] = 0;
              puVar13[-0xf] = *(ulong *)(pbVar14 + -0x78);
              puVar13[-0x10] = uVar10;
              puVar13[-0xd] = uVar22;
              puVar13[-0xe] = uVar21;
              pbVar14[-0x70] = 0;
              pbVar14[-0x6f] = 0;
              pbVar14[-0x6e] = 0;
              pbVar14[-0x6d] = 0;
              pbVar14[-0x6c] = 0;
              pbVar14[-0x6b] = 0;
              pbVar14[-0x6a] = 0;
              pbVar14[-0x69] = 0;
              pbVar15 = pbVar14 + -0x80;
              pbVar15[0] = 0;
              pbVar15[1] = 0;
              pbVar15[2] = 0;
              pbVar15[3] = 0;
              pbVar15[4] = 0;
              pbVar15[5] = 0;
              pbVar15[6] = 0;
              pbVar15[7] = 0;
              pbVar14[-0x78] = 0;
              pbVar14[-0x77] = 0;
              pbVar14[-0x76] = 0;
              pbVar14[-0x75] = 0;
              pbVar14[-0x74] = 0;
              pbVar14[-0x73] = 0;
              pbVar14[-0x72] = 0;
              pbVar14[-0x71] = 0;
              puVar13 = puVar19;
              pbVar14 = pbVar15;
            } while (pbVar11 != pbVar15);
          }
          pbVar11 = (byte *)param_1[6];
          pbVar14 = (byte *)param_1[5];
        }
        lVar17 = param_1[7];
        param_1[7] = lVar12 + uVar16 * 0x20;
        param_1[5] = puVar19;
        param_1[6] = puVar9;
        if (pbVar11 != pbVar14) {
          bVar3 = pbVar11[-0x20];
          pbVar15 = pbVar11 + -0x20;
          while( true ) {
            pbVar4 = pbVar15;
            if ((bVar3 & 1) != 0) {
              (**(code **)(**(long **)(pbVar11 + -8) + 0x18))
                        (*(long **)(pbVar11 + -8),*(undefined8 *)(pbVar11 + -0x10),
                         *(ulong *)(pbVar11 + -0x20) & 0xfffffffffffffffe,1);
            }
            if (pbVar14 == pbVar4) break;
            bVar3 = pbVar4[-0x20];
            pbVar15 = pbVar4 + -0x20;
            pbVar11 = pbVar4;
          }
        }
        if (pbVar14 == (byte *)0x0) goto LAB_00675fc4;
        (**(code **)(*(long *)param_1[8] + 0x18))
                  ((long *)param_1[8],pbVar14,lVar17 - (long)pbVar14,8);
        plVar20 = plVar20 + 1;
        if (plVar20 == plVar2) {
          return;
        }
      } while( true );
    }
  }
  return;
}


