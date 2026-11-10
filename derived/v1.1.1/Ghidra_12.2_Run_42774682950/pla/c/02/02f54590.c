/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f54590; name: FUN_02f54590
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_02f54590(long *param_1,long param_2,long param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  int iVar4;
  bool bVar5;
  MutexType *pMVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  
  if (param_3 == 0) {
    lVar20 = 0;
    lVar18 = 0;
    pMVar6 = DAT_0440a120;
    goto joined_r0x02f54a94;
  }
  local_68 = *(undefined4 *)(param_2 + 0x2c);
  lVar18 = *(long *)(param_3 + 8);
  lVar16 = *(long *)(*(long *)(param_3 + 0x18) + 0x78);
  FUN_02f426f4(lVar16,0,*(byte *)(param_2 + 0x30) & 0x1f,&local_68,1,&local_64);
  iVar15 = *(int *)(param_2 + 0x20);
  uVar14 = (ulong)DAT_042ab258;
  auVar3 = SEXT816((long)(uVar14 * (long)iVar15)) * SEXT816(0x20c49ba5e353f7cf);
  lVar20 = (long)local_64;
  iVar9 = -local_64;
  iVar4 = *(int *)(param_2 + 0x28) - ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f));
  if (iVar4 < iVar9) {
    dVar21 = ((double)(*(int *)(param_2 + 0x28) + local_64) * 1000.0) / (double)uVar14;
    dVar22 = 0.5;
    if (dVar21 <= 0.0) {
      dVar22 = -0.5;
    }
    iVar15 = (int)(dVar22 + dVar21);
    if (iVar15 == 0 && iVar9 == 0) goto LAB_02f5464c;
  }
  else {
    iVar9 = iVar4;
    if (iVar15 == 0 && iVar4 == 0) {
LAB_02f5464c:
      if ((*(byte *)(param_2 + 0x30) >> 5 & 1) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(lVar16 + 0x110) -
                *(int *)(*(long *)(lVar16 + 0x100) + (ulong)*(uint *)(lVar16 + 0x108) * 0x10 + -0xc)
        ;
      }
    }
  }
  iVar9 = (*(int *)(*(long *)(lVar16 + 0x100) + (ulong)*(uint *)(lVar16 + 0x108) * 0x10 + -0xc) -
          *(int *)(*(long *)(lVar16 + 0x100) + 4)) + iVar9;
  iVar4 = *(int *)(param_3 + 0x24);
  uVar13 = *(undefined4 *)(param_2 + 0x24);
  *(int *)(param_3 + 0x38) = iVar15;
  if (iVar9 < iVar4) {
    dVar21 = ((double)(iVar9 - iVar4) * 1000.0) / (double)uVar14;
    dVar22 = 0.5;
    if (dVar21 <= 0.0) {
      dVar22 = -0.5;
    }
    *(int *)(param_3 + 0x38) = iVar15 + (int)(dVar22 + dVar21);
    iVar9 = iVar4;
  }
  *(undefined4 *)(param_3 + 0x3c) = uVar13;
  *(int *)(param_3 + 0x34) = iVar9;
  *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) | 2;
  pMVar6 = DAT_0440a120;
joined_r0x02f54a94:
  DAT_0440a120 = pMVar6;
  if (param_4 != 0) {
    nn::os::LockMutex(pMVar6);
    uVar8 = *(uint *)(pMVar6 + 0x28);
    if (uVar8 != 0) {
      uVar19 = 0;
      if (uVar8 != 0) {
        uVar19 = param_4 / uVar8;
      }
      for (plVar17 = *(long **)(*(long *)(pMVar6 + 0x20) + (ulong)(param_4 - uVar19 * uVar8) * 8);
          plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
        if (*(uint *)(plVar17 + 2) == param_4) {
          *(int *)((long)plVar17 + 0x14) = *(int *)((long)plVar17 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar6);
          local_6c = 0;
          cVar1 = *(char *)(param_2 + 0x48);
          uVar8 = (uint)(int)cVar1 >> 3 & 7;
          if (uVar8 == 0) {
            local_6c = *(undefined4 *)plVar17[0x20];
LAB_02f547ac:
            iVar9 = 0;
            iVar15 = 0;
            if ((int)plVar17[0x21] == 0) goto LAB_02f54bd4;
LAB_02f547b4:
            iVar9 = iVar15;
            plVar11 = (long *)(*DAT_0442d138)(0,0xa0);
            if (plVar11 == (long *)0x0) goto LAB_02f54bd4;
            *(undefined2 *)(plVar11 + 0xb) = 0;
            plVar11[5] = (long)&PTR_FUN_042af340;
            plVar11[6] = 0;
            *plVar11 = (long)&PTR_LAB_042af288;
            *(undefined4 *)(plVar11 + 4) = 0;
            plVar11[9] = 0;
            plVar11[10] = -0xc0800000;
            plVar11[2] = (long)param_1;
            plVar11[3] = (long)&PTR_LAB_042af318;
            *(byte *)((long)plVar11 + 0x5a) = *(byte *)((long)plVar11 + 0x5a) & 0xe0;
            plVar11[7] = 0;
            plVar11[8] = 0;
            plVar11[0xc] = (long)&PTR_LAB_042af358;
            plVar11[0xd] = 0;
            plVar11[0xe] = 0;
            plVar11[0xf] = (long)plVar17;
            plVar11[0x10] = 0;
            plVar11[0x11] = 0;
            *(undefined8 *)((long)plVar11 + 0x8d) = 0;
            (**(code **)(*plVar17 + 0x10))(plVar17);
            *(int *)(plVar11 + 9) = (int)plVar11[9] + 1;
            lVar16 = plVar11[2];
            if (lVar16 != 0) {
              if (*(long *)(lVar16 + 0x30) == 0) {
                *(long **)(lVar16 + 0x30) = plVar11;
                plVar11[1] = 0;
              }
              else {
                plVar11[1] = *(long *)(lVar16 + 0x30);
                *(long **)(lVar16 + 0x30) = plVar11;
              }
              *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
            }
            FUN_02f50cf4(plVar11);
            bVar5 = false;
            *(undefined4 *)(plVar11 + 0x13) = param_5;
          }
          else {
            if (uVar8 == 2) {
              if (cVar1 < 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined4 *)(param_2 + 0x40);
              }
              uVar12 = 0;
            }
            else {
              if (uVar8 != 3) goto LAB_02f547ac;
              if (cVar1 < '\0') {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined4 *)(param_2 + 0x40);
              }
              uVar12 = 1;
            }
            iVar9 = FUN_02f42a54(plVar17,0,uVar13,uVar12,&local_6c);
            iVar15 = iVar9;
            if ((int)plVar17[0x21] != 0) goto LAB_02f547b4;
LAB_02f54bd4:
            plVar11 = (long *)0x0;
            bVar5 = true;
            *(undefined1 *)(param_1 + 0x18) = 0;
          }
          (**(code **)(*plVar17 + 0x18))(plVar17);
          puVar10 = (undefined8 *)(*DAT_0442d138)(0,0x48);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = lVar18 + lVar20;
            puVar10[2] = 0;
            puVar10[3] = plVar11;
            if (bVar5) {
              lVar20 = 0;
            }
            else {
              *(int *)(plVar11 + 9) = (int)plVar11[9] + 1;
              lVar20 = puVar10[3];
            }
            *(undefined4 *)((long)puVar10 + 0x3c) = 4;
            *(undefined8 *)((long)puVar10 + 0x24) = 0;
            *(undefined8 *)((long)puVar10 + 0x34) = 0;
            *(undefined1 *)(puVar10 + 8) = 0;
            *(byte *)((long)puVar10 + 0x44) = *(byte *)((long)puVar10 + 0x44) & 0xf8;
            uVar13 = 0;
            if (lVar20 != 0) {
              *(undefined8 **)(lVar20 + 0x80) = puVar10;
              uVar13 = *(undefined4 *)(*(long *)(puVar10[3] + 0x78) + 0x10);
            }
            *(undefined4 *)(puVar10 + 4) = uVar13;
            *puVar10 = 0;
            plVar17 = param_1 + 0x10;
            if (*plVar17 != 0) {
              plVar17 = (long *)param_1[0xf];
            }
            *plVar17 = (long)puVar10;
            param_1[0xf] = (long)puVar10;
          }
          if (bVar5) goto joined_r0x02f54c18;
          iVar15 = (int)plVar11[9] + -1;
          *(int *)(plVar11 + 9) = iVar15;
          if (iVar15 == 0) {
            if (plVar11[2] == 0) {
              FUN_02f37eb4(plVar11);
            }
            else {
              FUN_02f3b8c0(plVar11[2],plVar11);
              plVar11[2] = 0;
            }
            (**(code **)(*plVar11 + 0x50))(plVar11);
            (*DAT_0442d150)(0,plVar11);
            bVar5 = true;
          }
          else {
            bVar5 = true;
          }
          goto joined_r0x02f54b10;
        }
      }
    }
    nn::os::UnlockMutex(pMVar6);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  puVar10 = (undefined8 *)(*DAT_0442d138)(0,0x48);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar10[1] = lVar18 + lVar20;
    *(undefined4 *)((long)puVar10 + 0x3c) = 4;
    *(undefined4 *)(puVar10 + 5) = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined1 *)(puVar10 + 8) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    *(byte *)((long)puVar10 + 0x44) = *(byte *)((long)puVar10 + 0x44) & 0xf8;
    plVar17 = param_1 + 0x10;
    if (*plVar17 != 0) {
      plVar17 = (long *)param_1[0xf];
    }
    iVar9 = 0;
    *plVar17 = (long)puVar10;
    param_1[0xf] = (long)puVar10;
joined_r0x02f54c18:
    bVar5 = false;
    plVar11 = (long *)0x0;
joined_r0x02f54b10:
    if (puVar10 != (undefined8 *)0x0) {
      if (bVar5) {
        if (*(int *)(param_2 + 0x34) < 1) {
          iVar4 = *(int *)(*(long *)(plVar11[0xf] + 0x100) + 4);
          if ((*(byte *)(param_2 + 0x48) & 0x40) == 0) {
            iVar4 = 0;
          }
          iVar4 = iVar9 - iVar4;
          lVar20 = puVar10[3];
        }
        else {
          iVar15 = *(int *)(param_2 + 0x3c) + iVar9;
          iVar4 = iVar15;
          if ((*(byte *)(param_2 + 0x48) & 0x40) == 0) {
            iVar4 = 0;
          }
          if (-1 < iVar15) {
            iVar4 = iVar15;
          }
          lVar20 = puVar10[3];
        }
        if (lVar20 == 0) {
          iVar15 = 0;
        }
        else {
          *(int *)(lVar20 + 0x90) = iVar4;
          iVar15 = *(int *)((*(long **)(lVar20 + 0x78))[0x20] + 4);
          uVar7 = (**(code **)(**(long **)(lVar20 + 0x78) + 600))();
          if (uVar7 == 0) {
            uVar8 = 0;
          }
          else {
            iVar15 = iVar15 + iVar4;
            if (*(int *)(*(long *)(lVar20 + 0x78) + 0xd8) == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = **(undefined8 **)(*(long *)(lVar20 + 0x78) + 0xd0);
            }
            uVar8 = FUN_02f4aab0(uVar12,iVar15);
            uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
            if (uVar7 != 1) {
              uVar14 = 1;
              uVar19 = uVar8;
              do {
                if (uVar14 < *(uint *)(*(long *)(lVar20 + 0x78) + 0xd8)) {
                  uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x78) + 0xd0) + uVar14 * 8);
                }
                else {
                  uVar12 = 0;
                }
                uVar8 = FUN_02f4aab0(uVar12,iVar15);
                uVar14 = uVar14 + 1;
                if ((int)uVar8 <= (int)uVar19) {
                  uVar8 = uVar19;
                }
                uVar19 = uVar8;
              } while (uVar7 != uVar14);
            }
          }
          iVar15 = (iVar9 - iVar4) + uVar8;
        }
        *(int *)((long)puVar10 + 0x24) = iVar9 - iVar15;
        *(undefined4 *)(puVar10 + 5) = 0;
        bVar2 = *(byte *)((long)puVar10 + 0x44) | 1;
        *(byte *)((long)puVar10 + 0x44) = bVar2;
        iVar9 = *(int *)(param_2 + 0x3c);
        uVar13 = *(undefined4 *)(param_2 + 0x38);
        *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)((long)puVar10 + 0x2c) = uVar13;
        *(int *)(puVar10 + 6) = iVar9 + iVar15;
        *(byte *)((long)puVar10 + 0x44) = bVar2;
        return puVar10;
      }
      return puVar10;
    }
  }
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x120))(param_1);
  return puVar10;
}


