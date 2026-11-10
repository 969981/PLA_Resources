/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edb45c; name: FUN_02edb45c
 */


undefined8 FUN_02edb45c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  plVar4 = *(long **)(param_1 + 6);
  if (plVar4 == (long *)0x0) {
    uVar3 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 1;
    if ((int)plVar4[1] < 1) {
      uVar3 = 0x25;
    }
    else {
      *(undefined2 *)(param_1 + 9) = 0;
      pfVar8 = (float *)*plVar4;
      *(undefined2 *)(param_1 + 9) = 1;
      fVar10 = *pfVar8;
      param_1[0x17] = fVar10;
      fVar9 = pfVar8[1];
      param_1[0x18] = fVar9;
      fVar12 = pfVar8[2];
      param_1[0x19] = fVar12;
      iVar2 = 0;
      if (DAT_042ab25c != 0) {
        iVar2 = ((int)pfVar8[3] + DAT_042ab25c + -1) / DAT_042ab25c;
      }
      iVar1 = 1;
      if (iVar2 != 0) {
        iVar1 = iVar2;
      }
      param_1[0x13] = iVar1;
      if ((int)plVar4[1] < 2) {
        fVar13 = 0.0;
        *(undefined8 *)(param_1 + 0x1a) = 0;
      }
      else {
        lVar5 = *plVar4;
        fVar14 = *(float *)(lVar5 + 0x10);
        fVar11 = *(float *)(lVar5 + 0x14);
        fVar13 = *(float *)(lVar5 + 0x18);
        if ((((fVar14 == fVar10) && (fVar11 == fVar9)) && ((int)plVar4[1] < 3)) &&
           (fVar13 == fVar12)) {
          lVar5 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          lVar6 = lVar5 * 0x5851f42d4c957f2d + 1;
          DAT_0440a190 = lVar6 * 0x5851f42d4c957f2d + 1;
          fVar10 = fVar10 + *(float *)((long)plVar4 + 0xc) *
                            ((float)(uint)((ulong)lVar5 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x17] = fVar10;
          fVar12 = fVar12 + *(float *)(plVar4 + 2) *
                            ((float)(uint)((ulong)lVar6 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x19] = fVar12;
          fVar9 = fVar9 + *(float *)((long)plVar4 + 0x14) *
                          ((float)(uint)((ulong)DAT_0440a190 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x18] = fVar9;
          fVar11 = fVar9;
          fVar13 = fVar12;
          fVar14 = fVar10;
        }
        else {
          lVar5 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          lVar6 = lVar5 * 0x5851f42d4c957f2d + 1;
          lVar7 = lVar6 * 0x5851f42d4c957f2d + 1;
          fVar10 = fVar10 + *(float *)((long)plVar4 + 0xc) *
                            ((float)(uint)((ulong)lVar5 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x17] = fVar10;
          lVar5 = lVar7 * 0x5851f42d4c957f2d + 1;
          fVar12 = fVar12 + *(float *)(plVar4 + 2) *
                            ((float)(uint)((ulong)lVar6 >> 0x21) * 9.313226e-10 + -1.0);
          lVar6 = lVar5 * 0x5851f42d4c957f2d + 1;
          param_1[0x19] = fVar12;
          fVar9 = fVar9 + *(float *)((long)plVar4 + 0x14) *
                          ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 + -1.0);
          DAT_0440a190 = lVar6 * 0x5851f42d4c957f2d + 1;
          param_1[0x18] = fVar9;
          fVar14 = fVar14 + *(float *)((long)plVar4 + 0xc) *
                            ((float)(uint)((ulong)lVar5 >> 0x21) * 9.313226e-10 + -1.0);
          fVar13 = fVar13 + *(float *)(plVar4 + 2) *
                            ((float)(uint)((ulong)lVar6 >> 0x21) * 9.313226e-10 + -1.0);
          fVar11 = fVar11 + *(float *)((long)plVar4 + 0x14) *
                            ((float)(uint)((ulong)DAT_0440a190 >> 0x21) * 9.313226e-10 + -1.0);
        }
        param_1[0x1a] = fVar14 - fVar10;
        param_1[0x1b] = fVar11 - fVar9;
        fVar13 = fVar13 - fVar12;
      }
      param_1[0x1c] = fVar13;
      FUN_02edb6dc(param_1);
      fVar10 = 1.0 / (float)(uint)param_1[0x13];
      uVar3 = 1;
      param_1[0x11] = param_2;
      param_1[0x12] = param_1[0x13] + param_2;
      *param_1 = 1;
      param_1[0x14] = fVar10;
      param_1[0x15] = -(fVar10 * (float)param_2);
    }
  }
  return uVar3;
}


