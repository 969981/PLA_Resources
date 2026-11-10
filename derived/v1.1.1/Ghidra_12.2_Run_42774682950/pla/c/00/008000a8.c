/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008000a8; name: FUN_008000a8
 */


void FUN_008000a8(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  uVar1 = FUN_007e5f0c();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_007ec500(param_1,2);
      uVar1 = FUN_007e5f0c(param_1);
    } while ((uVar1 & 1) != 0);
  }
  piVar2 = (int *)param_1[0xb];
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_40[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_007ee578(auStack_30,local_40);
      FUN_007e5cac(piVar2,auStack_30);
    }
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x19) = 0xc;
  *(undefined2 *)((long)param_1 + 100) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}


