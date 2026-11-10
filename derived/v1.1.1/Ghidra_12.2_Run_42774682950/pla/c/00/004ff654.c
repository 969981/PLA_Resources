/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ff654; name: FUN_004ff654
 */


ulong FUN_004ff654(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (puVar2 = *(ulong **)(*(long *)(param_1 + 0x30) + 8), puVar2 == (ulong *)0x0)) {
      return 0;
    }
    if (*puVar2 >> 1 <= DAT_0439eba8) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e,
                    "operator[]");
    }
    if ((*puVar2 & 1) == 0) {
      puVar2 = puVar2 + 1;
    }
    else {
      puVar2 = (ulong *)puVar2[1];
    }
    uVar1 = puVar2[DAT_0439eba8];
  }
  return uVar1;
}


