/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079026c; name: FUN_0079026c
 */


void FUN_0079026c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x50) = PTR_DAT_04376e28 + 0x10;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    if (puVar1 == puVar2) {
      puVar1 = puVar2;
    }
    else {
      do {
        puVar1 = puVar1 + -0x1d;
        (**(code **)*puVar1)(puVar1);
      } while (puVar2 != puVar1);
      puVar1 = *(undefined8 **)(param_1 + 0x58);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar2;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),puVar1,*(long *)(param_1 + 0x68) - (long)puVar1,8);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_02767254(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00790324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


