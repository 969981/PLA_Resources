/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085ff2c; name: FUN_0085ff2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085ff2c(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 local_98;
  undefined4 local_78 [4];
  ulong local_68;
  
  local_68 = 0;
  FUN_007ecf14(&local_68);
  local_78[0] = 0;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)&local_98);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar13 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0xb8);
      plVar9 = (long *)(lVar10 + uVar13 * 0x78 + 0x10);
      if (*plVar9 != -1) {
        plVar4 = (long *)FUN_007ecfa4();
        lVar5 = *plVar4;
        lVar7 = *(long *)(lVar10 + uVar13 * 0x78);
        piVar12 = (int *)(lVar10 + uVar13 * 0x78 + 0x20);
        iVar11 = *piVar12;
        if (iVar11 == 5 || iVar11 == 2) {
          lVar7 = *(long *)(param_1 + 0xb8);
          plVar4 = (long *)FUN_007ecfa4();
          lVar5 = *plVar4;
          lVar7 = *(long *)(lVar7 + uVar13 * 0x78);
        }
        if ((ulong)(lVar7 + lVar5 * 500) < local_68) {
          FUN_00861514(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar13 * 0x78);
          if ((int)local_98 == 0) goto switchD_00860050_caseD_2;
        }
        iVar11 = *piVar12;
        if (iVar11 - 1U < 0xc) {
          lVar5 = *plVar9;
          switch(iVar11) {
          case 1:
            FUN_0086126c(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar13 * 0x78,0);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007ecf14(&local_98);
              *(long *)(*(long *)(param_1 + 0xb8) + uVar13 * 0x78) = local_98;
              plVar9 = (long *)FUN_007ecfa4();
              lVar10 = *(long *)(param_1 + 0xb8);
              *(ulong *)(lVar10 + uVar13 * 0x78 + 8) = local_68 + *plVar9 * 10000;
              uVar8 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar10 = 0;
                uVar2 = _DAT_00000020;
              }
              else {
                do {
                  if (*(long *)(lVar10 + 0x10) == lVar5) goto LAB_008600d4;
                  lVar10 = lVar10 + 0x78;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                lVar10 = 0;
LAB_008600d4:
                uVar2 = *(uint *)(lVar10 + 0x20);
              }
              if (((int)uVar2 < 2) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar2 == 1)) {
                *(undefined4 *)(lVar10 + 0x20) = 2;
                goto LAB_0085ffa4;
              }
            }
            break;
          case 4:
            lVar10 = lVar10 + uVar13 * 0x78;
            lVar7 = lVar10 + 0x48;
            if (*(char *)(lVar10 + 0x68) != '\0') {
              lVar7 = lVar10 + 0x28;
            }
            FUN_007e3428(&local_98,lVar7);
            uVar8 = FUN_007e4430(&local_98);
            if ((((uVar8 & 1) == 0) || (uVar8 = FUN_007e4430(param_1 + 0x60), (uVar8 & 1) == 0)) ||
               (uVar8 = FUN_007e4430(param_1 + 0x80), (uVar8 & 1) == 0)) {
LAB_008604ac:
              uVar8 = 1;
            }
            else if (*(char *)(lVar10 + 0x68) == '\0') {
              if (*(char *)(param_1 + 0xa9) == '\0') goto LAB_008604ac;
              uVar8 = FUN_007e362c(param_1 + 0x60);
              uVar8 = uVar8 & 0xffffffff;
            }
            else {
              uVar8 = 0;
            }
            FUN_007e34a4(&local_98);
            lVar10 = *(long *)(param_1 + 0xb8) + uVar13 * 0x78;
            if ((uVar8 & 1) == 0) {
              lVar7 = FUN_0085a3c0();
              if ((lVar7 == 0) || (iVar11 = *(int *)(lVar7 + 0x10), iVar11 < 0)) {
                iVar11 = 3;
              }
              FUN_00861408(&local_98,param_1,lVar10,2,iVar11);
              local_98 = 0;
              FUN_007ecf14(&local_98);
              plVar9 = (long *)FUN_007ecfa4();
              lVar10 = local_98 + *plVar9 * -500;
              piVar12 = (int *)FUN_0085a3c0();
              if ((piVar12 == (int *)0x0) || (iVar11 = *piVar12, iVar11 < 0)) {
                iVar11 = 100;
              }
              plVar9 = (long *)FUN_007ecfa4();
              *(long *)(*(long *)(param_1 + 0xb8) + uVar13 * 0x78) = lVar10 + *plVar9 * (long)iVar11
              ;
              plVar9 = (long *)FUN_007ecfa4();
              lVar10 = *(long *)(param_1 + 0xb8);
              *(ulong *)(lVar10 + uVar13 * 0x78 + 8) = local_68 + *plVar9 * 10000;
              uVar8 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar10 = 0;
                uVar2 = _DAT_00000020;
              }
              else {
                do {
                  if (*(long *)(lVar10 + 0x10) == lVar5) goto LAB_00860650;
                  lVar10 = lVar10 + 0x78;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                lVar10 = 0;
LAB_00860650:
                uVar2 = *(uint *)(lVar10 + 0x20);
              }
              if (((int)uVar2 < 5) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar2 == 4)) {
                *(undefined4 *)(lVar10 + 0x20) = 5;
                goto LAB_0085ffa4;
              }
            }
            else {
              FUN_0086126c(&local_98,param_1,lVar10,6);
              local_98 = 0;
              FUN_007ecf14(&local_98);
              lVar7 = *(long *)(param_1 + 0xb8);
              *(long *)(lVar7 + uVar13 * 0x78) = local_98;
              uVar2 = *(uint *)(param_1 + 0xc0);
              uVar6 = (ulong)uVar2;
              lVar10 = lVar7;
              uVar8 = uVar6;
              if (uVar2 == 0) {
                lVar10 = 0;
                uVar3 = _DAT_00000020;
              }
              else {
                do {
                  if (*(long *)(lVar10 + 0x10) == lVar5) goto LAB_00860520;
                  lVar10 = lVar10 + 0x78;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                lVar10 = 0;
LAB_00860520:
                uVar3 = *(uint *)(lVar10 + 0x20);
              }
              if ((((int)uVar3 < 0xe) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar3 < 0xd)) &&
                 ((1 << (ulong)(uVar3 & 0x1f) & 0x157dU) != 0)) {
                *(undefined4 *)(lVar10 + 0x20) = 0xe;
                if (uVar2 == 0) goto LAB_0085ffa0;
                piVar12 = (int *)(lVar7 + 0x20);
                if (*(long *)(lVar7 + 0x10) != -1) goto LAB_0086057c;
                do {
                  do {
                    uVar6 = uVar6 - 1;
                    piVar1 = piVar12 + 0x1e;
                    if (uVar6 == 0) goto LAB_0085ffa0;
                    plVar9 = (long *)(piVar12 + 0x1a);
                    piVar12 = piVar1;
                  } while (*plVar9 == -1);
LAB_0086057c:
                } while (*piVar12 - 0xdU < 2);
LAB_0085ffa4:
                *(undefined1 *)(param_1 + 0xa8) = 1;
              }
            }
            break;
          case 7:
            FUN_00861408(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar13 * 0x78,3,2);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007ecf14(&local_98);
              *(long *)(*(long *)(param_1 + 0xb8) + uVar13 * 0x78) = local_98;
              plVar9 = (long *)FUN_007ecfa4();
              lVar10 = *(long *)(param_1 + 0xb8);
              *(ulong *)(lVar10 + uVar13 * 0x78 + 8) = local_68 + *plVar9 * 5000;
              uVar8 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar10 = 0;
                uVar2 = _DAT_00000020;
              }
              else {
                do {
                  if (*(long *)(lVar10 + 0x10) == lVar5) goto LAB_008601cc;
                  lVar10 = lVar10 + 0x78;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                lVar10 = 0;
LAB_008601cc:
                uVar2 = *(uint *)(lVar10 + 0x20);
              }
              if (((int)uVar2 < 8) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar2 == 7)) {
                *(undefined4 *)(lVar10 + 0x20) = 8;
                goto LAB_0085ffa4;
              }
            }
            break;
          case 9:
            FUN_00861408(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar13 * 0x78,4,2);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007ecf14(&local_98);
              *(long *)(*(long *)(param_1 + 0xb8) + uVar13 * 0x78) = local_98;
              plVar9 = (long *)FUN_007ecfa4();
              lVar10 = *(long *)(param_1 + 0xb8);
              *(ulong *)(lVar10 + uVar13 * 0x78 + 8) = local_68 + *plVar9 * 5000;
              uVar8 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar10 = 0;
                uVar2 = _DAT_00000020;
              }
              else {
                do {
                  if (*(long *)(lVar10 + 0x10) == lVar5) goto LAB_00860270;
                  lVar10 = lVar10 + 0x78;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                lVar10 = 0;
LAB_00860270:
                uVar2 = *(uint *)(lVar10 + 0x20);
              }
              if (((int)uVar2 < 10) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar2 == 9)) {
                *(undefined4 *)(lVar10 + 0x20) = 10;
                goto LAB_0085ffa4;
              }
            }
            break;
          case 0xb:
            FUN_00861408(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar13 * 0x78,5,2);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007ecf14(&local_98);
              lVar7 = *(long *)(param_1 + 0xb8);
              *(long *)(lVar7 + uVar13 * 0x78) = local_98;
              uVar2 = *(uint *)(param_1 + 0xc0);
              uVar6 = (ulong)uVar2;
              lVar10 = lVar7;
              uVar8 = uVar6;
              if (uVar2 == 0) {
                lVar10 = 0;
                uVar3 = _DAT_00000020;
              }
              else {
                do {
                  if (*(long *)(lVar10 + 0x10) == lVar5) goto LAB_008602fc;
                  lVar10 = lVar10 + 0x78;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                lVar10 = 0;
LAB_008602fc:
                uVar3 = *(uint *)(lVar10 + 0x20);
              }
              if (((int)uVar3 < 0xd) &&
                 (*(undefined4 *)(lVar10 + 0x74) = 0, (uVar3 & 0xfffffffe) == 10)) {
                *(undefined4 *)(lVar10 + 0x20) = 0xd;
                if (uVar2 == 0) goto LAB_0085ffa0;
                piVar12 = (int *)(lVar7 + 0x20);
                if (*(long *)(lVar7 + 0x10) != -1) goto LAB_0086034c;
                do {
                  do {
                    uVar6 = uVar6 - 1;
                    piVar1 = piVar12 + 0x1e;
                    if (uVar6 == 0) goto LAB_0085ffa0;
                    plVar9 = (long *)(piVar12 + 0x1a);
                    piVar12 = piVar1;
                  } while (*plVar9 == -1);
LAB_0086034c:
                } while (*piVar12 - 0xdU < 2);
                goto LAB_0085ffa4;
              }
            }
            break;
          case 0xc:
            FUN_0086126c(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar13 * 0x78,6);
            local_98 = 0;
            FUN_007ecf14(&local_98);
            lVar7 = *(long *)(param_1 + 0xb8);
            *(long *)(lVar7 + uVar13 * 0x78) = local_98;
            uVar2 = *(uint *)(param_1 + 0xc0);
            uVar6 = (ulong)uVar2;
            lVar10 = lVar7;
            uVar8 = uVar6;
            if (uVar2 == 0) {
              lVar10 = 0;
              uVar3 = _DAT_00000020;
            }
            else {
              do {
                if (*(long *)(lVar10 + 0x10) == lVar5) goto LAB_008603c0;
                lVar10 = lVar10 + 0x78;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
              lVar10 = 0;
LAB_008603c0:
              uVar3 = *(uint *)(lVar10 + 0x20);
            }
            if ((((int)uVar3 < 0xe) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar3 < 0xd)) &&
               ((1 << (ulong)(uVar3 & 0x1f) & 0x157dU) != 0)) {
              *(undefined4 *)(lVar10 + 0x20) = 0xe;
              if (uVar2 != 0) {
                piVar12 = (int *)(lVar7 + 0x20);
                if (*(long *)(lVar7 + 0x10) != -1) goto LAB_0086041c;
                do {
                  do {
                    uVar6 = uVar6 - 1;
                    piVar1 = piVar12 + 0x1e;
                    if (uVar6 == 0) goto LAB_0085ffa0;
                    plVar9 = (long *)(piVar12 + 0x1a);
                    piVar12 = piVar1;
                  } while (*plVar9 == -1);
LAB_0086041c:
                } while (*piVar12 - 0xdU < 2);
                goto LAB_0085ffa4;
              }
LAB_0085ffa0:
              *(undefined1 *)(param_1 + 0x5a) = 0;
              goto LAB_0085ffa4;
            }
          }
        }
      }
switchD_00860050_caseD_2:
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0xc0));
  }
  return;
}


