/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c19d4; name: FUN_010c19d4
 */


void FUN_010c19d4(long param_1,long *param_2,undefined4 param_3,short *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  float fVar12;
  
  switch(param_3) {
  case 0:
    if (*param_4 == 0x10) {
      if (1 < (ushort)param_4[1]) {
        uVar7 = (ulong)(ushort)param_4[3];
        if (8 < (ushort)param_4[3]) {
          return;
        }
        goto LAB_010c1bf4;
      }
      uVar7 = 0;
      cVar3 = *(char *)(param_1 + 0x20);
    }
    else {
      uVar7 = 0;
LAB_010c1bf4:
      cVar3 = *(char *)(param_1 + 0x20);
    }
    if (cVar3 == '\0') {
      puVar8 = (undefined4 *)*param_2;
      uVar2 = (&DAT_03a78b74)[uVar7];
      *(undefined4 *)(param_1 + 8) = *puVar8;
      uVar1 = puVar8[1];
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *puVar8 = uVar2;
      puVar8[1] = uVar2;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0x20) != '\0') {
      puVar8 = (undefined4 *)*param_2;
      *puVar8 = *(undefined4 *)(param_1 + 8);
      puVar8[1] = *(undefined4 *)(param_1 + 0xc);
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    if (*param_4 == 0x10) {
      param_4 = param_4 + (ulong)(ushort)param_4[1] + 2;
    }
    fVar12 = (float)FUN_010c1c40(param_2,param_4);
    fVar12 = (float)(uint)(*(int *)(param_1 + 0x18) - (int)fVar12) * 0.5;
    goto LAB_010c1aec;
  case 3:
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    fVar12 = 0.0;
    if ((*param_4 == 0x10) && (1 < (ushort)param_4[1])) {
      fVar12 = (float)NEON_ucvtf((uint)(ushort)param_4[3]);
    }
    fVar4 = (float)FUN_010c1c40(param_2,param_4);
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x18));
    fVar12 = (fVar5 - fVar4) - fVar12;
    goto LAB_010c1aec;
  case 4:
    lVar9 = *param_2;
    uVar10 = 0;
    uVar11 = 0;
    if ((*param_4 == 0x10) && (1 < (ushort)param_4[1])) {
      uVar1 = NEON_ucvtf((uint)(ushort)param_4[3]);
      uVar10 = (undefined2)uVar1;
      uVar11 = (undefined2)((uint)uVar1 >> 0x10);
    }
    fVar12 = *(float *)(lVar9 + 0x14) + (float)CONCAT22(uVar11,uVar10);
    goto LAB_010c1af0;
  case 5:
    fVar12 = 0.0;
    if ((*param_4 == 0x10) && (fVar12 = 0.0, 1 < (ushort)param_4[1])) {
      fVar12 = (float)NEON_ucvtf((uint)(ushort)param_4[3]);
    }
LAB_010c1aec:
    lVar9 = *param_2;
LAB_010c1af0:
    *(float *)(lVar9 + 0x14) = fVar12;
    break;
  case 7:
    uVar6 = FUN_010c1c78(param_1,param_4,param_2);
    if (uVar6 == 1000) {
      return;
    }
    uVar1 = *(undefined4 *)(*param_2 + 0xc);
    uVar10 = (undefined2)uVar1;
    uVar11 = (undefined2)((uint)uVar1 >> 0x10);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    fVar12 = (float)uVar6;
    goto LAB_010c1bc4;
  case 8:
    uVar1 = *(undefined4 *)(*param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar10 = (undefined2)uVar1;
    uVar11 = (undefined2)((uint)uVar1 >> 0x10);
    fVar12 = 0.0;
    if ((*param_4 == 0x10) && (fVar12 = 0.0, 1 < (ushort)param_4[1])) {
      fVar12 = (float)NEON_ucvtf((uint)(ushort)param_4[3]);
    }
LAB_010c1bc4:
    fVar12 = (fVar12 / 1000.0) * (float)CONCAT22(uVar11,uVar10);
LAB_010c1bd4:
    *(float *)(*param_2 + 0xc) = fVar12;
    break;
  case 9:
    fVar12 = *(float *)(param_1 + 0x1c);
    if (fVar12 == 0.0) {
      return;
    }
    goto LAB_010c1bd4;
  }
  return;
}


