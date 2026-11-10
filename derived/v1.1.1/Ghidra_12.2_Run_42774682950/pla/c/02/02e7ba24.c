/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7ba24; name: FUN_02e7ba24
 */


void FUN_02e7ba24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 local_34;
  
  if ((*(char *)(param_1 + 0x28) == -0x70) && (*(char *)(param_1 + 0x2b) != '\0')) {
    FUN_02e7bb38(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),param_2,
                 param_3);
    return;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x40);
  }
  else {
    do {
      if ((int)plVar1[1] == 1) {
        local_34._3_1_ = (undefined1)((uint)*(undefined4 *)(param_1 + 0x28) >> 0x18);
        local_34._0_3_ =
             CONCAT12((char)plVar1[3],
                      CONCAT11(*(undefined1 *)((long)plVar1 + 0x19),
                               (char)*(undefined4 *)(param_1 + 0x28)));
        FUN_02e7bb38(param_1,plVar1[2],*(undefined8 *)(param_1 + 0x20),param_2,param_3,&local_34);
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x40);
  }
  for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if (*(int *)(plVar1 + 1) != 1) {
      FUN_02e7bda8(param_1,param_2,param_3,plVar1[2]);
    }
  }
  return;
}


