/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d34cc; name: FUN_013d34cc
 */


void FUN_013d34cc(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined4 local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x5d0);
  if ((uVar2 & 1) != 0) {
    if ((int)param_2 == 0) {
      FUN_00d42690(param_1,param_2,1);
      FUN_00d42438(param_1,0,1);
      lVar1 = *(long *)(param_1 + 0x5b0);
      *(undefined8 *)(param_1 + 0x5b0) = 0;
      if (lVar1 != 0) {
        FUN_00d347f0(param_1 + 0x5b8);
      }
      local_30 = param_1 + 0x5d0;
      local_28 = 0;
      FUN_013d4690(&local_30);
    }
    else {
      *(float *)(param_1 + 0x5d8) = 30.0 / (float)(param_2 & 0xffffffff);
      if ((param_3 & 1) == 0) {
        uVar2 = uVar2 | 2;
      }
      else {
        uVar2 = uVar2 | 0x40;
      }
      *(ulong *)(param_1 + 0x5d0) = uVar2;
    }
  }
  return;
}


