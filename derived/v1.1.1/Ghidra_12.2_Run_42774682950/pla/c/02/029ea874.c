/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ea874; name: FUN_029ea874
 */


void FUN_029ea874(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  
  cVar3 = (char)param_3[1];
  if (cVar3 == '\0') {
    return;
  }
  if (cVar3 != '\x05') {
    if (cVar3 == '\x01') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0xab,
                   *(undefined1 *)(*param_3 + 0x7d),0xffff0000);
      return;
    }
    FUN_02981edc(*(undefined8 *)(param_1 + 0x38),*param_3,cVar3);
    return;
  }
  bVar4 = *(byte *)(*param_3 + 0x7d);
  iVar1 = 3;
  if (0x17 < bVar4) {
    iVar1 = (uint)(bVar4 < 0x1e) << 2;
  }
  iVar2 = 1;
  if (0x11 < bVar4) {
    iVar2 = iVar1;
  }
  iVar1 = 2;
  if (0xb < bVar4) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (5 < bVar4) {
    iVar2 = iVar1;
  }
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x2cf,bVar4,iVar2,0xffff0000);
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x96,bVar4,0);
  return;
}


