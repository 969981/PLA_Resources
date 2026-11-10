/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8e6dc; name: FUN_02e8e6dc
 */


void FUN_02e8e6dc(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  iVar3 = *(int *)(param_2 + 0x34);
  do {
    while( true ) {
      if (iVar3 == 0) {
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
        return;
      }
      *(uint *)(param_2 + 0x34) = iVar3 - 1U;
      uVar8 = *(uint *)(*(long *)(param_2 + 0x20) + (ulong)(iVar3 - 1U) * 0xc);
      if ((uVar8 != 0) && (uVar4 = *(uint *)(param_1 + 0x98), uVar4 != 0)) break;
LAB_02e8e7ec:
      iVar3 = *(int *)(param_2 + 0x34);
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar8 / uVar4;
    }
    uVar6 = (ulong)(uVar8 - uVar5 * uVar4);
    puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar6 * 8);
    if (puVar15 == (undefined8 *)0x0) goto LAB_02e8e7ec;
    if (*(uint *)(puVar15 + 1) == uVar8) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar7 = puVar15;
        puVar15 = (undefined8 *)*puVar7;
        if (puVar15 == (undefined8 *)0x0) goto LAB_02e8e7ec;
      } while (*(uint *)(puVar15 + 1) != uVar8);
    }
    uVar8 = *(uint *)(puVar15 + 5);
    uVar9 = (ulong)uVar8;
    if (uVar8 != 0) {
      puVar11 = (undefined8 *)puVar15[4];
      if (puVar11[2] == param_2) {
        puVar12 = puVar11;
      }
      else {
        lVar13 = uVar9 * 0x18;
        puVar14 = puVar11;
        do {
          lVar13 = lVar13 + -0x18;
          if (lVar13 == 0) goto LAB_02e8e7dc;
          puVar12 = puVar14 + 3;
          plVar1 = puVar14 + 5;
          puVar14 = puVar12;
        } while (*plVar1 != param_2);
      }
      if (1 < uVar8) {
        uVar2 = puVar11[uVar9 * 3 + -3];
        uVar10 = puVar11[uVar9 * 3 + -1];
        puVar12[1] = puVar11[uVar9 * 3 + -2];
        puVar12[2] = uVar10;
        *puVar12 = uVar2;
        uVar8 = *(uint *)(puVar15 + 5);
      }
      *(uint *)(puVar15 + 5) = uVar8 - 1;
    }
LAB_02e8e7dc:
    iVar3 = *(int *)(puVar15 + 6);
    *(int *)(puVar15 + 6) = iVar3 + -1;
    if (iVar3 + -1 != 0) goto LAB_02e8e7ec;
    if (puVar15[2] != 0) {
      (*DAT_0442d158)(*(undefined4 *)((long)puVar15 + 0x1c));
      puVar15[2] = 0;
      puVar15[3] = 0xffffffff00000000;
      if (*(int *)(puVar15 + 6) != 0) goto LAB_02e8e7ec;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar6 * 8);
    }
    *puVar7 = *puVar15;
    if (puVar15[4] != 0) {
      *(undefined4 *)(puVar15 + 5) = 0;
      (*DAT_0442d150)(0);
      puVar15[4] = 0;
      *(undefined4 *)((long)puVar15 + 0x2c) = 0;
    }
    (*DAT_0442d150)(0,puVar15);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
    iVar3 = *(int *)(param_2 + 0x34);
  } while( true );
}


