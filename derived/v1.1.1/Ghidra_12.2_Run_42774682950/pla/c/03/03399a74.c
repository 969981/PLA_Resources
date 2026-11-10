/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03399a74; name: FUN_03399a74
 */


undefined8 FUN_03399a74(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_0334ac78(param_1 + 0x18,param_2,0xffffffffffffffff);
  if ((int)uVar4 < 0) {
    uVar5 = 0x80040200;
  }
  else {
    piVar1 = (int *)(*(long *)(param_1 + 0xb8) + ((long)((ulong)uVar4 << 0x20) >> 0x1d));
    iVar3 = piVar1[1];
    lVar2 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
    uVar5 = 0;
    *param_3 = lVar2 + *piVar1;
    param_3[1] = lVar2 + iVar3;
  }
  return uVar5;
}


