/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2ff30; name: FUN_01c2ff30
 */


void FUN_01c2ff30(long param_1,uint param_2)

{
  float fVar1;
  
  if (((*(int *)(param_1 + 0x2c0) != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0x2c4) != 0)) {
    fVar1 = 1.0 / (float)param_2;
    *(uint *)(param_1 + 0x338) = param_2;
    *(ulong *)(param_1 + 0x348) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2b8) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_1 + 0x2b8) * fVar1);
    *(ulong *)(param_1 + 0x340) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_1 + 0x2b0) * fVar1);
  }
  return;
}


