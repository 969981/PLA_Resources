/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2fbf0; name: FUN_01c2fbf0
 */


void FUN_01c2fbf0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  iVar4 = *(int *)(param_1 + 0x334);
  if (iVar4 == 2) {
    return;
  }
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2f8);
  if (iVar4 == 0) {
    fVar11 = *(float *)(param_1 + 0x2b0);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    plVar7 = (long *)PTR_DAT_04379688;
    plVar6 = (long *)PTR_DAT_04379680;
    pbVar5 = PTR_DAT_04379678;
    lVar8 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar8;
    puVar9 = *(ulong **)(lVar8 + 0xd8);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar10 = uVar2 ^ uVar1;
    *puVar9 = uVar10 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar10 << 0x10;
    puVar9[1] = uVar10 >> 0x1b | uVar10 << 0x25;
    fVar12 = *(float *)(param_1 + 0x2b4);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x318);
    *(ulong *)(param_1 + 0x310) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x310) >> 0x20),
                  ((fVar11 + fVar11) * (float)(uVar2 + uVar1) * 5.421011e-20 + 0.0) - fVar11);
    if ((*pbVar5 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04379678);
      pbVar5 = PTR_DAT_04379678;
      plVar6 = (long *)PTR_DAT_04379680;
      plVar7 = (long *)PTR_DAT_04379688;
      if (iVar4 != 0) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
        pbVar5 = PTR_DAT_04379678;
        plVar6 = (long *)PTR_DAT_04379680;
        plVar7 = (long *)PTR_DAT_04379688;
      }
    }
    lVar8 = *plVar6;
    *plVar7 = lVar8;
    puVar9 = *(ulong **)(lVar8 + 0xd8);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar10 = uVar2 ^ uVar1;
    *puVar9 = uVar10 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar10 << 0x10;
    puVar9[1] = uVar10 >> 0x1b | uVar10 << 0x25;
    fVar11 = *(float *)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x318);
    *(ulong *)(param_1 + 0x310) =
         CONCAT44(((fVar12 + fVar12) * (float)(uVar2 + uVar1) * 5.421011e-20 + 0.0) - fVar12,
                  (int)*(undefined8 *)(param_1 + 0x310));
    if ((*pbVar5 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04379678);
      plVar6 = (long *)PTR_DAT_04379680;
      plVar7 = (long *)PTR_DAT_04379688;
      if (iVar4 != 0) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
        plVar6 = (long *)PTR_DAT_04379680;
        plVar7 = (long *)PTR_DAT_04379688;
      }
    }
    lVar8 = *plVar6;
    *plVar7 = lVar8;
    puVar9 = *(ulong **)(lVar8 + 0xd8);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar10 = uVar2 ^ uVar1;
    *puVar9 = uVar10 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar10 << 0x10;
    puVar9[1] = uVar10 >> 0x1b | uVar10 << 0x25;
    *(ulong *)(param_1 + 0x318) =
         (ulong)(uint)(((fVar11 + fVar11) * (float)(uVar2 + uVar1) * 5.421011e-20 + 0.0) - fVar11);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x310);
  }
  else if (iVar4 == 1) {
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x334) = 2;
  }
  uVar3 = *(uint *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x328) = 0;
  iVar4 = *(int *)(param_1 + 0x2c4) - uVar3;
  if (iVar4 == 0) {
    if (uVar3 == 0) goto LAB_01c2fde0;
  }
  else {
    iVar4 = FUN_01c2ff70(iVar4);
    uVar3 = iVar4 + uVar3;
    if (uVar3 == 0) {
LAB_01c2fde0:
      fVar11 = 1.0;
      goto LAB_01c2fd94;
    }
  }
  fVar11 = 1.0 / (float)uVar3;
LAB_01c2fd94:
  *(float *)(param_1 + 0x32c) = fVar11;
  *(undefined1 *)(param_1 + 0x330) = 1;
  return;
}


