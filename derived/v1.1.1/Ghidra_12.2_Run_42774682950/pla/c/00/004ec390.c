/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ec390; name: FUN_004ec390
 */


undefined8 FUN_004ec390(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  lVar5 = *(long *)(lVar3 + 0x2b8);
  uVar4 = *(undefined8 *)(lVar3 + 0x2c0);
  uVar1 = *(uint *)(*(long *)(lVar3 + 0x238) + 0x1c);
  if ((uVar1 >> 5 & 1) == 0) {
    if (lVar5 == 0 && (uVar1 & 8) == 0) {
      FUN_004c99a0(param_1,0x50,0x162,0x41,"external/openssl/ssl/statem/statem_clnt.c",0xd3a);
      lVar5 = 0;
    }
    else {
      iVar2 = FUN_004c1c90(param_1,lVar5,uVar4,1);
      if (iVar2 != 0) {
        return 1;
      }
      lVar5 = 0;
      uVar4 = 0;
    }
  }
  else {
    iVar2 = FUN_004d7740(param_1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  FUN_00400620(lVar5,uVar4,"external/openssl/ssl/statem/statem_clnt.c",0xd69);
  *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2b8) = 0;
  return 0;
}


