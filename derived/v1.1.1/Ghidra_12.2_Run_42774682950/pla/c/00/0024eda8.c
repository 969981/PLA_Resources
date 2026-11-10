/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024eda8; name: FUN_0024eda8
 */


void FUN_0024eda8(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((param_2 == (long *)0x0) || (iVar3 = (**(code **)(*param_2 + 0xb8))(param_2), iVar3 == 1)) {
    bVar2 = *(long **)(param_1 + 0xf0) != param_2;
    uVar4 = *(ushort *)(param_1 + 0x114);
    uVar1 = (uint)bVar2 | uVar4 >> 2 & 1;
    *(ushort *)(param_1 + 0x114) = uVar4 & 0xfffb | (ushort)(uVar1 << 2);
    if (bVar2) {
      *(long **)(param_1 + 0xf0) = param_2;
      if (param_2 == (long *)0x0) {
        if (*(float *)(param_1 + 0xf8) == 0.0) {
          bVar2 = *(float *)(param_1 + 0xfc) == 0.0;
          *(ushort *)(param_1 + 0x114) = uVar4 & 0xfffb | (ushort)((uVar1 | !bVar2) << 2);
          if (bVar2) {
            return;
          }
          fVar5 = *(float *)(param_1 + 0xfc);
        }
        else {
          *(ushort *)(param_1 + 0x114) = uVar4 | 4;
          fVar5 = *(float *)(param_1 + 0xfc);
        }
        if (fVar5 == 0.0) {
          *(undefined8 *)(param_1 + 0xf8) = 0;
          return;
        }
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)(param_1 + 0x118) = 0x7fc00000;
        *(undefined4 *)(param_1 + 0x134) = 0x7fc00000;
        return;
      }
      iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
      fVar7 = (float)iVar3;
      iVar3 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x28))();
      fVar5 = (float)iVar3;
      if (*(float *)(param_1 + 0xf8) == fVar7) {
        uVar4 = (ushort)(*(float *)(param_1 + 0xfc) != fVar5);
      }
      else {
        uVar4 = 1;
      }
      *(ushort *)(param_1 + 0x114) =
           *(ushort *)(param_1 + 0x114) & 0xfffb |
           (*(ushort *)(param_1 + 0x114) >> 2 & 1 | uVar4) << 2;
      if (uVar4 != 0) {
        if (*(float *)(param_1 + 0xfc) != 0.0) {
          fVar6 = *(float *)(param_1 + 0xf8) / *(float *)(param_1 + 0xfc);
          *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar5,fVar7);
          *(float *)(param_1 + 0x118) = (fVar5 / fVar7) * fVar6 * *(float *)(param_1 + 0x118);
          *(float *)(param_1 + 0x134) = (fVar5 / fVar7) * fVar6 * *(float *)(param_1 + 0x134);
          return;
        }
        *(float *)(param_1 + 0xf8) = fVar7;
        *(float *)(param_1 + 0xfc) = fVar5;
      }
    }
  }
  return;
}


