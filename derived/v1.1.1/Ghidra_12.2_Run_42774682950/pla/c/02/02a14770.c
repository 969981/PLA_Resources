/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14770; name: FUN_02a14770
 */


undefined8 FUN_02a14770(long param_1,byte param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  uVar1 = param_3 & 0x1f;
  uVar5 = (param_3 & 0xffff) >> 5 & 0x1f;
  uVar6 = (param_3 & 0xffff) >> 10 & 0x1f;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  bVar2 = *(byte *)(lVar7 + 0x2dc);
  bVar3 = *(byte *)(lVar7 + 0x2dd);
  bVar4 = *(byte *)(lVar7 + 0x2de);
  *(char *)(lVar7 + 0x2de) = (char)uVar6;
  *(char *)(lVar7 + 0x2dc) = (char)uVar1;
  *(char *)(lVar7 + 0x2dd) = (char)uVar5;
  *(undefined4 *)(lVar7 + 0x2e0) = param_4;
  if (bVar2 == uVar1 && bVar3 == uVar5) {
    if (bVar4 == uVar6) {
      return 0;
    }
  }
  else if ((bVar2 == uVar5 && bVar3 == uVar1) && bVar4 == uVar6) {
    return 0;
  }
  return 1;
}


