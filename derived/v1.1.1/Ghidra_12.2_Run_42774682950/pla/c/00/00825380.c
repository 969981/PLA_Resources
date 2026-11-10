/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825380; name: thunk_FUN_00824c14
 */


void thunk_FUN_00824c14(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04377c78 + 0x10);
  lVar1 = *(long *)PTR_DAT_043773f8;
  if (lVar1 != 0) {
    if (*(long **)(lVar1 + 0x80) != param_1) {
      FUN_0082481c(lVar1 + 0x40);
      if (param_1[0x14] != 0) {
        param_1[0x14] = 0;
        FUN_0081aac8(param_1 + 0x11);
        *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + -1;
      }
      FUN_00824824(lVar1 + 0x40);
      if (*(int *)((long)param_1 + 0xcc) - 2U < 2) {
        nn::os::WaitThread((ThreadType *)param_1[0x1a]);
        *(undefined4 *)((long)param_1 + 0xcc) = 4;
        nn::os::DestroyThread((ThreadType *)param_1[0x1a]);
        lVar1 = param_1[0x1a];
      }
      else {
        if (*(int *)((long)param_1 + 0xcc) == 1) {
          FUN_008254b8(param_1,0);
        }
        nn::os::DestroyThread((ThreadType *)param_1[0x1a]);
        lVar1 = param_1[0x1a];
      }
      if (lVar1 != 0) {
        FUN_0081a800();
      }
      lVar1 = param_1[0x1b];
      if (lVar1 != 0) {
        FUN_0081a840(lVar1);
        FUN_0081a800(lVar1);
      }
    }
    FUN_00825280(param_1 + 6);
  }
  FUN_008251e0(param_1 + 6);
  FUN_0081e8a8(param_1);
  return;
}


