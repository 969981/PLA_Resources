/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b79070; name: FUN_01b79070
 */


void FUN_01b79070(undefined8 param_1,long param_2,int *param_3)

{
  if (*param_3 == 3) {
    if (*(char *)(param_2 + 0x638) == '\0') {
      *(undefined8 *)(param_2 + 0x5d8) = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_2 + 0x5d0) = *(undefined8 *)(param_3 + 4);
      *(undefined1 *)(param_2 + 0x638) = 1;
      *(undefined4 *)(param_2 + 0x5f8) = 2;
    }
LAB_01b790b8:
    FUN_01b6ea8c(param_2);
    FUN_01b77f14(param_2,param_2 + 0x4c0);
    FUN_01b6eaf4(param_2,param_3);
    FUN_01b780b4(0x3eaaaaab,param_2,param_3);
    return;
  }
  if (*param_3 == 0) {
    if (param_3[0x3c] == 0x27) {
      FUN_01b78a38(param_2,param_3);
      return;
    }
    if (param_3[0x3c] == 5) {
      FUN_01b74a84(param_2,param_3);
      FUN_01b7805c(param_2);
      goto LAB_01b790b8;
    }
  }
  return;
}


