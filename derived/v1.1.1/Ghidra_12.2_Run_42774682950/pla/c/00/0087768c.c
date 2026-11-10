/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087768c; name: FUN_0087768c
 */


void FUN_0087768c(long param_1,long param_2)

{
  byte bVar1;
  
  (**(code **)PTR_DAT_043784e8)(*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_043784f0)
            (*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x20),
             *(undefined4 *)(param_2 + 0x24),*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_043784f8)(*(undefined8 *)(param_1 + 0xb0),param_2 + 4);
  bVar1 = *(byte *)(param_2 + 0x2d);
  if ((bVar1 & 1) != 0) {
    (**(code **)PTR_DAT_04378500)(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 0x1c));
    bVar1 = *(byte *)(param_2 + 0x2d);
  }
  (**(code **)PTR_DAT_04378508)(*(undefined8 *)(param_1 + 0xb0),(bVar1 >> 1 ^ 0xff) & 1);
  (**(code **)PTR_DAT_04378510)
            (*(undefined8 *)(param_1 + 0xb0),(*(byte *)(param_2 + 0x2d) >> 2 ^ 0xff) & 1);
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00877784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378518)(*(undefined8 *)(param_1 + 0xb0),*(byte *)(param_2 + 0x2d) >> 3 & 1);
  return;
}


