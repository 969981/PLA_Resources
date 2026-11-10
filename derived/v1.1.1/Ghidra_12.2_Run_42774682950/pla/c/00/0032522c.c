/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032522c; name: FUN_0032522c
 */


long FUN_0032522c(long param_1,void *param_2,uint param_3,int *param_4)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  void *local_38;
  
  uVar5 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  local_38 = param_2;
  if ((int)uVar5 < (int)param_3) {
    do {
      FUN_003280e4(param_4,*param_4 + ((int)uVar5 >> 3));
      uVar2 = uVar5 & 0xfffffff8;
      pvVar3 = (void *)FUN_003283d8(param_4,(int)uVar5 >> 3);
      memcpy(pvVar3,local_38,(long)(int)uVar2);
      local_38 = (void *)((long)local_38 + (long)(int)uVar2);
      uVar4 = FUN_0030c7bc(param_1,&local_38,0xffffffff);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      param_3 = param_3 - uVar2;
      uVar5 = (*(int *)(param_1 + 8) - (int)local_38) + 0x10;
    } while ((int)uVar5 < (int)param_3);
  }
  FUN_003280e4(param_4,*param_4 + ((int)param_3 >> 3));
  uVar5 = param_3 & 0xfffffff8;
  pvVar3 = (void *)FUN_003283d8(param_4,(int)param_3 >> 3);
  memcpy(pvVar3,local_38,(long)(int)uVar5);
  lVar1 = (long)local_38 + (long)(int)uVar5;
  if (param_3 != uVar5) {
    lVar1 = 0;
  }
  return lVar1;
}


