/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d9ac0; name: FUN_004d9ac0
 */


undefined8 FUN_004d9ac0(int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 8);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
    if (lVar5 != 0) {
      uVar2 = 0x32;
      uVar3 = 0x67;
      uVar4 = 0x2cd;
      goto LAB_004d9bd0;
    }
  }
  else if (((lVar5 != 2) && (*param_1 == 0x100)) || ((lVar5 != 0 && (*param_1 != 0x100)))) {
    uVar2 = 0x32;
    uVar3 = 0x67;
    uVar4 = 0x2c6;
    goto LAB_004d9bd0;
  }
  if (*(long *)(*(long *)(param_1 + 0x2a) + 0x238) == 0) {
    uVar2 = 10;
    uVar3 = 0x85;
    uVar4 = 0x2d5;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0xf0) = 1;
    iVar1 = FUN_004e5f70(param_1);
    if (iVar1 != 0) {
      if (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0) &&
         (FUN_004c94e0(param_1,1), *param_1 == 0x100)) {
        *(short *)(*(long *)(param_1 + 0x2c) + 0x110) =
             *(short *)(*(long *)(param_1 + 0x2c) + 0x110) + 1;
      }
      return 3;
    }
    uVar2 = 0x50;
    uVar3 = 0x44;
    uVar4 = 0x2dc;
  }
LAB_004d9bd0:
  FUN_004c99a0(param_1,uVar2,0x16b,uVar3,"external/openssl/ssl/statem/statem_lib.c",uVar4);
  return 0;
}


