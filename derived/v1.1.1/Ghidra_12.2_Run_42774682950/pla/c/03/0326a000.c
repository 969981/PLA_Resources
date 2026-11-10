/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0326a000; name: FUN_0326a000
 */


void FUN_0326a000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  void *__dest;
  void *__src;
  
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *param_1 = *param_2;
  if (param_2 != param_1) {
    iVar4 = *(int *)(param_2 + 6);
    __src = (void *)param_2[5];
    if (iVar4 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar4,0x10,0,0,(long)param_1 + 0x34);
      param_1[5] = __dest;
    }
    memcpy(__dest,__src,(long)iVar4 << 4);
    *(int *)(param_1 + 6) = iVar4;
  }
  return;
}


