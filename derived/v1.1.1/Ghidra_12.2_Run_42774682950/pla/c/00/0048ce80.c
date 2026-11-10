/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048ce80; name: FUN_0048ce80
 */


undefined8
FUN_0048ce80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5,
            undefined8 param_6,undefined1 param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_300 [120];
  undefined1 local_288;
  undefined1 local_287;
  undefined1 auStack_250 [256];
  undefined1 auStack_150 [256];
  
  lVar5 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + lVar5 + 0x71);
    if ((byte)(&DAT_039256e0)[lVar5] < bVar1) {
      return 0;
    }
    if (bVar1 < (byte)(&DAT_039256e0)[lVar5]) break;
    bVar2 = lVar5 == -0x38;
    lVar5 = lVar5 + -1;
    if (bVar2) {
      return 0;
    }
  }
  uVar4 = FUN_0048fbd0(auStack_150,param_2);
  if ((int)uVar4 != -1) {
    return uVar4;
  }
  uVar4 = FUN_0048fbd0(auStack_250,param_1);
  if ((int)uVar4 != -1) {
    return uVar4;
  }
  lVar5 = FUN_00444930();
  if (lVar5 != 0) {
    local_288 = param_5 != '\0';
    local_287 = param_7;
    uVar4 = FUN_0048d3e0();
    iVar3 = FUN_004449b0(lVar5,uVar4,0);
    if (((((iVar3 != 0) && (iVar3 = FUN_00444ad0(lVar5,"SigEd448",8), iVar3 != 0)) &&
         (iVar3 = FUN_00444ad0(lVar5,&local_288,2), iVar3 != 0)) &&
        ((iVar3 = FUN_00444ad0(lVar5,param_6,param_7), iVar3 != 0 &&
         (iVar3 = FUN_00444ad0(lVar5,param_1,0x39), iVar3 != 0)))) &&
       ((iVar3 = FUN_00444ad0(lVar5,param_2,0x39), iVar3 != 0 &&
        ((iVar3 = FUN_00444ad0(lVar5,param_3,param_4), iVar3 != 0 &&
         (iVar3 = FUN_00444c20(lVar5,auStack_300,0x72), iVar3 != 0)))))) {
      FUN_00444950(lVar5);
      FUN_004933f0(&local_288,auStack_300,0x72);
      FUN_004006a0(auStack_300,0x72);
      FUN_004928d0(&local_288,PTR_DAT_04374510,&local_288);
      FUN_004933f0(auStack_300,param_1 + 0x39,0x39);
      FUN_00491610(auStack_150,auStack_300,auStack_150,&local_288);
      uVar4 = FUN_0048dfe0(auStack_150,auStack_250);
      return uVar4;
    }
  }
  FUN_00444950(lVar5);
  return 0;
}


