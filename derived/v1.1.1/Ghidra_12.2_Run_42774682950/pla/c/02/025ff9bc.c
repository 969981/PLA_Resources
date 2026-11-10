/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ff9bc; name: FUN_025ff9bc
 */


void FUN_025ff9bc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 4) == 2) {
    uVar3 = *(ulong *)(param_1 + 0x1f0);
    uVar2 = uVar3 & 0xfffffffffffffff7;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    *(ulong *)(param_1 + 0x1f0) = uVar2;
    *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x200) != 0) {
      FUN_025ff800(*(long *)(param_1 + 0x200),(uVar3 >> 3 & 1) << 0x20 | 3);
      uVar2 = *(ulong *)(param_1 + 0x1f0);
      lVar1 = *(long *)(param_1 + 0x200);
    }
    *(ulong *)(param_1 + 0x1f0) = uVar2 & 0xffffffffffffffbf;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined1 *)(param_1 + 0x340) = 0;
    *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
    if (lVar1 != 0) {
      FUN_025ff800(lVar1,(uVar2 >> 6 & 1) << 0x20 | 6,uVar2 & 0xffffffffffffffbf);
      return;
    }
  }
  return;
}


