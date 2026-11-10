/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ef5d0; name: FUN_032ef5d0
 */


void FUN_032ef5d0(long param_1,undefined8 *param_2,ulong *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  
  plVar2 = (long *)PTR_PTR_0434a080;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x10);
  }
  if (((int)*(uint *)((long)param_2 + 0xc) < 0) ||
     (uVar1 = *(uint *)((long)param_2 + 0xc) & 0x3fffffff, uVar1 == 0)) {
    return;
  }
  while( true ) {
    uVar3 = (uint)*param_3;
    if ((uVar3 >> 0x14 & 1) != 0) break;
    if (((*param_3 & 1) != 0) || (param_3 = (ulong *)param_3[1], param_3 == (ulong *)0x0))
    goto LAB_032ef608;
  }
  if (param_3 != (ulong *)0x0) {
    uVar3 = (uVar3 & 0xfffff) - (uVar3 >> 1 & 0x55555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = (uint)(ushort)param_3[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                  2];
    goto LAB_032ef658;
  }
LAB_032ef608:
  uVar3 = 0;
LAB_032ef658:
                    /* WARNING: Could not recover jumptable at 0x032ef668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,*param_2,uVar3 * uVar1);
  return;
}


