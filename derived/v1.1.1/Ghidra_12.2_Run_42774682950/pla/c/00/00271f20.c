/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271f20; name: FUN_00271f20
 */


void FUN_00271f20(float param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 *param_8,int param_9)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_9 == 1) {
LAB_00271fd0:
    *(undefined4 *)param_7 = *(undefined4 *)param_8;
    *(undefined4 *)((long)param_7 + 4) = *(undefined4 *)((long)param_8 + 4);
    uVar2 = *(undefined4 *)(param_8 + 1);
  }
  else {
    if (param_9 == 0) {
      *param_7 = 0x3f8000003f800000;
      uVar2 = 0x3f800000;
      goto LAB_00271fe4;
    }
    if (param_3 <= 0.0) {
      param_2 = param_2 / param_5;
      puVar3 = param_8 + ((long)param_9 + -1) * 2;
      if (param_2 < *(float *)((long)puVar3 + 0xc)) goto LAB_00271fc4;
    }
    else {
      param_2 = fmodf(param_1 * param_4 * param_3 + param_2,param_3);
      param_2 = param_2 / param_3;
      puVar3 = param_8 + ((long)param_9 + -1) * 2;
      if (param_2 < *(float *)((long)puVar3 + 0xc)) {
LAB_00271fc4:
        if (*(float *)((long)param_8 + 0xc) <= param_2) {
          lVar4 = -1;
          fVar6 = *(float *)((long)param_8 + 0xc);
          do {
            fVar5 = fVar6;
            puVar3 = param_8;
            lVar4 = lVar4 + 1;
            if (param_9 <= lVar4) {
              *param_7 = 0;
              *(undefined4 *)(param_7 + 1) = 0;
              return;
            }
            fVar6 = *(float *)((long)puVar3 + 0x1c);
            param_8 = puVar3 + 2;
          } while ((param_2 < fVar5) || (fVar6 <= param_2));
          fVar1 = *(float *)(puVar3 + 1);
          fVar5 = (param_2 - fVar5) / (fVar6 - fVar5);
          fVar6 = *(float *)(puVar3 + 3);
          fVar7 = (float)*puVar3;
          fVar8 = (float)((ulong)*puVar3 >> 0x20);
          *param_7 = CONCAT44(fVar8 + ((float)((ulong)*param_8 >> 0x20) - fVar8) * fVar5,
                              fVar7 + ((float)*param_8 - fVar7) * fVar5);
          *(float *)(param_7 + 1) = fVar1 + (fVar6 - fVar1) * fVar5;
          return;
        }
        goto LAB_00271fd0;
      }
    }
    *(undefined4 *)param_7 = *(undefined4 *)puVar3;
    *(undefined4 *)((long)param_7 + 4) = *(undefined4 *)((long)puVar3 + 4);
    uVar2 = *(undefined4 *)(puVar3 + 1);
  }
LAB_00271fe4:
  *(undefined4 *)(param_7 + 1) = uVar2;
  return;
}


