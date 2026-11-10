/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03152208; name: FUN_03152208
 */


void * FUN_03152208(long *param_1,uint param_2,void *param_3,ulong param_4,uint *param_5)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  void *__src;
  void *__dest;
  ulong local_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar2 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar2) {
    param_2 = uVar2;
  }
  FUN_032bd100(param_2,0xd0,*param_5,&local_68);
  uVar2 = *param_5;
  pvVar1 = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  if (0 < (int)param_4) {
    lVar3 = 0;
    if ((int)param_4 != 1) {
      __src = param_3;
      __dest = pvVar1;
      do {
        memcpy(__dest,__src,0xd0);
        memcpy((void *)((long)__dest + 0xd0),(void *)((long)__src + 0xd0),0xd0);
        lVar3 = lVar3 + 2;
        __dest = (void *)((long)__dest + 0x1a0);
        __src = (void *)((long)__src + 0x1a0);
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar3);
    }
    if ((param_4 & 1) != 0) {
      memcpy((void *)((long)pvVar1 + lVar3 * 0xd0),(void *)((long)param_3 + lVar3 * 0xd0),0xd0);
    }
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) * 0xd0);
  }
  uVar2 = 0x3fffffff;
  if (local_68 < 0x33ffffff30) {
    uVar2 = (uint)(local_68 / 0xd0);
  }
  *param_5 = uVar2;
  return pvVar1;
}


