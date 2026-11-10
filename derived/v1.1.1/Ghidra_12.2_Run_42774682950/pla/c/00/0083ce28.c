/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ce28; name: FUN_0083ce28
 */


void FUN_0083ce28(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x60);
  if ((((((*plVar1 != param_2) && (plVar1 = (long *)(param_1 + 0x70), *plVar1 != param_2)) &&
        (plVar1 = (long *)(param_1 + 0x80), *plVar1 != param_2)) &&
       ((plVar1 = (long *)(param_1 + 0x90), *plVar1 != param_2 &&
        (plVar1 = (long *)(param_1 + 0xa0), *plVar1 != param_2)))) &&
      ((plVar1 = (long *)(param_1 + 0xb0), *plVar1 != param_2 &&
       ((plVar1 = (long *)(param_1 + 0xc0), *plVar1 != param_2 &&
        (plVar1 = (long *)(param_1 + 0xd0), *plVar1 != param_2)))))) &&
     ((plVar1 = (long *)(param_1 + 0xe0), *plVar1 != param_2 &&
      (plVar1 = (long *)(param_1 + 0xf0), *plVar1 != param_2)))) {
    if (*(long *)(param_1 + 0x100) == param_2) {
      plVar1 = (long *)(param_1 + 0x100);
    }
    else if (*(long *)(param_1 + 0x110) == param_2) {
      plVar1 = (long *)(param_1 + 0x110);
    }
    else if (*(long *)(param_1 + 0x120) == param_2) {
      plVar1 = (long *)(param_1 + 0x120);
    }
    else if (*(long *)(param_1 + 0x130) == param_2) {
      plVar1 = (long *)(param_1 + 0x130);
    }
    else if (*(long *)(param_1 + 0x140) == param_2) {
      plVar1 = (long *)(param_1 + 0x140);
    }
    else if (*(long *)(param_1 + 0x150) == param_2) {
      plVar1 = (long *)(param_1 + 0x150);
    }
    else if (*(long *)(param_1 + 0x160) == param_2) {
      plVar1 = (long *)(param_1 + 0x160);
    }
    else if (*(long *)(param_1 + 0x170) == param_2) {
      plVar1 = (long *)(param_1 + 0x170);
    }
    else if (*(long *)(param_1 + 0x180) == param_2) {
      plVar1 = (long *)(param_1 + 0x180);
    }
    else if (*(long *)(param_1 + 400) == param_2) {
      plVar1 = (long *)(param_1 + 400);
    }
    else if (*(long *)(param_1 + 0x1a0) == param_2) {
      plVar1 = (long *)(param_1 + 0x1a0);
    }
    else if (*(long *)(param_1 + 0x1b0) == param_2) {
      plVar1 = (long *)(param_1 + 0x1b0);
    }
    else if (*(long *)(param_1 + 0x1c0) == param_2) {
      plVar1 = (long *)(param_1 + 0x1c0);
    }
    else {
      if (*(long *)(param_1 + 0x1d0) != param_2) {
        return;
      }
      plVar1 = (long *)(param_1 + 0x1d0);
    }
  }
  *plVar1 = 0;
  return;
}


