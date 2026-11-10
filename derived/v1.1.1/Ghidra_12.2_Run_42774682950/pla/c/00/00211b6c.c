/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211b6c; name: FUN_00211b6c
 */


undefined8 FUN_00211b6c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  lVar3 = *(long *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd0);
  if (lVar3 != 0) {
    do {
      *(long *)(lVar3 + 0x70) = param_2;
      if ((*(char *)(lVar3 + 0xe6) != '\0') &&
         (uVar2 = FUN_00211c18(param_2,param_1,lVar3), (int)uVar2 != 0)) {
        return uVar2;
      }
      lVar3 = *(long *)(lVar3 + 0x88);
    } while (lVar3 != 0);
    if ((((*(long *)(param_2 + 0xa8) != 0) && ((*(byte *)(param_2 + 0xe4) & 0xc) == 0)) ||
        (iVar1 = FUN_00211710(param_2 + 0x18), iVar1 == 0)) &&
       (uVar2 = FUN_00211c68(param_1,param_2), (int)uVar2 != 0)) {
      return uVar2;
    }
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  }
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  return 0;
}


