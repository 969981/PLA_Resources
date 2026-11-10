/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03015d64; name: FUN_03015d64
 */


void FUN_03015d64(long param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  undefined8 uVar12;
  
  uVar1 = *(ushort *)(param_1 + 0x58);
  lVar4 = *(long *)(param_2 + 0x40);
  fVar5 = *(float *)(lVar4 + (ulong)uVar1 * 0x70 + 0x10);
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) != fVar5) {
    *(ulong *)(param_1 + 0x68) = CONCAT44(fVar5,(int)*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    plVar2 = DAT_0444b0d0;
    cVar3 = (**(code **)(*DAT_0444b0d0 + 0x30))(DAT_0444b0d0,0x15e4bd43);
    (**(code **)(*plVar2 + 0x28))(plVar2,0x15e4bd43,0);
    fVar5 = (float)*(undefined8 *)(param_1 + 0x60);
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    fVar7 = (float)*(undefined8 *)(param_1 + 0x68);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    fVar9 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    fVar11 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    uVar10 = CONCAT44(fVar11,fVar9);
    if ((fVar8 * fVar8 < fVar9 && fVar8 * fVar8 < fVar11) && (~(uint)fVar9 & 0x7fc00000) != 0) {
      uVar12 = NEON_frsqrte(uVar10,4);
      fVar9 = (float)uVar12;
      fVar11 = (float)((ulong)uVar12 >> 0x20);
      uVar12 = NEON_frsqrts(uVar10,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
      fVar9 = fVar9 * (float)uVar12;
      fVar11 = fVar11 * (float)((ulong)uVar12 >> 0x20);
      uVar10 = NEON_frsqrts(uVar10,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
      fVar9 = (float)uVar10 * fVar9;
      if ((~(uint)fVar9 & 0x7fc00000) != 0) {
        fVar9 = fVar8 * fVar9 * 0.99999976;
        *(ulong *)(param_1 + 0x68) = CONCAT44(fVar8,fVar7 * fVar9);
        *(ulong *)(param_1 + 0x60) =
             CONCAT44(fVar6 * fVar8 * (float)((ulong)uVar10 >> 0x20) * fVar11 * 0.99999976,
                      fVar5 * fVar9);
      }
    }
    (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,0x15e4bd43,cVar3 != '\0');
  }
  fVar5 = *(float *)(lVar4 + (ulong)uVar1 * 0x70 + 0x14);
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) == fVar5) {
    return;
  }
  *(ulong *)(param_1 + 0x78) = CONCAT44(fVar5,(int)*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  plVar2 = DAT_0444b0d0;
  cVar3 = (**(code **)(*DAT_0444b0d0 + 0x30))(DAT_0444b0d0,0x15e4b843);
  (**(code **)(*plVar2 + 0x28))(plVar2,0x15e4b843,0);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar7 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar9 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar11 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  uVar10 = CONCAT44(fVar11,fVar9);
  if ((fVar8 * fVar8 < fVar9 && fVar8 * fVar8 < fVar11) && (~(uint)fVar9 & 0x7fc00000) != 0) {
    uVar12 = NEON_frsqrte(uVar10,4);
    fVar9 = (float)uVar12;
    fVar11 = (float)((ulong)uVar12 >> 0x20);
    uVar12 = NEON_frsqrts(uVar10,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
    fVar9 = fVar9 * (float)uVar12;
    fVar11 = fVar11 * (float)((ulong)uVar12 >> 0x20);
    uVar10 = NEON_frsqrts(uVar10,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
    fVar9 = (float)uVar10 * fVar9;
    if ((~(uint)fVar9 & 0x7fc00000) != 0) {
      fVar9 = fVar8 * fVar9 * 0.99999976;
      *(ulong *)(param_1 + 0x78) = CONCAT44(fVar8,fVar7 * fVar9);
      *(ulong *)(param_1 + 0x70) =
           CONCAT44(fVar6 * fVar8 * (float)((ulong)uVar10 >> 0x20) * fVar11 * 0.99999976,
                    fVar5 * fVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03015f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,0x15e4b843,cVar3 != '\0');
  return;
}


