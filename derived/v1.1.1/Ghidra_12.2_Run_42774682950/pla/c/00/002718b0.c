/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002718b0; name: FUN_002718b0
 */


void FUN_002718b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04372ea8;
  puVar2 = PTR_DAT_04372ea0;
  puVar1 = PTR_DAT_04372e90;
  if (0 < *(int *)PTR_DAT_04372ea0) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)puVar1 + 0x18))
                (*(long **)puVar1,*(undefined8 *)(*(long *)puVar3 + lVar4 * 8));
      *(undefined8 *)(*(long *)puVar3 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)puVar2);
  }
  (**(code **)(**(long **)PTR_DAT_04372e80 + 0x18))
            (*(long **)PTR_DAT_04372e80,*(undefined8 *)puVar3);
  *(undefined8 *)puVar3 = 0;
  *(undefined4 *)puVar2 = 0;
  return;
}


