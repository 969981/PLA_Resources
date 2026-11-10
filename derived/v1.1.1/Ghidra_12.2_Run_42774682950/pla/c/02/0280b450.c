/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280b450; name: FUN_0280b450
 */


void FUN_0280b450(long *param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)((long)param_1 + 0xa3) != '\0') {
    *(undefined1 *)((long)param_1 + 0xa3) = 0;
    (**(code **)(*param_1 + 0xa0))(param_1,0);
  }
  puVar1 = (undefined4 *)
           (**(code **)(*(long *)param_1[0x1d] + 0xc0))
                     ((long *)param_1[0x1d],param_1 + 0x1f,"color_select");
  if (puVar1 != (undefined4 *)0x0) {
    *(char *)(param_1 + 0xf2) = (char)*puVar1;
    *(char *)((long)param_1 + 0x791) = (char)puVar1[1];
    *(char *)((long)param_1 + 0x792) = (char)puVar1[2];
    *(undefined1 *)((long)param_1 + 0x793) = 0xff;
  }
  puVar1 = (undefined4 *)
           (**(code **)(*(long *)param_1[0x1d] + 0xc0))
                     ((long *)param_1[0x1d],param_1 + 0x1f,"color_unselect");
  if (puVar1 != (undefined4 *)0x0) {
    *(char *)((long)param_1 + 0x794) = (char)*puVar1;
    *(char *)((long)param_1 + 0x795) = (char)puVar1[1];
    *(char *)((long)param_1 + 0x796) = (char)puVar1[2];
    *(undefined1 *)((long)param_1 + 0x797) = 0xff;
  }
  return;
}


