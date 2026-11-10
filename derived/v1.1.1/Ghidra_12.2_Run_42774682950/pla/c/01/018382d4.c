/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018382d4; name: FUN_018382d4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_018382d4(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x268) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x268) + 0x18), puVar4 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_04379e78 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar1 != 0)) {
      uVar3 = FUN_0095a420();
      *(undefined8 *)PTR_DAT_04379e80 = uVar3;
      __cxa_guard_release(PTR_DAT_04379e78);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_04379e80) {
        return puVar4 + -10;
      }
    }
  }
  return (undefined8 *)0x0;
}


