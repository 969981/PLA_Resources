/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b91748; name: FUN_01b91748
 */


undefined8 FUN_01b91748(long param_1)

{
  if ((*(char *)(param_1 + 0x2a0) == '\0') || (*(long *)(param_1 + 0x2a8) == -0x5098ffb379f8bd48)) {
    return 1;
  }
  FUN_0165b1f8(&DAT_04242470,*(long *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x2b8),
               &DAT_cbf29ce484222645,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
  return 0;
}


