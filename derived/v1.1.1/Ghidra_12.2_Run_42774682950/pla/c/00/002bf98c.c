/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bf98c; name: FUN_002bf98c
 */


void FUN_002bf98c(undefined1 *param_1,char *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int local_58 [2];
  byte local_50;
  undefined8 local_40;
  byte local_38;
  undefined8 local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (long *)(param_1 + 0x18);
    if (*plVar2 != 0) {
      if (*param_2 == '\0') {
        *param_1 = 0;
        (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
        *(undefined8 *)(param_1 + 0x18) = 0;
        return;
      }
      *param_1 = 1;
      (**(code **)*puVar1)(local_58,puVar1,plVar2);
      *param_2 = local_58[0] == 0;
      if ((local_38 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_28);
      }
      if ((local_50 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_40);
      }
      *plVar2 = 0;
      return;
    }
    if (((param_1[0x21] == '\0') || (param_1[0x22] != '\0')) &&
       (*param_1 = 0, param_1[0x20] == '\0')) {
      *param_2 = '\0';
      return;
    }
  }
  return;
}


