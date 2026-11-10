/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed4138; name: FUN_02ed4138
 */


void FUN_02ed4138(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong unaff_x20;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    plVar4 = (long *)*param_1;
    if (0 < (int)uVar1) {
      do {
        lVar5 = *plVar4;
        unaff_x20 = unaff_x20 & 0xffffffff00000000 | (ulong)*(uint *)(lVar5 + 0x2b0);
        plVar2 = (long *)FUN_02ed3680(param_1,*(undefined8 *)(lVar5 + 0x2a8),unaff_x20);
        uVar3 = uVar3 - 1;
        *plVar2 = lVar5;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}


