/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009301e0; name: FUN_009301e0
 */


void FUN_009301e0(long param_1,undefined1 param_2,char param_3)

{
  long lVar1;
  undefined8 local_28;
  
  if (param_3 != '\x05') {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + 0x130) != param_3) {
      lVar1 = FUN_00923bb4();
      FUN_010c6ff8(*(undefined8 *)(param_1 + 0x78),param_2,lVar1 + 0x420);
      return;
    }
    local_28 = 0xe8cd8d64013d532;
    FUN_010c6ff8(*(undefined8 *)(param_1 + 0x78),param_2,&local_28);
  }
  return;
}


