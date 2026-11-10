/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00627648; name: FUN_00627648
 */


undefined8 * FUN_00627648(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  ulong local_60;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    FUN_00627784(&local_70,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_70;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_60 & 0xfffffffffffffffe);
    if ((local_60 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_70) {
                    /* try { // try from 0062774c to 00627753 has its CatchHandler @ 0062777c */
        FUN_0062fd18(param_1 + 2,auStack_68);
      }
    }
    else {
                    /* try { // try from 006276f4 to 006276fb has its CatchHandler @ 0062777c */
      FUN_0062fca8(param_1 + 2,auStack_68);
    }
  }
  else {
    FUN_00621c04(&local_70,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_70;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_60 & 0xfffffffffffffffe);
    if ((local_60 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_70) {
                    /* try { // try from 00627720 to 00627727 has its CatchHandler @ 00627780 */
        FUN_0062fd18(param_1 + 2,auStack_68);
      }
    }
    else {
                    /* try { // try from 006276a4 to 006276ab has its CatchHandler @ 00627780 */
      FUN_0062fca8(param_1 + 2,auStack_68);
    }
  }
  FUN_0062f340(auStack_68);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


