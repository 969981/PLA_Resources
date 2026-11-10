/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58d54; name: FUN_02e58d54
 */


void FUN_02e58d54(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar5 = *(undefined4 **)(param_1 + 0x10);
      do {
        *puVar5 = *param_2;
        puVar5[1] = param_2[1];
        puVar5[2] = param_2[2];
        FUN_02e5880c(puVar5,param_3);
        puVar5 = puVar5 + 0x56;
      } while (puVar5 != (undefined4 *)
                         (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x158));
    }
  }
  else if (*(int *)(param_1 + 0x18) != 0) {
    pfVar3 = *(float **)(param_1 + 0x10);
    fVar7 = pfVar3[0x1b] - *pfVar3;
    fVar6 = pfVar3[0x1c] - pfVar3[1];
    fVar8 = pfVar3[0x1d] - pfVar3[2];
    fVar9 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
    if (fVar9 <= 0.0) {
      *(undefined8 *)(pfVar3 + 0x4c) = *param_3;
      uVar4 = param_3[3];
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      pfVar3[0x54] = *(float *)(param_3 + 4);
      *(undefined8 *)(pfVar3 + 0x50) = uVar2;
      *(undefined8 *)(pfVar3 + 0x52) = uVar4;
      *(undefined8 *)(pfVar3 + 0x4e) = uVar1;
    }
    else {
      fVar9 = pfVar3[0x20] / fVar9;
      pfVar3[0x52] = *pfVar3 + fVar7 * fVar9;
      pfVar3[0x53] = pfVar3[1] + fVar6 * fVar9;
      pfVar3[0x54] = pfVar3[2] + fVar8 * fVar9;
      fVar6 = *(float *)(param_3 + 1);
      *(undefined8 *)(pfVar3 + 0x4c) = *param_3;
      pfVar3[0x4e] = fVar6;
      fVar6 = *(float *)((long)param_3 + 0x14);
      *(undefined8 *)(pfVar3 + 0x4f) = *(undefined8 *)((long)param_3 + 0xc);
      pfVar3[0x51] = fVar6;
    }
  }
  return;
}


