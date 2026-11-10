/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e74a84; name: FUN_02e74a84
 */


void FUN_02e74a84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_042a7010;
  if (param_1[2] == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar3 = param_1[2];
  }
  puVar2 = (undefined8 *)param_1[3];
  puVar1 = &DAT_0440a110;
  if (DAT_0440a110 != param_1) {
    puVar1 = puVar2 + 2;
  }
  *puVar1 = uVar3;
  if (DAT_0440a108 == param_1) {
    DAT_0440a108 = puVar2;
  }
  DAT_0440a100 = DAT_0440a100 + -1;
  return;
}


