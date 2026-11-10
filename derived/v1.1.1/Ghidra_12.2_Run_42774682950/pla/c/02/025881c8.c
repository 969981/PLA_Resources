/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025881c8; name: FUN_025881c8
 */


void FUN_025881c8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = *(long *)(param_1 + 0x98) + 1;
  *(ulong *)(param_1 + 0x98) = uVar1;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
  if (0xa9 < uVar1) {
    plVar3 = *(long **)(param_1 + 0xa8);
    uVar2 = **(undefined8 **)(param_1 + 0x60);
    uVar1 = FUN_02bcc75c(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,0xff0,8);
    }
    else {
      FUN_02bcc824(plVar3,uVar2,0xff0,8);
    }
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -0x55;
  }
  return;
}


