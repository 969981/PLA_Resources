/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282e15c; name: FUN_0282e15c
 */


void FUN_0282e15c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_5 + 0x68) != 0) {
    puVar3 = *(undefined4 **)(param_5 + 0x60);
    fVar8 = *(float *)(param_5 + 0xc) + param_2;
    fVar7 = *(float *)(param_5 + 8) + param_1;
    fVar10 = *(float *)(param_5 + 0x14) * 0.5;
    fVar9 = *(float *)(param_5 + 0x10) * 0.5;
    lVar4 = *(long *)(param_5 + 0x68) * 0x30;
    do {
      (**(code **)**(undefined8 **)(param_5 + 0x18))(*(undefined8 **)(param_5 + 0x18),*puVar3);
      param_3 = fVar9 + param_3 * 0.5;
      fVar5 = fVar10 + param_4 * 0.5;
      param_4 = ABS(fVar7 - (float)*(undefined8 *)(puVar3 + 8));
      if ((param_4 < param_3) &&
         (ABS(fVar8 - (float)((ulong)*(undefined8 *)(puVar3 + 8) >> 0x20)) < fVar5 &&
          (param_3 <= ABS(fVar7 - (float)*(undefined8 *)(puVar3 + 4)) ||
          fVar5 <= ABS(fVar8 - (float)((ulong)*(undefined8 *)(puVar3 + 4) >> 0x20))))) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x20))(*(long **)(param_5 + 0x18),*puVar3);
      }
      puVar3 = puVar3 + 0xc;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    if (*(long *)(param_5 + 0x68) != 0) {
      puVar3 = *(undefined4 **)(param_5 + 0x60);
      lVar4 = *(long *)(param_5 + 0x68) * 0x30;
      do {
        (**(code **)**(undefined8 **)(param_5 + 0x18))(*(undefined8 **)(param_5 + 0x18),*puVar3);
        param_4 = fVar10 + param_4 * 0.5;
        fVar6 = (float)((ulong)*(undefined8 *)(puVar3 + 4) >> 0x20);
        fVar5 = (float)*(undefined8 *)(puVar3 + 4);
        param_3 = fVar9 + param_3 * 0.5;
        bVar1 = ABS(fVar8 - fVar6) < param_4;
        bVar2 = ABS(fVar7 - fVar5) < param_3;
        if ((param_3 <= ABS(fVar7 - (float)*(undefined8 *)(puVar3 + 8)) ||
             param_4 <= ABS(fVar8 - (float)((ulong)*(undefined8 *)(puVar3 + 8) >> 0x20))) &&
           (bVar2 && bVar1)) {
          (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),*puVar3);
        }
        if (bVar2 && bVar1) {
          local_80 = CONCAT44(fVar6 - param_2,fVar5 - param_1);
          uStack_78 = 0;
          (**(code **)(**(long **)(param_5 + 0x18) + 0x10))
                    (*(long **)(param_5 + 0x18),*puVar3,&local_80);
        }
        puVar3 = puVar3 + 0xc;
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
    }
  }
  *(undefined8 *)(param_5 + 0x68) = 0;
  return;
}


