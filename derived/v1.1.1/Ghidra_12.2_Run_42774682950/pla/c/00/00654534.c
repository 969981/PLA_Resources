/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00654534; name: FUN_00654534
 */


void FUN_00654534(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_2 + 0x60) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = FUN_00612290();
    param_1[2] = 0;
    param_1[3] = uVar1;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_006daca0(param_1,*param_2 + 0x70);
  return;
}


