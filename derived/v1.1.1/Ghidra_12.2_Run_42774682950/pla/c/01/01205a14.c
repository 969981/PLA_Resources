/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01205a14; name: FUN_01205a14
 */


void FUN_01205a14(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_00d5f940(*(undefined8 *)(param_1 + 0x90));
  if ((uVar3 & 1) == 0) {
    return;
  }
  iVar1 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x90));
  uVar2 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x90),iVar1);
  if (iVar1 == 1) {
    FUN_0121f8bc(*(undefined8 *)(param_1 + 0x90),uVar2);
  }
  FUN_01206c08(param_1);
  return;
}


