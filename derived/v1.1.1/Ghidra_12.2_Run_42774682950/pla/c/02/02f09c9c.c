/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f09c9c; name: FUN_02f09c9c
 */


void FUN_02f09c9c(long *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_02eddb40(DAT_0440a170,*(undefined4 *)(param_2 + 0x1c));
  (**(code **)(*param_1 + 0x138))(param_1,1);
  FUN_02ed5d64(param_1);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  iVar1 = *(int *)(puVar2 + 10);
  *(int *)(puVar2 + 10) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x02f09d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0442d150)(4,puVar2);
    return;
  }
  return;
}


