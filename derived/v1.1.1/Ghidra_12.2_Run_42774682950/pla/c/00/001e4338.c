/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e4338; name: FUN_001e4338
 */


undefined8 FUN_001e4338(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x48);
  if (lVar2 == 0) {
    lVar2 = FUN_002055c8(*(undefined8 *)(param_4 + 0x20),&DAT_038f8f8a);
    *(long *)(param_4 + 0x48) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
  }
  uVar1 = FUN_002055ec(param_1,param_2,param_3,lVar2);
  return uVar1;
}


