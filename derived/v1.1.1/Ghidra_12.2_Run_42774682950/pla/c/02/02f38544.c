/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f38544; name: FUN_02f38544
 */


void FUN_02f38544(int param_1,long *param_2)

{
  long *plVar1;
  
  FUN_02e76a20(param_1,*(undefined4 *)(*param_2 + 0xc),0,1);
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) | 1;
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) & 0xfd;
  plVar1 = (long *)*param_2;
  while (plVar1 != (long *)0x0) {
    if ((int)plVar1[1] == param_1) {
      *(byte *)(plVar1 + 2) = *(byte *)(plVar1 + 2) | 1;
      plVar1 = (long *)*param_2;
    }
    plVar1 = (long *)*plVar1;
    *param_2 = (long)plVar1;
  }
  FUN_02f382cc();
  return;
}


