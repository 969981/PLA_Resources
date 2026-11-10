/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01461414; name: FUN_01461414
 */


void FUN_01461414(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0xd0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((uVar1 & 0x48) == 0) {
      *(ulong *)(param_1 + 0xd0) = uVar1 | 2;
      if (**(char **)(param_1 + 0x68) != '\0') {
        FUN_0283b430(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x60);
      }
      if (**(char **)(param_1 + 0x88) == '\0') {
        return;
      }
      FUN_0283b1e8(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x80);
      return;
    }
  }
  *(byte *)(*(long *)(param_1 + 0x58) + 0x58) = *(byte *)(*(long *)(param_1 + 0x58) + 0x58) & 0xfe;
  *(ulong *)(param_1 + 0xd0) = *(ulong *)(param_1 + 0xd0) & 0xffffffffffffff94;
  return;
}


