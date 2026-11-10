/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea76a0; name: FUN_02ea76a0
 */


void FUN_02ea76a0(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  uVar2 = FUN_02ea7390();
  uVar3 = FUN_02ea7030(param_1 + 0x20,param_2);
  if (((uVar2 & 1) == 0) && ((uVar3 & 1) == 0)) {
    if (cVar1 != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  FUN_02ea7404(param_1);
  return;
}


