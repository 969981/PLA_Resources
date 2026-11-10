/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d9980; name: FUN_004d9980
 */


bool FUN_004d9980(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_004c5d60(param_1 + 0x7f8);
  if (iVar3 == 0) {
    if (param_2[1] != 0) {
      lVar2 = param_2[1] + -1;
      bVar1 = *(byte *)*param_2;
      *param_2 = (byte *)*param_2 + 1;
      param_2[1] = lVar2;
      if (lVar2 == 0) {
        if (bVar1 < 2) {
          if ((bVar1 == 1) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
            *(undefined4 *)(param_1 + 0x744) = 0;
          }
          iVar3 = FUN_004e7370(param_1,0);
          return iVar3 != 0;
        }
        uVar4 = 0x2f;
        uVar5 = 0x7a;
        uVar6 = 0x281;
        goto LAB_004d99ec;
      }
    }
    uVar4 = 0x32;
    uVar5 = 0x7a;
    uVar6 = 0x276;
  }
  else {
    uVar4 = 10;
    uVar5 = 0xb6;
    uVar6 = 0x26f;
  }
LAB_004d99ec:
  FUN_004c99a0(param_1,uVar4,0x206,uVar5,"external/openssl/ssl/statem/statem_lib.c",uVar6);
  return false;
}


