/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a39c50; name: FUN_01a39c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a39c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  
  if (*(char *)(param_1 + 0x3e2) == '\0') {
    FUN_01a4b7e0(param_1);
    *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x358);
    *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x360);
    *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x368);
    uVar2 = _UNK_03889e08;
    uVar1 = _DAT_03889e00;
    *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x370);
    *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x340);
    *(ulong *)(param_1 + 0x558) =
         CONCAT44(extraout_var_01 + (float)((ulong)uVar2 >> 0x20),extraout_var_00 + (float)uVar2);
    *(ulong *)(param_1 + 0x550) =
         CONCAT44(extraout_var + (float)((ulong)uVar1 >> 0x20),extraout_s0 + (float)uVar1);
    *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x348);
    *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x350);
  }
  *(undefined1 *)(param_1 + 0x3e2) = 1;
  return;
}


