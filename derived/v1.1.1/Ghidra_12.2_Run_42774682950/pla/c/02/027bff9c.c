/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bff9c; name: FUN_027bff9c
 */


void FUN_027bff9c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = FUN_02a43a8c();
    if (((uVar1 & 1) == 0) &&
       (puVar2 = *(undefined8 **)(param_1 + 0x98), puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x027c0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}


