/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2b8ec; name: FUN_02f2b8ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02f2b8ec(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  plVar3 = *(long **)(param_1 + 0x128);
  if ((*(byte *)(plVar3 + 4) & 1) == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x70))
                      (plVar3,*(undefined8 *)(plVar3[3] + 0x2c8),*(undefined4 *)(plVar3[3] + 0x2d0))
    ;
    if (iVar2 != 1) {
      if (iVar2 != 0x3f) {
        return 2;
      }
      if (-1 < *(int *)(param_2 + 0x2c0)) {
        return 0x3f;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x128) + 0x20) >> 1 & 1) != 0) {
        return 0x3f;
      }
      *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) | 1;
      lVar1 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        lVar1 = *(long *)(param_1 + 8) + -0x18;
      }
      FUN_02edd7c4(DAT_0440a170,*(undefined4 *)(lVar1 + 0x210),
                   *(undefined4 *)(*(long *)(lVar1 + 0x180) + 0x10));
      return 0x3f;
    }
    *(byte *)(plVar3 + 4) = *(byte *)(plVar3 + 4) | 1;
  }
  fVar4 = *(float *)(param_2 + 0x24c) * (float)((uint)DAT_042ab268 * (_DAT_0440a1ac + 1));
  fVar5 = 0.5;
  if (fVar4 <= 0.0) {
    fVar5 = -0.5;
  }
  if ((int)(fVar5 + fVar4) <= *(int *)(param_2 + 0x2c0)) {
    return 0x3f;
  }
  if ((*(int *)(param_2 + 0x2c0) < 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x128) + 0x20) >> 1 & 1) == 0)) {
    *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) | 1;
    lVar1 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      lVar1 = *(long *)(param_1 + 8) + -0x18;
    }
    FUN_02edd7c4(DAT_0440a170,*(undefined4 *)(lVar1 + 0x210),
                 *(undefined4 *)(*(long *)(lVar1 + 0x180) + 0x10));
  }
  return 1;
}


