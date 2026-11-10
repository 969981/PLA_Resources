/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2f2a0; name: FUN_01c2f2a0
 */


undefined1  [16] FUN_01c2f2a0(long param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float local_18;
  float local_14;
  
  if (*(char *)(param_1 + 0x204) == '\0') {
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    fVar5 = 1.0;
    if (*(char *)(param_1 + 0x290) != '\0') {
      fVar7 = *(float *)(param_1 + 0x298) + *(float *)(param_1 + 0x294);
      *(float *)(param_1 + 0x294) = fVar7;
      if (1.0 <= fVar7) {
        *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x2a0);
        if (*(float *)(param_1 + 0x2a0) <= 0.0) {
          *(undefined1 *)(param_1 + 0x204) = 0;
          *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffe;
        }
        *(undefined4 *)(param_1 + 0x294) = 0x3f800000;
        *(undefined1 *)(param_1 + 0x290) = 0;
      }
      else {
        if (*(int *)(param_1 + 0x2a4) == 1) {
          fVar7 = 1.0 - (1.0 - fVar7) * (1.0 - fVar7);
        }
        *(float *)(param_1 + 0x220) =
             *(float *)(param_1 + 0x29c) +
             fVar7 * (*(float *)(param_1 + 0x2a0) - *(float *)(param_1 + 0x29c));
      }
    }
    fVar7 = *(float *)(param_1 + 0x284) + *(float *)(param_1 + 0x280);
    *(float *)(param_1 + 0x280) = fVar7;
    local_18 = 1.0;
    pfVar2 = &local_18;
    if (fVar7 <= 1.0) {
      pfVar2 = (float *)(param_1 + 0x280);
    }
    local_14 = 0.0;
    pfVar3 = &local_14;
    if (0.0 <= fVar7) {
      pfVar3 = pfVar2;
    }
    fVar7 = *pfVar3;
    *(float *)(param_1 + 0x280) = fVar7;
    if (1.0 <= fVar7) {
      iVar4 = *(int *)(param_1 + 0x28c);
      if (iVar4 == 2) {
        *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x270);
        *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffe;
        *(undefined1 *)(param_1 + 0x204) = 0;
        *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x278);
      }
      else {
        *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x270);
        *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x278);
        if (iVar4 == 0) {
          fVar12 = *(float *)(param_1 + 0x220);
          *(ulong *)(param_1 + 0x278) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20) * fVar12,
                        (float)*(undefined8 *)(param_1 + 0x218) * fVar12);
          *(ulong *)(param_1 + 0x270) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20) * fVar12,
                        (float)*(undefined8 *)(param_1 + 0x210) * fVar12);
        }
        else if (iVar4 == 1) {
          *(undefined8 *)(param_1 + 0x270) = 0;
          *(undefined8 *)(param_1 + 0x278) = 0;
          *(undefined4 *)(param_1 + 0x28c) = 2;
        }
      }
      fVar7 = fVar7 + -1.0;
      *(float *)(param_1 + 0x280) = fVar7;
      *(ulong *)(param_1 + 0x218) =
           CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20),
                    -(float)*(undefined8 *)(param_1 + 0x218));
      *(ulong *)(param_1 + 0x210) =
           CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20),
                    -(float)*(undefined8 *)(param_1 + 0x210));
    }
    if (*(uint *)(param_1 + 0x230) != 0xffffffff) {
      fVar5 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x230) * 8))(fVar7);
    }
    fVar7 = (float)*(undefined8 *)(param_1 + 0x260);
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x260) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_1 + 0x268);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x268) >> 0x20);
    uVar8 = CONCAT44(fVar12 + ((float)((ulong)*(undefined8 *)(param_1 + 0x270) >> 0x20) - fVar12) *
                              fVar5,
                     fVar7 + ((float)*(undefined8 *)(param_1 + 0x270) - fVar7) * fVar5);
    uVar10 = CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)(param_1 + 0x278) >> 0x20) - fVar11) *
                               fVar5,
                      fVar9 + ((float)*(undefined8 *)(param_1 + 0x278) - fVar9) * fVar5);
    if ((((*(int *)(param_1 + 0x28c) == 0) && (*(char *)(param_1 + 0x22c) == '\0')) &&
        (uVar1 = *(int *)(param_1 + 0x288) + 1, *(uint *)(param_1 + 0x288) = uVar1,
        *(uint *)(param_1 + 0x228) <= uVar1)) &&
       ((*(char *)(param_1 + 0x204) != '\0' &&
        (*(undefined4 *)(param_1 + 0x28c) = 1, *(char *)(param_1 + 0x2a8) != '\0')))) {
      uVar1 = *(uint *)(param_1 + 0x224) >> 1;
      if (uVar1 != 0) {
        *(uint *)(param_1 + 0x2c0) = uVar1;
        *(uint *)(param_1 + 0x2c4) = uVar1;
      }
      else {
        *(undefined4 *)(param_1 + 800) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        *(undefined8 *)(param_1 + 0x2e8) = 0;
        *(undefined8 *)(param_1 + 0x2e0) = 0;
        *(undefined4 *)(param_1 + 0x338) = 0;
        *(undefined1 *)(param_1 + 0x2a8) = 0;
        *(undefined8 *)(param_1 + 0x324) = 0;
        *(undefined8 *)(param_1 + 0x329) = 0;
        *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffd;
      }
      *(uint *)(param_1 + 0x334) = (uint)(uVar1 != 0);
    }
  }
  auVar6._8_8_ = uVar10;
  auVar6._0_8_ = uVar8;
  return auVar6;
}


