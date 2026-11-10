/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a07c58; name: FUN_02a07c58
 */


void FUN_02a07c58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  char local_40 [8];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  if (*(char *)((long)param_3 + 0xc) == '\x06') {
    local_38 = *param_3;
    FUN_029d96b8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x520),local_40,&local_38);
    local_38 = *param_3;
    local_30 = 1;
    local_28 = 0;
    FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),local_40,&local_38);
    if ((local_40[0] != '\0') &&
       (uVar1 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)),
       (uVar1 & 1) != 0)) {
      return;
    }
  }
  else {
    FUN_02a07d10(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  }
  FUN_0298da6c(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined4 *)(param_3 + 1),
               *(undefined1 *)((long)param_3 + 0xc));
  return;
}


