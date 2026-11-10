/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0073c0a4; name: FUN_0073c0a4
 */


void FUN_0073c0a4(undefined1 *param_1,char *param_2)

{
  long *plVar1;
  int local_58 [2];
  byte local_50;
  undefined8 local_40;
  byte local_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    if (*plVar1 != 0) {
      if (*param_2 == '\0') {
        *param_1 = 0;
        (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))(*(long **)PTR_DAT_04373140,*plVar1);
        *(undefined8 *)(param_1 + 0x10) = 0;
        return;
      }
      FUN_0073c1b0(local_58,plVar1);
      *param_2 = local_58[0] == 0;
      *param_1 = local_58[0] == 0;
      if ((local_38 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_28);
      }
      if ((local_50 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_40);
      }
      *plVar1 = 0;
      return;
    }
    if (((param_1[0x19] == '\0') || (param_1[0x1a] != '\0')) &&
       (*param_1 = 0, param_1[0x18] == '\0')) {
      *param_2 = '\0';
      return;
    }
  }
  return;
}


