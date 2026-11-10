/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191e5f8; name: FUN_0191e5f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0191e5f8(ulong param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char local_38;
  char cStack_37;
  undefined1 local_36;
  char local_30;
  char cStack_2f;
  undefined1 local_2e;
  char local_28;
  char cStack_27;
  undefined1 local_26;
  undefined4 local_24;
  
  pcVar3 = *(char **)(param_1 + 8);
  if (*pcVar3 != '\0') {
    local_2e = 0;
    pcVar1 = pcVar3 + *(long *)(param_1 + 0x10);
    local_26 = 0;
    local_36 = 0;
    do {
      if (pcVar1 <= pcVar3) {
        cVar6 = '0';
        break;
      }
      pcVar4 = pcVar3 + 1;
      cVar6 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar6 == '#');
    do {
      if (pcVar1 <= pcVar3) {
        cVar5 = '0';
        break;
      }
      pcVar4 = pcVar3 + 1;
      cVar5 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar5 == '#');
    _local_28 = CONCAT11(cVar5,cVar6);
    do {
      if (pcVar1 <= pcVar3) {
        cVar6 = '0';
        break;
      }
      pcVar4 = pcVar3 + 1;
      cVar6 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar6 == '#');
    do {
      if (pcVar1 <= pcVar3) {
        cVar5 = '0';
        break;
      }
      pcVar4 = pcVar3 + 1;
      cVar5 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar5 == '#');
    _local_30 = CONCAT11(cVar5,cVar6);
    do {
      if (pcVar1 <= pcVar3) {
        cVar6 = '0';
        break;
      }
      pcVar4 = pcVar3 + 1;
      cVar6 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar6 == '#');
    do {
      if (pcVar1 <= pcVar3) {
        cVar5 = '0';
        break;
      }
      cVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar5 == '#');
    _local_38 = CONCAT11(cVar5,cVar6);
    local_24 = 0;
    sscanf(&local_28,"%2x",&local_24);
    local_24 = 0;
    sscanf(&local_30,"%2x",&local_24);
    local_24 = 0;
    uVar2 = sscanf(&local_38,"%2x",&local_24);
    param_1 = (ulong)uVar2;
  }
  return param_1;
}


