/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03317ed0; name: FUN_03317ed0
 */


bool FUN_03317ed0(ulong *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar2 = *param_1;
  puVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    puVar3 = (ulong *)param_1[1];
    bVar1 = (byte)*puVar3;
    while ((bVar1 & 1) == 0) {
      puVar3 = (ulong *)puVar3[1];
      bVar1 = (byte)*puVar3;
    }
  }
  if ((param_1 != (ulong *)0x0) && ((puVar3[2] & 0x1f) == 7)) {
    return true;
  }
  puVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    puVar3 = (ulong *)param_1[1];
    bVar1 = (byte)*puVar3;
    while ((bVar1 & 1) == 0) {
      puVar3 = (ulong *)puVar3[1];
      bVar1 = (byte)*puVar3;
    }
  }
  if ((param_1 != (ulong *)0x0) && ((puVar3[2] & 0x1f) == 3)) {
    return true;
  }
  puVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    puVar3 = (ulong *)param_1[1];
    bVar1 = (byte)*puVar3;
    while ((bVar1 & 1) == 0) {
      puVar3 = (ulong *)puVar3[1];
      bVar1 = (byte)*puVar3;
    }
  }
  return param_1 != (ulong *)0x0 && (puVar3[2] & 0x1f) == 8;
}


