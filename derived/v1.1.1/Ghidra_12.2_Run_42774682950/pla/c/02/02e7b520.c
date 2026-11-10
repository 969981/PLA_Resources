/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b520; name: FUN_02e7b520
 */


void FUN_02e7b520(long param_1,long param_2,long *param_3)

{
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined2 *)(param_1 + 0x28) = 0xff00;
  *(long **)(param_1 + 0x20) = param_3;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8;
  if (param_2 != 0) {
    FUN_02e7c340(param_2);
    param_3 = *(long **)(param_1 + 0x20);
  }
  if (param_3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e7b57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3);
  return;
}


