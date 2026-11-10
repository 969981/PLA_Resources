/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f281ac; name: FUN_02f281ac
 */


undefined8
FUN_02f281ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5,long param_6,uint param_7,undefined4 param_8,uint param_9,
            undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_02eca560(param_4 + 0x68);
  if (lVar3 == 0) {
    uVar4 = 2;
  }
  else {
    iVar2 = FUN_02f00cdc(lVar3,param_9);
    if (iVar2 == 1) {
      uVar5 = param_7;
      if ((param_7 & 0xf00) == 0x100) {
        uVar1 = param_7 >> 0xc & 0x637;
        uVar5 = uVar1 - (uVar1 >> 1 & 0xf1f1f1f1);
        uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
        uVar5 = uVar1 << 0xc | (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
      }
      if ((uVar5 & 0xff) != 0) {
        FUN_02ef9850(param_1,param_2,param_3,param_5,param_6,uVar5,param_8,param_9,param_10,param_11
                     ,lVar3);
      }
      if (((param_7 & param_9) >> 0xf & 1) != 0) {
        *(undefined4 *)
         (param_6 + (ulong)(((param_9 & 0xff) + 3 & 0x1fc) * ((param_7 & 0xff) - 1)) * 4 +
         (long)(int)((param_9 & 0xff) - 1) * 4) = 0x3f800000;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


