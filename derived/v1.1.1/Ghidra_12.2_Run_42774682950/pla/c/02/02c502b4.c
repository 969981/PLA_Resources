/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c502b4; name: FUN_02c502b4
 */


undefined8 FUN_02c502b4(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = FUN_02c500bc();
  if (iVar2 - 0x19U < 2) {
LAB_02c502d4:
    uVar3 = 1;
  }
  else {
    if (iVar2 == 0x1b) {
      lVar4 = *param_1;
      cVar1 = *(char *)(lVar4 + 0x15);
      if (cVar1 == '\x02') {
LAB_02c50300:
        if (*(char *)(lVar4 + 0x24) != '\0') goto LAB_02c502d4;
      }
      else if (cVar1 == '\x01') {
        if ((*(ushort *)(lVar4 + 0x29) & 1) != 0) goto LAB_02c502d4;
      }
      else if (cVar1 == '\0') goto LAB_02c50300;
    }
    uVar3 = 0;
  }
  return uVar3;
}


