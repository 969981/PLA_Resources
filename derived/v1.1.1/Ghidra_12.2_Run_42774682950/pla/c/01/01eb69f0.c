/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eb69f0; name: FUN_01eb69f0
 */


void FUN_01eb69f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = *(long *)(param_1 + 0x40) + 1;
  *(ulong *)(param_1 + 0x40) = uVar1;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (0x1ff < uVar1) {
    plVar3 = *(long **)(param_1 + 0x50);
    uVar2 = **(undefined8 **)(param_1 + 8);
    uVar1 = FUN_02bcc75c(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,0x1000,0x10);
    }
    else {
      FUN_02bcc824(plVar3,uVar2,0x1000,0x10);
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x100;
  }
  return;
}


