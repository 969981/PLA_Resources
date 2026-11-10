/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2c00; name: FUN_004e2c00
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_004e2c00(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)(param_1 + 0x488);
  if (param_1 == 0) {
    puVar9 = (undefined8 *)(param_2 + 0x140);
  }
  puVar9 = (undefined8 *)*puVar9;
  plVar8 = (long *)*puVar9;
  if (*plVar8 == 0) {
    FUN_004014b0(0x14,0x14c,0xb3,"external/openssl/ssl/ssl_cert.c",799);
    lVar6 = 0;
    lVar4 = 0;
    goto joined_r0x004e2cb8;
  }
  if ((param_3 >> 2 & 1) == 0) {
    lVar6 = puVar9[0x3b];
    if (lVar6 == 0) {
      lVar4 = param_2;
      if (param_1 != 0) {
        lVar4 = *(long *)(param_1 + 0x598);
      }
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((param_3 & 1) != 0) goto LAB_004e2c54;
LAB_004e2d44:
      lVar7 = 0;
      lVar4 = FUN_00468a30();
    }
    else {
      if ((param_3 & 1) == 0) goto LAB_004e2d44;
LAB_004e2c54:
      lVar7 = plVar8[2];
      lVar4 = FUN_00468a30();
    }
    if (lVar4 == 0) {
      FUN_004014b0(0x14,0x14c,0x41,"external/openssl/ssl/ssl_cert.c",0x33d);
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00468b10(lVar4,lVar6,*plVar8,lVar7);
      if (iVar1 == 0) {
        FUN_004014b0(0x14,0x14c,0xb,"external/openssl/ssl/ssl_cert.c",0x341);
joined_r0x004e2cb8:
        iVar1 = 0;
      }
      else {
        FUN_00469960(lVar4,*(uint *)((long)puVar9 + 0x1c) & 0x30000);
        iVar1 = FUN_00467130(lVar4);
        if (((param_3 >> 3 & 1) == 0) || (0 < iVar1)) {
          if (iVar1 < 1) {
            FUN_004014b0(0x14,0x14c,0x86,"external/openssl/ssl/ssl_cert.c",0x352);
            iVar1 = FUN_00468a00(lVar4);
            uVar5 = FUN_004e3270((long)iVar1);
            FUN_00402170(2,"Verify error:",uVar5);
            goto joined_r0x004e2cb8;
          }
          iVar1 = 0;
        }
        else {
          if ((param_3 >> 4 & 1) != 0) {
            FUN_004016d0();
          }
          iVar1 = 2;
        }
        lVar7 = FUN_00468a20(lVar4);
        FUN_00407820();
        FUN_00460a80();
        if (((param_3 >> 1 & 1) != 0) && (iVar2 = FUN_00407950(lVar7), 0 < iVar2)) {
          iVar2 = FUN_00407950(lVar7);
          FUN_00407970(lVar7,iVar2 + -1);
          uVar3 = FUN_00457510();
          if ((uVar3 >> 0xd & 1) != 0) {
            FUN_00407890(lVar7);
            FUN_00460a80();
          }
        }
        iVar2 = FUN_00407950(lVar7);
        if (0 < iVar2) {
          iVar1 = 0;
          do {
            uVar5 = FUN_00407970(lVar7,iVar1);
            iVar2 = FUN_004e0190(param_1,param_2,uVar5,0,0);
            if (iVar2 != 1) {
              FUN_004014b0(0x14,0x14c,iVar2,"external/openssl/ssl/ssl_cert.c",0x36e);
              FUN_004078c0(lVar7,PTR_FUN_04374180);
              iVar1 = 0;
              goto joined_r0x004e2f04;
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_00407950(lVar7);
          } while (iVar1 < iVar2);
          iVar1 = 1;
        }
        FUN_004078c0(plVar8[2],PTR_FUN_04374180);
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        plVar8[2] = lVar7;
      }
    }
joined_r0x004e2f04:
    if ((param_3 & 4) == 0) goto LAB_004e2dd8;
  }
  else {
    lVar6 = FUN_0046aa20();
    if (lVar6 != 0) {
      iVar1 = FUN_00407950(plVar8[2]);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar5 = FUN_00407970(plVar8[2],iVar1);
          iVar2 = FUN_0046b0a0(lVar6,uVar5);
          if (iVar2 == 0) goto LAB_004e2d20;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_00407950(plVar8[2]);
        } while (iVar1 < iVar2);
      }
      iVar1 = FUN_0046b0a0(lVar6,*plVar8);
      if (iVar1 != 0) goto LAB_004e2d44;
LAB_004e2d20:
      lVar4 = 0;
      goto joined_r0x004e2cb8;
    }
    iVar1 = 0;
    lVar4 = 0;
  }
  FUN_0046abb0(lVar6);
LAB_004e2dd8:
  FUN_00468a80(lVar4);
  return iVar1;
}


