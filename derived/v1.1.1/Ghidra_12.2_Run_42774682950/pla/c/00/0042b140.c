/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042b140; name: FUN_0042b140
 */


undefined8 FUN_0042b140(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  uVar1 = FUN_0040c070();
  uVar2 = FUN_0040c070(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_0040d150(uVar1,uVar2);
  return uVar3;
}


