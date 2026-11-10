/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00100030; name: _DT_INIT
 */


void _DT_INIT(void)

{
  undefined *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  puVar1 = PTR___DT_FINI_ARRAY_04372210;
  if ((DAT_0438e0d0 == 0) &&
     (DAT_0438e0d0 = end(PTR_DAT_04372268,PTR_FUN_04372270,PTR_DAT_04372278,PTR_DAT_04372280,
                         PTR_DAT_04372288,PTR_DAT_04372290,PTR_DAT_043722a0,DAT_043722a8,
                         PTR_DAT_043722b8,PTR_DAT_043722b0,PTR___DT_PLTGOT_04372260,
                         PTR___DT_INIT_ARRAY_04372298,PTR___DT_RELA_04372258,
                         PTR___DT_JMPREL_04372250,PTR___rel_dyn_start_04372248,
                         PTR___rel_dyn_end_04372240,PTR___DT_JMPREL_04372238,PTR___DT_HASH_04372230,
                         PTR___rel_plt_start_04372228,PTR___rel_plt_end_04372220,
                         PTR__DYNAMIC_04372218), DAT_0438e0d0 == 1)) {
    return;
  }
  if (PTR___DT_INIT_ARRAY_043722c0 < puVar1) {
    puVar2 = (undefined8 *)PTR___DT_INIT_ARRAY_043722c0;
    do {
      puVar3 = puVar2 + 1;
      (*(code *)*puVar2)();
      puVar2 = puVar3;
    } while (puVar3 < puVar1);
  }
  return;
}


