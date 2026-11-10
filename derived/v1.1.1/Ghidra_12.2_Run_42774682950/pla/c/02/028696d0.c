/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028696d0; name: FUN_028696d0
 */


void FUN_028696d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *local_58 [4];
  long *local_38;
  char *local_28;
  
  lVar2 = *(long *)(param_1 + 0x2fa0);
  if (lVar2 != 0) {
    local_28 = "bin/font/bmp/font_24_bold.bffnt";
    FUN_009f1b84(local_58,&local_28);
    FUN_00d279ec(lVar2,local_58,"font_24_bold.bffnt",0);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_58[0] != (long *)0x0) {
      (**(code **)(*local_58[0] + 0x20))();
    }
    uVar1 = FUN_00d27c54(*(undefined8 *)(param_1 + 0x2fa0));
    while ((uVar1 & 1) == 0) {
      nn::os::SleepThread(16000000);
      uVar1 = FUN_00d27c54(*(undefined8 *)(param_1 + 0x2fa0));
    }
  }
  return;
}


