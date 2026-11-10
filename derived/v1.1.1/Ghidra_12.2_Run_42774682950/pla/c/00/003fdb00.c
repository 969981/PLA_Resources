/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fdb00; name: FUN_003fdb00
 */


undefined8 FUN_003fdb00(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    do {
      lVar2 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_2 + 8),param_3,param_4);
      if (lVar2 == 0) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      lVar1 = 0x18;
      if (lVar2 < 1) {
        lVar1 = 0x20;
      }
      param_2 = *(long *)(param_2 + lVar1);
    } while (param_2 != 0);
  }
  return 0;
}


