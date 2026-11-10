/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00284238; name: FUN_00284238
 */


undefined8 FUN_00284238(long param_1,ulong param_2)

{
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 0x1188) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11a8);
    }
    if ((*(uint *)(param_1 + 0x118c) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11b0);
    }
    if ((*(uint *)(param_1 + 0x1190) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11b8);
    }
    if ((*(uint *)(param_1 + 0x1194) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11c0);
    }
    if ((*(uint *)(param_1 + 0x1198) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11c8);
    }
    if ((*(uint *)(param_1 + 0x119c) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11d0);
    }
    if ((*(uint *)(param_1 + 0x11a0) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11d8);
    }
    if ((*(uint *)(param_1 + 0x11a4) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11e0);
    }
  }
  return 0;
}


