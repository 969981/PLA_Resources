/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00608754; name: FUN_00608754
 */


void FUN_00608754(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (*(byte *)(param_1 + 0x20) >> 1 == 0) goto LAB_006087bc;
  }
  else if (*(long *)(param_1 + 0x28) == 0) goto LAB_006087bc;
  FUN_002e4094(param_1,&DAT_039a2ba7,3);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    lVar1 = param_1 + 0x21;
    uVar2 = (ulong)(*(byte *)(param_1 + 0x20) >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x28);
    if ((long)uVar2 < 0) {
                    /* try { // try from 006087d8 to 006087f7 has its CatchHandler @ 006087f8 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    lVar1 = *(long *)(param_1 + 0x30);
  }
  FUN_002e4094(param_1,lVar1,uVar2);
LAB_006087bc:
  FUN_002e4094(param_1,&DAT_0396725e,1);
  return;
}


