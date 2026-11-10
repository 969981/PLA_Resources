/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00792de4; name: FUN_00792de4
 */


void FUN_00792de4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (puVar1 == puVar2) {
      puVar1 = puVar2;
    }
    else {
      do {
        puVar1 = puVar1 + -2;
        (**(code **)*puVar1)(puVar1);
      } while (puVar2 != puVar1);
      puVar1 = *(undefined8 **)(param_1 + 0x50);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar2;
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),puVar1,*(long *)(param_1 + 0x60) - (long)puVar1,8);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_02767254(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00792e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


