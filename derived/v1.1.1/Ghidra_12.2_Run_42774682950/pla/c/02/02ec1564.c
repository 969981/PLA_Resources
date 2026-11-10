/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec1564; name: FUN_02ec1564
 */


void FUN_02ec1564(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 != (long *)0x0) {
    if (*(uint *)(param_1 + 0x38) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 0x38) << 3;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      do {
        if ((long *)*puVar2 == param_2) {
          return;
        }
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    plVar1 = (long *)FUN_02ec1f48();
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)param_2;
                    /* WARNING: Could not recover jumptable at 0x02ec15bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2);
      return;
    }
  }
  return;
}


