/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8be10; name: FUN_02e8be10
 */


void FUN_02e8be10(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  
  if (param_2 != (long *)0x0) {
    for (param_2 = (long *)*param_2; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
      plVar1 = (long *)FUN_02e7d3d0(DAT_0440a120,param_2 + 1);
      if (plVar1 != (long *)0x0) {
        if (*(uint *)(param_1 + 0x40) != 0) {
          lVar2 = (ulong)*(uint *)(param_1 + 0x40) << 3;
          pbVar3 = (byte *)(*(long *)(param_1 + 0x38) + 4);
          do {
            if (((int)plVar1[2] == *(int *)(pbVar3 + -4)) &&
               ((uint)*pbVar3 == (*(uint *)((long)plVar1 + 0xaa) >> 0x11 & 1))) goto LAB_02e8be48;
            lVar2 = lVar2 + -8;
            pbVar3 = pbVar3 + 8;
          } while (lVar2 != 0);
        }
        FUN_02ed6660(plVar1,*(undefined4 *)(param_1 + 0x4c),0);
LAB_02e8be48:
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  return;
}


