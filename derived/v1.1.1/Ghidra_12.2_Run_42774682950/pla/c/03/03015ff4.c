/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03015ff4; name: FUN_03015ff4
 */


void FUN_03015ff4(long param_1,undefined2 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  
  *(undefined2 *)(param_1 + 0x58) = param_2;
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) != *(float *)(param_3 + 0x10)) {
    *(ulong *)(param_1 + 0x68) =
         CONCAT44(*(float *)(param_3 + 0x10),(int)*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    plVar1 = DAT_0444b0d0;
    cVar2 = (**(code **)(*DAT_0444b0d0 + 0x30))(DAT_0444b0d0,0x15e4bd43);
    (**(code **)(*plVar1 + 0x28))(plVar1,0x15e4bd43,0);
    fVar3 = (float)*(undefined8 *)(param_1 + 0x60);
    fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    fVar5 = (float)*(undefined8 *)(param_1 + 0x68);
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    fVar7 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
    fVar9 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
    uVar8 = CONCAT44(fVar9,fVar7);
    if ((fVar6 * fVar6 < fVar7 && fVar6 * fVar6 < fVar9) && (~(uint)fVar7 & 0x7fc00000) != 0) {
      uVar10 = NEON_frsqrte(uVar8,4);
      fVar7 = (float)uVar10;
      fVar9 = (float)((ulong)uVar10 >> 0x20);
      uVar10 = NEON_frsqrts(uVar8,CONCAT44(fVar9 * fVar9,fVar7 * fVar7),4);
      fVar7 = fVar7 * (float)uVar10;
      fVar9 = fVar9 * (float)((ulong)uVar10 >> 0x20);
      uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar9 * fVar9,fVar7 * fVar7),4);
      fVar7 = (float)uVar8 * fVar7;
      if ((~(uint)fVar7 & 0x7fc00000) != 0) {
        fVar7 = fVar6 * fVar7 * 0.99999976;
        *(ulong *)(param_1 + 0x68) = CONCAT44(fVar6,fVar5 * fVar7);
        *(ulong *)(param_1 + 0x60) =
             CONCAT44(fVar4 * fVar6 * (float)((ulong)uVar8 >> 0x20) * fVar9 * 0.99999976,
                      fVar3 * fVar7);
      }
    }
    (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,0x15e4bd43,cVar2 != '\0');
  }
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) == *(float *)(param_3 + 0x14)) {
    return;
  }
  *(ulong *)(param_1 + 0x78) =
       CONCAT44(*(float *)(param_3 + 0x14),(int)*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  plVar1 = DAT_0444b0d0;
  cVar2 = (**(code **)(*DAT_0444b0d0 + 0x30))(DAT_0444b0d0,0x15e4b843);
  (**(code **)(*plVar1 + 0x28))(plVar1,0x15e4b843,0);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar7 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar9 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  uVar8 = CONCAT44(fVar9,fVar7);
  if ((fVar6 * fVar6 < fVar7 && fVar6 * fVar6 < fVar9) && (~(uint)fVar7 & 0x7fc00000) != 0) {
    uVar10 = NEON_frsqrte(uVar8,4);
    fVar7 = (float)uVar10;
    fVar9 = (float)((ulong)uVar10 >> 0x20);
    uVar10 = NEON_frsqrts(uVar8,CONCAT44(fVar9 * fVar9,fVar7 * fVar7),4);
    fVar7 = fVar7 * (float)uVar10;
    fVar9 = fVar9 * (float)((ulong)uVar10 >> 0x20);
    uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar9 * fVar9,fVar7 * fVar7),4);
    fVar7 = (float)uVar8 * fVar7;
    if ((~(uint)fVar7 & 0x7fc00000) != 0) {
      fVar7 = fVar6 * fVar7 * 0.99999976;
      *(ulong *)(param_1 + 0x78) = CONCAT44(fVar6,fVar5 * fVar7);
      *(ulong *)(param_1 + 0x70) =
           CONCAT44(fVar4 * fVar6 * (float)((ulong)uVar8 >> 0x20) * fVar9 * 0.99999976,fVar3 * fVar7
                   );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x030161bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,0x15e4b843,cVar2 != '\0');
  return;
}


