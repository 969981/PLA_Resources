/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c5d0; name: FUN_0040c5d0
 */


undefined8 * FUN_0040c5d0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    if (*(int *)((long)param_1 + 0xc) < (int)uVar2) {
      lVar1 = FUN_0040c320(param_1);
      if (lVar1 == 0) {
        return (undefined8 *)0x0;
      }
      uVar2 = *(uint *)(param_2 + 1);
    }
    if (0 < (int)uVar2) {
      memcpy((void *)*param_1,(void *)*param_2,
             -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
      uVar2 = *(uint *)(param_2 + 1);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(uint *)(param_1 + 1) = uVar2;
  }
  return param_1;
}


