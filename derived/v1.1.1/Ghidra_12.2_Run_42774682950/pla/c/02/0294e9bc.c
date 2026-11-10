/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294e9bc; name: FUN_0294e9bc
 */


char FUN_0294e9bc(int param_1,char param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  
  if (param_1 == 0) {
    cVar3 = '\x02';
    if (param_3 != '\x01') {
      cVar3 = '\x01';
    }
    cVar4 = param_3 == '\x01';
    if (param_3 == '\0') {
      cVar4 = cVar3;
    }
    return cVar4;
  }
  if (param_1 == 2) {
    cVar3 = '\x05';
    if (param_3 != '\x01') {
      cVar3 = '\0';
    }
    if (param_3 == '\0') {
      cVar3 = cVar3 + '\x01';
    }
    return cVar3;
  }
  if (param_1 != 1) {
    return '\0';
  }
  bVar2 = param_2 - 1;
  if (bVar2 < 5) {
    puVar5 = (uint *)(&PTR_DAT_04276850)[(char)bVar2];
  }
  else {
    puVar5 = &DAT_03a7eb68;
  }
  uVar1 = *puVar5;
  if (uVar1 == 5) {
    cVar3 = false;
  }
  else {
    if ((int)uVar1 < 5) {
      cVar3 = (&DAT_03a7ebe5)[uVar1];
    }
    else {
      cVar3 = '\x02';
    }
    cVar3 = cVar3 == param_3;
  }
  if (bVar2 < 5) {
    puVar5 = (uint *)(&PTR_DAT_04276878)[(char)bVar2];
  }
  else {
    puVar5 = &DAT_03a7eb6c;
  }
  uVar1 = *puVar5;
  if (uVar1 != 5) {
    if ((int)uVar1 < 5) {
      cVar4 = (&DAT_03a7ebe5)[uVar1];
    }
    else {
      cVar4 = '\x02';
    }
    if (cVar4 == param_3) {
      cVar3 = cVar3 + '\x01';
    }
  }
  if (bVar2 < 5) {
    puVar5 = (uint *)(&PTR_DAT_042768a0)[(char)bVar2];
  }
  else {
    puVar5 = &DAT_03a7eb70;
  }
  uVar1 = *puVar5;
  if (uVar1 != 5) {
    if ((int)uVar1 < 5) {
      cVar4 = (&DAT_03a7ebe5)[uVar1];
    }
    else {
      cVar4 = '\x02';
    }
    if (cVar4 == param_3) {
      cVar3 = cVar3 + '\x01';
    }
  }
  if (bVar2 < 5) {
    puVar5 = (uint *)(&PTR_DAT_042768c8)[(char)bVar2];
  }
  else {
    puVar5 = &DAT_03a7eb74;
  }
  uVar1 = *puVar5;
  if (uVar1 != 5) {
    if ((int)uVar1 < 5) {
      cVar4 = (&DAT_03a7ebe5)[uVar1];
    }
    else {
      cVar4 = '\x02';
    }
    if (cVar4 == param_3) {
      cVar3 = cVar3 + '\x01';
    }
  }
  if (bVar2 < 5) {
    puVar5 = (uint *)(&PTR_DAT_042768f0)[(char)bVar2];
  }
  else {
    puVar5 = &DAT_03a7eb78;
  }
  uVar1 = *puVar5;
  if (uVar1 != 5) {
    if ((int)uVar1 < 5) {
      cVar4 = (&DAT_03a7ebe5)[uVar1];
    }
    else {
      cVar4 = '\x02';
    }
    if (cVar4 == param_3) {
      cVar3 = cVar3 + '\x01';
    }
  }
  if (bVar2 < 5) {
    puVar5 = (uint *)(&PTR_DAT_04276918)[(char)bVar2];
  }
  else {
    puVar5 = &DAT_03a7eb7c;
  }
  uVar1 = *puVar5;
  if (uVar1 == 5) {
    return cVar3;
  }
  if ((int)uVar1 < 5) {
    cVar4 = (&DAT_03a7ebe5)[uVar1];
  }
  else {
    cVar4 = '\x02';
  }
  if (cVar4 == param_3) {
    cVar3 = cVar3 + '\x01';
  }
  return cVar3;
}


