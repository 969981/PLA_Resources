/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400e80; name: FUN_00400e80
 */


void FUN_00400e80(uint param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_a0 [10];
  
  puVar3 = local_a0;
  if (0xf < param_1) {
    FUN_004014b0(0xf,0x71,7,"external/openssl/crypto/ex_data.c",0x37);
    goto LAB_004010d0;
  }
  iVar1 = FUN_004001b0(&DAT_0439cda0,&LAB_00401100);
  if ((iVar1 == 0) || (DAT_0439cda4 == 0)) {
    FUN_004014b0(0xf,0x71,0x41,"external/openssl/crypto/ex_data.c",0x3c);
    goto LAB_004010d0;
  }
  if (DAT_0439cda8 == 0) goto LAB_004010d0;
  FUN_00400140();
  uVar2 = FUN_00407950(*(undefined8 *)(&DAT_0439cdb0 + (long)(int)param_1 * 8));
  if ((int)uVar2 < 1) {
    FUN_00400160(DAT_0439cda8);
LAB_004010b8:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (ulong)uVar2;
    if ((9 < (int)uVar2) &&
       (puVar3 = (undefined8 *)
                 FUN_00400260(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3,
                              "external/openssl/crypto/ex_data.c",0x151),
       puVar3 == (undefined8 *)0x0)) {
      FUN_00400160(DAT_0439cda8);
      uVar7 = 0;
      do {
        FUN_00400140(DAT_0439cda8);
        puVar3 = (undefined8 *)
                 FUN_00407970(*(undefined8 *)(&DAT_0439cdb0 + (long)(int)param_1 * 8),uVar7);
        FUN_00400160(DAT_0439cda8);
        if ((puVar3 != (undefined8 *)0x0) && (puVar3[3] != 0)) {
          if ((*param_3 == 0) || (iVar1 = FUN_00407950(), iVar1 <= (int)uVar7)) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00407970(*param_3,uVar7);
          }
          (*(code *)puVar3[3])(param_2,uVar4,param_3,uVar7,*puVar3,puVar3[1]);
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      goto LAB_004010b8;
    }
    uVar8 = 0;
    do {
      uVar4 = FUN_00407970(*(undefined8 *)(&DAT_0439cdb0 + (long)(int)param_1 * 8),
                           uVar8 & 0xffffffff);
      puVar3[uVar8] = uVar4;
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    FUN_00400160(DAT_0439cda8);
    if (0 < (int)uVar2) {
      uVar8 = 0;
      puVar6 = (undefined8 *)*puVar3;
      while( true ) {
        if ((puVar6 != (undefined8 *)0x0) && (puVar6[3] != 0)) {
          if ((*param_3 == 0) || (iVar1 = FUN_00407950(), (long)iVar1 <= (long)uVar8)) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00407970(*param_3,uVar8 & 0xffffffff);
          }
          (*(code *)puVar6[3])(param_2,uVar4,param_3,uVar8 & 0xffffffff,*puVar6,puVar6[1]);
        }
        uVar8 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        puVar6 = (undefined8 *)puVar3[uVar8];
      }
    }
    if (puVar3 == local_a0) goto LAB_004010d0;
  }
  FUN_00400420(puVar3,"external/openssl/crypto/ex_data.c",0x167);
LAB_004010d0:
  FUN_00407010(*param_3);
  *param_3 = 0;
  return;
}


