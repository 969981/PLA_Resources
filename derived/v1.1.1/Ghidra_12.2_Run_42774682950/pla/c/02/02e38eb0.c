/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e38eb0; name: FUN_02e38eb0
 */


undefined8 FUN_02e38eb0(long param_1,byte param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  
  uVar4 = (uint)param_2;
  if (param_2 != 0) {
    lVar10 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                       (*(long **)(param_1 + 0x20),uVar4 * 0x38);
    *(long *)(param_1 + 8) = lVar10;
    if (lVar10 == 0) {
      return 0x34;
    }
    lVar13 = 0;
    lVar5 = lVar10;
    while( true ) {
      if (lVar5 != 0) {
        puVar1 = (undefined8 *)(lVar10 + lVar13);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined4 *)(puVar1 + 6) = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
      }
      if ((ulong)uVar4 * 0x38 + -0x38 == lVar13) break;
      lVar10 = *(long *)(param_1 + 8);
      lVar13 = lVar13 + 0x38;
      lVar5 = lVar10 + lVar13;
    }
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
    uVar12 = (uint)(*(float *)(param_1 + 0x68) * 0.001 * fVar15);
    if (uVar12 < 9) {
      uVar12 = 8;
    }
    uVar3 = uVar12 + 3 & 0xfffffffc;
    uVar12 = uVar3 * 2 + 0x400;
    lVar10 = 0;
    do {
      plVar8 = *(long **)(param_1 + 0x20);
      lVar13 = *(long *)(param_1 + 8);
      plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
      (**(code **)(*plVar11 + 0x18))();
      uVar9 = *(uint *)(param_1 + 0x30);
      uVar6 = *(uint *)(param_1 + 0x34);
      uVar7 = *(uint *)(param_1 + 0x38);
      puVar2 = (uint *)(lVar13 + lVar10);
      uVar14 = (int)(*(float *)(param_1 + 0x3c) * (float)uVar3) & 0xfffffffc;
      *puVar2 = uVar3;
      puVar2[10] = uVar7;
      puVar2[0xb] = uVar6;
      puVar2[0xc] = uVar9;
      if (uVar14 * 8 + 0x1000 >> 0xc < 0x19) {
        if (uVar3 <= uVar14) {
LAB_02e39074:
          uVar14 = uVar14 - 4;
        }
      }
      else {
        uVar14 = 0x3000;
        if (uVar3 < 0x3001) goto LAB_02e39074;
      }
      puVar2[7] = uVar7;
      puVar2[8] = uVar6;
      puVar2[9] = uVar9;
      puVar2[1] = uVar14;
      puVar2[2] = uVar12;
      lVar13 = (**(code **)(*plVar8 + 0x10))(plVar8,(ulong)uVar12 << 2);
      *(long *)(puVar2 + 4) = lVar13;
      if (lVar13 == 0) {
        return 0x34;
      }
      lVar10 = lVar10 + 0x38;
      puVar2[6] = 0;
    } while ((ulong)uVar4 * 0x38 != lVar10);
  }
  return 1;
}


