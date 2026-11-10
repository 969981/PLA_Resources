/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019348d4; name: FUN_019348d4
 */


void FUN_019348d4(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  char *pcVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar12 = &DAT_cbf29ce484222645;
  param_1[2] = &DAT_cbf29ce484222645;
  param_1[3] = &DAT_03996322;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_cbf29ce484222645;
  param_1[7] = &DAT_03996322;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &DAT_cbf29ce484222645;
  param_1[0xb] = &DAT_03996322;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &DAT_cbf29ce484222645;
  param_1[0xf] = &DAT_03996322;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = &DAT_cbf29ce484222645;
  param_1[0x13] = &DAT_03996322;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    puVar14 = (undefined1 *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    puVar14 = (undefined1 *)0x0;
    if (uVar6 != 0) {
      puVar7 = *(undefined1 **)((long)param_2 + uVar6);
      puVar14 = (undefined1 *)0x344570c1301a7584;
      if (puVar7 != &DAT_cbf29ce484222645) {
        puVar14 = puVar7;
      }
    }
  }
  *param_1 = puVar14;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    uVar8 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = *(undefined8 *)((long)param_2 + uVar6);
    }
  }
  param_1[1] = uVar8;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar6 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar14 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar10 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar4 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar11 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar6);
    uVar13 = (ulong)*puVar1;
    pcVar10 = (char *)((long)puVar1 + uVar13 + 4);
    sVar4 = strlen(pcVar10);
    bVar2 = *(byte *)((long)puVar1 + uVar13 + 4);
    if (bVar2 == 0) {
      plVar11 = (long *)0x0;
      puVar14 = &DAT_cbf29ce484222645;
    }
    else {
      puVar14 = &DAT_cbf29ce484222645;
      pbVar9 = (byte *)((long)param_2 + uVar13 + uVar6 + 5);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
      plVar11 = (long *)0x0;
    }
  }
  plVar5 = (long *)param_1[5];
  param_1[2] = puVar14;
  param_1[3] = pcVar10;
  param_1[4] = sVar4;
  param_1[5] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  param_1[5] = plVar11;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar6 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar14 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar10 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar4 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar11 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar6);
    uVar13 = (ulong)*puVar1;
    pcVar10 = (char *)((long)puVar1 + uVar13 + 4);
    sVar4 = strlen(pcVar10);
    bVar2 = *(byte *)((long)puVar1 + uVar13 + 4);
    if (bVar2 == 0) {
      plVar11 = (long *)0x0;
      puVar14 = &DAT_cbf29ce484222645;
    }
    else {
      puVar14 = &DAT_cbf29ce484222645;
      pbVar9 = (byte *)((long)param_2 + uVar13 + uVar6 + 5);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
      plVar11 = (long *)0x0;
    }
  }
  plVar5 = (long *)param_1[9];
  param_1[6] = puVar14;
  param_1[7] = pcVar10;
  param_1[8] = sVar4;
  param_1[9] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  param_1[9] = plVar11;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar6 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar14 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar10 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar4 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar11 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar6);
    uVar13 = (ulong)*puVar1;
    pcVar10 = (char *)((long)puVar1 + uVar13 + 4);
    sVar4 = strlen(pcVar10);
    bVar2 = *(byte *)((long)puVar1 + uVar13 + 4);
    if (bVar2 == 0) {
      plVar11 = (long *)0x0;
      puVar14 = &DAT_cbf29ce484222645;
    }
    else {
      puVar14 = &DAT_cbf29ce484222645;
      pbVar9 = (byte *)((long)param_2 + uVar13 + uVar6 + 5);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
      plVar11 = (long *)0x0;
    }
  }
  plVar5 = (long *)param_1[0xd];
  param_1[10] = puVar14;
  param_1[0xb] = pcVar10;
  param_1[0xc] = sVar4;
  param_1[0xd] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  param_1[0xd] = plVar11;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar6 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar14 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar10 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar4 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar11 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar6);
    uVar13 = (ulong)*puVar1;
    pcVar10 = (char *)((long)puVar1 + uVar13 + 4);
    sVar4 = strlen(pcVar10);
    bVar2 = *(byte *)((long)puVar1 + uVar13 + 4);
    if (bVar2 == 0) {
      plVar11 = (long *)0x0;
      puVar14 = &DAT_cbf29ce484222645;
    }
    else {
      puVar14 = &DAT_cbf29ce484222645;
      pbVar9 = (byte *)((long)param_2 + uVar13 + uVar6 + 5);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
      plVar11 = (long *)0x0;
    }
  }
  plVar5 = (long *)param_1[0x11];
  param_1[0xe] = puVar14;
  param_1[0xf] = pcVar10;
  param_1[0x10] = sVar4;
  param_1[0x11] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  param_1[0x11] = plVar11;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x11) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8], uVar6 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar12 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar10 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar4 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar11 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar6);
    uVar13 = (ulong)*puVar1;
    pcVar10 = (char *)((long)puVar1 + uVar13 + 4);
    sVar4 = strlen(pcVar10);
    bVar2 = *(byte *)((long)puVar1 + uVar13 + 4);
    if (bVar2 != 0) {
      pbVar9 = (byte *)((long)param_2 + uVar13 + uVar6 + 5);
      do {
        puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    plVar11 = (long *)0x0;
  }
  plVar5 = (long *)param_1[0x15];
  param_1[0x12] = puVar12;
  param_1[0x13] = pcVar10;
  param_1[0x14] = sVar4;
  param_1[0x15] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  param_1[0x15] = plVar11;
  return;
}


