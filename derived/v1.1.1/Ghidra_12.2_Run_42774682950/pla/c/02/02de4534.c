/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de4534; name: FUN_02de4534
 */


void FUN_02de4534(long param_1,int *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  size_t sVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *__s;
  ulong uVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  if ((4 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar9 != 0)) {
    uVar7 = (ulong)*(uint *)((long)param_2 + uVar9);
    lVar1 = (long)((long)param_2 + uVar9) + uVar7;
    __s = (byte *)(lVar1 + 4);
    if (lVar1 != 0) {
      puVar11 = &DAT_cbf29ce484222645;
      sVar5 = strlen((char *)__s);
      bVar2 = *__s;
      if (bVar2 != 0) {
        pbVar8 = (byte *)((long)param_2 + uVar7 + uVar9 + 5);
        do {
          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar2 != 0);
      }
      plVar10 = (long *)0x0;
      goto LAB_02de45ac;
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar11 = *(undefined1 **)PTR_DAT_0437a0d8;
  __s = *(byte **)(PTR_DAT_0437a0d8 + 8);
  sVar5 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
  plVar10 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
LAB_02de45ac:
  *(undefined1 **)(param_1 + 0x90) = puVar11;
  *(byte **)(param_1 + 0x98) = __s;
  *(size_t *)(param_1 + 0xa0) = sVar5;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar4 = *(long **)(param_1 + 0xa8);
  *(long **)(param_1 + 0xa8) = plVar10;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  uVar12 = 0;
  uVar14 = 0;
  if (6 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar14 = 0;
    if (uVar9 != 0) {
      uVar14 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar14;
  uVar14 = 0;
  if (8 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar14 = 0;
    if (uVar9 != 0) {
      uVar14 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar14;
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar9 != 0)) {
    uVar12 = *(undefined4 *)((long)param_2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar12;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    uVar6 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = *(uint *)((long)param_2 + uVar9);
    }
  }
  *(uint *)(param_1 + 0xb8) = uVar6;
  *(int *)(param_1 + 0xbc) = 1 << (ulong)(uVar6 & 0x1f);
  fVar13 = 0.0;
  uVar14 = 0;
  if (0xe < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    uVar14 = 0;
    if (uVar9 != 0) {
      uVar14 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar14;
  uVar14 = 0;
  if (0x10 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    uVar14 = 0;
    if (uVar9 != 0) {
      uVar14 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar14;
  if ((0x12 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9], uVar9 != 0)) {
    fVar13 = *(float *)((long)param_2 + uVar9);
  }
  if (fVar13 + -0.001 < *(float *)(param_1 + 0xec)) {
    fVar13 = *(float *)(param_1 + 0xec) + 0.001;
  }
  *(float *)(param_1 + 0xe8) = fVar13;
  fVar15 = 0.0;
  if ((0x14 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10], uVar9 != 0)) {
    fVar15 = *(float *)((long)param_2 + uVar9);
  }
  if (fVar13 < fVar15 + 0.001) {
    fVar15 = fVar13 + -0.001;
  }
  *(float *)(param_1 + 0xec) = fVar15;
  fVar13 = 0.0;
  if ((0x16 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb], uVar9 != 0)) {
    fVar13 = *(float *)((long)param_2 + uVar9);
  }
  if (*(float *)(param_1 + 0xf4) < fVar13 + 0.001) {
    fVar13 = *(float *)(param_1 + 0xf4) + -0.001;
  }
  *(float *)(param_1 + 0xf0) = fVar13;
  fVar15 = 0.0;
  if ((0x18 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc], uVar9 != 0)) {
    fVar15 = *(float *)((long)param_2 + uVar9);
  }
  if (fVar15 + -0.001 < fVar13) {
    fVar15 = fVar13 + 0.001;
  }
  *(float *)(param_1 + 0xf4) = fVar15;
  return;
}


