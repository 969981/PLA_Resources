/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02760fdc; name: FUN_02760fdc
 */


void FUN_02760fdc(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *puVar2 = 0;
  uVar1 = FUN_00612290();
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = puVar2;
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      FUN_02761380(param_1,puVar2,param_2,param_2);
      param_2 = param_2 + 8;
      param_3 = param_3 + -8;
    } while (param_3 != 0);
  }
  return;
}


