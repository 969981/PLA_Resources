/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002832f4; name: FUN_002832f4
 */


void FUN_002832f4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x1260) = 0;
  *(undefined8 *)(param_1 + 0x1268) = 0;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(undefined8 *)(param_1 + 0x1278) = 0;
  *(undefined8 *)(param_1 + 0x1280) = 0;
  *(undefined8 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x1290) = 0;
  *(undefined8 *)(param_1 + 0x1298) = 0;
  *(undefined8 *)(param_1 + 0x12a0) = 0;
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  *(undefined8 *)(param_1 + 0x12b0) = 0;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_00271960();
  FUN_0026ebd0(param_1 + 0x14c8);
  if (0 < *(int *)(param_1 + 8)) {
    lVar4 = 0;
    lVar5 = 0x8b8;
    do {
      lVar6 = *(long *)(param_1 + 0x10) + lVar5;
      *(undefined8 *)(lVar6 + -0x7c0) = 0;
      *(undefined8 *)(lVar6 + -0x7b8) = 0;
      lVar4 = lVar4 + 1;
      *(undefined8 *)(lVar6 + -2000) = 0;
      *(undefined8 *)(lVar6 + -0x7c8) = 0;
      *(undefined8 *)(lVar6 + -0x7e0) = 0;
      *(undefined8 *)(lVar6 + -0x7d8) = 0;
      *(undefined8 *)(lVar6 + -0x7f0) = 0;
      *(undefined8 *)(lVar6 + -0x7e8) = 0;
      *(undefined8 *)(lVar6 + -0x800) = 0;
      *(undefined8 *)(lVar6 + -0x7f8) = 0;
      *(undefined8 *)(lVar6 + -0x810) = 0;
      *(undefined8 *)(lVar6 + -0x808) = 0;
      *(undefined8 *)(lVar6 + -0x820) = 0;
      *(undefined8 *)(lVar6 + -0x818) = 0;
      *(undefined8 *)(lVar6 + -0x830) = 0;
      *(undefined8 *)(lVar6 + -0x828) = 0;
      *(undefined8 *)(lVar6 + -0x840) = 0;
      *(undefined8 *)(lVar6 + -0x838) = 0;
      *(undefined8 *)(lVar6 + -0x850) = 0;
      *(undefined8 *)(lVar6 + -0x848) = 0;
      *(undefined8 *)(lVar6 + -0x860) = 0;
      *(undefined8 *)(lVar6 + -0x858) = 0;
      *(undefined8 *)(lVar6 + -0x870) = 0;
      *(undefined8 *)(lVar6 + -0x868) = 0;
      *(undefined8 *)(lVar6 + -0x880) = 0;
      *(undefined8 *)(lVar6 + -0x878) = 0;
      *(undefined8 *)(lVar6 + -0x890) = 0;
      *(undefined8 *)(lVar6 + -0x888) = 0;
      *(undefined8 *)(lVar6 + -0x8a0) = 0;
      *(undefined8 *)(lVar6 + -0x898) = 0;
      *(undefined8 *)(lVar6 + -0x8b0) = 0;
      *(undefined8 *)(lVar6 + -0x8a8) = 0;
      lVar6 = *(long *)(param_1 + 0x10) + lVar5;
      *(undefined8 *)(lVar6 + -0x10) = 0;
      *(undefined8 *)(lVar6 + -8) = 0;
      *(undefined8 *)(lVar6 + -0x20) = 0;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined8 *)(lVar6 + -0x30) = 0;
      *(undefined8 *)(lVar6 + -0x28) = 0;
      *(undefined8 *)(lVar6 + -0x40) = 0;
      *(undefined8 *)(lVar6 + -0x38) = 0;
      *(undefined8 *)(lVar6 + -0x50) = 0;
      *(undefined8 *)(lVar6 + -0x48) = 0;
      *(undefined8 *)(lVar6 + -0x60) = 0;
      *(undefined8 *)(lVar6 + -0x58) = 0;
      *(undefined8 *)(lVar6 + -0x70) = 0;
      *(undefined8 *)(lVar6 + -0x68) = 0;
      *(undefined8 *)(lVar6 + -0x80) = 0;
      *(undefined8 *)(lVar6 + -0x78) = 0;
      *(undefined8 *)(lVar6 + -0x90) = 0;
      *(undefined8 *)(lVar6 + -0x88) = 0;
      *(undefined8 *)(lVar6 + -0xa0) = 0;
      *(undefined8 *)(lVar6 + -0x98) = 0;
      *(undefined8 *)(lVar6 + -0xb0) = 0;
      *(undefined8 *)(lVar6 + -0xa8) = 0;
      *(undefined8 *)(lVar6 + -0xc0) = 0;
      *(undefined8 *)(lVar6 + -0xb8) = 0;
      *(undefined8 *)(lVar6 + -0xd0) = 0;
      *(undefined8 *)(lVar6 + -200) = 0;
      *(undefined8 *)(lVar6 + -0xe0) = 0;
      *(undefined8 *)(lVar6 + -0xd8) = 0;
      *(undefined8 *)(lVar6 + -0xf0) = 0;
      *(undefined8 *)(lVar6 + -0xe8) = 0;
      *(undefined8 *)(lVar6 + -0x100) = 0;
      *(undefined8 *)(lVar6 + -0xf8) = 0;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar5);
      lVar5 = lVar5 + 0x9e8;
      puVar3[0x1e] = 0;
      puVar3[0x1f] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
    } while (lVar4 < *(int *)(param_1 + 8));
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
  if (0 < *(int *)(param_1 + 0x8b8)) {
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 8;
      FUN_00265dd8(*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5));
      FUN_00283150(param_1,*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5));
      *(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x8b8));
  }
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
  nn::os::LockMutex((MutexType *)(param_1 + 0x16e0));
  lVar4 = 0;
  bVar8 = false;
  lVar6 = *(long *)(param_1 + 0x4b0);
  lVar5 = param_1;
  while (lVar6 == 0) {
LAB_002834ec:
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x40) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x16e0));
      if (bVar8) {
        memset((void *)(param_1 + 0x4b0),0,0x400);
        return;
      }
      return;
    }
    lVar5 = param_1 + lVar4 * 8;
    lVar6 = *(long *)(lVar5 + 0x4b0);
  }
  plVar1 = (long *)(lVar5 + 0xb0);
  plVar2 = (long *)(lVar5 + 0x2b0);
  lVar5 = *(long *)(lVar6 + 0x1d0);
  if (*plVar1 == 0) goto LAB_00283548;
  do {
    *(long *)(*plVar2 + 0x1d0) = lVar6;
    *(long *)(lVar6 + 0x1d8) = *plVar2;
    lVar7 = lVar6;
    lVar6 = lVar5;
    while( true ) {
      *(undefined8 *)(lVar7 + 0x1d0) = 0;
      *plVar2 = lVar7;
      *(undefined1 *)(lVar7 + 0xf) = 0;
      if (lVar6 == 0) {
        bVar8 = true;
        goto LAB_002834ec;
      }
      lVar5 = *(long *)(lVar6 + 0x1d0);
      if (*plVar1 != 0) break;
LAB_00283548:
      *plVar1 = lVar6;
      *(undefined8 *)(lVar6 + 0x1d8) = 0;
      lVar7 = lVar6;
      lVar6 = lVar5;
    }
  } while( true );
}


