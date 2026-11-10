/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc0e48; name: FUN_02dc0e48
 */


void FUN_02dc0e48(long param_1,int *param_2)

{
  long lVar1;
  float *pfVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  size_t sVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined4 uVar18;
  float fVar19;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    bVar6 = false;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    bVar6 = false;
    if (uVar12 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar12) != '\0';
    }
  }
  *(bool *)(param_1 + 0x2600) = bVar6;
  *(undefined1 *)(param_1 + 0x2601) = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    bVar6 = false;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    bVar6 = false;
    if (uVar12 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar12) != '\0';
    }
  }
  *(bool *)(param_1 + 0x2602) = bVar6;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    bVar6 = false;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    bVar6 = false;
    if (uVar12 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar12) != '\0';
    }
  }
  *(bool *)(param_1 + 0x2603) = bVar6;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x27) {
    bVar6 = false;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x13];
    bVar6 = false;
    if (uVar12 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar12) != '\0';
    }
  }
  *(bool *)(param_1 + 0x2604) = bVar6;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    bVar6 = false;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    bVar6 = false;
    if (uVar12 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar12) != '\0';
    }
  }
  *(bool *)(param_1 + 0x2605) = bVar6;
  puVar5 = PTR_DAT_0437a0d8;
  puVar4 = PTR_DAT_0437a0d0;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x13) ||
     (uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9], uVar12 == 0)) {
LAB_02dc0f98:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar16 = *(undefined1 **)puVar5;
    pbVar14 = *(byte **)(puVar5 + 8);
    sVar9 = *(size_t *)(puVar5 + 0x10);
    plVar15 = *(long **)(puVar5 + 0x18);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  else {
    uVar10 = (ulong)*(uint *)((long)param_2 + uVar12);
    lVar1 = (long)((long)param_2 + uVar12) + uVar10;
    pbVar14 = (byte *)(lVar1 + 4);
    if (lVar1 == 0) goto LAB_02dc0f98;
    puVar16 = &DAT_cbf29ce484222645;
    sVar9 = strlen((char *)pbVar14);
    bVar3 = *pbVar14;
    if (bVar3 != 0) {
      pbVar13 = (byte *)((long)param_2 + uVar10 + uVar12 + 5);
      do {
        puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar3 != 0);
    }
    plVar15 = (long *)0x0;
  }
  *(undefined1 **)(param_1 + 0xa0) = puVar16;
  *(byte **)(param_1 + 0xa8) = pbVar14;
  *(size_t *)(param_1 + 0xb0) = sVar9;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  plVar8 = *(long **)(param_1 + 0xb8);
  *(long **)(param_1 + 0xb8) = plVar15;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if ((0x14 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10], uVar12 != 0)) {
    uVar10 = (ulong)*(uint *)((long)param_2 + uVar12);
    lVar1 = (long)((long)param_2 + uVar12) + uVar10;
    pbVar14 = (byte *)(lVar1 + 4);
    if (lVar1 != 0) {
      puVar16 = &DAT_cbf29ce484222645;
      sVar9 = strlen((char *)pbVar14);
      bVar3 = *pbVar14;
      if (bVar3 != 0) {
        pbVar13 = (byte *)((long)param_2 + uVar10 + uVar12 + 5);
        do {
          puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar3 != 0);
      }
      plVar15 = (long *)0x0;
      goto LAB_02dc102c;
    }
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar16 = *(undefined1 **)puVar5;
  pbVar14 = *(byte **)(puVar5 + 8);
  sVar9 = *(size_t *)(puVar5 + 0x10);
  plVar15 = *(long **)(puVar5 + 0x18);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
LAB_02dc102c:
  *(undefined1 **)(param_1 + 0xc0) = puVar16;
  *(byte **)(param_1 + 200) = pbVar14;
  *(size_t *)(param_1 + 0xd0) = sVar9;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  plVar8 = *(long **)(param_1 + 0xd8);
  *(long **)(param_1 + 0xd8) = plVar15;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  uVar17 = 0;
  uVar18 = 0;
  if (0x16 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = *(undefined4 *)((long)param_2 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x2608) = uVar18;
  uVar18 = 0;
  if (0x18 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = *(undefined4 *)((long)param_2 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x260c) = uVar18;
  uVar18 = 0;
  if (0x1a < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = *(undefined4 *)((long)param_2 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x2610) = uVar18;
  uVar18 = 0;
  if (0x1c < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe];
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = *(undefined4 *)((long)param_2 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x2614) = uVar18;
  uVar18 = 0;
  if (0x1e < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf];
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = *(undefined4 *)((long)param_2 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x2618) = uVar18;
  uVar18 = 0;
  if (0x20 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10];
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = *(undefined4 *)((long)param_2 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x261c) = uVar18;
  if ((0x28 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x14], uVar12 != 0)) {
    uVar17 = *(undefined4 *)((long)param_2 + uVar12);
  }
  *(undefined4 *)(param_1 + 0x2620) = uVar17;
  puVar11 = (ushort *)((long)param_2 - (long)*param_2);
  if (((0x22 < *puVar11) && ((ulong)puVar11[0x11] != 0)) &&
     (*(char *)((long)param_2 + (ulong)puVar11[0x11]) != '\0')) {
    pfVar2 = (float *)((long)param_2 + (ulong)puVar11[0x12]);
    fVar19 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    FUN_009a7ff4(pfVar2[1] * fVar19,fVar19 * *pfVar2,fVar19 * pfVar2[2]);
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(undefined8 *)(param_1 + 0x138) = extraout_var_00;
    *(ulong *)(param_1 + 0x130) = CONCAT44(extraout_var,extraout_s0);
  }
  *(undefined1 *)(param_1 + 0x8d) = 1;
  return;
}


