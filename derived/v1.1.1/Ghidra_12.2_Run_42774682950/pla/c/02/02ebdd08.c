/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebdd08; name: FUN_02ebdd08
 */


void FUN_02ebdd08(long param_1,long *param_2,undefined8 param_3,long *param_4,undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char local_34 [4];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(param_5[1],*(long **)(param_1 + 8),*param_5);
  }
  if (*param_2 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_4 = puVar1[1];
        puVar2 = puVar1 + 2;
        (**(code **)(*(long *)*puVar1 + 0x10))(param_5[1],(long *)*puVar1,*param_5);
        puVar1 = puVar2;
      } while (puVar2 != (undefined8 *)
                         (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x10));
    }
  }
  else {
    puVar1 = (undefined8 *)FUN_02ebc0f0(param_1 + 0x18,*param_2,local_34);
    if ((puVar1 != (undefined8 *)0x0) && (local_34[0] != '\0')) {
      *param_4 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x02ebdd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*puVar1 + 0x10))(param_5[1],(long *)*puVar1,*param_5);
      return;
    }
  }
  return;
}


