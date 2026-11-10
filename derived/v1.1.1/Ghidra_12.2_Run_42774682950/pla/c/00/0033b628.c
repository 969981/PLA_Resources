/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033b628; name: FUN_0033b628
 */


undefined8 FUN_0033b628(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar3 = FUN_0033bb20();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  pcVar1 = "serializing";
  if (param_3 != 1) {
    pcVar1 = (char *)0x0;
  }
  pcVar2 = "parsing";
  if (param_3 != 0) {
    pcVar2 = pcVar1;
  }
  FUN_0033b460(param_4,pcVar2,0);
  return 0;
}


