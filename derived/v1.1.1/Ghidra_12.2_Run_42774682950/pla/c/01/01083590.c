/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01083590; name: FUN_01083590
 */


undefined8 FUN_01083590(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  
  FUN_001511d0(param_1,1);
  uVar4 = FUN_00150ba0(param_1,2,0);
  cVar6 = '\0';
  if ((int)uVar4 < 0x38a) {
    lVar2 = *(long *)(&DAT_043f23a0)[(ulong)uVar4 * 4];
    lVar3 = ((long *)(&DAT_043f23a0)[(ulong)uVar4 * 4])[1] - lVar2;
    if (lVar3 == 0) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\0';
      uVar5 = 0;
      do {
        lVar1 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        if (*(long *)(lVar2 + lVar1) != 0) {
          cVar6 = cVar6 + '\x01';
        }
      } while (uVar5 < (ulong)(lVar3 >> 3));
    }
  }
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,cVar6);
  return 1;
}


