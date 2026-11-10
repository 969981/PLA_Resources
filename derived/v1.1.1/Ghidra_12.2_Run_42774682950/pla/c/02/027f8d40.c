/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f8d40; name: FUN_027f8d40
 */


void FUN_027f8d40(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 local_14 [4];
  
  plVar2 = *(long **)(param_1 + 0x138);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((int)plVar2[0x98] == 5) {
    uVar1 = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(plVar2 + 0x98) = 3;
    *(undefined4 *)((long)plVar2 + 0x4d4) = uVar1;
    plVar2 = *(long **)(param_1 + 0x138);
  }
  (**(code **)(*plVar2 + 0x48))();
  local_14[0] = FUN_027f82d8(param_1);
  FUN_02835650(local_14);
  if (*(char *)(param_1 + 0x358) == '\x01') {
    FUN_027fcb40(*(undefined8 *)(param_1 + 0xd0),1);
  }
  FUN_027f8504(param_1);
  return;
}


