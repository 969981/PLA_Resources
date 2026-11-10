/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc9b8; name: FUN_027dc9b8
 */


void FUN_027dc9b8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *local_18;
  
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    FUN_02a439f4(local_18[0xb]);
  }
  (*(code *)*param_1)(param_1 + 4,&local_18);
  plVar1 = local_18;
  if ((local_18 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_18[0xb]), (uVar2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


