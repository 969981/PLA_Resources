/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd708; name: FUN_003fd708
 */


void FUN_003fd708(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long local_28;
  undefined8 *local_18;
  
  local_28 = *param_2;
  *param_2 = 0;
                    /* try { // try from 003fd720 to 003fd72b has its CatchHandler @ 003fd7c4 */
  FUN_003fe8d0(&local_18,&local_28);
  puVar1 = local_18;
  local_18 = (undefined8 *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  if (puVar2 == (undefined8 *)0x0) {
    local_18 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*puVar2)(puVar2);
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
    puVar1 = local_18;
    local_18 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN_002e2ea0(PTR_LAB_04373088,puVar1);
    }
  }
  if (local_28 != 0) {
    local_28 = 0;
                    /* try { // try from 003fd7ac to 003fd7af has its CatchHandler @ 003fd7c0 */
    FUN_003fef10();
  }
  return;
}


