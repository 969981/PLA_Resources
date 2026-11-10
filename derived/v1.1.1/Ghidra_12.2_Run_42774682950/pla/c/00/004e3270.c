/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3270; name: FUN_004e3270
 */


char * FUN_004e3270(ulong param_1)

{
  if ((uint)param_1 < 0x4c) {
    return *(char **)((long)&PTR_DAT_04182e78 +
                     (-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3));
  }
  return "unknown certificate verification error";
}


