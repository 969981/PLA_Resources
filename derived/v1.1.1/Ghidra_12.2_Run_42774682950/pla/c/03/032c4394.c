/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4394; name: FUN_032c4394
 */


void FUN_032c4394(long *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined *puVar6;
  void *pvVar7;
  size_t __n;
  long lVar8;
  void *__s;
  uint uVar9;
  long lVar10;
  
  *(undefined4 *)(param_2 + 1) = 0;
  puVar6 = PTR_PTR_0434a080;
  __s = (void *)*param_1;
  lVar10 = param_1[1];
  __n = lVar10 - (long)__s;
  if (__n == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      pvVar7 = memchr(__s,param_3 & 0xff,__n);
      if (pvVar7 == (void *)0x0) break;
      lVar8 = *param_2;
      pvVar5 = (void *)((long)pvVar7 + 1);
      uVar3 = uVar9 + 1;
      if ((*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= uVar9) {
        lVar8 = FUN_032c4584(puVar6,uVar3,lVar8,uVar9,(long)param_2 + 0xc);
        uVar9 = *(uint *)(param_2 + 1);
        *param_2 = lVar8;
      }
      puVar1 = (undefined8 *)(lVar8 + (long)(int)uVar9 * 0x10);
      __n = lVar10 - (long)pvVar5;
      *puVar1 = __s;
      puVar1[1] = pvVar7;
      *(uint *)(param_2 + 1) = uVar3;
      __s = pvVar5;
      uVar9 = uVar3;
    } while (__n != 0);
    lVar10 = param_1[1];
  }
  lVar8 = *param_2;
  iVar4 = uVar9 + 1;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= (int)uVar9) {
    lVar8 = FUN_032c4584(PTR_PTR_0434a080,iVar4,lVar8,uVar9);
    uVar9 = *(uint *)(param_2 + 1);
    *param_2 = lVar8;
  }
  plVar2 = (long *)(lVar8 + (long)(int)uVar9 * 0x10);
  *plVar2 = (long)__s;
  plVar2[1] = lVar10;
  *(int *)(param_2 + 1) = iVar4;
  return;
}


