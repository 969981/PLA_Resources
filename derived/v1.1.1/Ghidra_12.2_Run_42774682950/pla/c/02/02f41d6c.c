/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f41d6c; name: FUN_02f41d6c
 */


int FUN_02f41d6c(long *param_1,double *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong __n;
  long lVar11;
  double *__src;
  ulong uVar12;
  long *plVar13;
  double dVar14;
  double dVar15;
  undefined4 local_74;
  double *local_58;
  
  local_74 = param_3;
  local_58 = param_2;
  iVar4 = (**(code **)(*param_1 + 0x88))();
  uVar3 = DAT_0440a148;
  if (iVar4 == 7) {
    iVar4 = FUN_02f3a2d0(param_1,&local_58,&local_74,0);
    if (iVar4 == 1) {
      dVar14 = (double)NEON_ucvtf((ulong)DAT_042ab258);
      dVar14 = *local_58 * 0.001 * dVar14;
      dVar15 = 0.5;
      if (dVar14 <= 0.0) {
        dVar15 = -0.5;
      }
      *(int *)(param_1 + 0x22) = (int)(dVar15 + dVar14);
      uVar1 = *(uint *)(local_58 + 1);
      uVar12 = (ulong)uVar1;
      local_58 = (double *)((long)local_58 + 0xc);
      if (uVar1 == 0) {
        iVar4 = 1;
      }
      else {
        lVar6 = (*DAT_0442d140)(2,uVar12 * 0x18,8);
        if (lVar6 == 0) {
          iVar4 = 0x34;
        }
        else {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          if ((uVar1 != 1) && (*(undefined8 *)(lVar6 + 0x28) = 0, uVar1 != 2)) {
            lVar7 = uVar12 - 2;
            puVar9 = (undefined8 *)(lVar6 + 0x40);
            do {
              lVar7 = lVar7 + -1;
              *puVar9 = 0;
              puVar9 = puVar9 + 3;
            } while (lVar7 != 0);
          }
          plVar13 = (long *)(lVar6 + 0x10);
          uVar8 = uVar12;
          do {
            *(undefined4 *)(plVar13 + -2) = *(undefined4 *)local_58;
            plVar13[-1] = *(long *)((long)local_58 + 4);
            __src = local_58 + 2;
            uVar2 = *(uint *)((long)local_58 + 0xc);
            __n = (ulong)uVar2;
            local_58 = __src;
            if (uVar2 != 0) {
              local_58 = (double *)((long)__src + __n);
              __dest = (void *)(*DAT_0442d138)(2,uVar2 + 1);
              *plVar13 = (long)__dest;
              if (__dest == (void *)0x0) goto LAB_02f41fe8;
              memcpy(__dest,__src,__n);
              *(undefined1 *)(*plVar13 + __n) = 0;
            }
            uVar8 = uVar8 - 1;
            plVar13 = plVar13 + 3;
          } while (uVar8 != 0);
          lVar7 = param_1[0x20];
          if (lVar7 != 0) {
            if (*(uint *)(param_1 + 0x21) != 0) {
              lVar11 = (ulong)*(uint *)(param_1 + 0x21) << 4;
              plVar13 = (long *)(lVar7 + 8);
              lVar7 = *plVar13;
              while( true ) {
                if (lVar7 != 0) {
                  (*DAT_0442d150)(2);
                }
                lVar11 = lVar11 + -0x10;
                plVar13 = plVar13 + 2;
                if (lVar11 == 0) break;
                lVar7 = *plVar13;
              }
              lVar7 = param_1[0x20];
            }
            *(undefined4 *)(param_1 + 0x21) = 0;
            (*DAT_0442d150)(0,lVar7);
            param_1[0x20] = 0;
            *(undefined4 *)((long)param_1 + 0x10c) = 0;
          }
          lVar7 = (*DAT_0442d138)(0,uVar12 << 4);
          param_1[0x20] = lVar7;
          if (lVar7 == 0) {
LAB_02f41fe8:
            plVar13 = (long *)(lVar6 + 0x10);
            iVar4 = 2;
            lVar7 = *plVar13;
            while( true ) {
              if (lVar7 != 0) {
                (*DAT_0442d150)(2);
              }
              uVar12 = uVar12 - 1;
              plVar13 = plVar13 + 3;
              if (uVar12 == 0) break;
              lVar7 = *plVar13;
            }
          }
          else {
            *(uint *)((long)param_1 + 0x10c) = uVar1;
            puVar9 = (undefined8 *)(lVar6 + 0x10);
            uVar8 = uVar12;
            while( true ) {
              uVar8 = uVar8 - 1;
              uVar1 = *(uint *)(param_1 + 0x21);
              if (uVar1 < (uint)uVar12) {
                *(uint *)(param_1 + 0x21) = uVar1 + 1;
                puVar10 = (undefined8 *)(param_1[0x20] + (ulong)uVar1 * 0x10);
                if (puVar10 != (undefined8 *)0x0) {
                  *puVar10 = 0;
                  puVar10[1] = 0;
                }
              }
              else {
                puVar10 = (undefined8 *)0x0;
              }
              *(undefined4 *)puVar10 = *(undefined4 *)(puVar9 + -2);
              dVar14 = (double)NEON_ucvtf((ulong)DAT_042ab258);
              dVar14 = (double)puVar9[-1] * 0.001 * dVar14;
              dVar15 = 0.5;
              if (dVar14 <= 0.0) {
                dVar15 = -0.5;
              }
              *(int *)((long)puVar10 + 4) = (int)(dVar15 + dVar14);
              puVar10[1] = *puVar9;
              if (uVar8 == 0) break;
              uVar12 = (ulong)*(uint *)((long)param_1 + 0x10c);
              puVar9 = puVar9 + 3;
            }
            iVar4 = 1;
          }
          (*DAT_0442d158)(2,lVar6);
        }
      }
    }
  }
  else {
    lVar6 = param_1[2];
    uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_02e96d3c(uVar3,(int)lVar6,7,uVar5);
    iVar4 = 0x5b;
  }
  return iVar4;
}


