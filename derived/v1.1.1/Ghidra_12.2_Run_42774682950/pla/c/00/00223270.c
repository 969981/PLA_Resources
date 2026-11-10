/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223270; name: FUN_00223270
 */


undefined8 FUN_00223270(long param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  uVar1 = FUN_00221cb4(param_1,&local_24,param_4,param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_00223480(param_1 + 0x30,param_2,param_3,local_24);
  return uVar2;
}


