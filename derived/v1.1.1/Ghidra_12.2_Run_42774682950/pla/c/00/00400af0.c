/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400af0; name: FUN_00400af0
 */


bool FUN_00400af0(uint param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 local_a8 [80];
  undefined8 local_58;
  
  if (*param_3 == 0) {
    return true;
  }
  if (0xf < param_1) {
    uVar6 = 0x71;
    uVar8 = 0x37;
    uVar7 = 7;
    goto LAB_00400bc4;
  }
  iVar2 = FUN_004001b0(&DAT_0439cda0,&LAB_00401100);
  if ((iVar2 == 0) || (DAT_0439cda4 == 0)) {
    uVar6 = 0x71;
    uVar7 = 0x41;
    uVar8 = 0x3c;
    goto LAB_00400bc4;
  }
  if (DAT_0439cda8 == 0) {
    return false;
  }
  FUN_00400140();
  uVar3 = FUN_00407950(*(undefined8 *)(&DAT_0439cdb0 + (long)(int)param_1 * 8));
  uVar4 = FUN_00407950(*param_3);
  if ((int)uVar3 <= (int)uVar4) {
    uVar4 = uVar3;
  }
  if ((int)uVar4 < 1) {
    puVar5 = (undefined1 *)0x0;
    FUN_00400160(DAT_0439cda8);
joined_r0x00400bdc:
    if (uVar4 == 0) {
      return true;
    }
    if (puVar5 != (undefined1 *)0x0) {
      if ((*param_2 == 0) || (iVar2 = FUN_00407950(), iVar2 < (int)uVar4)) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00407970(*param_2,uVar4 - 1);
      }
      iVar2 = FUN_00400db0(param_2,uVar4 - 1,uVar6);
      bVar1 = iVar2 != 0;
      if ((iVar2 == 0) || ((int)uVar4 < 1)) {
joined_r0x00400d74:
        if (puVar5 == local_a8) {
          return bVar1;
        }
        FUN_00400420(puVar5,"external/openssl/crypto/ex_data.c",0x137);
        return bVar1;
      }
      uVar10 = 0;
      if (*param_3 != 0) goto LAB_00400d00;
      do {
        local_58 = 0;
        puVar9 = *(undefined8 **)(puVar5 + uVar10 * 8);
        while( true ) {
          if (((puVar9 != (undefined8 *)0x0) && ((code *)puVar9[4] != (code *)0x0)) &&
             (iVar2 = (*(code *)puVar9[4])
                                (param_2,param_3,&local_58,uVar10 & 0xffffffff,*puVar9,puVar9[1]),
             iVar2 == 0)) {
            bVar1 = false;
            goto joined_r0x00400d74;
          }
          FUN_00400db0(param_2,uVar10 & 0xffffffff,local_58);
          uVar10 = uVar10 + 1;
          if ((long)(int)uVar4 <= (long)uVar10) {
            bVar1 = true;
            goto joined_r0x00400d74;
          }
          if (*param_3 == 0) break;
LAB_00400d00:
          iVar2 = FUN_00407950();
          if ((long)iVar2 <= (long)uVar10) break;
          local_58 = FUN_00407970(*param_3,uVar10 & 0xffffffff);
          puVar9 = *(undefined8 **)(puVar5 + uVar10 * 8);
        }
      } while( true );
    }
  }
  else {
    if ((int)uVar4 < 10) {
      puVar5 = local_a8;
LAB_00400c20:
      uVar10 = 0;
      do {
        uVar6 = FUN_00407970(*(undefined8 *)(&DAT_0439cdb0 + (long)(int)param_1 * 8),
                             uVar10 & 0xffffffff);
        *(undefined8 *)(puVar5 + uVar10 * 8) = uVar6;
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)uVar4);
      FUN_00400160(DAT_0439cda8);
      goto joined_r0x00400bdc;
    }
    puVar5 = (undefined1 *)
             FUN_00400260(-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,
                          "external/openssl/crypto/ex_data.c",0x115);
    if (puVar5 != (undefined1 *)0x0) goto LAB_00400c20;
    FUN_00400160(DAT_0439cda8);
  }
  uVar6 = 0x6e;
  uVar7 = 0x41;
  uVar8 = 0x11f;
LAB_00400bc4:
  FUN_004014b0(0xf,uVar6,uVar7,"external/openssl/crypto/ex_data.c",uVar8);
  return false;
}


