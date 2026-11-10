/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d8cbe8; name: FUN_01d8cbe8
 */


void FUN_01d8cbe8(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (((((*(char *)(param_1 + 200) == '\0') || (*(long *)(param_1 + 0x68) == 0)) ||
       (*(long *)(param_1 + 0x70) == 0)) ||
      ((((*(long *)(param_1 + 0x78) == 0 || (*(long *)(param_1 + 0x80) == 0)) ||
        ((*(long *)(param_1 + 0x88) == 0 ||
         ((*(long *)(param_1 + 0x90) == 0 || (*(long *)(param_1 + 0x98) == 0)))))) ||
       (*(long *)(param_1 + 0xa0) == 0)))) ||
     (((*(long *)(param_1 + 0xa8) == 0 || (*(long *)(param_1 + 0xb0) == 0)) ||
      (*(long *)(param_1 + 0xb8) == 0)))) {
    return;
  }
  if (*(uint *)(param_1 + 0xc0) < 0xb) {
    plVar3 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0xc0) * 8 + 0x68);
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_2,param_1 + 0xd0);
    uVar1 = *(uint *)(param_1 + 0xc0);
    if (uVar2 == uVar1) {
      return;
    }
    if (uVar1 < 0xb) {
      (**(code **)(**(long **)(param_1 + (ulong)uVar1 * 8 + 0x68) + 0x58))();
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xc0);
      if (uVar2 < 0xb) {
        (**(code **)(**(long **)(param_1 + (ulong)uVar2 * 8 + 0x68) + 0x40))();
        *(uint *)(param_1 + 0xc0) = uVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d862f0();
}


