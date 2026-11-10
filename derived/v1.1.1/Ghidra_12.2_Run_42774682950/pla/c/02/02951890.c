/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951890; name: FUN_02951890
 */


undefined8 FUN_02951890(long param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  if (param_2 == '\x12') {
    return 0;
  }
  bVar2 = (*(byte *)(param_1 + 0x168) & 7) != 0;
  cVar6 = *(char *)(param_1 + 0x2dc);
  cVar1 = *(char *)(param_1 + 0x2dd);
  bVar3 = cVar1 != '\x12';
  bVar4 = cVar1 != '\x02';
  cVar5 = cVar1;
  if (*(char *)(param_1 + 0x389) < '\0') {
    if (cVar6 != '\x12' && (cVar6 != '\x02' || !bVar2)) goto joined_r0x02951950;
    cVar6 = cVar1;
    if (bVar3 && (!bVar2 || bVar4)) goto LAB_02951924;
    cVar6 = '\x12';
  }
  else {
    if (cVar6 == '\x12' || cVar6 == '\x02' && bVar2) {
      cVar6 = '\0';
      cVar5 = '\0';
      if (bVar3 && (!bVar2 || bVar4)) {
        cVar6 = cVar1;
        cVar5 = cVar1;
      }
      goto LAB_02951924;
    }
joined_r0x02951950:
    if (bVar3 && (!bVar2 || bVar4)) goto LAB_02951924;
  }
  cVar5 = cVar6;
LAB_02951924:
  if (cVar6 == param_2) {
    return 1;
  }
  if (cVar5 == param_2) {
    return 1;
  }
  if (*(char *)(param_1 + 0x2de) == param_2) {
    return 1;
  }
  return 0;
}


