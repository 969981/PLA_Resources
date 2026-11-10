/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02decce8; name: FUN_02decce8
 */


void FUN_02decce8(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) goto LAB_02deceb0;
  uVar2 = *(uint *)(param_2 + 0x90);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
  puVar8 = *(uint **)(*param_1 + uVar5 * 8);
  if (puVar8 == (uint *)0x0) goto LAB_02deceb0;
  if (*puVar8 == uVar2) {
    puVar7 = (uint *)0x0;
  }
  else {
    do {
      puVar7 = puVar8;
      puVar8 = *(uint **)(puVar7 + 2);
      if (puVar8 == (uint *)0x0) goto LAB_02deceb0;
    } while (*puVar8 != uVar2);
  }
  uVar1 = puVar8[0x1c];
  uVar2 = uVar1 - 1;
  puVar8[0x1c] = uVar2;
  if (uVar2 == 0 || (int)uVar1 < 1) {
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)(*param_1 + uVar5 * 8);
    }
    else {
      puVar7 = puVar7 + 2;
    }
    *(undefined8 *)puVar7 = *(undefined8 *)(puVar8 + 2);
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    plVar4 = *(long **)(puVar8 + 0x2e);
    if (plVar4 != (long *)0x0) {
      if (0 < (int)puVar8[0x24]) {
        lVar9 = 0;
        lVar10 = 0;
        lVar6 = *plVar4;
        while( true ) {
          if (lVar6 != 0) {
            (*DAT_0442d150)(5,lVar6);
            plVar4 = *(long **)(puVar8 + 0x2e);
          }
          lVar6 = *(long *)((long)plVar4 + lVar9 + 0x10);
          if (lVar6 != 0) {
            (*DAT_0442d158)(5,lVar6);
            plVar4 = *(long **)(puVar8 + 0x2e);
          }
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x20;
          if ((int)puVar8[0x24] <= lVar10) break;
          lVar6 = *(long *)((long)plVar4 + lVar9);
        }
        if (plVar4 == (long *)0x0) goto LAB_02dece10;
      }
      (*DAT_0442d150)(5);
    }
LAB_02dece10:
    puVar7 = puVar8 + 0x14;
    if (*(long *)puVar7 != 0) {
      (*DAT_0442d150)(5);
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar7[0] = 0;
      puVar7[1] = 0;
    }
    if (*(long *)(puVar8 + 0x10) != 0) {
      (*DAT_0442d150)(5);
    }
    if (*(long *)(puVar8 + 0xc) != 0) {
      (*DAT_0442d150)(5);
    }
    if (*(long *)(puVar8 + 8) != 0) {
      (*DAT_0442d150)(5);
    }
    if (*(long *)(puVar8 + 4) != 0) {
      (*DAT_0442d150)(5);
    }
    (*DAT_0442d150)(5,puVar8);
  }
  if (((int)param_1[2] == 0) && (*param_1 != 0)) {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
LAB_02deceb0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
}


