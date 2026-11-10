/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a45db0; name: FUN_01a45db0
 */


undefined1  [16] FUN_01a45db0(long param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = 0;
  uVar6 = 0;
  if (((*(char *)(param_1 + 0xdf60) == '\0') || (*(long *)(param_1 + 0xdf70) == 0)) ||
     (*(int *)(*(long *)(param_1 + 0xdf70) + 0xc) == 0)) goto LAB_01a45e20;
  uVar1 = *(uint *)(param_1 + 0xe0e0);
  if (uVar1 == 0) {
    lVar2 = 0xe0c0;
LAB_01a45e00:
    *(undefined8 *)(param_1 + 0xe0d8) = ((undefined8 *)(param_1 + lVar2))[1];
    *(undefined8 *)(param_1 + 0xe0d0) = *(undefined8 *)(param_1 + lVar2);
  }
  else {
    if (*(uint *)(param_1 + 0xe0e4) <= uVar1) {
      lVar2 = 0xdf90;
      goto LAB_01a45e00;
    }
    fVar3 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0xe0e8) * 8))
                             ((float)uVar1 / (float)*(uint *)(param_1 + 0xe0e4));
    fVar3 = fVar3 + 0.0;
    fVar7 = (float)*(undefined8 *)(param_1 + 0xe0c0);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0c0) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_1 + 0xe0c8);
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0c8) >> 0x20);
    *(ulong *)(param_1 + 0xe0d8) =
         CONCAT44(fVar10 + ((float)((ulong)*(undefined8 *)(param_1 + 0xdf98) >> 0x20) - fVar10) *
                           fVar3,fVar9 + ((float)*(undefined8 *)(param_1 + 0xdf98) - fVar9) * fVar3)
    ;
    *(ulong *)(param_1 + 0xe0d0) =
         CONCAT44(fVar8 + ((float)((ulong)*(undefined8 *)(param_1 + 0xdf90) >> 0x20) - fVar8) *
                          fVar3,fVar7 + ((float)*(undefined8 *)(param_1 + 0xdf90) - fVar7) * fVar3);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xe0d8);
  uVar4 = *(undefined8 *)(param_1 + 0xe0d0);
LAB_01a45e20:
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


