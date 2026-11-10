/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318f46c; name: FUN_0318f46c
 */


void FUN_0318f46c(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  
  iVar5 = *param_2;
  if (iVar5 < *(int *)(param_1 + 0x20)) {
    lVar8 = *(long *)(param_1 + 0x18);
    iVar7 = iVar5;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar7 = *(int *)(*(long *)(param_1 + 0x90) + (long)iVar5 * 4);
    }
    if (iVar7 == -1) goto LAB_0318f4c8;
    plVar6 = (long *)(param_1 + 0xb0);
    iVar5 = iVar7;
  }
  else {
    plVar6 = (long *)(param_1 + 0xd0);
    iVar5 = iVar5 - *(int *)(param_1 + 0x20);
  }
  lVar8 = *plVar6;
LAB_0318f4c8:
  puVar1 = (undefined4 *)(lVar8 + (long)iVar5 * 0x10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar1 + 2);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x100) + (long)*param_2);
  }
  *(undefined1 *)(param_3 + 4) = uVar4;
  iVar5 = *param_2;
  iVar2 = iVar5 - *(int *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x50);
  if (iVar5 < *(int *)(param_1 + 0x20)) {
    lVar8 = *(long *)(param_1 + 0x48);
    iVar3 = iVar5;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar3 = *(int *)(*(long *)(param_1 + 0x90) + (long)iVar5 * 4);
    }
    iVar2 = iVar5;
    if (iVar3 != -1) {
      lVar8 = *(long *)(param_1 + 0x120);
      iVar2 = iVar3;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x140);
  }
  __dest = *(void **)(param_3 + 6);
  if ((int)(param_3[9] & 0x3fffffff) < iVar7) {
    __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar7,4,__dest,param_3[8]);
    *(void **)(param_3 + 6) = __dest;
  }
  memcpy(__dest,(void *)(lVar8 + (long)(iVar2 * iVar7) * 4),(long)iVar7 << 2);
  param_3[8] = iVar7;
  return;
}


