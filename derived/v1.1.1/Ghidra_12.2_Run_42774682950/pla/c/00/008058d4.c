/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008058d4; name: FUN_008058d4
 */


void FUN_008058d4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  FUN_007ec3f0();
  puVar2 = PTR_DAT_043777e8;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_007f0ce0(param_1 + 0xc);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 500;
  param_1[0x15] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(0x4d8,uVar3);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar4 + 8 + lVar5);
      lVar5 = lVar5 + 0x14;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
    } while (lVar5 != 0x4d8);
  }
  param_1[0x14] = lVar4;
  uVar3 = FUN_007e336c();
  lVar5 = FUN_0081a750(0x18,uVar3);
  if (lVar5 != 0) {
    FUN_007ff084(lVar5,lVar4,0x4d8);
  }
  param_1[0x13] = lVar5;
  return;
}


