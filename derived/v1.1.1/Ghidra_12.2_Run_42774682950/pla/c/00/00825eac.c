/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825eac; name: FUN_00825eac
 */


void FUN_00825eac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04377cc8 + 0x10);
  if (param_1[0x1d] != 0) {
    FUN_0082696c(param_1);
    FUN_00826b64(param_1);
    if (*(long *)PTR_DAT_043773c0 != 0) {
      lVar1 = *(long *)PTR_DAT_043773c0 + 0x10;
      lVar2 = FUN_00847ad0(lVar1,*(undefined4 *)((long)param_1 + 0xa4),0x58);
      if (lVar2 != 0) {
        FUN_0084f9a8();
        FUN_00847a24(lVar1,*(undefined4 *)((long)param_1 + 0xa4));
      }
    }
    FUN_00850f6c(param_1);
  }
  FUN_00850cec(param_1);
  return;
}


