/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02709580; name: FUN_02709580
 */


void FUN_02709580(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (((*(char *)(param_1 + 0x80) == '\0') || (*(long *)(param_1 + 0x68) == 0)) ||
     (*(long *)(param_1 + 0x70) == 0)) {
    return;
  }
  if (*(uint *)(param_1 + 0x78) < 2) {
    plVar3 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x78) * 8 + 0x68);
    uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_1 + 0x90);
    uVar1 = *(uint *)(param_1 + 0x78);
    if (uVar2 == uVar1) {
      return;
    }
    if (uVar1 < 2) {
      (**(code **)(**(long **)(param_1 + (ulong)uVar1 * 8 + 0x68) + 0x58))();
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
      if (uVar2 < 2) {
        (**(code **)(**(long **)(param_1 + (ulong)uVar2 * 8 + 0x68) + 0x40))();
        *(uint *)(param_1 + 0x78) = uVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02704880();
}


