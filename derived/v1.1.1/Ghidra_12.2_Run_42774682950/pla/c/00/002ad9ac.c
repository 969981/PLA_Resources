/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ad9ac; name: FUN_002ad9ac
 */


void FUN_002ad9ac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 == param_1) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = uVar1 & 1;
  puVar3 = (ulong *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((puVar3 == (ulong *)0x0) && (plVar4 = *(long **)(param_1 + 0x10), plVar4 != (long *)0x0)) {
    *plVar4 = (long)(PTR_DAT_04373488 + 0x10);
                    /* try { // try from 002ad9f4 to 002ad9fb has its CatchHandler @ 002adab0 */
    FUN_002b20a4(plVar4);
    if (((plVar4[1] & 1U) != 0) &&
       ((plVar5 = (long *)(plVar4[1] & 0xfffffffffffffffe), *plVar5 == 0 && (plVar5 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar5 + 1) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,plVar5[3]);
      }
      FUN_002e2ea0(PTR_LAB_04373088,plVar5);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
    uVar1 = *(ulong *)(param_1 + 8);
    uVar2 = uVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (uVar2 != 0) {
    uVar1 = uVar1 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar1 + 8) & 1) == 0) {
      *(undefined2 *)(uVar1 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
    }
  }
  FUN_002ad864(param_1,param_2);
  return;
}


