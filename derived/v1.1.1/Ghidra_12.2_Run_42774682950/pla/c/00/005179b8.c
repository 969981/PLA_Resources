/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005179b8; name: FUN_005179b8
 */


void FUN_005179b8(undefined8 *param_1,long param_2,uint param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long *local_c0;
  long local_b8 [3];
  long *local_a0;
  long local_98;
  long lStack_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  plVar10 = *(long **)(param_2 + 0x140);
  if ((long *)(param_2 + 0x148) == plVar10) {
    return;
  }
  plVar7 = plVar10 + 4;
  if ((param_3 & 1) == 0) goto LAB_00517a8c;
LAB_00517a84:
  bVar1 = true;
  plVar11 = plVar10;
  do {
    local_98 = 0;
    lStack_90 = 0;
    local_80 = 0;
    lStack_78 = 0;
    local_a0 = &local_98;
    local_88 = &local_80;
    FUN_005244dc(&local_a0,0);
    local_a0 = (long *)plVar11[0xd];
    plVar10 = plVar11 + 0xe;
    local_98 = *plVar10;
    lStack_90 = plVar11[0xf];
    if (lStack_90 == 0) {
      plVar10 = (long *)plVar11[10];
      local_a0 = &local_98;
      if (plVar10 != plVar11 + 0xb) goto LAB_00517b24;
    }
    else {
      *(long **)(local_98 + 0x10) = &local_98;
      plVar11[0xd] = (long)plVar10;
      *plVar10 = 0;
      plVar11[0xf] = 0;
      plVar10 = (long *)plVar11[10];
      if ((long *)plVar11[10] != plVar11 + 0xb) {
LAB_00517b24:
        do {
                    /* try { // try from 00517b28 to 00517b2f has its CatchHandler @ 005180a8 */
          FUN_005b6c6c(&local_e0,plVar10[4]);
          plVar6 = local_e0;
          while (plVar6 != &lStack_d8) {
            lVar3 = plVar6[7];
                    /* try { // try from 00517b54 to 00517b5b has its CatchHandler @ 005180b0 */
            plVar5 = (long *)FUN_0051c524(&local_a0,plVar6 + 4);
            *plVar5 = *plVar5 + lVar3;
            plVar5 = (long *)plVar6[1];
            if ((long *)plVar6[1] == (long *)0x0) {
              plVar5 = plVar6 + 2;
              bVar2 = *(long **)*plVar5 != plVar6;
              plVar6 = (long *)*plVar5;
              if (bVar2) {
                do {
                  lVar3 = *plVar5;
                  plVar5 = (long *)(lVar3 + 0x10);
                  plVar6 = (long *)*plVar5;
                } while (*(long *)*plVar5 != lVar3);
              }
            }
            else {
              do {
                plVar6 = plVar5;
                plVar5 = (long *)*plVar6;
              } while (plVar5 != (long *)0x0);
            }
          }
          FUN_005244dc(&local_e0,lStack_d8);
          plVar6 = (long *)plVar10[1];
          if ((long *)plVar10[1] == (long *)0x0) {
            plVar6 = plVar10 + 2;
            plVar5 = (long *)*plVar6;
            if ((long *)*plVar5 != plVar10) {
              do {
                lVar3 = *plVar6;
                plVar6 = (long *)(lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
              } while (*plVar5 != lVar3);
            }
          }
          else {
            do {
              plVar5 = plVar6;
              plVar6 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
          plVar10 = plVar5;
        } while (plVar5 != plVar11 + 0xb);
      }
    }
    plVar10 = (long *)plVar11[0x10];
joined_r0x00517c24:
    if (plVar11 + 0x11 != plVar10) {
      do {
        local_e0 = plVar10 + 4;
                    /* try { // try from 00517ce4 to 00517cfb has its CatchHandler @ 005180a4 */
        lVar3 = FUN_00525714(&local_88,local_e0,&DAT_03a2945a,&local_e0,auStack_68);
        if ((long *)plVar10[5] != plVar10 + 6) {
          plVar6 = (long *)plVar10[5];
          do {
                    /* try { // try from 00517d28 to 00517d2f has its CatchHandler @ 005180ac */
            FUN_005b719c(&local_e0,plVar6[4]);
            *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + lStack_d8;
            *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + (long)local_e0;
            *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + lStack_c8;
            *(long *)(lVar3 + 0x38) = *(long *)(lVar3 + 0x38) + local_d0;
            plVar5 = local_c0;
            while (plVar5 != local_b8) {
                    /* try { // try from 00517d70 to 00517d77 has its CatchHandler @ 005180cc */
              plVar8 = (long *)FUN_0051fa54(lVar3 + 0x48,plVar5 + 4);
              *plVar8 = *plVar8 + plVar5[7];
              plVar8[1] = (long)((double)plVar5[8] + (double)plVar8[1]);
              plVar8 = (long *)plVar5[1];
              if ((long *)plVar5[1] == (long *)0x0) {
                plVar8 = plVar5 + 2;
                bVar2 = *(long **)*plVar8 != plVar5;
                plVar5 = (long *)*plVar8;
                if (bVar2) {
                  do {
                    lVar9 = *plVar8;
                    plVar8 = (long *)(lVar9 + 0x10);
                    plVar5 = (long *)*plVar8;
                  } while (*(long *)*plVar8 != lVar9);
                }
              }
              else {
                do {
                  plVar5 = plVar8;
                  plVar8 = (long *)*plVar5;
                } while (plVar8 != (long *)0x0);
              }
            }
            FUN_0051f7a0(&local_c0,local_b8[0]);
            plVar5 = (long *)plVar6[1];
            if ((long *)plVar6[1] == (long *)0x0) {
              plVar5 = plVar6 + 2;
              plVar8 = (long *)*plVar5;
              if ((long *)*plVar8 != plVar6) {
                do {
                  lVar9 = *plVar5;
                  plVar5 = (long *)(lVar9 + 0x10);
                  plVar8 = (long *)*plVar5;
                } while (*plVar8 != lVar9);
              }
            }
            else {
              do {
                plVar8 = plVar5;
                plVar5 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
            plVar6 = plVar8;
          } while (plVar8 != plVar10 + 6);
        }
        plVar6 = (long *)plVar10[8];
        plVar5 = (long *)plVar10[9];
        if (plVar6 != plVar5) {
          do {
            lVar9 = *plVar6;
            *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + plVar6[1];
            *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + lVar9;
            lVar9 = plVar6[2];
            *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + plVar6[3];
            *(long *)(lVar3 + 0x38) = *(long *)(lVar3 + 0x38) + lVar9;
            plVar8 = (long *)plVar6[4];
            while (plVar8 != plVar6 + 5) {
                    /* try { // try from 00517e98 to 00517e9f has its CatchHandler @ 005180c4 */
              plVar4 = (long *)FUN_0051fa54(lVar3 + 0x48,plVar8 + 4);
              *plVar4 = *plVar4 + plVar8[7];
              plVar4[1] = (long)((double)plVar8[8] + (double)plVar4[1]);
              plVar4 = (long *)plVar8[1];
              if ((long *)plVar8[1] == (long *)0x0) {
                plVar4 = plVar8 + 2;
                bVar2 = *(long **)*plVar4 != plVar8;
                plVar8 = (long *)*plVar4;
                if (bVar2) {
                  do {
                    lVar9 = *plVar4;
                    plVar4 = (long *)(lVar9 + 0x10);
                    plVar8 = (long *)*plVar4;
                  } while (*(long *)*plVar4 != lVar9);
                }
              }
              else {
                do {
                  plVar8 = plVar4;
                  plVar4 = (long *)*plVar8;
                } while (plVar4 != (long *)0x0);
              }
            }
            plVar6 = plVar6 + 7;
          } while (plVar6 != plVar5);
          plVar6 = (long *)plVar10[8];
          for (plVar5 = (long *)plVar10[9]; plVar5 != plVar6; plVar5 = plVar5 + -7) {
            FUN_0051f7a0(plVar5 + -3,plVar5[-2]);
          }
        }
        plVar10[9] = (long)plVar6;
        if (plVar10[7] == 0) {
                    /* try { // try from 00517f54 to 00517f5f has its CatchHandler @ 005180a0 */
          plVar10 = (long *)FUN_005258b4(plVar11 + 0x10,plVar10);
        }
        else {
          plVar6 = (long *)plVar10[1];
          if ((long *)plVar10[1] == (long *)0x0) {
            plVar6 = plVar10 + 2;
            bVar2 = *(long **)*plVar6 == plVar10;
            plVar10 = (long *)*plVar6;
            if (bVar2) goto joined_r0x00517c24;
            do {
              lVar3 = *plVar6;
              plVar6 = (long *)(lVar3 + 0x10);
              plVar10 = (long *)*plVar6;
            } while (*plVar10 != lVar3);
          }
          else {
            do {
              plVar10 = plVar6;
              plVar6 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
        }
        if (plVar11 + 0x11 == plVar10) break;
      } while( true );
    }
    if (bVar1) {
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 00517c40 to 00517c43 has its CatchHandler @ 0051809c */
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar3 = tpidr_el0;
                    /* try { // try from 00517c5c to 00517c8f has its CatchHandler @ 0051809c */
      lVar3 = FUN_002f00fc(*(undefined8 *)(lVar3 + 0x30));
      local_70 = lVar3 - plVar11[0x13];
      plVar11[0x13] = lVar3;
      local_e0 = plVar7;
      lVar3 = FUN_005259b8(param_1,plVar7,&DAT_03a2945a,&local_e0,auStack_68);
      plVar10 = (long *)(lVar3 + 0x58);
      FUN_005244dc((undefined8 *)(lVar3 + 0x50),*plVar10);
      *(long **)(lVar3 + 0x50) = local_a0;
      *plVar10 = local_98;
      *(long *)(lVar3 + 0x60) = lStack_90;
      if (lStack_90 == 0) {
        *(undefined8 *)(lVar3 + 0x50) = plVar10;
      }
      else {
        *(long **)(local_98 + 0x10) = plVar10;
        local_98 = 0;
        lStack_90 = 0;
        local_a0 = &local_98;
      }
      plVar10 = (long *)(lVar3 + 0x70);
      FUN_0051fcc8((undefined8 *)(lVar3 + 0x68),*plVar10);
      *(long **)(lVar3 + 0x68) = local_88;
      *plVar10 = local_80;
      *(long *)(lVar3 + 0x78) = lStack_78;
      if (lStack_78 == 0) {
        *(undefined8 *)(lVar3 + 0x68) = plVar10;
      }
      else {
        *(long **)(local_80 + 0x10) = plVar10;
        local_80 = 0;
        local_88 = &local_80;
      }
      *(long *)(lVar3 + 0x80) = local_70;
    }
    if ((plVar11[0x12] == 0) && (plVar11[0xc] == 0)) {
                    /* try { // try from 0051805c to 00518067 has its CatchHandler @ 00518090 */
      plVar10 = (long *)FUN_00525c8c(param_2 + 0x140,plVar11);
    }
    else {
      plVar7 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        plVar7 = plVar11 + 2;
        plVar10 = (long *)*plVar7;
        if ((long *)*plVar10 != plVar11) {
          do {
            lVar3 = *plVar7;
            plVar7 = (long *)(lVar3 + 0x10);
            plVar10 = (long *)*plVar7;
          } while (*plVar10 != lVar3);
        }
      }
      else {
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
    }
    FUN_0051fcc8(&local_88,local_80);
    FUN_005244dc(&local_a0,local_98);
    if ((long *)(param_2 + 0x148) == plVar10) {
      return;
    }
    plVar7 = plVar10 + 4;
    if ((param_3 & 1) != 0) goto LAB_00517a84;
LAB_00517a8c:
                    /* try { // try from 00517a8c to 00517a97 has its CatchHandler @ 00518094 */
    lVar3 = FUN_00525604(param_4,plVar7);
    bVar1 = param_4 + 8 != lVar3;
    plVar11 = plVar10;
  } while( true );
}


