/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00806110; name: FUN_00806110
 */


void FUN_00806110(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  
  FUN_007e5da4(param_1[0xc]);
  piVar2 = (int *)param_1[0xb];
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_40[0] = 0x2c18;
      local_30[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_30);
      FUN_007ee578(local_30,local_40);
      FUN_007e5cac(piVar2,local_30);
    }
    param_1[0xb] = 0;
  }
  uVar1 = FUN_007e5f0c(param_1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
  }
  return;
}


