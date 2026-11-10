/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ddac8; name: FUN_001ddac8
 */


void FUN_001ddac8(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  
  pcVar1 = "";
  if (*(char *)(param_1 + 0x5a) != '\0') {
    pcVar1 = "#HttpOnly_";
  }
  pcVar7 = *(char **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    puVar6 = &DAT_03996322;
  }
  else {
    puVar6 = &DAT_03996322;
    if ((pcVar7 != (char *)0x0) && (puVar6 = &DAT_03996322, *pcVar7 != '.')) {
      puVar6 = &DAT_0389ff53;
    }
  }
  pcVar2 = "unknown";
  if (pcVar7 != (char *)0x0) {
    pcVar2 = pcVar7;
  }
  pcVar7 = "FALSE";
  if (*(char *)(param_1 + 0x40) != '\0') {
    pcVar7 = "TRUE";
  }
  puVar3 = &DAT_0389ffa9;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x18);
  }
  pcVar4 = "FALSE";
  if (*(char *)(param_1 + 0x58) != '\0') {
    pcVar4 = "TRUE";
  }
  puVar5 = &DAT_03996322;
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_1 + 0x10);
  }
  FUN_001e6534("%s%s%s\t%s\t%s\t%s\t%ld\t%s\t%s",pcVar1,puVar6,pcVar2,pcVar7,puVar3,pcVar4,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),puVar5);
  return;
}


