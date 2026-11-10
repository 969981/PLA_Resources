/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012496c0; name: FUN_012496c0
 */


undefined8 FUN_012496c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    uVar2 = FUN_00d6868c(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  else if ((*(char *)(param_1 + 0xb0) == '\0') &&
          (uVar2 = FUN_00d681d0(*(undefined8 *)(param_1 + 0x90)), (uVar2 & 1) != 0)) {
    FUN_00d6802c(*(undefined8 *)(param_1 + 0x90),1);
    iVar1 = FUN_00d686a0(*(undefined8 *)(param_1 + 0x90));
    uVar3 = 1;
    if (iVar1 != 0) {
      uVar3 = 2;
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar3;
    *(char *)(param_1 + 0xb0) = *(char *)(param_1 + 0xb0) + '\x01';
  }
  return 0;
}


