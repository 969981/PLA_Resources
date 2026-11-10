/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a8e7c; name: FUN_031a8e7c
 */


void FUN_031a8e7c(undefined4 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = 5;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 6) = param_2[1];
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 10) = param_2[3];
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0xe) = param_2[5];
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x12) = param_2[7];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_2[8];
  *(undefined8 *)(param_1 + 0x16) = param_2[9];
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = param_2[10];
  *(undefined8 *)(param_1 + 0x1a) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  param_1[0x1c] = *(undefined4 *)(param_2 + 0xc);
  param_1[0x1d] = *(undefined4 *)((long)param_2 + 100);
  uVar1 = param_2[0xe];
  *(undefined8 *)(param_1 + 0x1e) = param_2[0xd];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (param_2 + 0xd == (undefined8 *)(param_1 + 0x24)) {
    iVar2 = param_1[0x26];
  }
  else {
    __src = (void *)param_2[0xd];
    uVar4 = param_2[0xe] - (long)__src;
    uVar3 = uVar4 >> 2;
    iVar2 = (int)uVar3;
    __dest = *(void **)(param_1 + 0x24);
    if ((int)(param_1[0x27] & 0x3fffffff) < iVar2) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,uVar3 & 0xffffffff,4,__dest,param_1[0x26]);
      *(void **)(param_1 + 0x24) = __dest;
    }
    memcpy(__dest,__src,(long)(uVar4 * 0x40000000) >> 0x1e);
    param_1[0x26] = iVar2;
  }
  *(long *)(param_1 + 0x1e) = *(long *)(param_1 + 0x24);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x24) + (long)iVar2 * 4;
  return;
}


