/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004daec0; name: FUN_004daec0
 */


undefined4 FUN_004daec0(uint *param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  bool bVar9;
  int *piVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  uint *puVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  undefined8 local_58;
  
  piVar10 = *(int **)(param_1 + 2);
  uVar18 = *(uint *)(param_2 + 4);
  iVar6 = *piVar10;
  param_1[0x17b] = uVar18;
  if (iVar6 == 0x10000) {
LAB_004daf40:
    puVar16 = &DAT_04181630;
    lVar11 = *(long *)(param_2 + 0x288);
    if (*(int *)(lVar11 + 0x2b8) == 0) goto LAB_004daf18;
LAB_004daf54:
    if ((*(byte *)(*(long *)(piVar10 + 0x30) + 0x60) >> 3 & 1) == 0) {
      local_58 = 0;
      lVar13 = *(long *)(lVar11 + 0x2b0);
      *(undefined4 *)(lVar11 + 700) = 1;
      if (lVar13 != 0) {
        pbVar14 = *(byte **)(lVar11 + 0x2a8);
        uVar15 = lVar13 - 1;
        pbVar17 = pbVar14 + 1;
        bVar5 = *pbVar14;
        if (uVar15 == bVar5) {
          *(undefined8 *)(lVar11 + 0x2b0) = 0;
          *(byte **)(lVar11 + 0x2a8) = pbVar14 + lVar13;
          if ((int)uVar18 < 0x301) {
            return 0x124;
          }
          if (1 < bVar5) {
            uVar18 = 0;
LAB_004db23c:
            pbVar14 = pbVar17;
            uVar19 = 0xff00;
            if (uVar18 != 0x100) {
              uVar19 = uVar18;
            }
            do {
              pbVar17 = pbVar14 + 2;
              uVar15 = uVar15 - 2;
              uVar3 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
              if (uVar3 != uVar18) {
                if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
                  if (uVar18 <= uVar3) goto LAB_004db298;
                }
                else {
                  uVar4 = 0xff00;
                  if (uVar3 != 0x100) {
                    uVar4 = uVar3;
                  }
                  if (uVar4 <= uVar19) goto LAB_004db298;
                }
              }
              pbVar14 = pbVar17;
              if (uVar15 < 2) goto joined_r0x004db2b8;
            } while( true );
          }
          uVar18 = 0;
joined_r0x004db2b8:
          if (uVar15 == 0) {
            if (uVar18 == 0) {
              return 0x102;
            }
            if (param_1[0x136] != 0) {
              uVar7 = 0;
              if (uVar18 != 0x304) {
                uVar7 = 0x102;
              }
              return uVar7;
            }
            if ((uVar18 == 0x303) && (iVar6 = FUN_004daa10(param_1,0x304,0), iVar6 != 0)) {
              uVar7 = 1;
            }
            else if ((uVar18 < 0x303) &&
                    (((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0 &&
                     (iVar6 = FUN_004daa10(param_1,0x303,0), iVar6 != 0)))) {
              uVar7 = 2;
            }
            else {
              uVar7 = 0;
            }
            *param_3 = uVar7;
            *param_1 = uVar18;
            *(undefined8 *)(param_1 + 2) = local_58;
            return 0;
          }
        }
      }
      return 0x9f;
    }
  }
  else {
    if (iVar6 != 0x1ffff) {
      if ((((*(uint *)(*(long *)(piVar10 + 0x30) + 0x60) >> 3 & 1) != 0) || (iVar6 < 0x304)) ||
         (iVar6 == 0x10000)) {
        uVar19 = *param_1;
        if (uVar18 != uVar19) {
          if ((*(uint *)(*(long *)(piVar10 + 0x30) + 0x60) >> 3 & 1) == 0) {
            if ((int)uVar18 < (int)uVar19) {
              return 0x10a;
            }
          }
          else {
            uVar3 = 0xff00;
            if (uVar18 != 0x100) {
              uVar3 = uVar18;
            }
            uVar18 = 0xff00;
            if (uVar19 != 0x100) {
              uVar18 = uVar19;
            }
            if ((int)uVar18 < (int)uVar3) {
              return 0x10a;
            }
          }
        }
        *param_3 = 0;
        return 0;
      }
      goto LAB_004daf40;
    }
    puVar16 = &DAT_041816c0;
    lVar11 = *(long *)(param_2 + 0x288);
    if (*(int *)(lVar11 + 0x2b8) != 0) goto LAB_004daf54;
LAB_004daf18:
    if (param_1[0x136] != 0) {
      return 0x102;
    }
  }
  uVar19 = 0x303;
  if (uVar18 != 0x304) {
    if ((*(byte *)(*(long *)(piVar10 + 0x30) + 0x60) >> 3 & 1) != 0) {
      if ((int)uVar18 < 0x305 && uVar18 != 0x100) {
        uVar18 = 0x303;
      }
      uVar3 = *puVar16;
      goto joined_r0x004dafcc;
    }
    if (0x302 < (int)uVar18) {
      uVar18 = 0x303;
    }
    uVar19 = uVar18;
  }
  uVar3 = *puVar16;
  uVar18 = uVar19;
joined_r0x004dafcc:
  if (uVar3 == 0) {
    return 0x18c;
  }
  bVar9 = false;
  uVar19 = 0xff00;
  if (uVar18 != 0x100) {
    uVar19 = uVar18;
  }
  pcVar12 = *(code **)(puVar16 + 4);
  do {
    if (pcVar12 == (code *)0x0) goto LAB_004daff4;
    if (uVar18 == uVar3) {
LAB_004db00c:
      puVar8 = (uint *)(*pcVar12)();
      uVar3 = *puVar8;
      uVar4 = param_1[0x175];
      if ((uVar4 != 0) && (uVar3 != uVar4)) {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          if ((int)uVar4 <= (int)uVar3) goto LAB_004db0a8;
          uVar3 = puVar16[6];
        }
        else {
          uVar2 = 0xff00;
          if (uVar3 != 0x100) {
            uVar2 = uVar3;
          }
          uVar1 = 0xff00;
          if (uVar4 != 0x100) {
            uVar1 = uVar4;
          }
          if ((int)uVar2 <= (int)uVar1) goto LAB_004db0a8;
          uVar3 = puVar16[6];
        }
        goto joined_r0x004db0a0;
      }
LAB_004db0a8:
      iVar6 = FUN_004e2fc0(param_1,9,0,uVar3,0);
      if (iVar6 == 0) {
        bVar9 = true;
        goto LAB_004daff4;
      }
      uVar4 = param_1[0x176];
      if ((uVar4 != 0) && (uVar3 != uVar4)) {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          if ((int)uVar4 <= (int)uVar3) {
            uVar3 = puVar16[6];
joined_r0x004db0a0:
            bVar9 = true;
            goto joined_r0x004db154;
          }
        }
        else {
          uVar2 = 0xff00;
          if (uVar3 != 0x100) {
            uVar2 = uVar3;
          }
          uVar3 = 0xff00;
          if (uVar4 != 0x100) {
            uVar3 = uVar4;
          }
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = puVar16[6];
            goto joined_r0x004db0a0;
          }
        }
      }
      if ((*(ulong *)(puVar8 + 2) & (ulong)param_1[0x173]) == 0) {
        if ((((byte)puVar8[1] >> 1 & 1) == 0) ||
           ((*(byte *)(*(long *)(param_1 + 0x122) + 0x1e) & 3) == 0)) {
          uVar18 = *puVar16;
          if ((uVar18 == 0x303) && (iVar6 = FUN_004daa10(param_1,0x304,0), iVar6 != 0)) {
            uVar7 = 1;
          }
          else if ((((int)uVar18 < 0x303) &&
                   ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0)) &&
                  (iVar6 = FUN_004daa10(param_1,0x303,0), iVar6 != 0)) {
            uVar7 = 2;
          }
          else {
            uVar7 = 0;
          }
          *param_3 = uVar7;
          uVar18 = *puVar16;
          *(uint **)(param_1 + 2) = puVar8;
          *param_1 = uVar18;
          return 0;
        }
        uVar3 = puVar16[6];
      }
      else {
        uVar3 = puVar16[6];
      }
      bVar9 = true;
    }
    else {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
        if ((int)uVar3 <= (int)uVar18) goto LAB_004db00c;
      }
      else {
        uVar4 = 0xff00;
        if (uVar3 != 0x100) {
          uVar4 = uVar3;
        }
        if ((int)uVar19 <= (int)uVar4) goto LAB_004db00c;
      }
LAB_004daff4:
      uVar3 = puVar16[6];
    }
joined_r0x004db154:
    if (uVar3 == 0) {
      if (bVar9) {
        return 0x102;
      }
      return 0x18c;
    }
    puVar16 = puVar16 + 6;
    pcVar12 = *(code **)(puVar16 + 4);
  } while( true );
LAB_004db298:
  iVar6 = FUN_004daa10(param_1,uVar3,&local_58);
  if (iVar6 != 0) {
    uVar18 = uVar3;
  }
  if (uVar15 < 2) goto joined_r0x004db2b8;
  goto LAB_004db23c;
}


