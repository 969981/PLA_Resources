/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c25b0; name: FUN_004c25b0
 */


long FUN_004c25b0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == (long *)0x0) {
    uVar7 = 0xc3;
    uVar8 = 0x2a6;
    goto LAB_004c291c;
  }
  if (*param_1 == 0) {
    uVar7 = 0xe4;
    uVar8 = 0x2aa;
    goto LAB_004c291c;
  }
  lVar5 = FUN_004002a0(0x1838,"external/openssl/ssl/ssl_lib.c",0x2ae);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x5c8) = 1;
    lVar6 = FUN_004000a0();
    *(long *)(lVar5 + 0x1800) = lVar6;
    if (lVar6 == 0) {
      FUN_00400420(lVar5,"external/openssl/ssl/ssl_lib.c",0x2b5);
      lVar5 = 0;
    }
    else {
      FUN_004c5c50(lVar5 + 0x7f8,lVar5);
      *(long *)(lVar5 + 0x110) = param_1[0x6c];
      lVar6 = param_1[0x25];
      *(long *)(lVar5 + 0x5d4) = param_1[0x26];
      *(long *)(lVar5 + 0x5cc) = lVar6;
      *(long *)(lVar5 + 0x5e0) = param_1[0x27];
      *(long *)(lVar5 + 0x17d8) = param_1[0x71];
      *(long *)(lVar5 + 0x1810) = param_1[0x78];
      *(int *)(lVar5 + 0x74c) = (int)param_1[0x7b];
      lVar6 = FUN_00406f10(param_1[3]);
      *(long *)(lVar5 + 0x128) = lVar6;
      if (lVar6 != 0) {
        lVar6 = FUN_004e1980(param_1[0x28]);
        *(long *)(lVar5 + 0x488) = lVar6;
        if (lVar6 != 0) {
          *(int *)(lVar5 + 0x800) = (int)param_1[0x29];
          lVar6 = param_1[0x2a];
          *(long *)(lVar5 + 0xc0) = param_1[0x2b];
          *(long *)(lVar5 + 0xb8) = lVar6;
          *(int *)(lVar5 + 0x558) = (int)param_1[0x2c];
          *(long *)(lVar5 + 0x7f0) = param_1[0x6e];
          lVar6 = param_1[0x72];
          *(long *)(lVar5 + 0x17f0) = param_1[0x73];
          *(long *)(lVar5 + 0x17e8) = lVar6;
          *(long *)(lVar5 + 0x17f8) = param_1[0x74];
          uVar9 = param_1[0x2d];
          *(ulong *)(lVar5 + 0x4e0) = uVar9;
          if (0x20 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("Assertion failed: s->sid_ctx_length <= sizeof(s->sid_ctx)",
                         "external/openssl/ssl/ssl_lib.c",0x2e2);
          }
          lVar6 = param_1[0x2e];
          lVar11 = param_1[0x31];
          lVar10 = param_1[0x30];
          *(long *)(lVar5 + 0x4f0) = param_1[0x2f];
          *(long *)(lVar5 + 0x4e8) = lVar6;
          *(long *)(lVar5 + 0x500) = lVar11;
          *(long *)(lVar5 + 0x4f8) = lVar10;
          *(long *)(lVar5 + 0x560) = param_1[0x32];
          *(long *)(lVar5 + 0x528) = param_1[0x33];
          lVar6 = FUN_0046bbe0();
          *(long *)(lVar5 + 0xd0) = lVar6;
          if (lVar6 != 0) {
            FUN_0046bce0(lVar6,param_1[0x34]);
            *(int *)(lVar5 + 0x40) = (int)param_1[0x35];
            *(undefined1 *)(lVar5 + 0x70c) = *(undefined1 *)((long)param_1 + 0x224);
            lVar6 = param_1[0x36];
            *(long *)(lVar5 + 0x5f8) = param_1[0x37];
            *(long *)(lVar5 + 0x5f0) = lVar6;
            uVar9 = param_1[0x38];
            *(ulong *)(lVar5 + 0x600) = uVar9;
            if (1 < uVar9) {
              *(undefined4 *)(lVar5 + 0x800) = 1;
            }
            if (param_1[0x39] != 0) {
              FUN_004c5e30(lVar5);
            }
            piVar1 = (int *)((long)param_1 + 0x9c);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 < 1) {
LAB_004c2938:
                    /* WARNING: Subroutine does not return */
              FUN_00404dd0("refcount error","external/openssl/ssl/ssl_lib.c",0xc18);
            }
            *(long **)(lVar5 + 0x598) = param_1;
            *(undefined4 *)(lVar5 + 0x678) = 0;
            *(undefined8 *)(lVar5 + 0x630) = 0;
            *(undefined8 *)(lVar5 + 0x628) = 0;
            *(int *)(lVar5 + 0x640) = (int)param_1[0x44];
            *(undefined4 *)(lVar5 + 0x674) = 0;
            *(undefined8 *)(lVar5 + 0x65c) = 0;
            *(undefined8 *)(lVar5 + 0x654) = 0;
            *(undefined8 *)(lVar5 + 0x66c) = 0;
            *(undefined8 *)(lVar5 + 0x664) = 0;
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 < 1) goto LAB_004c2938;
            *(long **)(lVar5 + 0x728) = param_1;
            if (param_1[0x46] != 0) {
              lVar6 = FUN_00405020(param_1[0x46],param_1[0x45],"external/openssl/ssl/ssl_lib.c",
                                   0x308);
              *(long *)(lVar5 + 0x688) = lVar6;
              if (lVar6 == 0) goto LAB_004c28fc;
              *(long *)(lVar5 + 0x680) = param_1[0x45];
            }
            if (param_1[0x48] != 0) {
              lVar6 = FUN_00405020(param_1[0x48],param_1[0x47] << 1,"external/openssl/ssl/ssl_lib.c"
                                   ,0x312);
              *(long *)(lVar5 + 0x698) = lVar6;
              if (lVar6 == 0) goto LAB_004c28fc;
              *(long *)(lVar5 + 0x690) = param_1[0x47];
            }
            *(undefined8 *)(lVar5 + 0x6d8) = 0;
            if (*(long *)(*(long *)(lVar5 + 0x598) + 600) != 0) {
              __dest = (void *)FUN_00400260(*(undefined8 *)(*(long *)(lVar5 + 0x598) + 0x260),
                                            "external/openssl/ssl/ssl_lib.c",0x31d);
              *(void **)(lVar5 + 0x6c8) = __dest;
              if (__dest == (void *)0x0) goto LAB_004c28fc;
              memcpy(__dest,*(void **)(*(long *)(lVar5 + 0x598) + 600),
                     *(size_t *)(*(long *)(lVar5 + 0x598) + 0x260));
              *(undefined8 *)(lVar5 + 0x6d0) = *(undefined8 *)(*(long *)(lVar5 + 0x598) + 0x260);
            }
            *(undefined8 *)(lVar5 + 0x5a8) = 0;
            *(undefined8 *)(lVar5 + 0x5a0) = 0;
            lVar6 = param_1[0x16];
            *(long *)(lVar5 + 0x17b8) = param_1[0x17];
            *(long *)(lVar5 + 0x17b0) = lVar6;
            lVar6 = *param_1;
            *(long *)(lVar5 + 8) = lVar6;
            *(undefined4 *)(lVar5 + 0x744) = 0xffffffff;
            lVar10 = param_1[0x79];
            *(long *)(lVar5 + 0x1830) = param_1[0x7a];
            *(long *)(lVar5 + 0x1828) = lVar10;
            iVar4 = (**(code **)(lVar6 + 0x10))(lVar5);
            if (iVar4 != 0) {
              *(uint *)(lVar5 + 0x38) = (uint)(*(undefined **)(*param_1 + 0x28) != PTR_LAB_04374638)
              ;
              iVar4 = FUN_004c23d0(lVar5);
              if ((iVar4 != 0) && (iVar4 = FUN_00400880(0,lVar5,lVar5 + 0x5b0), iVar4 != 0)) {
                lVar6 = param_1[0x55];
                *(long *)(lVar5 + 0x580) = param_1[0x56];
                *(long *)(lVar5 + 0x578) = lVar6;
                lVar6 = param_1[0x57];
                *(long *)(lVar5 + 0x590) = param_1[0x58];
                *(long *)(lVar5 + 0x588) = lVar6;
                *(undefined8 *)(lVar5 + 0x17c0) = 0;
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_004c28fc:
  FUN_004c2970(lVar5);
  uVar7 = 0x41;
  uVar8 = 0x34e;
LAB_004c291c:
  FUN_004014b0(0x14,0xba,uVar7,"external/openssl/ssl/ssl_lib.c",uVar8);
  return 0;
}


