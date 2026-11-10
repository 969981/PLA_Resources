/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03025700; name: FUN_03025700
 */


/* WARNING: Removing unreachable block (ram,0x03025740) */

undefined1  [16] FUN_03025700(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = (uint)*(byte *)(param_1 + 4);
  if (3 < uVar2) {
    uVar2 = 4;
  }
  if (uVar2 == 0) {
    return ZEXT816(0x7f7fffee7f7fffee);
  }
  param_1 = param_1 + 0x40;
  fVar7 = (float)*(undefined8 *)(param_2 + 0x38) * *(float *)(param_2 + 0xe0);
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20) * *(float *)(param_2 + 0xe0);
  if (uVar2 == 1) {
    uVar5 = 0x7f7fffee7f7fffee;
  }
  else {
    uVar5 = 0x7f7fffee7f7fffee;
    iVar3 = (uVar2 & 1) - uVar2;
    do {
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      uVar4 = NEON_fmin(uVar5,CONCAT44(-(fVar8 * fVar9),-(fVar7 * fVar9)),4);
      puVar1 = (undefined8 *)(param_1 + 0x38);
      param_1 = param_1 + 0x40;
      fVar9 = (float)((ulong)*puVar1 >> 0x20);
      uVar5 = NEON_fmin(uVar4,CONCAT44(-(fVar8 * fVar9),-(fVar7 * fVar9)),4);
      iVar3 = iVar3 + 2;
    } while (iVar3 != 0);
    if ((uVar2 & 1) == 0) goto LAB_03025794;
  }
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  uVar5 = NEON_fmin(uVar5,CONCAT44(-(fVar8 * fVar9),-(fVar7 * fVar9)),4);
LAB_03025794:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


