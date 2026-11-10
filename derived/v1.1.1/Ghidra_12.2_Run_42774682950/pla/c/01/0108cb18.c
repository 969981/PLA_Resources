/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108cb18; name: FUN_0108cb18
 */


void FUN_0108cb18(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  
  if (*param_2 == '\0') {
    piVar7 = *(int **)(param_2 + 0x10);
    if (piVar7 == (int *)0x0) {
      piVar7 = *(int **)(param_2 + 8);
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x33) ||
         (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x19], uVar12 == 0))
      goto LAB_0108cc6c;
LAB_0108cbd8:
      lVar13 = (long)((long)piVar7 + uVar12) + (ulong)*(uint *)((long)piVar7 + uVar12);
    }
    else {
      if ((0x32 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
         (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x19], uVar12 != 0))
      goto LAB_0108cbd8;
LAB_0108cc6c:
      lVar13 = 0;
    }
    puVar11 = &DAT_cbf29ce484222645;
    sVar6 = strlen((char *)(lVar13 + 4));
    bVar3 = *(byte *)(lVar13 + 4);
    if (bVar3 != 0) {
      pbVar9 = (byte *)(lVar13 + 5);
      do {
        puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    *param_1 = puVar11;
    param_1[1] = (char *)(lVar13 + 4);
LAB_0108cc2c:
    param_1[2] = sVar6;
    param_1[3] = 0;
  }
  else {
    piVar7 = *(int **)(param_2 + 0x18);
    if ((0x2e < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x17], uVar12 != 0)) {
      uVar8 = (ulong)*(uint *)((long)piVar7 + uVar12);
      lVar13 = (long)((long)piVar7 + uVar12) + uVar8;
      pbVar9 = (byte *)(lVar13 + 4);
      if (lVar13 != 0) {
        puVar11 = &DAT_cbf29ce484222645;
        sVar6 = strlen((char *)pbVar9);
        bVar3 = *pbVar9;
        if (bVar3 != 0) {
          pbVar10 = (byte *)((long)piVar7 + uVar8 + uVar12 + 5);
          do {
            puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar3 != 0);
        }
        *param_1 = puVar11;
        param_1[1] = pbVar9;
        goto LAB_0108cc2c;
      }
    }
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar4 = PTR_DAT_0437a0d8;
    uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
    param_1[1] = uVar1;
    plVar2 = *(long **)(puVar4 + 0x18);
    param_1[2] = *(undefined8 *)(puVar4 + 0x10);
    param_1[3] = plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0108cc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}


