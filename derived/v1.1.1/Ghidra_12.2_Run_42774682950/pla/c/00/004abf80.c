/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004abf80; name: FUN_004abf80
 */


undefined8 FUN_004abf80(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1 != 0) && (param_3 != 0)) {
    if ((param_2 != 0x80) && ((param_2 != 0x100 && (param_2 != 0xc0)))) {
      return 0xfffffffe;
    }
    uVar1 = FUN_004ac000(param_2,param_1,param_3);
    uVar2 = 0;
    *(undefined4 *)(param_3 + 0x110) = uVar1;
  }
  return uVar2;
}


