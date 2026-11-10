/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026c0748; name: FUN_026c0748
 */


void FUN_026c0748(long param_1)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined2 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (((*(char *)(param_1 + 0x80) == '\0') || (*(ulong *)(param_1 + 0x80) >> 0x20 != 0)) ||
     ((*(ulong *)(param_1 + 0x80) & 0xff) == 0)) {
    local_a0 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a8 = 0;
    local_80 = *(undefined8 *)PTR_DAT_0437a0f8;
    uStack_78 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
    local_30 = 0;
    local_70 = *(undefined8 *)PTR_DAT_04379570;
    uStack_68 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_b0 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_026bbf1c(param_1,&local_b0);
  }
  return;
}


