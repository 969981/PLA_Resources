/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b694c4; name: FUN_00b694c4
 */


void FUN_00b694c4(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  int *piVar8;
  byte *pbVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  
  piVar8 = (int *)param_2[1];
  if ((piVar8 != (int *)0x0) || (piVar8 = (int *)*param_2, piVar8 != (int *)0x0)) {
    puVar10 = (ushort *)((long)piVar8 - (long)*piVar8);
    if ((6 < *puVar10) &&
       (((((ulong)puVar10[3] != 0 &&
          (8 < *puVar10 && *(char *)((long)piVar8 + (ulong)puVar10[3]) == '\x06')) &&
         ((ulong)puVar10[4] != 0)) &&
        (puVar1 = (uint *)((long)piVar8 + (ulong)puVar10[4]),
        piVar8 = (int *)((long)puVar1 + (ulong)*puVar1), piVar8 != (int *)0x0)))) {
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar11 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar8 + uVar11);
        lVar13 = (long)puVar1 + (ulong)*puVar1;
      }
      puVar12 = &DAT_cbf29ce484222645;
      sVar7 = strlen((char *)(lVar13 + 4));
      bVar4 = *(byte *)(lVar13 + 4);
      if (bVar4 != 0) {
        pbVar9 = (byte *)(lVar13 + 5);
        do {
          puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 != 0);
      }
      *param_1 = puVar12;
      param_1[1] = (char *)(lVar13 + 4);
      param_1[2] = sVar7;
      param_1[3] = 0;
      return;
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar5 = PTR_DAT_0437a0d8;
  uVar2 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = uVar2;
  plVar3 = *(long **)(puVar5 + 0x18);
  param_1[2] = *(undefined8 *)(puVar5 + 0x10);
  param_1[3] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b695f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


