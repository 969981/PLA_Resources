/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027946a0; name: FUN_027946a0
 */


void FUN_027946a0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = param_2 + 4;
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      uVar1 = *(undefined8 *)pcVar6;
      uVar7 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0xc) = uVar7;
      *(undefined8 *)(param_1 + 4) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x1c);
      uVar2 = *(undefined8 *)(param_2 + 0x24);
      uVar7 = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0x2c) = uVar7;
      *(undefined8 *)(param_1 + 0x24) = uVar2;
      *(undefined8 *)(param_1 + 0x1c) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x3c);
      uVar2 = *(undefined8 *)(param_2 + 0x44);
      uVar7 = *(undefined8 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
      *(undefined8 *)(param_1 + 0x4c) = uVar7;
      *(undefined8 *)(param_1 + 0x44) = uVar2;
      *(undefined8 *)(param_1 + 0x3c) = uVar1;
      uVar7 = *(undefined8 *)(param_2 + 100);
      uVar1 = *(undefined8 *)(param_2 + 0x6c);
      uVar2 = *(undefined8 *)(param_2 + 0x74);
      *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
      *(undefined8 *)(param_1 + 0x74) = uVar2;
      *(undefined8 *)(param_1 + 0x6c) = uVar1;
      *(undefined8 *)(param_1 + 100) = uVar7;
      *param_1 = '\x01';
      goto LAB_027947a8;
    }
    bVar4 = false;
    bVar5 = false;
    if (param_1[0x7c] != '\0') goto LAB_027947bc;
LAB_027946bc:
    if (bVar4) {
      uVar1 = *(undefined8 *)pcVar6;
      uVar7 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x90) = uVar7;
      *(undefined8 *)(param_1 + 0x80) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x1c);
      uVar7 = *(undefined8 *)(param_2 + 0x24);
      uVar2 = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0xb0) = uVar2;
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      *(undefined8 *)(param_1 + 0xa0) = uVar7;
      uVar1 = *(undefined8 *)(param_2 + 0x3c);
      uVar7 = *(undefined8 *)(param_2 + 0x44);
      uVar2 = *(undefined8 *)(param_2 + 0x54);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
      *(undefined8 *)(param_1 + 0xb8) = uVar1;
      *(undefined8 *)(param_1 + 0xc0) = uVar7;
      uVar7 = *(undefined8 *)(param_2 + 100);
      uVar1 = *(undefined8 *)(param_2 + 0x6c);
      uVar2 = *(undefined8 *)(param_2 + 0x74);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0x5c);
      *(undefined8 *)(param_1 + 0xe0) = uVar7;
      *(undefined8 *)(param_1 + 0xe8) = uVar1;
      *(undefined8 *)(param_1 + 0xf0) = uVar2;
      param_1[0x7c] = '\x01';
    }
  }
  else {
    if (*param_2 == '\0') {
      *param_1 = '\0';
    }
    else {
      uVar1 = *(undefined8 *)pcVar6;
      uVar7 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0xc) = uVar7;
      *(undefined8 *)(param_1 + 4) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x1c);
      uVar2 = *(undefined8 *)(param_2 + 0x24);
      uVar7 = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0x2c) = uVar7;
      *(undefined8 *)(param_1 + 0x24) = uVar2;
      *(undefined8 *)(param_1 + 0x1c) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x3c);
      uVar2 = *(undefined8 *)(param_2 + 0x44);
      uVar7 = *(undefined8 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
      *(undefined8 *)(param_1 + 0x4c) = uVar7;
      *(undefined8 *)(param_1 + 0x44) = uVar2;
      *(undefined8 *)(param_1 + 0x3c) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x5c);
      uVar2 = *(undefined8 *)(param_2 + 100);
      uVar7 = *(undefined8 *)(param_2 + 0x6c);
      *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar7;
      *(undefined8 *)(param_1 + 100) = uVar2;
      *(undefined8 *)(param_1 + 0x5c) = uVar1;
    }
LAB_027947a8:
    bVar4 = *param_2 != '\0';
    bVar5 = bVar4;
    if (param_1[0x7c] == '\0') goto LAB_027946bc;
LAB_027947bc:
    if (bVar5) {
      uVar1 = *(undefined8 *)pcVar6;
      uVar7 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x90) = uVar7;
      *(undefined8 *)(param_1 + 0x80) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x1c);
      uVar7 = *(undefined8 *)(param_2 + 0x24);
      uVar2 = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0xb0) = uVar2;
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      *(undefined8 *)(param_1 + 0xa0) = uVar7;
      uVar1 = *(undefined8 *)(param_2 + 0x3c);
      uVar7 = *(undefined8 *)(param_2 + 0x44);
      uVar2 = *(undefined8 *)(param_2 + 0x54);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
      *(undefined8 *)(param_1 + 0xb8) = uVar1;
      *(undefined8 *)(param_1 + 0xc0) = uVar7;
      uVar1 = *(undefined8 *)(param_2 + 0x5c);
      uVar7 = *(undefined8 *)(param_2 + 100);
      uVar2 = *(undefined8 *)(param_2 + 0x74);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x6c);
      *(undefined8 *)(param_1 + 0xf0) = uVar2;
      *(undefined8 *)(param_1 + 0xd8) = uVar1;
      *(undefined8 *)(param_1 + 0xe0) = uVar7;
    }
    else {
      param_1[0x7c] = '\0';
    }
  }
  if (param_1[0xf8] == '\0') {
    if (*param_2 == '\0') {
      cVar3 = param_1[0x174];
      bVar5 = false;
      goto joined_r0x02794998;
    }
    uVar1 = *(undefined8 *)pcVar6;
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x104) = uVar7;
    *(undefined8 *)(param_1 + 0xfc) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x2c);
    uVar7 = *(undefined8 *)(param_2 + 0x1c);
    uVar2 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x124) = uVar1;
    *(undefined8 *)(param_1 + 0x11c) = uVar2;
    *(undefined8 *)(param_1 + 0x114) = uVar7;
    uVar1 = *(undefined8 *)(param_2 + 0x4c);
    uVar7 = *(undefined8 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x144) = uVar1;
    *(undefined8 *)(param_1 + 0x13c) = uVar2;
    *(undefined8 *)(param_1 + 0x134) = uVar7;
    uVar1 = *(undefined8 *)(param_2 + 0x6c);
    uVar7 = *(undefined8 *)(param_2 + 0x5c);
    uVar2 = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_2 + 0x74);
    *(undefined8 *)(param_1 + 0x164) = uVar1;
    *(undefined8 *)(param_1 + 0x15c) = uVar2;
    *(undefined8 *)(param_1 + 0x154) = uVar7;
    param_1[0xf8] = '\x01';
  }
  else if (*param_2 == '\0') {
    param_1[0xf8] = '\0';
  }
  else {
    uVar1 = *(undefined8 *)pcVar6;
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x104) = uVar7;
    *(undefined8 *)(param_1 + 0xfc) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x2c);
    uVar7 = *(undefined8 *)(param_2 + 0x1c);
    uVar2 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x124) = uVar1;
    *(undefined8 *)(param_1 + 0x11c) = uVar2;
    *(undefined8 *)(param_1 + 0x114) = uVar7;
    uVar1 = *(undefined8 *)(param_2 + 0x4c);
    uVar7 = *(undefined8 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x144) = uVar1;
    *(undefined8 *)(param_1 + 0x13c) = uVar2;
    *(undefined8 *)(param_1 + 0x134) = uVar7;
    uVar1 = *(undefined8 *)(param_2 + 0x6c);
    uVar7 = *(undefined8 *)(param_2 + 0x5c);
    uVar2 = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_2 + 0x74);
    *(undefined8 *)(param_1 + 0x164) = uVar1;
    *(undefined8 *)(param_1 + 0x15c) = uVar2;
    *(undefined8 *)(param_1 + 0x154) = uVar7;
  }
  bVar5 = *param_2 != '\0';
  cVar3 = param_1[0x174];
joined_r0x02794998:
  if (cVar3 != '\0') {
    if (bVar5) {
      uVar1 = *(undefined8 *)pcVar6;
      uVar7 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x188) = uVar7;
      *(undefined8 *)(param_1 + 0x178) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x1c);
      uVar7 = *(undefined8 *)(param_2 + 0x24);
      uVar2 = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0x1a8) = uVar2;
      *(undefined8 *)(param_1 + 400) = uVar1;
      *(undefined8 *)(param_1 + 0x198) = uVar7;
      uVar1 = *(undefined8 *)(param_2 + 0x3c);
      uVar7 = *(undefined8 *)(param_2 + 0x44);
      uVar2 = *(undefined8 *)(param_2 + 0x54);
      *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0x1c8) = uVar2;
      *(undefined8 *)(param_1 + 0x1b0) = uVar1;
      *(undefined8 *)(param_1 + 0x1b8) = uVar7;
      uVar1 = *(undefined8 *)(param_2 + 0x5c);
      uVar7 = *(undefined8 *)(param_2 + 100);
      uVar2 = *(undefined8 *)(param_2 + 0x74);
      *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x6c);
      *(undefined8 *)(param_1 + 0x1e8) = uVar2;
      *(undefined8 *)(param_1 + 0x1d0) = uVar1;
      *(undefined8 *)(param_1 + 0x1d8) = uVar7;
      return;
    }
    param_1[0x174] = '\0';
    return;
  }
  if (bVar5) {
    uVar1 = *(undefined8 *)pcVar6;
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x188) = uVar7;
    *(undefined8 *)(param_1 + 0x178) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x1c);
    uVar7 = *(undefined8 *)(param_2 + 0x24);
    uVar2 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x1a8) = uVar2;
    *(undefined8 *)(param_1 + 400) = uVar1;
    *(undefined8 *)(param_1 + 0x198) = uVar7;
    uVar1 = *(undefined8 *)(param_2 + 0x3c);
    uVar7 = *(undefined8 *)(param_2 + 0x44);
    uVar2 = *(undefined8 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x1c8) = uVar2;
    *(undefined8 *)(param_1 + 0x1b0) = uVar1;
    *(undefined8 *)(param_1 + 0x1b8) = uVar7;
    uVar1 = *(undefined8 *)(param_2 + 0x5c);
    uVar7 = *(undefined8 *)(param_2 + 100);
    uVar2 = *(undefined8 *)(param_2 + 0x74);
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x6c);
    *(undefined8 *)(param_1 + 0x1e8) = uVar2;
    *(undefined8 *)(param_1 + 0x1d0) = uVar1;
    *(undefined8 *)(param_1 + 0x1d8) = uVar7;
    param_1[0x174] = '\x01';
    return;
  }
  return;
}


