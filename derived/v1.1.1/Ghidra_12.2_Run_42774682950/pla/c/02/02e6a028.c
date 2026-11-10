/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6a028; name: FUN_02e6a028
 */


undefined8 FUN_02e6a028(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  *(long *)(param_1 + 0x50) = param_2;
  if (*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    uVar4 = 0x1f;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_2 + 0x610) + 0x18))(*(long **)(param_2 + 0x610),param_3);
    if ((uVar3 != 0) && (uVar1 = *(uint *)(param_2 + 0x618), uVar3 <= uVar1)) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar1 / uVar3;
      }
      if (uVar1 == uVar2 * uVar3) {
        *(uint *)(param_1 + 0x60) = uVar3;
        return 1;
      }
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    uVar4 = 2;
  }
  return uVar4;
}


