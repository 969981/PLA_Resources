/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c44d0; name: FUN_004c44d0
 */


long * FUN_004c44d0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    FUN_004014b0(0x14,0xa9,0xc4,"external/openssl/ssl/ssl_lib.c",0xb58);
    return (long *)0x0;
  }
  iVar1 = FUN_004bcbe0(0x200000,0);
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  iVar1 = FUN_004e1640();
  if (iVar1 < 0) {
    FUN_004014b0(0x14,0xa9,0x10d,"external/openssl/ssl/ssl_lib.c",0xb60);
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)FUN_004002a0(0x3e0,"external/openssl/ssl/ssl_lib.c",0xb63);
    uVar4 = DAT_0388a588;
    if (plVar2 != (long *)0x0) {
      *plVar2 = param_1;
      *(undefined4 *)((long)plVar2 + 0x134) = 0;
      *(undefined8 *)((long)plVar2 + 300) = uVar4;
      *(undefined4 *)(plVar2 + 9) = 2;
      plVar2[6] = 0x5000;
      lVar3 = (**(code **)(param_1 + 0xb8))();
      plVar2[10] = lVar3;
      *(undefined4 *)((long)plVar2 + 0x9c) = 1;
      lVar3 = FUN_004000a0();
      plVar2[0x6f] = lVar3;
      if (lVar3 == 0) {
        FUN_004014b0(0x14,0xa9,0x41,"external/openssl/ssl/ssl_lib.c",0xb72);
        FUN_00400420(plVar2,"external/openssl/ssl/ssl_lib.c",0xb73);
        return (long *)0x0;
      }
      plVar2[0x27] = 0x19000;
      *(undefined4 *)(plVar2 + 0x2c) = 0;
      lVar3 = FUN_004e16d0();
      plVar2[0x28] = lVar3;
      if (lVar3 != 0) {
        lVar3 = FUN_00405620(FUN_004c4840,&LAB_004c4890);
        plVar2[5] = lVar3;
        if (lVar3 != 0) {
          lVar3 = FUN_0046aa20();
          plVar2[4] = lVar3;
          if ((lVar3 != 0) &&
             (iVar1 = FUN_004bdaf0(plVar2,
                                   "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256"
                                  ), iVar1 != 0)) {
            lVar3 = FUN_004bdd30(*plVar2,plVar2[3],plVar2 + 1,plVar2 + 2,
                                 "ALL:!COMPLEMENTOFDEFAULT:!eNULL",plVar2[0x28]);
            if ((lVar3 == 0) || (iVar1 = FUN_00407950(plVar2[1]), iVar1 < 1)) {
              uVar4 = 0xa1;
              uVar5 = 0xb8f;
              goto LAB_004c4798;
            }
            lVar3 = FUN_0046bbe0();
            plVar2[0x34] = lVar3;
            if (lVar3 != 0) {
              lVar3 = FUN_00446540("ssl3-md5");
              plVar2[0x1e] = lVar3;
              if (lVar3 == 0) {
                uVar4 = 0xf2;
                uVar5 = 0xb98;
                goto LAB_004c4798;
              }
              lVar3 = FUN_00446540("ssl3-sha1");
              plVar2[0x1f] = lVar3;
              if (lVar3 == 0) {
                uVar4 = 0xf3;
                uVar5 = 0xb9c;
                goto LAB_004c4798;
              }
              lVar3 = FUN_004071e0();
              plVar2[0x23] = lVar3;
              if (lVar3 != 0) {
                lVar3 = FUN_004071e0();
                plVar2[0x24] = lVar3;
                if ((lVar3 != 0) && (iVar1 = FUN_00400880(1,plVar2,plVar2 + 0x1d), iVar1 != 0)) {
                  lVar3 = thunk_FUN_004002a0(0x40,"external/openssl/ssl/ssl_lib.c",0xba9);
                  plVar2[0x40] = lVar3;
                  if (lVar3 != 0) {
                    if ((*(byte *)(*(long *)(param_1 + 0xc0) + 0x60) >> 3 & 1) == 0) {
                      lVar3 = FUN_004bf6a0();
                      plVar2[0x21] = lVar3;
                    }
                    plVar2[0x37] = 0x4000;
                    plVar2[0x36] = 0x4000;
                    iVar1 = FUN_00427c60(plVar2 + 0x3e,0x10);
                    if (((iVar1 < 1) || (iVar1 = FUN_00427b20(plVar2[0x40],0x20), iVar1 < 1)) ||
                       (iVar1 = FUN_00427b20(plVar2[0x40] + 0x20,0x20), iVar1 < 1)) {
                      *(uint *)(plVar2 + 0x25) = *(uint *)(plVar2 + 0x25) | 0x4000;
                    }
                    iVar1 = FUN_00427b20(plVar2 + 0x51,0x20);
                    if ((0 < iVar1) && (iVar1 = FUN_004d7500(plVar2), iVar1 != 0)) {
                      *(uint *)(plVar2 + 0x25) = *(uint *)(plVar2 + 0x25) | 0x120004;
                      lVar3 = DAT_0388a7c0;
                      *(undefined4 *)(plVar2 + 0x44) = 0xffffffff;
                      plVar2[0x78] = 2;
                      plVar2[0x71] = lVar3;
                      FUN_004f7600(plVar2);
                      return plVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0x41;
  uVar5 = 0xc0a;
LAB_004c4798:
  FUN_004014b0(0x14,0xa9,uVar4,"external/openssl/ssl/ssl_lib.c",uVar5);
  FUN_004c30a0(plVar2);
  return (long *)0x0;
}


