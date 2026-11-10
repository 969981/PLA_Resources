/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02902324; name: FUN_02902324
 */


void FUN_02902324(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  bool bVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar7 == 0)) {
    lVar18 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar7);
    lVar18 = (long)puVar1 + (ulong)*puVar1;
  }
  param_1[4] = 0;
  puVar16 = &DAT_cbf29ce484222645;
  *param_1 = &PTR_LAB_04274db8;
  param_1[1] = &DAT_cbf29ce484222645;
  param_1[2] = &DAT_03996322;
  param_1[3] = 0;
  sVar5 = strlen((char *)(lVar18 + 4));
  bVar3 = *(byte *)(lVar18 + 4);
  puVar8 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar8 = &DAT_cbf29ce484222645;
    pbVar11 = (byte *)(lVar18 + 5);
    do {
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar3 != 0);
  }
  *param_1 = &PTR_LAB_04274e08;
  param_1[1] = puVar8;
  param_1[2] = (char *)(lVar18 + 4);
  param_1[3] = sVar5;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = PTR_DAT_04388018 + 0x10;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = PTR_DAT_04388020 + 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = &DAT_cbf29ce484222645;
  param_1[0x17] = &DAT_03996322;
  puVar9 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar9 < 0xb) {
    if (*puVar9 < 7) {
      return;
    }
LAB_02902548:
    uVar7 = (ulong)puVar9[3];
    if (uVar7 != 0) {
      uVar17 = (ulong)*(uint *)((long)param_2 + uVar7);
      lVar18 = (long)((long)param_2 + uVar7) + uVar17;
      if (lVar18 != 0) {
        sVar5 = strlen((char *)(lVar18 + 4));
        bVar3 = *(byte *)(lVar18 + 4);
        if (bVar3 != 0) {
          pbVar11 = (byte *)((long)param_2 + uVar17 + uVar7 + 5);
          do {
            puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar3 != 0);
        }
        param_1[0x16] = puVar16;
        param_1[0x17] = (char *)(lVar18 + 4);
        param_1[0x18] = sVar5;
        param_1[0x19] = 0;
      }
    }
    return;
  }
  uVar7 = (ulong)puVar9[5];
  if (uVar7 == 0) goto LAB_02902548;
  uVar17 = (ulong)*(uint *)((long)param_2 + uVar7);
  piVar2 = (int *)((long)((long)param_2 + uVar7) + uVar17);
  if (piVar2 == (int *)0x0) goto LAB_02902548;
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 == 0)) {
LAB_029024bc:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar16 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbVar11 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    sVar5 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar15 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      param_1[0x16] = puVar16;
      param_1[0x17] = pbVar11;
      param_1[0x18] = sVar5;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      bVar14 = false;
      goto LAB_029024f4;
    }
  }
  else {
    uVar13 = (ulong)*(uint *)((long)piVar2 + uVar10);
    piVar2 = (int *)((long)((long)piVar2 + uVar10) + uVar13);
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar19 == 0))
    goto LAB_029024bc;
    uVar20 = (ulong)*(uint *)((long)piVar2 + uVar19);
    lVar18 = (long)((long)piVar2 + uVar19) + uVar20;
    pbVar11 = (byte *)(lVar18 + 4);
    if (lVar18 == 0) goto LAB_029024bc;
    sVar5 = strlen((char *)pbVar11);
    bVar3 = *pbVar11;
    if (bVar3 != 0) {
      pbVar12 = (byte *)((long)param_2 + uVar20 + uVar19 + uVar13 + uVar10 + uVar17 + uVar7 + 5);
      do {
        puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar3 != 0);
    }
  }
  plVar15 = (long *)0x0;
  param_1[0x18] = sVar5;
  param_1[0x16] = puVar16;
  param_1[0x17] = pbVar11;
  bVar14 = true;
LAB_029024f4:
  plVar6 = (long *)param_1[0x19];
  param_1[0x19] = plVar15;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  if (!bVar14) {
                    /* WARNING: Could not recover jumptable at 0x02902534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x20))(plVar15);
    return;
  }
  return;
}


