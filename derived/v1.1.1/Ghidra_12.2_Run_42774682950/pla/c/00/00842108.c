/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00842108; name: FUN_00842108
 */


int FUN_00842108(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_043773c0;
  lVar2 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
  uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x48))();
  if ((uVar3 & 1) != 0) {
    lVar2 = FUN_008551bc(*(undefined8 *)puVar1);
    uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))();
    if ((uVar3 & 1) != 0) {
      return *(byte *)(*(long *)puVar1 + 0x50) - 1;
    }
  }
  return 0;
}


