/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112eb80; name: FUN_0112eb80
 */


int FUN_0112eb80(long param_1,undefined4 param_2,byte *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  short *psVar5;
  long lVar6;
  
  iVar3 = 0;
  psVar5 = (short *)(param_1 + 0x13e);
  bVar4 = 1;
  lVar6 = -0x389;
  do {
    iVar2 = FUN_0112e8d0(param_2,(int)lVar6 + 0x38a,0);
    if (iVar2 != 0) {
      if (*psVar5 != 0) {
        iVar3 = iVar3 + 1;
      }
      bVar4 = bVar4 & *psVar5 != 0;
    }
    bVar1 = lVar6 != -1;
    lVar6 = lVar6 + 1;
    psVar5 = psVar5 + 0x2c;
  } while (bVar1);
  if (param_3 != (byte *)0x0) {
    *param_3 = bVar4;
  }
  return iVar3;
}


