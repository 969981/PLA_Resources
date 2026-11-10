/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e4bb4; name: FUN_001e4bb4
 */


undefined8 FUN_001e4bb4(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = (*(uint *)(param_1 + 0x80) & 2) << 1;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (uVar1 < *(uint *)(param_1 + 0x88)) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      uVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),0,0);
      iVar2 = (int)uVar3;
      if (iVar2 - 1U < 2) {
        return uVar3;
      }
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          return 1;
        }
        goto LAB_001e4c14;
      }
    }
    uVar3 = 2;
  }
  else {
LAB_001e4c14:
    uVar3 = 0;
    *(uint *)(param_1 + 0x88) = uVar1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return uVar3;
}


