/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f03120; name: FUN_02f03120
 */


float FUN_02f03120(uint *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  
  if ((param_2 == 0) || (uVar2 = *(uint *)(param_2 + 8), uVar2 == 0)) {
    return 0.0;
  }
  uVar5 = *param_1;
  uVar10 = (ulong)uVar5;
  puVar1 = (uint *)(param_2 + 0x10);
  puVar7 = (uint *)((long)puVar1 + uVar10 * 6);
  uVar13 = uVar5 + 1;
  puVar12 = puVar7 + 1;
  if (uVar13 < uVar2) goto LAB_02f0318c;
  do {
    uVar9 = *puVar7;
    uVar8 = uVar5;
    while( true ) {
      uVar10 = 0;
      uVar5 = 0;
      uVar13 = 1;
      if (uVar9 <= param_3) {
        *param_1 = uVar8;
        fVar3 = (float)NEON_ucvtf((uint)(ushort)puVar7[1]);
        return -fVar3 - *(float *)(param_2 + 0xc);
      }
      puVar7 = puVar1;
      puVar12 = (uint *)(param_2 + 0x14);
      if (uVar2 < 2) break;
LAB_02f0318c:
      uVar11 = (ulong)uVar13;
      uVar6 = *(uint *)(param_2 + 0x10 + uVar10 * 6);
      puVar7 = (uint *)(param_2 + 0x10 + (ulong)uVar13 * 6);
      uVar9 = *puVar7;
      if ((uVar6 <= param_3 && param_3 <= uVar9) && (param_3 < uVar6 || uVar9 != param_3)) {
LAB_02f03208:
        uVar2 = *puVar12;
        *param_1 = uVar5;
        fVar3 = (float)NEON_ucvtf((uint)(ushort)uVar2);
        fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + (uVar11 & 0xffffffff) * 6 + 0x14));
        return (-fVar3 - *(float *)(param_2 + 0xc)) +
               ((fVar3 - fVar4) * (float)(param_3 - uVar6)) / (float)(uVar9 - uVar6);
      }
      uVar8 = uVar5 + 1;
      if (uVar2 != uVar13 + 1) {
        puVar7 = (uint *)((long)puVar1 + uVar11 * 6);
        uVar6 = uVar9;
        do {
          uVar9 = *(uint *)((long)puVar7 + 6);
          if ((uVar6 <= param_3) && (param_3 < uVar9)) {
            uVar11 = uVar11 + 1;
            puVar12 = puVar7 + 1;
            uVar5 = uVar8;
            goto LAB_02f03208;
          }
          uVar11 = uVar11 + 1;
          uVar8 = uVar8 + 1;
          puVar7 = (uint *)((long)puVar7 + 6);
          uVar6 = uVar9;
        } while (uVar2 - 1 != (int)uVar11);
      }
    }
  } while( true );
}


