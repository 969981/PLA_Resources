/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ddcbc; name: FUN_001ddcbc
 */


void FUN_001ddcbc(long *param_1)

{
  memcpy((void *)(*param_1 + 0x1648),(void *)((long)param_1 + 0x1a2),0x2e);
  memcpy((void *)(*param_1 + 0x1680),param_1 + 0x3b,0x2e);
  *(undefined8 *)(*param_1 + 0x16b8) = *(undefined8 *)param_1[0x84];
  *(undefined4 *)(*param_1 + 0x16c0) = *(undefined4 *)(param_1[0x84] + 0x80);
  *(long *)(*param_1 + 0x1678) = param_1[0x3a];
  *(long *)(*param_1 + 0x16b0) = param_1[0x41];
  return;
}


