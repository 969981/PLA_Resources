/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090830; name: FUN_01090830
 */


void FUN_01090830(long param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 )

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x98);
  bVar1 = *(char *)(lVar2 + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
    lVar2 = *(long *)(param_1 + 0x98);
  }
  uVar3 = FUN_02c6cf3c(lVar2);
  lVar2 = *(long *)(param_1 + 0x98);
  if (((uVar3 & 1) == 0) && ((*(ushort *)(*(long *)(lVar2 + 0x10) + 4) >> 2 & 1) == 0)) {
    FUN_02c831bc(lVar2,param_2);
    FUN_02c824bc(*(undefined8 *)(param_1 + 0x98),param_3 % 100);
    FUN_02c827fc(*(undefined8 *)(param_1 + 0x98),param_4);
    FUN_02c82b3c(*(undefined8 *)(param_1 + 0x98),param_5);
  }
  else {
    FUN_02c82e7c(lVar2,param_2);
    FUN_02c81afc(*(undefined8 *)(param_1 + 0x98),param_3 % 100);
    FUN_02c81e3c(*(undefined8 *)(param_1 + 0x98),param_4);
    FUN_02c8217c(*(undefined8 *)(param_1 + 0x98),param_5);
  }
  if (bVar1 && *(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0') {
    FUN_02c66640();
    return;
  }
  return;
}


