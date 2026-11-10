/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f68b4; name: FUN_031f68b4
 */


ulong FUN_031f68b4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  
  if (*(char *)(param_1 + 0x28) == -2) {
    uVar2 = 1;
  }
  else {
    lVar1 = param_1 + 0x10;
    uVar2 = FUN_031f6380(lVar1,param_1,param_2,&fStack_38);
    if ((int)uVar2 != 0) {
      FUN_031f5e90(lVar1,&local_3c,&local_40,&local_44,&local_48);
      uVar2 = 0;
      if ((((local_3c <= fStack_38) && (local_40 <= local_34)) && (fStack_38 <= local_44)) &&
         (local_34 <= local_48)) {
        FUN_031f6068(lVar1,param_1,&local_50);
        if (0.0 < (*(float *)(param_1 + 0x38) - local_50) * (local_34 - fStack_4c) -
                  (fStack_38 - local_50) * (*(float *)(param_1 + 0x3c) - fStack_4c)) {
          uVar2 = 0;
        }
        else {
          uVar2 = (ulong)((local_50 - *(float *)(param_1 + 0x30)) *
                          (local_34 - *(float *)(param_1 + 0x34)) -
                          (fStack_38 - *(float *)(param_1 + 0x30)) *
                          (fStack_4c - *(float *)(param_1 + 0x34)) <= 0.0);
        }
      }
    }
  }
  return uVar2;
}


