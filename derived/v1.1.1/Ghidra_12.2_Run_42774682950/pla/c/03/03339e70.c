/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03339e70; name: FUN_03339e70
 */


void FUN_03339e70(long *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (((long *)*param_1 != param_1 + 2) && (-1 < (int)*(uint *)((long)param_1 + 0xc))) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,(long *)*param_1,
               ((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 3);
    *param_1 = (long)(param_1 + 2);
    *(undefined4 *)((long)param_1 + 0xc) = 0x80000001;
  }
  return;
}


