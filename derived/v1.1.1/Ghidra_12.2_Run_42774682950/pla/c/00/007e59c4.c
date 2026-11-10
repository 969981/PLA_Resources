/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e59c4; name: FUN_007e59c4
 */


void FUN_007e59c4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_007e5f0c();
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_007e5f54(param_1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,0);
      iVar1 = (int)param_1[0xb];
      goto joined_r0x007e5a14;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_007ec500(param_1,5);
      uVar2 = FUN_007e5f0c(param_1);
    } while ((uVar2 & 1) != 0);
  }
  iVar1 = (int)param_1[0xb];
joined_r0x007e5a14:
  if (iVar1 == 1) {
    FUN_007e5d18(param_1 + 0xb);
  }
  FUN_007e5bd8(param_1 + 0xb);
  param_1[0x11] = 0;
  return;
}


