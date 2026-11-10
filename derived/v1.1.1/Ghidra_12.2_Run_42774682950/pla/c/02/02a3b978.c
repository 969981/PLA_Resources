/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3b978; name: FUN_02a3b978
 */


void FUN_02a3b978(long param_1,long param_2,byte param_3,char param_4,ulong param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = *(undefined1 *)(param_2 + 0x7d);
  uVar5 = (ulong)param_3;
  lVar6 = param_2 + uVar5 * 0x1c;
  if ((param_5 & 1) == 0) {
    bVar1 = *(char *)(lVar6 + 0x304) + param_4;
    bVar2 = *(byte *)(lVar6 + 0x305);
    if (bVar1 <= *(byte *)(lVar6 + 0x305)) {
      bVar2 = bVar1;
    }
    *(byte *)(lVar6 + 0x304) = bVar2;
    if (*(char *)(lVar6 + 0x30c) != '\0') {
      *(byte *)(param_2 + uVar5 * 0x1c + 0x2f8) = bVar2;
    }
    uVar4 = 10;
  }
  else {
    bVar1 = *(char *)(lVar6 + 0x2f8) + param_4;
    bVar2 = *(byte *)(lVar6 + 0x2f9);
    if (bVar1 <= *(byte *)(lVar6 + 0x2f9)) {
      bVar2 = bVar1;
    }
    *(byte *)(lVar6 + 0x2f8) = bVar2;
    if (*(char *)(lVar6 + 0x30c) == '\0') {
      uVar4 = 0xb;
    }
    else {
      uVar4 = 0xb;
      *(byte *)(param_2 + uVar5 * 0x1c + 0x304) = bVar2;
    }
  }
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),uVar4,uVar3,param_3,param_4);
  return;
}


