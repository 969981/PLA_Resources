/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cfb5c; name: FUN_011cfb5c
 */


void FUN_011cfb5c(long param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(param_1 + 0x5b8) - *(long *)(param_1 + 0x5b0) >> 6;
  uVar3 = (*(byte *)(param_1 + 0x658) + uVar2) - 1;
  if (param_2 != 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 0x658) + 1;
  }
  cVar1 = '\0';
  if (uVar2 != 0) {
    cVar1 = (char)(uVar3 / uVar2);
  }
  *(char *)(param_1 + 0x658) = (char)uVar3 - cVar1 * (char)uVar2;
  FUN_011cc898(param_1 + 0x628,param_2 != 0);
  FUN_011ca7b4(param_1 + 0x628,
               *(undefined8 *)
                (*(long *)(param_1 + 0x5b0) + (ulong)*(byte *)(param_1 + 0x658) * 0x40),
               (ulong)*(byte *)(param_1 + 0x658) == 0);
  FUN_011cf2f0(param_1);
  FUN_011cf8dc(param_1);
  FUN_011cfc00(param_1,1);
  FUN_00d42438(param_1,1,1);
  return;
}


