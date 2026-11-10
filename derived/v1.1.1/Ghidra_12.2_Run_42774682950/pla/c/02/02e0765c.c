/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0765c; name: FUN_02e0765c
 */


uint FUN_02e0765c(uint *param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *__src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong __n;
  
  __src = *(void **)(param_1 + 4);
  uVar5 = 0;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    uVar3 = param_1[3];
    if ((uVar3 == 0) && ((param_4 & 1) != 0)) {
      uVar3 = *param_1;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = (param_1[6] + param_1[1]) / uVar3;
      }
      uVar1 = (param_1[6] + param_1[1]) - uVar5 * uVar3;
      uVar4 = param_1[2];
      iVar2 = uVar1 - uVar4;
      uVar5 = 0;
      if (uVar1 < uVar4 || iVar2 == 0) {
        uVar5 = uVar3;
      }
      uVar5 = uVar5 + iVar2;
      if (param_3 <= uVar5) {
        uVar5 = param_3;
      }
    }
    else {
      uVar5 = uVar3;
      if (param_3 <= uVar3) {
        uVar5 = param_3;
      }
      param_1[3] = uVar3 - uVar5;
      uVar3 = *param_1;
      uVar4 = param_1[2];
    }
    uVar1 = uVar5;
    if (uVar3 - uVar4 <= uVar5) {
      uVar1 = uVar3 - uVar4;
    }
    memcpy(param_2,(void *)((long)__src + (ulong)uVar4 * 4),(ulong)(uVar1 << 2));
    memset((void *)((long)__src + (ulong)param_1[2] * 4),0,(ulong)(uVar1 << 2));
    if (uVar5 - uVar1 != 0) {
      __n = (ulong)((uVar5 - uVar1) * 4);
      memcpy((void *)((long)param_2 + (ulong)uVar1 * 4),__src,__n);
      memset(__src,0,__n);
    }
    uVar3 = *param_1;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = (param_1[2] + uVar5) / uVar3;
    }
    param_1[2] = (param_1[2] + uVar5) - uVar4 * uVar3;
  }
  return uVar5;
}


