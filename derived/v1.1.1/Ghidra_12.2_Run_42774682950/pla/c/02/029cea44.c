/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cea44; name: FUN_029cea44
 */


bool FUN_029cea44(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  
  bVar1 = *(byte *)(param_2 + 0x7d);
  bVar2 = *(byte *)(param_3 + 0x7d);
  if (bVar1 == 0x1f || bVar2 == 0x1f) {
    return false;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x110);
  if (bVar1 < 6) {
    lVar6 = 0;
  }
  else if (bVar1 < 0xc) {
    lVar6 = 2;
  }
  else if (bVar1 < 0x12) {
    lVar6 = 1;
  }
  else if (bVar1 < 0x18) {
    lVar6 = 3;
  }
  else {
    lVar6 = (ulong)(bVar1 < 0x1e) << 2;
  }
  if (uVar3 < 3) {
    cVar5 = (&PTR_DAT_04277178)[(int)uVar3][lVar6];
  }
  else {
    cVar5 = '\x02';
  }
  if (bVar2 < 6) {
    lVar6 = 0;
  }
  else if (bVar2 < 0xc) {
    lVar6 = 2;
  }
  else if (bVar2 < 0x12) {
    lVar6 = 1;
  }
  else if (bVar2 < 0x18) {
    lVar6 = 3;
  }
  else {
    lVar6 = (ulong)(bVar2 < 0x1e) << 2;
  }
  if (uVar3 < 3) {
    cVar4 = (&PTR_DAT_04277178)[(int)uVar3][lVar6];
  }
  else {
    cVar4 = '\x02';
  }
  return cVar5 == cVar4;
}


