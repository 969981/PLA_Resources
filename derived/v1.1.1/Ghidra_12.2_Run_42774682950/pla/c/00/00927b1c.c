/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00927b1c; name: FUN_00927b1c
 */


void FUN_00927b1c(long param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined1 local_34;
  
  uVar2 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  uVar1 = FUN_009321b4(uVar2,param_3);
  local_38 = uVar1;
  uVar2 = FUN_00923c10(*(undefined8 *)(param_1 + 0x68));
  local_34 = FUN_00929368(uVar2,param_2,param_4,uVar1);
  FUN_0092795c(param_1,param_4,&local_38);
  return;
}


