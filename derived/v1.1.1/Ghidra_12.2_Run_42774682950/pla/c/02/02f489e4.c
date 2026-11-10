/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f489e4; name: FUN_02f489e4
 */


undefined8 FUN_02f489e4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined1 local_30;
  long *local_28;
  
  if (((*(byte *)(param_1 + 0x5a) & 0xe) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
    local_30 = 0;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
    local_38 = param_2;
    uVar1 = FUN_02f4534c(param_1);
    local_28 = (long *)FUN_02f453f0(param_1,uVar1);
    if (local_28 != (long *)0x0) {
      FUN_02f456cc(param_1,uVar1,&local_38,&local_28);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x80))();
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


