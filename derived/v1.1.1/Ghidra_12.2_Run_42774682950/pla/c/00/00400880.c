/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400880; name: FUN_00400880
 */


undefined8 FUN_00400880(uint param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long local_a0 [10];
  
  plVar3 = local_a0;
  if (param_1 < 0x10) {
    iVar1 = FUN_004001b0(&DAT_0439cda0,&LAB_00401100);
    if ((iVar1 == 0) || (DAT_0439cda4 == 0)) {
      uVar5 = 0x71;
      uVar6 = 0x41;
      uVar7 = 0x3c;
    }
    else {
      if (DAT_0439cda8 == 0) {
        return 0;
      }
      FUN_00400140();
      *param_3 = 0;
      uVar2 = FUN_00407950(*(undefined8 *)(&DAT_0439cdb0 + (long)(int)param_1 * 8));
      uVar9 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        plVar3 = (long *)0x0;
        FUN_00400160(DAT_0439cda8);
      }
      else {
        if (((int)uVar2 < 10) ||
           (plVar3 = (long *)FUN_00400260(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3,
                                          "external/openssl/crypto/ex_data.c",0xe2),
           plVar3 != (long *)0x0)) {
          uVar10 = 0;
          do {
            lVar4 = FUN_00407970(*(undefined8 *)(&DAT_0439cdb0 + (long)(int)param_1 * 8),
                                 uVar10 & 0xffffffff);
            plVar3[uVar10] = lVar4;
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        FUN_00400160(DAT_0439cda8);
      }
      if (((int)uVar2 < 1) || (plVar3 != (long *)0x0)) {
        if (0 < (int)uVar2) {
          uVar10 = 0;
          lVar4 = *plVar3;
          while( true ) {
            if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
              if ((*param_3 == 0) || (iVar1 = FUN_00407950(), (long)iVar1 <= (long)uVar10)) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_00407970(*param_3,uVar10 & 0xffffffff);
              }
              puVar8 = (undefined8 *)plVar3[uVar10];
              (*(code *)puVar8[2])(param_2,uVar5,param_3,uVar10 & 0xffffffff,*puVar8,puVar8[1]);
            }
            uVar10 = uVar10 + 1;
            if (uVar9 == uVar10) break;
            lVar4 = plVar3[uVar10];
          }
        }
        if (plVar3 != local_a0) {
          FUN_00400420(plVar3,"external/openssl/crypto/ex_data.c",0xf5);
        }
        return 1;
      }
      uVar6 = 0x41;
      uVar7 = 0xea;
      uVar5 = 0x70;
    }
  }
  else {
    uVar5 = 0x71;
    uVar7 = 0x37;
    uVar6 = 7;
  }
  FUN_004014b0(0xf,uVar5,uVar6,"external/openssl/crypto/ex_data.c",uVar7);
  return 0;
}


