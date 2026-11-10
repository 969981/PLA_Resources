/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69cb8; name: FUN_02e69cb8
 */


undefined4
FUN_02e69cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  lVar1 = FUN_02e6564c(param_3,param_4,param_5);
  *(long *)(param_1 + 0x18) = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


