/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315d798; name: FUN_0315d798
 */


void FUN_0315d798(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)&DAT_04434b70);
  if (*(int *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) == -1) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    puVar3 = PTR_PTR_0434a080;
    iVar6 = *(int *)(param_1 + 0x40);
    uVar1 = iVar6 + 1;
    puVar5 = (uint *)(param_1 + 0x44);
    uVar7 = *puVar5;
    lVar4 = *(long *)(param_1 + 0x38);
    if ((int)(uVar7 & 0x3fffffff) <= iVar6) {
      if (0x3ffffffe < iVar6) {
        FUN_032bd0a8(uVar1);
        uVar7 = *puVar5;
      }
      uVar7 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar7) {
        uVar2 = uVar7;
      }
      lVar4 = FUN_032bd1d4(puVar3,uVar2,1,lVar4,iVar6,puVar5);
      iVar6 = *(int *)(param_1 + 0x40);
      *(long *)(param_1 + 0x38) = lVar4;
    }
    *(undefined1 *)(lVar4 + iVar6) = 0xff;
    *(uint *)(param_1 + 0x40) = uVar1;
  }
  if ((*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) &&
     (*param_2 == *(int *)(param_1 + 0x70))) {
    lVar4 = (long)*param_2 + 1;
    do {
      while( true ) {
        lVar8 = lVar4;
        if (*(int *)(param_1 + 0x30) <= lVar8) goto LAB_0315d8a8;
        if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) break;
        lVar4 = lVar8 + 1;
      }
      lVar4 = lVar8 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x28) + lVar8 * 4) != -1);
LAB_0315d8a8:
    *(int *)(param_1 + 0x70) = (int)lVar8;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_04434b70);
  return;
}


