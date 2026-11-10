/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00883940; name: FUN_00883940
 */


undefined8 FUN_00883940(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*param_2;
  if (uVar5 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x2b68) + 0x98);
    iVar1 = *(int *)(lVar6 + 0x110);
    do {
      param_2 = param_2 + 1;
      bVar2 = *param_2;
      uVar3 = (ulong)bVar2;
      if (iVar1 == 2) {
        uVar4 = 5;
        if (bVar2 < 6) {
          uVar4 = *(uint *)(&DAT_03a7ebc8 + uVar3 * 4);
        }
      }
      else if (iVar1 == 1) {
        uVar4 = 5;
        if (bVar2 < 6) {
          bVar2 = *(byte *)(*(long *)(lVar6 + 0x58) + 0x55);
          if (bVar2 - 1 < 3) {
            uVar4 = (&DAT_03a7eb80)[uVar3];
          }
          else if (bVar2 == 4) {
            uVar4 = *(uint *)(&DAT_03a7eb98 + uVar3 * 4);
          }
          else if (bVar2 == 5) {
            uVar4 = *(uint *)(&DAT_03a7ebb0 + uVar3 * 4);
          }
          else {
            uVar4 = (&DAT_03a7eb68)[uVar3];
          }
        }
      }
      else {
        uVar4 = 5;
        if ((iVar1 == 0) && (uVar4 = 5, bVar2 < 6)) {
          uVar4 = *(uint *)(&DAT_03a7eb50 + uVar3 * 4);
        }
      }
      if ((uint)*(byte *)(*(long *)(param_1 + 0x58) + 0xf1) == (uVar4 & 0xff)) {
        return 1;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 0;
}


