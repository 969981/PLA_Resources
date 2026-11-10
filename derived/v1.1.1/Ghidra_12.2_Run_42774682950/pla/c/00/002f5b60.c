/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f5b60; name: FUN_002f5b60
 */


void FUN_002f5b60(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_002ec2d0(param_2);
  *param_1 = uVar2;
  FUN_002ef750(&DAT_0438f800);
  param_1[1] = &DAT_0438f7e8;
  lVar1 = DAT_0438f7f8;
  param_1[2] = DAT_0438f7f8;
  *(undefined8 **)(lVar1 + 8) = param_1;
  *(undefined8 **)(param_1[1] + 0x10) = param_1;
  FUN_002ef790(&DAT_0438f800);
  return;
}


