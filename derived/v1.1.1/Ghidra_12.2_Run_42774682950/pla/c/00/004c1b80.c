/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1b80; name: FUN_004c1b80
 */


undefined8 FUN_004c1b80(long param_1,int param_2,uint *param_3,ulong param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_28 [2];
  
  if (param_4 < 4) {
    return 0;
  }
  uVar3 = 0x20;
  if (param_2 != 0) {
    uVar3 = 0x40;
  }
  if ((*(uint *)(param_1 + 0x5d0) & uVar3) == 0) {
    uVar2 = FUN_00427c60(param_3,param_4 & 0xffffffff);
    iVar1 = (int)uVar2;
  }
  else {
    FUN_00428290(local_28);
    uVar3 = (local_28[0] & 0xff00ff00) >> 8 | (local_28[0] & 0xff00ff) << 8;
    *param_3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar2 = FUN_00427c60(param_3 + 1,(int)param_4 + -4);
    iVar1 = (int)uVar2;
  }
  if (iVar1 < 1) {
    return uVar2;
  }
  if (param_4 < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: sizeof(tls11downgrade) < len","external/openssl/ssl/s3_lib.c",
                 0x11fb);
  }
  if (param_5 == 2) {
    uVar4 = 0x4452474e574f44;
  }
  else {
    if (param_5 != 1) {
      return uVar2;
    }
    uVar4 = 0x14452474e574f44;
  }
  *(undefined8 *)((long)param_3 + (param_4 - 8)) = uVar4;
  return uVar2;
}


