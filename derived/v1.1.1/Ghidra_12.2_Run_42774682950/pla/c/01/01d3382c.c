/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d3382c; name: FUN_01d3382c
 */


void FUN_01d3382c(undefined8 *param_1,int *param_2,uint param_3)

{
  byte *__s;
  int *piVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 *puVar16;
  
  puVar5 = PTR_DAT_0437a0d8;
  puVar4 = PTR_DAT_0437a0d0;
  uVar8 = (ulong)*(ushort *)((long)param_2 + (0xe - (long)*param_2));
  puVar12 = (uint *)((long)param_2 + uVar8);
  uVar9 = (ulong)*puVar12;
  puVar12 = (uint *)((long)puVar12 + uVar9);
  if (*puVar12 <= param_3) {
    *param_1 = 0x81abd40d03ce9602;
    param_1[1] = "npc_poke_default";
    param_1[2] = 0x10;
    param_1[3] = 0;
    return;
  }
  puVar12 = puVar12 + (ulong)param_3 + 1;
  uVar11 = (ulong)*puVar12;
  piVar1 = (int *)((long)puVar12 + uVar11);
  if ((0x22 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x11], uVar14 != 0)) {
    uVar13 = (ulong)*(uint *)((long)piVar1 + uVar14);
    lVar2 = (long)((long)piVar1 + uVar14) + uVar13;
    __s = (byte *)(lVar2 + 4);
    if (lVar2 != 0) {
      puVar16 = &DAT_cbf29ce484222645;
      sVar7 = strlen((char *)__s);
      bVar3 = *__s;
      if (bVar3 != 0) {
        pbVar10 = (byte *)((long)param_2 +
                          uVar13 + (ulong)param_3 * 4 + uVar14 + uVar11 + uVar9 + uVar8 + 9);
        do {
          puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 != 0);
      }
      plVar15 = (long *)0x0;
      bVar3 = *puVar4;
      goto joined_r0x01d33970;
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar16 = *(undefined1 **)puVar5;
  __s = *(byte **)(puVar5 + 8);
  sVar7 = *(size_t *)(puVar5 + 0x10);
  plVar15 = *(long **)(puVar5 + 0x18);
  if (plVar15 == (long *)0x0) {
    bVar3 = *puVar4;
  }
  else {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    bVar3 = *puVar4;
  }
joined_r0x01d33970:
  if (((bVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if (puVar16 == *(undefined1 **)puVar5) {
    *param_1 = 0x81abd40d03ce9602;
    param_1[1] = "npc_poke_default";
    param_1[2] = 0x10;
    param_1[3] = 0;
    if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01d33934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x20))(plVar15);
      return;
    }
  }
  else {
    *param_1 = puVar16;
    param_1[1] = __s;
    param_1[2] = sVar7;
    param_1[3] = plVar15;
  }
  return;
}


