/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eead8; name: FUN_002eead8
 */


void FUN_002eead8(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = (byte *)*param_2;
  bVar1 = *pbVar3;
  if (bVar1 != 0) {
    do {
      iVar2 = toupper((uint)bVar1);
      *pbVar3 = (byte)iVar2;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    pbVar3 = (byte *)*param_2;
  }
  lVar4 = FUN_002eeb60(pbVar3);
  if (lVar4 == 0) {
    lVar4 = FUN_002ec2d0(param_2[1]);
    *param_1 = lVar4;
    return;
  }
  *param_1 = lVar4;
  return;
}


