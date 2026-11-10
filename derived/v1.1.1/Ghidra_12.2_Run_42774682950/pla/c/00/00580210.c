/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580210; name: FUN_00580210
 */


void FUN_00580210(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  byte local_48 [16];
  undefined8 local_38;
  byte *local_30;
  undefined *puStack_28;
  
  dVar4 = (double)FUN_002ef4a0(*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x98));
  lVar2 = (long)dVar4 % 1000000;
  uVar3 = lVar2 * 4000;
  uVar1 = (ulong)((int)uVar3 + 4000000000);
  if (-1 < lVar2) {
    uVar1 = uVar3;
  }
  FUN_00580300(local_48,(long)dVar4 / 1000000 + ((long)uVar3 >> 0x3f),uVar1 & 0xffffffe0);
  puStack_28 = PTR_LAB_04374a18;
                    /* try { // try from 00580294 to 005802af has its CatchHandler @ 005802d8 */
  local_30 = local_48;
  FUN_002e6390(param_1,"JWTAccessCredentials{ExpirationTime:%s}",0x27,&local_30,1);
  if ((local_48[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return;
}


