/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031513d0; name: FUN_031513d0
 */


void FUN_031513d0(float param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  if (*param_3 != -1) {
    plVar3 = *(long **)(param_2 + 0x28);
    lVar1 = (**(code **)(*plVar3 + 0x80))(plVar3);
    lVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,*(undefined4 *)(lVar1 + 0x80));
    if (*(int *)(lVar1 + 0x4c) != 0) {
      lVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x38))();
      plVar3 = *(long **)(param_2 + 0x28);
      lVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,*param_3);
      lVar2 = (**(code **)(*plVar3 + 0x100))(plVar3,*(undefined4 *)(lVar2 + 0x80));
      uVar8 = NEON_fmov(0x3f800000,4);
      lVar1 = *(long *)(lVar1 + 0x40) + (ulong)*(ushort *)(lVar2 + 0x58) * 0x70;
      lVar2 = *(long *)(param_4 + 0x30);
      fVar6 = (float)uVar8 - param_1 * *(float *)(lVar1 + 0x1c);
      fVar4 = (float)uVar8 - param_1 * *(float *)(lVar1 + 0x18);
      uVar7 = NEON_fmax(CONCAT44(fVar6,fVar6),0,4);
      uVar8 = NEON_fmax(CONCAT44(fVar4,fVar4),0,4);
      fVar6 = (float)((ulong)uVar7 >> 0x20);
      fVar4 = (float)((ulong)uVar8 >> 0x20);
      uVar5 = CONCAT44(fVar4 * (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20),
                       (float)uVar8 * (float)*(undefined8 *)(lVar2 + 0x10));
      uVar8 = CONCAT44(fVar4 * (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20),
                       (float)uVar8 * (float)*(undefined8 *)(lVar2 + 0x18));
      *(undefined8 *)(lVar2 + 0x18) = uVar8;
      *(undefined8 *)(lVar2 + 0x10) = uVar5;
      *(ulong *)(lVar2 + 0x28) =
           CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20),
                    (float)uVar7 * (float)*(undefined8 *)(lVar2 + 0x28));
      *(ulong *)(lVar2 + 0x20) =
           CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20),
                    (float)uVar7 * (float)*(undefined8 *)(lVar2 + 0x20));
      param_5[1] = uVar8;
      *param_5 = uVar5;
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      param_6[1] = *(undefined8 *)(lVar2 + 0x28);
      *param_6 = uVar8;
      fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
      fVar4 = (float)*(undefined8 *)(lVar2 + 0x20);
      fVar9 = (float)*(undefined8 *)(lVar2 + 0x28);
      *(ulong *)(lVar2 + 0x28) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) * fVar9 +
                    (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar4 +
                    (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(lVar2 + 0x68) * fVar9 +
                    (float)*(undefined8 *)(lVar2 + 0x48) * fVar4 +
                    (float)*(undefined8 *)(lVar2 + 0x58) * fVar6);
      *(ulong *)(lVar2 + 0x20) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar9 +
                    (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar4 +
                    (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(lVar2 + 0x60) * fVar9 +
                    (float)*(undefined8 *)(lVar2 + 0x40) * fVar4 +
                    (float)*(undefined8 *)(lVar2 + 0x50) * fVar6);
    }
  }
  if (((param_3[1] != -1) &&
      (lVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x80))(),
      (*(byte *)(lVar1 + 0x54) & 1) == 0)) && (param_3[1] != *param_3)) {
    lVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x38))();
    plVar3 = *(long **)(param_2 + 0x28);
    lVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,param_3[1]);
    lVar2 = (**(code **)(*plVar3 + 0x100))(plVar3,*(undefined4 *)(lVar2 + 0x80));
    uVar8 = NEON_fmov(0x3f800000,4);
    lVar1 = *(long *)(lVar1 + 0x40) + (ulong)*(ushort *)(lVar2 + 0x58) * 0x70;
    lVar2 = *(long *)(param_4 + 0x90);
    fVar6 = (float)uVar8 - param_1 * *(float *)(lVar1 + 0x1c);
    fVar4 = (float)uVar8 - param_1 * *(float *)(lVar1 + 0x18);
    uVar7 = NEON_fmax(CONCAT44(fVar6,fVar6),0,4);
    uVar8 = NEON_fmax(CONCAT44(fVar4,fVar4),0,4);
    fVar6 = (float)((ulong)uVar7 >> 0x20);
    fVar4 = (float)((ulong)uVar8 >> 0x20);
    uVar5 = CONCAT44(fVar4 * (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20),
                     (float)uVar8 * (float)*(undefined8 *)(lVar2 + 0x10));
    uVar8 = CONCAT44(fVar4 * (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20),
                     (float)uVar8 * (float)*(undefined8 *)(lVar2 + 0x18));
    *(undefined8 *)(lVar2 + 0x18) = uVar8;
    *(undefined8 *)(lVar2 + 0x10) = uVar5;
    *(ulong *)(lVar2 + 0x28) =
         CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20),
                  (float)uVar7 * (float)*(undefined8 *)(lVar2 + 0x28));
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20),
                  (float)uVar7 * (float)*(undefined8 *)(lVar2 + 0x20));
    param_5[3] = uVar8;
    param_5[2] = uVar5;
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    param_6[3] = *(undefined8 *)(lVar2 + 0x28);
    param_6[2] = uVar8;
    fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
    fVar4 = (float)*(undefined8 *)(lVar2 + 0x20);
    fVar9 = (float)*(undefined8 *)(lVar2 + 0x28);
    *(ulong *)(lVar2 + 0x28) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) * fVar9 +
                  (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar4 +
                  (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20) * fVar6,
                  (float)*(undefined8 *)(lVar2 + 0x68) * fVar9 +
                  (float)*(undefined8 *)(lVar2 + 0x48) * fVar4 +
                  (float)*(undefined8 *)(lVar2 + 0x58) * fVar6);
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar9 +
                  (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar4 +
                  (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar6,
                  (float)*(undefined8 *)(lVar2 + 0x60) * fVar9 +
                  (float)*(undefined8 *)(lVar2 + 0x40) * fVar4 +
                  (float)*(undefined8 *)(lVar2 + 0x50) * fVar6);
  }
  return;
}


