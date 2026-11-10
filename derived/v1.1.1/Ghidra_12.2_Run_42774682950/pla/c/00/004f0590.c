/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f0590; name: FUN_004f0590
 */


undefined8 FUN_004f0590(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long local_28;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
  uVar1 = *(uint *)(lVar7 + 0x20);
  if ((uVar1 & 0xab) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(lVar7 + 0x1c);
  uVar4 = FUN_0044e660(*(undefined8 *)(*(long *)(param_1 + 0x508) + 0x1b8));
  lVar7 = FUN_004e30e0(uVar4,&local_28);
  if ((lVar7 == 0) || ((*(uint *)(lVar7 + 4) & uVar1) == 0)) {
    uVar4 = 0x28;
    uVar5 = 0xdd;
    uVar6 = 0xe10;
  }
  else if ((*(uint *)(lVar7 + 4) >> 3 & 1) == 0) {
    if (((uVar2 & 0x41) == 0) || (local_28 == 0)) {
      if ((uVar2 >> 1 & 1) == 0) {
        return 1;
      }
      if (*(long *)(*(long *)(param_1 + 0xa8) + 0x408) != 0) {
        return 1;
      }
      uVar4 = 0x50;
      uVar5 = 0x44;
      uVar6 = 0xe28;
    }
    else {
      uVar4 = 0x28;
      uVar5 = 0xa9;
      uVar6 = 0xe21;
    }
  }
  else {
    iVar3 = FUN_004c4af0(*(undefined8 *)(*(long *)(param_1 + 0x508) + 0x1b8),param_1);
    if (iVar3 != 0) {
      return 1;
    }
    uVar4 = 0x28;
    uVar5 = 0x130;
    uVar6 = 0xe19;
  }
  FUN_004c99a0(param_1,uVar4,0x82,uVar5,"external/openssl/ssl/statem/statem_clnt.c",uVar6);
  return 0;
}


