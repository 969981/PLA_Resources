/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0764c; name: FUN_02c0764c
 */


void FUN_02c0764c(undefined8 *param_1,int param_2,int param_3,undefined8 param_4,void *param_5,
                 undefined2 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  void *__dest;
  uint uVar4;
  
  FUN_02fa2af8();
  *(undefined2 *)(param_1 + 0xc) = param_6;
  uVar2 = param_3 * param_2;
  *param_1 = &PTR_LAB_04288548;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  puVar3 = PTR_PTR_0434a080;
  if ((int)uVar2 < 1) {
    __dest = (void *)0x0;
    if (uVar2 == 0) goto LAB_02c076b8;
  }
  else {
    if ((int)uVar2 < 0x40000000) {
      uVar4 = 0;
    }
    else {
      FUN_032bd0a8(uVar2);
      uVar4 = (*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar4) {
        uVar4 = 0x3fffffff;
      }
    }
    uVar1 = uVar2;
    if ((int)uVar2 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    __dest = (void *)FUN_032bd1d4(puVar3,uVar1,1,0,0,(uint *)((long)param_1 + 0x5c));
    param_1[10] = __dest;
    if (*(uint *)(param_1 + 0xb) == uVar2) goto LAB_02c076b8;
  }
  *(uint *)(param_1 + 0xb) = uVar2;
LAB_02c076b8:
  memcpy(__dest,param_5,(long)param_3 * (long)param_2);
  return;
}


