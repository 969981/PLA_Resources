/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c63a78; name: FUN_02c63a78
 */


void FUN_02c63a78(long param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  
  uVar3 = FUN_02c68b0c(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_02c70958(*(undefined8 *)(param_1 + 0x98));
  iVar5 = FUN_02c71158(*(undefined8 *)(param_1 + 0x98));
  bVar2 = FUN_02c6f2b0(*(undefined8 *)(param_1 + 0x98));
  uVar6 = (uVar4 ^ uVar3) >> 0x10;
  cVar8 = '\x01';
  if ((uVar6 ^ uVar3 & 0xffff) == (uVar4 & 0xffff)) {
    cVar8 = '\x02';
  }
  cVar1 = '\0';
  if (((uVar4 ^ uVar3) & 0xfff0 ^ uVar6) < 0x10) {
    cVar1 = cVar8;
  }
  cVar8 = '\x02';
  if (((iVar5 == 0x22 | bVar2) & cVar1 != '\0') == 0) {
    cVar8 = cVar1;
  }
  if (cVar8 == param_2) {
    return;
  }
  uVar7 = FUN_02c68b0c(*(undefined8 *)(param_1 + 0x98));
  uVar6 = FUN_02c70958(*(undefined8 *)(param_1 + 0x98));
  uVar3 = (uint)((ulong)uVar7 >> 0x10) & 0xffff;
  if (param_2 == '\0') {
    uVar4 = uVar6 ^ 0x10000000;
    if (0xf < (uVar3 ^ (uint)uVar7 & 0xfff0 ^ uVar6 >> 0x10 ^ uVar6 & 0xfff0)) {
      uVar4 = uVar6;
    }
  }
  else {
    uVar4 = uVar6 & 0xffff | ((uint)uVar7 ^ (uint)(param_2 == '\x01') ^ uVar3 ^ uVar6) << 0x10;
  }
  FUN_02c80bbc(*(undefined8 *)(param_1 + 0x98),uVar4);
  return;
}


