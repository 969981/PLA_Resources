/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002123ec; name: FUN_002123ec
 */


undefined8 FUN_002123ec(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_24;
  
  if (param_4 < 0) {
    return 0xfffffe0b;
  }
  if (param_3 == 0) {
    local_24 = param_4 - *(int *)(param_1 + 0x95c);
    if (local_24 == 0) {
      return 0;
    }
    piVar3 = (int *)(param_1 + 0x95c);
    lVar1 = param_1 + 0x950;
    lVar2 = param_1 + 0x958;
  }
  else {
    lVar2 = FUN_00205cf4(param_1,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)(lVar2 + 0xcc);
    local_24 = param_4 - *piVar3;
    if (local_24 == 0) {
      return 0;
    }
    lVar1 = lVar2 + 0xc0;
    lVar2 = lVar2 + 200;
  }
  if (local_24 < 0) {
    uVar4 = FUN_00205774(piVar3,lVar1,lVar2,&local_24);
    return uVar4;
  }
  uVar4 = FUN_00205864();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (local_24 < 1) {
    return 0;
  }
  uVar4 = FUN_0020b5e8(param_1,0,param_3);
  return uVar4;
}


