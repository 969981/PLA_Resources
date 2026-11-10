/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc4d8; name: FUN_027dc4d8
 */


void FUN_027dc4d8(long param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((plVar2 != (long *)0x0) && (uVar1 = FUN_02a43a5c(plVar2[0xb]), (uVar1 & 1) != 0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  FUN_027dcb58(param_1 + 0x130,0);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x50);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xb8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x027dc540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0xd0);
  return;
}


