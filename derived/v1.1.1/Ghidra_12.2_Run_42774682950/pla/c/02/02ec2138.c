/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec2138; name: FUN_02ec2138
 */


void FUN_02ec2138(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 4);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    FUN_02ec2cac(plVar1);
    FUN_02f59e60(0,plVar1);
    plVar1 = (long *)lVar2;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}


