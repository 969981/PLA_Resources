/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bac990; name: FUN_02bac990
 */


void FUN_02bac990(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  if ((*(char *)(*(long *)(param_1 + 0x238) + (ulong)*(uint *)(param_1 + 0x270) * 0x18) != '\0') &&
     (*(char *)(param_1 + 0x278) == '\0')) {
    if (*(long *)(param_1 + 400) == 0) {
      if (*(long *)(param_1 + 0x1d0) != 0) {
        FUN_02bb8c1c(0,param_3,param_4);
      }
    }
    else {
      FUN_02bb8290(*(long *)(param_1 + 400),param_3,param_4);
    }
    if (param_5 != 0) {
      FUN_02bb15d8(param_1,param_3,param_5);
    }
    FUN_02bb1868(param_1,param_3,1);
    if (*(char *)(*(long *)(param_1 + 0x238) + (ulong)*(uint *)(param_1 + 0x270) * 0x18) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x02baca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_043f0bb0)(*(undefined8 *)(param_3 + 0x10),1,
                      *(long *)(*(long *)(param_1 + 0x238) +
                                (ulong)*(uint *)(param_1 + 0x270) * 0x18 + 8) + 0xa0);
      return;
    }
  }
  return;
}


