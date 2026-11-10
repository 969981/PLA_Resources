/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427d30; name: FUN_00427d30
 */


/* WARNING: Removing unreachable block (ram,0x00427dc0) */

void FUN_00427d30(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  size_t __nbytes;
  void *__buf;
  ssize_t sVar8;
  int *piVar9;
  ulong uVar10;
  stat local_160;
  uint local_d0;
  long local_c0;
  
  lVar5 = FUN_00427540(param_1,1);
  if (lVar5 != 0) {
    uVar6 = FUN_004275e0(param_1,lVar5);
    FUN_00428190(uVar6,lVar5);
    FUN_00427660(param_1,lVar5,lVar5 << 3);
  }
  lVar5 = FUN_004276d0(param_1);
  if (lVar5 == 0) {
    lVar5 = FUN_00427540(param_1,1);
    puVar2 = PTR_getentropy_04374228;
    if (lVar5 != 0) {
      iVar4 = 3;
      do {
        uVar6 = FUN_004275e0(param_1,lVar5);
        if (puVar2 == (undefined *)0x0) {
          piVar7 = __errno_location();
          *piVar7 = 0x26;
        }
        else {
          iVar3 = getentropy(uVar6,lVar5);
          if ((0 < lVar5) && (iVar3 == 0)) {
            FUN_00427660(param_1,lVar5,lVar5 << 3);
            break;
          }
        }
        piVar7 = __errno_location();
        if ((*piVar7 != 4) || (iVar4 = iVar4 + -1, iVar4 < 1)) break;
      } while( true );
    }
    lVar5 = FUN_004276d0(param_1);
    if (lVar5 == 0) {
      __nbytes = FUN_00427540(param_1,1);
      if (__nbytes != 0) {
        uVar10 = 0;
        do {
          piVar7 = &DAT_0439e7d0 + uVar10 * 10;
          if (((((*piVar7 == -1) ||
                (iVar4 = fstat(*piVar7,(stat *)(local_160.__unused + 1)), iVar4 == -1)) ||
               ((&DAT_0439e7d8)[uVar10 * 5] != local_160.__unused[1])) ||
              (((&DAT_0439e7e0)[uVar10 * 5] != local_160.__unused[2] ||
               (0x1ff < (local_d0 ^ (&DAT_0439e7e8)[uVar10 * 10]))))) ||
             ((&DAT_0439e7f0)[uVar10 * 5] != local_c0)) {
            iVar4 = open((&PTR_s__dev_urandom_04163ff8)[uVar10],0);
            *piVar7 = iVar4;
            if (iVar4 != -1) {
              iVar4 = fstat(iVar4,&local_160);
              if (iVar4 != -1) {
                (&DAT_0439e7e8)[uVar10 * 10] = (undefined4)local_160.st_nlink;
                (&DAT_0439e7f0)[uVar10 * 5] = local_160._32_8_;
                (&DAT_0439e7e0)[uVar10 * 5] = local_160.st_ino;
                (&DAT_0439e7d8)[uVar10 * 5] = local_160.st_dev;
                goto LAB_00427f10;
              }
              close(*piVar7);
              *piVar7 = -1;
            }
          }
          else {
LAB_00427f10:
            iVar4 = *piVar7;
            if (iVar4 != -1) {
              iVar3 = 2;
              do {
                __buf = (void *)FUN_004275e0(param_1,__nbytes);
                sVar8 = read(iVar4,__buf,__nbytes);
                if (sVar8 < 1) {
                  iVar1 = iVar3;
                  if ((sVar8 < 0) && (piVar9 = __errno_location(), *piVar9 != 4)) goto LAB_00427f98;
                }
                else {
                  FUN_00427660(param_1,sVar8,sVar8 << 3);
                  __nbytes = __nbytes - sVar8;
                  iVar1 = 3;
                }
              } while ((__nbytes != 0) && (iVar3 = iVar1 + -1, 0 < iVar1));
              if ((sVar8 < 0) || (DAT_04163ff0 == 0)) {
LAB_00427f98:
                if ((((*piVar7 != -1) &&
                     (iVar4 = fstat(*piVar7,(stat *)(local_160.__unused + 1)), iVar4 != -1)) &&
                    ((&DAT_0439e7d8)[uVar10 * 5] == local_160.__unused[1])) &&
                   ((((&DAT_0439e7e0)[uVar10 * 5] == local_160.__unused[2] &&
                     ((local_d0 ^ (&DAT_0439e7e8)[uVar10 * 10]) < 0x200)) &&
                    ((&DAT_0439e7f0)[uVar10 * 5] == local_c0)))) {
                  close(*piVar7);
                }
                *piVar7 = -1;
              }
              __nbytes = FUN_00427540(param_1,1);
            }
          }
        } while ((__nbytes != 0) && (uVar10 = uVar10 + 1, uVar10 < 4));
      }
      lVar5 = FUN_004276d0(param_1);
      if (lVar5 == 0) {
        FUN_004276d0(param_1);
        return;
      }
    }
  }
  return;
}


