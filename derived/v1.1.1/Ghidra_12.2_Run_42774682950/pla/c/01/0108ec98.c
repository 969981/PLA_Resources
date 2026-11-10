/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108ec98; name: FUN_0108ec98
 */


void FUN_0108ec98(ulong *param_1,long param_2,uint param_3)

{
  char *__s;
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  uint *puVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_68;
  
  uVar8 = (ulong)param_3;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar2 = PTR_DAT_0437a0d8;
  uVar11 = *(ulong *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(ulong *)PTR_DAT_0437a0d8;
  param_1[1] = uVar11;
  plVar5 = *(long **)(puVar2 + 0x18);
  param_1[2] = *(ulong *)(puVar2 + 0x10);
  param_1[3] = (ulong)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  piVar10 = *(int **)(param_2 + 0x38);
  uVar11 = (ulong)*(ushort *)((long)piVar10 + (6 - (long)*piVar10));
  puVar6 = (uint *)((long)piVar10 + uVar11);
  uVar12 = (ulong)*puVar6;
  puVar6 = (uint *)((long)puVar6 + uVar12);
  if (param_3 < *puVar6) {
    puVar9 = &DAT_cbf29ce484222645;
    puVar6 = puVar6 + uVar8 + 1;
    uVar13 = (ulong)*puVar6;
    __s = (char *)((long)puVar6 + uVar13 + 4);
    sVar4 = strlen(__s);
    bVar1 = *(byte *)((long)puVar6 + uVar13 + 4);
    if (bVar1 != 0) {
      pbVar7 = (byte *)((long)piVar10 + uVar13 + uVar8 * 4 + uVar12 + uVar11 + 9);
      do {
        puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
    }
    *param_1 = (ulong)puVar9;
    param_1[1] = (ulong)__s;
    param_1[2] = sVar4;
    param_1[3] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    param_1[3] = 0;
  }
  else {
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar3 != 0)) {
      local_80 = FUN_00938550();
      puVar2 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_80);
      FUN_00100250(PTR_LAB_0437a8d8,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    FUN_02a47560(&local_80,PTR_DAT_0437a7d0);
    *param_1 = local_80;
    param_1[1] = uStack_78;
    plVar5 = (long *)param_1[3];
    param_1[2] = local_70;
    param_1[3] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    param_1[3] = local_68;
  }
  piVar10 = *(int **)(param_2 + 0x38);
  puVar6 = (uint *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (8 - (long)*piVar10)));
  puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  if (param_3 < *puVar6) {
    uVar14 = puVar6[uVar8 + 1];
  }
  else {
    uVar14 = 0;
  }
  *(uint *)(param_1 + 4) = uVar14;
  return;
}


