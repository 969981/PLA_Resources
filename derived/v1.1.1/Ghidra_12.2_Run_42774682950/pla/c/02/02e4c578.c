/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4c578; name: FUN_02e4c578
 */


bool FUN_02e4c578(long param_1)

{
  ulong uVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    cVar2 = *(char *)(param_1 + 0x108);
  }
  else {
    uVar1 = FUN_02e4e2a0(param_1);
    if ((uVar1 & 1) == 0) {
      cVar2 = *(char *)(param_1 + 0x108);
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)(param_1 + 0x108) = cVar2;
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  return cVar2 != '\0';
}


