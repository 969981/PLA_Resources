/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01395918; name: FUN_01395918
 */


void FUN_01395918(long param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90 [12];
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_b0 = &LAB_013962a4;
    local_a8 = FUN_01396304;
    local_a0 = &LAB_01396b00;
    puStack_98 = &LAB_01396b0c;
    local_90[0] = param_1;
    uVar2 = FUN_027a63b0(param_2,param_3,&local_b0);
    pcVar1 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      puStack_98 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar1)(local_90);
    }
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
  }
  return;
}


