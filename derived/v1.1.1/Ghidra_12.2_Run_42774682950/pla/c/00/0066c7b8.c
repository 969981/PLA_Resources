/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066c7b8; name: FUN_0066c7b8
 */


void FUN_0066c7b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 == lVar4) {
      lVar3 = lVar4;
    }
    else {
      do {
        puVar1 = (undefined8 *)(lVar3 + -0x18);
        lVar2 = lVar3 + -0x20;
        lVar3 = lVar3 + -0x28;
        FUN_0064cd98(lVar2,*puVar1);
      } while (lVar4 != lVar3);
      lVar3 = *(long *)(param_1 + 0x58);
    }
    *(long *)(param_1 + 0x60) = lVar4;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),lVar3,*(long *)(param_1 + 0x68) - lVar3,8);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_02767254(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066c864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


