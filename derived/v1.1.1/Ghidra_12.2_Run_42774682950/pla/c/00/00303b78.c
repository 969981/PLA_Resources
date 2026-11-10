/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00303b78; name: FUN_00303b78
 */


long FUN_00303b78(long param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  long local_28 [3];
  
  uVar6 = *(ulong *)(param_1 + 0x50);
  if (uVar6 == 0) goto LAB_00303ca8;
  uVar11 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar6 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar6))))))
                            ));
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  plVar1 = (long *)(param_1 + 0x48);
  uVar4 = (ulong)param_2;
  if (uVar8 < 2) {
    uVar7 = (ulong)((int)uVar6 - 1U & param_2);
LAB_00303bd4:
    plVar5 = *(long **)(*plVar1 + uVar7 * 8);
  }
  else {
    uVar7 = uVar4;
    if (uVar4 < uVar6) goto LAB_00303bd4;
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = uVar4 / uVar6;
    }
    uVar7 = uVar4 - uVar7 * uVar6;
    plVar5 = *(long **)(*plVar1 + uVar7 * 8);
  }
  if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
    if (uVar8 < 2) {
      uVar8 = plVar5[1];
      if (uVar8 == uVar4) goto LAB_00303c20;
      while ((uVar8 & uVar6 - 1) == uVar7) {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_00303ca8;
          uVar8 = plVar5[1];
          if (uVar8 != uVar4) break;
LAB_00303c20:
          if (*(uint *)(plVar5 + 2) == param_2) goto LAB_00303c70;
        }
      }
    }
    else {
      do {
        uVar8 = plVar5[1];
        if (uVar8 == uVar4) {
          if (*(uint *)(plVar5 + 2) == param_2) {
LAB_00303c70:
            lVar9 = plVar5[3];
            FUN_00303cd0(local_28,plVar1,plVar5);
            lVar3 = local_28[0];
            local_28[0] = 0;
            if (lVar3 != 0) {
              FUN_002e2ea0(PTR_LAB_04373088);
            }
            return lVar9;
          }
        }
        else {
          if (uVar6 <= uVar8) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar8 / uVar6;
            }
            uVar8 = uVar8 - uVar2 * uVar6;
          }
          if (uVar8 != uVar7) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_00303ca8:
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x13a,2,
               "assertion failed: %s","iter != ctx_lookup_.end()");
                    /* WARNING: Subroutine does not return */
  abort();
}


