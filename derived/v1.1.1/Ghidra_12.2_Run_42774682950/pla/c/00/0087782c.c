/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087782c; name: FUN_0087782c
 */


void FUN_0087782c(long param_1,long param_2)

{
  undefined *puVar1;
  
  (**(code **)PTR_DAT_04378540)(*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_04378548)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 8));
  (**(code **)PTR_DAT_04378550)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 0xc));
  puVar1 = PTR_DAT_04378558;
  (**(code **)PTR_DAT_04378558)(*(undefined8 *)(param_1 + 0xb0),2,*(undefined4 *)(param_2 + 0x10));
  (**(code **)puVar1)(*(undefined8 *)(param_1 + 0xb0),1,*(undefined4 *)(param_2 + 0x14));
  if ((*(byte *)(param_2 + 0x1a) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x008778f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_04378560)(0,0x3f800000,*(undefined8 *)(param_1 + 0xb0),0);
    return;
  }
  return;
}


