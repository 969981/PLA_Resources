/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00857048; name: FUN_00857048
 */


void FUN_00857048(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_043773c0;
  if (*(char *)(param_2 + 8) == '\0') {
    lVar2 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
    if (lVar2 != 0) {
      FUN_00856cbc(param_2 + 0x6450);
      uVar3 = **(undefined8 **)puVar1;
      *(undefined1 *)(param_2 + 8) = 1;
      *(undefined8 *)(param_2 + 0x68e0) = uVar3;
      local_38[0] = 0;
      goto LAB_008570b4;
    }
  }
  local_38[0] = 0x10408;
LAB_008570b4:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


