/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00370668; name: FUN_00370668
 */


void FUN_00370668(undefined8 *param_1,void *param_2,void *param_3)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar1 = param_1[2];
  sVar3 = (long)param_3 - (long)param_2;
  uVar5 = (long)sVar3 >> 2;
  pvVar4 = (void *)*param_1;
  if ((ulong)(lVar1 - (long)pvVar4 >> 2) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      param_1[1] = pvVar4;
      FUN_002e2ea0(PTR_LAB_04373088,pvVar4);
      lVar1 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (uVar5 >> 0x3e != 0) {
LAB_003706f0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 2) < 0x1fffffffffffffff) {
      uVar2 = lVar1 >> 1;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3e != 0)) goto LAB_003706f0;
    }
    else {
      uVar5 = 0x3fffffffffffffff;
    }
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5 * 4);
    param_1[2] = (void *)((long)pvVar4 + uVar5 * 4);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    if ((long)sVar3 < 1) {
      return;
    }
    memcpy(pvVar4,param_2,sVar3);
    pvVar4 = (void *)(param_1[1] + sVar3);
  }
  else {
    uVar2 = param_1[1] - (long)pvVar4 >> 2;
    __src = (void *)((long)param_2 + (param_1[1] - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_3;
    }
    sVar3 = (long)__src - (long)param_2;
    if (sVar3 != 0) {
      memmove(pvVar4,param_2,sVar3);
    }
    if (uVar2 < uVar5) {
      sVar3 = (long)param_3 - (long)__src;
      if ((long)sVar3 < 1) {
        return;
      }
      memcpy((void *)param_1[1],__src,sVar3);
      pvVar4 = (void *)(param_1[1] + sVar3);
    }
    else {
      pvVar4 = (void *)((long)pvVar4 + ((long)sVar3 >> 2) * 4);
    }
  }
  param_1[1] = pvVar4;
  return;
}


