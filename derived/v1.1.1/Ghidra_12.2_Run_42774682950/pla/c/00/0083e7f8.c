/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e7f8; name: FUN_0083e7f8
 */


void FUN_0083e7f8(undefined8 param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  void *__dest;
  undefined4 local_610 [4];
  undefined1 local_600;
  undefined1 local_5ff;
  undefined2 local_38 [4];
  
  uVar1 = (param_4 & 0xffffffff) << 3;
  local_5ff = (undefined1)param_4;
  __dest = (void *)((ulong)&local_600 | 2);
  local_600 = 1;
  memcpy(__dest,param_3,-(param_4 >> 0x1f & 1) & 0xfffffff800000000 | uVar1);
  uVar2 = FUN_00847424(param_1);
  local_610[0] = 0xa0000000;
  local_38[0] = 0;
  lVar3 = FUN_008469d8(uVar2,local_610,param_2,((int)__dest + (int)uVar1) - (int)&local_600,local_38
                       ,0x1000000000000,0);
  if (lVar3 != 0) {
    uVar2 = FUN_00847424(param_1);
    FUN_0084695c(local_610,uVar2,&local_600);
  }
  return;
}


