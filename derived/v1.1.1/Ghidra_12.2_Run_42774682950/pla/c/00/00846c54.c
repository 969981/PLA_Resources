/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00846c54; name: FUN_00846c54
 */


undefined8
FUN_00846c54(long param_1,long param_2,byte param_3,uint param_4,byte param_5,short param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_043773c0;
  if (((*(char *)(param_2 + 0x621) == '\0') &&
      (((*(int *)(param_1 + 8) == 0 || (((*(char *)(param_2 + 0x622) != '\0' ^ param_3) & 1) == 0))
       && (*(uint *)(param_2 + 0x5f8) <= param_4)))) &&
     (((*(char *)(param_2 + 0x623) != '\0' ^ param_5) & 1) == 0)) {
    if (param_6 == 0) {
      if (*(short *)(param_2 + 0x10) == 0) {
        return 1;
      }
      lVar2 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      if (*(long *)(lVar2 + 0x98) == 0) {
        return 1;
      }
      lVar2 = FUN_00855004(*(undefined8 *)puVar1);
      if (*(short *)(param_2 + 0x10) == *(short *)(*(long *)(lVar2 + 0x98) + 0x38)) {
        return 1;
      }
    }
    else if (*(short *)(param_2 + 0x10) == param_6) {
      return 1;
    }
  }
  return 0;
}


