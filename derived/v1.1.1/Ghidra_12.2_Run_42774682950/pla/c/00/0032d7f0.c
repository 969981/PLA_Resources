/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032d7f0; name: FUN_0032d7f0
 */


void FUN_0032d7f0(long *param_1,int param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  undefined2 uVar11;
  undefined1 auStack_90 [8];
  byte local_88 [16];
  undefined8 local_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (((DAT_04399aa0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04399aa0), iVar2 != 0)) {
    plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 4) = 0x3f800000;
      plVar5[1] = 0;
      *plVar5 = 0;
      plVar5[3] = 0;
      plVar5[2] = 0;
    }
                    /* try { // try from 0032dc58 to 0032dc67 has its CatchHandler @ 0032dc7c */
    FUN_0031f0c0(&LAB_0033abc8,plVar5);
    DAT_04399a98 = plVar5;
    __cxa_guard_release(&DAT_04399aa0);
  }
  plVar5 = DAT_04399a98;
  DAT_04399a90 = DAT_04399a98;
  lStack_68 = param_3[1];
  local_70 = *param_3;
  lStack_58 = param_3[3];
  lStack_60 = param_3[2];
  uVar8 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar10 = DAT_04399a98[1];
  uVar8 = (uVar8 ^ (ulong)param_1 >> 0x20 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297 ^ (long)param_2;
  if (uVar10 != 0) {
    uVar4 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar10 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar10))))
                                               ))));
    uVar11 = NEON_uaddlv(uVar4,1);
    uVar9 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar11) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x25 = uVar10 - 1 & uVar8;
      plVar6 = *(long **)(*DAT_04399a98 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar8;
      if (uVar10 <= uVar8) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar8 / uVar10;
        }
        unaff_x25 = uVar8 - uVar3 * uVar10;
      }
      plVar6 = *(long **)(*DAT_04399a98 + unaff_x25 * 8);
    }
    if (plVar6 != (long *)0x0) {
      if (uVar9 < 2) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) ||
             (plVar6[1] != uVar8 && (plVar6[1] & uVar10 - 1) != unaff_x25)) goto LAB_0032d954;
        } while ((long *)plVar6[2] != param_1 || *(int *)(plVar6 + 3) != param_2);
      }
      else {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_0032d954;
          uVar9 = plVar6[1];
          if (uVar9 != uVar8) {
            if (uVar10 <= uVar9) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar3 * uVar10;
            }
            if (uVar9 != unaff_x25) goto LAB_0032d954;
          }
        } while ((long *)plVar6[2] != param_1 || (int)plVar6[3] != param_2);
      }
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x6c);
                    /* try { // try from 0032db34 to 0032db43 has its CatchHandler @ 0032dca8 */
      uVar4 = FUN_0030f3ac(&local_70,"Multiple extension registrations for type \"");
                    /* try { // try from 0032db50 to 0032db5b has its CatchHandler @ 0032dca4 */
      (**(code **)(*param_1 + 0x10))(local_88,param_1);
                    /* try { // try from 0032db5c to 0032db8b has its CatchHandler @ 0032dcdc */
      uVar4 = FUN_0030f3e8(uVar4,local_88);
      uVar4 = FUN_0030f3ac(uVar4,"\", field number ");
      uVar4 = FUN_0030f52c(uVar4,param_2);
      uVar4 = FUN_0030f3ac(uVar4,&DAT_0389ff53);
                    /* try { // try from 0032db8c to 0032db93 has its CatchHandler @ 0032dc94 */
      FUN_0030f41c(auStack_90,uVar4);
      if ((local_88[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_78);
      }
      FUN_0030f658(&local_70);
      return;
    }
  }
LAB_0032d954:
  plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  plVar6[2] = (long)param_1;
  *(int *)(plVar6 + 3) = param_2;
  *(undefined4 *)((long)plVar6 + 0x1c) = 0;
  plVar6[5] = lStack_68;
  plVar6[4] = local_70;
  plVar6[7] = lStack_58;
  plVar6[6] = lStack_60;
  *plVar6 = 0;
  plVar6[1] = uVar8;
  if ((uVar10 == 0) || (*(float *)(plVar5 + 4) * (float)uVar10 < (float)(plVar5[3] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar9 = (ulong)((float)(plVar5[3] + 1) / *(float *)(plVar5 + 4));
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
      uVar10 = plVar5[1];
      bVar1 = uVar10 < 3;
      if (1 < uVar10) goto LAB_0032d9fc;
LAB_0032dab4:
      FUN_0033ac30(plVar5,uVar9);
      uVar10 = plVar5[1];
      uVar3 = uVar10 - 1;
      uVar9 = uVar10 & uVar3;
    }
    else {
      if ((uVar9 & uVar9 - 1) != 0) {
                    /* try { // try from 0032da94 to 0032da9b has its CatchHandler @ 0032dcbc */
        uVar9 = std::__next_prime(uVar9);
      }
      uVar10 = plVar5[1];
      bVar1 = uVar10 <= uVar9;
      if (uVar10 < uVar9) goto LAB_0032dab4;
LAB_0032d9fc:
      if (!bVar1) {
        uVar3 = (ulong)((float)(ulong)plVar5[3] / *(float *)(plVar5 + 4));
        if ((uVar10 < 3) ||
           (uVar4 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                             CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                      CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                               CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                        CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                                 CONCAT12(POPCOUNT((char)(uVar10 >>
                                                                                         0x10)),
                                                                          CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10)))))))),
           uVar11 = NEON_uaddlv(uVar4,1), 1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar11)))
        {
                    /* try { // try from 0032dc04 to 0032dc07 has its CatchHandler @ 0032dcbc */
          uVar3 = std::__next_prime(uVar3);
          if (uVar3 <= uVar9) {
            uVar3 = uVar9;
          }
        }
        else {
          if (1 < uVar3) {
            uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
          }
          if (uVar3 <= uVar9) {
            uVar3 = uVar9;
          }
        }
        uVar9 = uVar3;
        if (uVar9 < uVar10) goto LAB_0032dab4;
      }
      uVar10 = plVar5[1];
      uVar3 = uVar10 - 1;
      uVar9 = uVar10 & uVar3;
    }
    if (uVar9 == 0) {
      unaff_x25 = uVar3 & uVar8;
      plVar7 = *(long **)(*plVar5 + unaff_x25 * 8);
      goto joined_r0x0032da84;
    }
    if (uVar8 < uVar10) {
      plVar7 = *(long **)(*plVar5 + uVar8 * 8);
      unaff_x25 = uVar8;
      goto joined_r0x0032da84;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar8 / uVar10;
    }
    unaff_x25 = uVar8 - uVar9 * uVar10;
    plVar7 = *(long **)(*plVar5 + unaff_x25 * 8);
    if (plVar7 == (long *)0x0) goto LAB_0032dad8;
LAB_0032d9ac:
    *plVar6 = *plVar7;
  }
  else {
    plVar7 = *(long **)(*plVar5 + unaff_x25 * 8);
joined_r0x0032da84:
    if (plVar7 != (long *)0x0) goto LAB_0032d9ac;
LAB_0032dad8:
    plVar7 = plVar5 + 2;
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
    *(long **)(*plVar5 + unaff_x25 * 8) = plVar7;
    if (*plVar6 == 0) goto LAB_0032dbe0;
    uVar8 = *(ulong *)(*plVar6 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar8 = uVar8 & uVar10 - 1;
    }
    else if (uVar10 <= uVar8) {
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = uVar8 / uVar10;
      }
      uVar8 = uVar8 - uVar9 * uVar10;
    }
    plVar7 = (long *)(*plVar5 + uVar8 * 8);
  }
  *plVar7 = (long)plVar6;
LAB_0032dbe0:
  plVar5[3] = plVar5[3] + 1;
  return;
}


