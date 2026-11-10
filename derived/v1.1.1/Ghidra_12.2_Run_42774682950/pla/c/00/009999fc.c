/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009999fc; name: FUN_009999fc
 */


void FUN_009999fc(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = param_1[0xc];
  while (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1[7] + 0x10);
    (**(code **)*param_1)(param_1,uVar1);
    FUN_009b2e54(param_1,uVar1);
    lVar2 = param_1[0xc];
  }
  return;
}


