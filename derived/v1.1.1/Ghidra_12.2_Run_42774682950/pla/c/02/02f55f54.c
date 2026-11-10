/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f55f54; name: FUN_02f55f54
 */


/* WARNING: Removing unreachable block (ram,0x02f56498) */
/* WARNING: Removing unreachable block (ram,0x02f56164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f55f54(undefined8 param_1,long param_2,int param_3,int param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  undefined8 local_80;
  undefined1 local_78;
  
  plVar18 = (long *)(param_2 + 0x70);
  plVar15 = (long *)*plVar18;
  if ((plVar15 == (long *)0x0) || (param_4 = param_4 + param_3, param_4 < (int)plVar15[2])) {
    return;
  }
  plVar12 = (long *)(param_2 + 0x68);
  if (plVar15[1] == 0) {
    *plVar12 = 0;
    *plVar18 = 0;
  }
  else {
    *plVar18 = plVar15[1];
  }
  do {
    iVar4 = (int)plVar15[2] - param_3;
    iVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar16 = DAT_0440a120;
    if (iVar6 == 0) {
      lVar16 = plVar15[3];
      uVar7 = FUN_02f56654(param_1,param_2,plVar15);
      if ((uVar7 & 1) != 0) {
        if ((*(byte *)(param_2 + 0x5a) >> 1 & 1) == 0) {
          iVar6 = *(int *)(lVar16 + 0xc);
          iVar4 = *(int *)(lVar16 + 0x10);
          puVar8 = (undefined8 *)(*DAT_0442d138)(0,0x28);
          if (puVar8 == (undefined8 *)0x0) {
            (*(code *)*puRam0000000000000000)(0,0);
          }
          else {
            iVar4 = iVar4 + iVar6;
            *(int *)(puVar8 + 2) = iVar4;
            *puVar8 = &PTR_LAB_042af870;
            puVar8[3] = 0;
            *(undefined1 *)(puVar8 + 4) = 0;
            lVar16 = *plVar18;
            if (lVar16 == 0) {
LAB_02f56074:
              puVar8[1] = 0;
              plVar9 = plVar18;
              if (*plVar18 != 0) {
                plVar9 = (long *)(*plVar12 + 8);
              }
              *plVar9 = (long)puVar8;
              plVar9 = plVar12;
            }
            else {
              plVar9 = plVar18;
              if (iVar4 < *(int *)(lVar16 + 0x10)) {
                puVar8[1] = lVar16;
              }
              else {
                do {
                  lVar13 = lVar16;
                  plVar14 = (long *)(lVar13 + 8);
                  lVar16 = *plVar14;
                  if (lVar16 == 0) goto LAB_02f56074;
                } while (*(int *)(lVar16 + 0x10) <= iVar4);
                puVar8[1] = lVar16;
                if (lVar13 != 0) {
                  plVar9 = plVar14;
                }
              }
            }
            *plVar9 = (long)puVar8;
            plVar9 = (long *)plVar15[6];
            while (plVar9 != (long *)0x0) {
              if (plVar9[3] == 0) {
                plVar15[6] = 0;
              }
              else {
                plVar15[6] = plVar9[3];
              }
              plVar9[1] = 0;
              *(undefined1 *)(puVar8 + 4) = 1;
              if (*(long *)(param_2 + 0x78) == 0) {
                *(long **)(param_2 + 0x78) = plVar9;
                plVar9[3] = 0;
              }
              else {
                plVar9[3] = *(long *)(param_2 + 0x78);
                *(long **)(param_2 + 0x78) = plVar9;
              }
              if (*(int *)(*plVar9 + 4) == 4) {
                bRam0000000000000328 = bRam0000000000000328 | 1;
              }
              else if (*(int *)(*plVar9 + 4) == 3) {
                FUN_02f41670(0);
              }
              plVar9 = (long *)plVar15[6];
            }
          }
        }
        else {
          (*(code *)*puRam0000000000000000)(0,*(undefined4 *)(param_2 + 0x54));
          plVar9 = (long *)plVar15[6];
          if (plVar9 != (long *)0x0) {
            do {
              if (plVar9[3] == 0) {
                plVar15[6] = 0;
              }
              else {
                plVar15[6] = plVar9[3];
              }
              lVar16 = *plVar9;
              plVar9[1] = 0;
              uVar3 = *(uint *)(lVar16 + 4);
              local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar16 + 0x18));
              uVar7 = FUN_02e74568((float)(param_4 - (int)plVar9[2]),lVar16 + 8,&local_80);
              *(undefined4 *)(lVar16 + 0x18) = (undefined4)local_80;
              if (uVar3 - 3 < 2) {
                local_80 = (ulong)uVar3;
LAB_02f564f0:
                local_78 = 0x5e;
                FUN_02ecd80c(uVar7,0,&local_80);
              }
              else {
                fVar19 = (float)uVar7;
                if (uVar3 == 0) {
                  uVar7 = (ulong)(uint)(fVar19 + 1.0);
                  local_80 = 0;
                  goto LAB_02f564f0;
                }
                if (uVar3 == 1) {
                  _DAT_00000080 = (fVar19 - fRam0000000000000320) + _DAT_00000080;
                  fRam0000000000000320 = fVar19;
                }
                else if (uVar3 == 2) {
                  _DAT_00000084 = (fVar19 - fRam0000000000000324) + _DAT_00000084;
                  fRam0000000000000324 = fVar19;
                }
              }
              (*DAT_0442d150)(0,plVar9);
              plVar9 = (long *)plVar15[6];
            } while (plVar9 != (long *)0x0);
          }
        }
      }
      goto LAB_02f560a0;
    }
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)plVar15[3])((undefined8 *)plVar15[3],iVar4);
      if ((char)plVar15[4] != '\0') {
        plVar14 = (long *)(param_2 + 0x78);
        plVar9 = (long *)*plVar14;
        if (plVar9 != (long *)0x0) {
          uVar7 = plVar9[1];
          lVar16 = 0;
          if (uVar7 != 0) {
            lVar16 = uVar7 + 0x300;
          }
          if (lVar16 == plVar15[3]) {
            lVar16 = *plVar9;
            uVar3 = *(uint *)(lVar16 + 4);
            local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar16 + 0x18));
            uVar20 = FUN_02e74568((float)(param_4 - (int)plVar9[2]),lVar16 + 8,&local_80);
            *(undefined4 *)(lVar16 + 0x18) = (undefined4)local_80;
            if (uVar3 - 3 < 2) {
              local_80 = uVar7 + uVar3;
LAB_02f56250:
              local_78 = 0x5e;
              FUN_02ecd80c(uVar20,uVar7,&local_80);
            }
            else {
              fVar19 = (float)uVar20;
              if (uVar3 == 0) {
                uVar20 = (ulong)(uint)(fVar19 + 1.0);
                local_80 = uVar7;
                goto LAB_02f56250;
              }
              if (uVar3 == 1) {
                fVar21 = *(float *)(uVar7 + 800);
                *(float *)(uVar7 + 800) = fVar19;
                *(float *)(uVar7 + 0x80) = (fVar19 - fVar21) + *(float *)(uVar7 + 0x80);
              }
              else if (uVar3 == 2) {
                fVar21 = *(float *)(uVar7 + 0x324);
                *(float *)(uVar7 + 0x324) = fVar19;
                *(float *)(uVar7 + 0x84) = (fVar19 - fVar21) + *(float *)(uVar7 + 0x84);
              }
            }
            plVar17 = (long *)plVar9[3];
            plVar11 = plVar14;
            if ((long *)*plVar14 != plVar9) {
              plVar11 = (long *)&DAT_00000018;
            }
            *plVar11 = (long)plVar17;
            (*DAT_0442d150)(0,plVar9);
            plVar9 = (long *)0x0;
          }
          else {
            plVar17 = (long *)plVar9[3];
          }
          while (plVar17 != (long *)0x0) {
            while( true ) {
              plVar11 = plVar17;
              uVar7 = plVar11[1];
              lVar16 = 0;
              if (uVar7 != 0) {
                lVar16 = uVar7 + 0x300;
              }
              if (lVar16 == plVar15[3]) break;
              plVar17 = (long *)plVar11[3];
              plVar9 = plVar11;
              if ((long *)plVar11[3] == (long *)0x0) goto LAB_02f560a0;
            }
            lVar16 = *plVar11;
            uVar3 = *(uint *)(lVar16 + 4);
            local_80._4_4_ = (undefined4)(local_80 >> 0x20);
            local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar16 + 0x18));
            uVar20 = FUN_02e74568((float)(param_4 - (int)plVar11[2]),lVar16 + 8,&local_80);
            *(undefined4 *)(lVar16 + 0x18) = (undefined4)local_80;
            if (uVar3 - 3 < 2) {
              local_80 = uVar7 + uVar3;
LAB_02f56304:
              local_78 = 0x5e;
              FUN_02ecd80c(uVar20,uVar7,&local_80);
            }
            else {
              fVar19 = (float)uVar20;
              if (uVar3 == 0) {
                uVar20 = (ulong)(uint)(fVar19 + 1.0);
                local_80 = uVar7;
                goto LAB_02f56304;
              }
              if (uVar3 == 1) {
                fVar21 = *(float *)(uVar7 + 800);
                *(float *)(uVar7 + 800) = fVar19;
                *(float *)(uVar7 + 0x80) = (fVar19 - fVar21) + *(float *)(uVar7 + 0x80);
              }
              else if (uVar3 == 2) {
                fVar21 = *(float *)(uVar7 + 0x324);
                *(float *)(uVar7 + 0x324) = fVar19;
                *(float *)(uVar7 + 0x84) = (fVar19 - fVar21) + *(float *)(uVar7 + 0x84);
              }
            }
            plVar17 = (long *)plVar11[3];
            plVar10 = plVar14;
            if ((long *)*plVar14 != plVar11) {
              plVar10 = plVar9 + 3;
            }
            *plVar10 = (long)plVar17;
            (*DAT_0442d150)(0,plVar11);
          }
        }
      }
LAB_02f560a0:
      (**(code **)*plVar15)(plVar15);
      (*DAT_0442d150)(0,plVar15);
    }
    else {
      if (iVar6 != 3) goto LAB_02f560a0;
      uVar3 = *(uint *)((long)plVar15 + 0x14);
      pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
      nn::os::LockMutex(pMVar1);
      uVar2 = *(uint *)(lVar16 + 0xd0);
      if (uVar2 == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        for (plVar9 = *(long **)(*(long *)(lVar16 + 200) + (ulong)(uVar3 - uVar5 * uVar2) * 8);
            plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
          if (*(uint *)(plVar9 + 2) == uVar3) {
            *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
            break;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      if (plVar9 != (long *)0x0) {
        lVar16 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x60);
        FUN_02e81050(plVar9,*(long *)(lVar16 + 0x30),
                     *(undefined8 *)(*(long *)(lVar16 + 0x30) + 0x48),*(undefined4 *)(lVar16 + 0x2c)
                     ,0,lVar16 + 0x18,iVar4);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if (plVar15 != (long *)0x0) goto LAB_02f560a0;
    }
    plVar15 = (long *)*plVar18;
    if (plVar15 == (long *)0x0) {
      return;
    }
    if (param_4 < (int)plVar15[2]) {
      return;
    }
    if (plVar15[1] == 0) {
      *plVar12 = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
    }
    else {
      *plVar18 = plVar15[1];
    }
  } while( true );
}


