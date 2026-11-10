/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108c6d8; name: FUN_0108c6d8
 */


void FUN_0108c6d8(undefined8 *param_1,char *param_2)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  size_t sVar9;
  byte *__s;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  
  if (*param_2 == '\0') {
    piVar10 = *(int **)(param_2 + 0x10);
    if (piVar10 == (int *)0x0) {
      piVar10 = *(int **)(param_2 + 8);
    }
    if ((0x14 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
       (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[10], uVar11 != 0)) {
      puVar2 = (uint *)((long)piVar10 + uVar11);
      uVar5 = *puVar2;
      lVar1 = (long)puVar2 + (ulong)uVar5;
      __s = (byte *)(lVar1 + 4);
      if (lVar1 != 0) {
        puVar14 = &DAT_cbf29ce484222645;
        sVar9 = strlen((char *)__s);
        bVar6 = *__s;
        if (bVar6 != 0) {
          pbVar13 = (byte *)((long)puVar2 + (ulong)uVar5 + 5);
          do {
            puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 != 0);
        }
        goto LAB_0108c8b8;
      }
    }
  }
  else {
    piVar10 = *(int **)(param_2 + 0x18);
    if ((0x12 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
       (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[9], uVar11 != 0)) {
      uVar12 = (ulong)*(uint *)((long)piVar10 + uVar11);
      lVar1 = (long)((long)piVar10 + uVar11) + uVar12;
      __s = (byte *)(lVar1 + 4);
      if (lVar1 != 0) {
        puVar14 = &DAT_cbf29ce484222645;
        sVar9 = strlen((char *)__s);
        bVar6 = *__s;
        if (bVar6 != 0) {
          pbVar13 = (byte *)((long)piVar10 + uVar12 + uVar11 + 5);
          do {
            puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 != 0);
        }
LAB_0108c8b8:
        *param_1 = puVar14;
        param_1[1] = __s;
        param_1[2] = sVar9;
        param_1[3] = 0;
        return;
      }
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar7 = PTR_DAT_0437a0d8;
  uVar3 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = uVar3;
  plVar4 = *(long **)(puVar7 + 0x18);
  param_1[2] = *(undefined8 *)(puVar7 + 0x10);
  param_1[3] = plVar4;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0108c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
}


