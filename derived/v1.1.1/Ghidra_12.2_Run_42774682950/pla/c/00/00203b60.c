/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203b60; name: FUN_00203b60
 */


undefined8 FUN_00203b60(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *__s;
  
  lVar3 = param_1 + (long)param_2 * 0x18;
  if (*(int *)(lVar3 + 0x290) == 2) {
    lVar4 = param_1 + (long)param_2 * 0x18;
    if ((*(byte *)(lVar4 + 0x2d0) & 1) == 0) {
      lVar2 = *(long *)PTR_PTR_04372758;
      if ((*(byte *)(lVar2 + 0x10) >> 4 & 1) == 0) {
        return 4;
      }
      param_1 = param_1 + (long)param_2 * 0x18;
      uVar1 = *(undefined8 *)(lVar3 + 0x290);
      uVar5 = *(undefined8 *)(lVar3 + 0x2a0);
      __s = *(void **)(param_1 + 0x2c8);
      *(undefined8 *)(lVar4 + 0x2c8) = *(undefined8 *)(lVar3 + 0x298);
      *(undefined8 *)(lVar4 + 0x2d0) = uVar5;
      *(undefined8 *)(lVar4 + 0x2c0) = uVar1;
      *(undefined8 *)(lVar3 + 0x290) = 0;
      *(undefined8 *)(lVar3 + 0x298) = 0;
      *(undefined8 *)(lVar3 + 0x2a0) = 0;
      memset(__s,0,*(size_t *)(lVar2 + 0x18));
      *(void **)(param_1 + 0x298) = __s;
      return 0;
    }
  }
  return 0;
}


