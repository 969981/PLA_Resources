/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161c268; name: FUN_0161c268
 */


void FUN_0161c268(long param_1)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  ulong uVar14;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  lVar5 = FUN_0286bb0c();
  *(undefined1 *)(lVar5 + 0x26) = 1;
  piVar6 = *(int **)(param_1 + 0xa0);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0xb) ||
     (uVar10 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5], uVar10 == 0)) {
    puVar11 = (uint *)0x0;
    uVar2 = uRam0000000000000000;
  }
  else {
    puVar11 = (uint *)((long)piVar6 + uVar10);
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    uVar2 = *puVar11;
  }
  if (uVar2 != 0) {
    piVar1 = (int *)((long)(puVar11 + 1) + (ulong)puVar11[1]);
    puVar13 = (ushort *)((long)piVar1 - (long)*piVar1);
    uVar3 = *puVar13;
    piVar6 = (int *)(param_1 + 0xd8);
    if (uVar3 < 7) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if ((ulong)puVar13[3] != 0) {
        puVar12 = (uint *)((long)piVar1 + (ulong)puVar13[3]);
        lVar7 = (long)puVar12 + (ulong)*puVar12;
      }
    }
    iVar4 = atoi((char *)(lVar7 + 4));
    if ((4 < uVar3) && ((ulong)puVar13[2] != 0)) {
      lVar7 = *(long *)((long)piVar1 + (ulong)puVar13[2]);
      if (lVar7 < -0x36027dfb6975bef8) {
        if (lVar7 == -0x4aed51323ed38e9d) {
          *(undefined4 *)(lVar5 + 0x30) = 1;
          *piVar6 = iVar4;
          *(int **)(lVar5 + 0x28) = piVar6;
        }
        else if (lVar7 == -0x5505376a78379747) {
          *(char *)(lVar5 + 0x4c) = (char)iVar4;
        }
        else if (lVar7 == -0x46d1a670bc32d187) {
          *(bool *)(lVar5 + 0x44) = iVar4 == 1;
        }
      }
      else if (lVar7 < 0x68a3732777251727) {
        if (lVar7 == 0x16009bd33e533606) {
          *(int *)(lVar5 + 0x48) = iVar4;
        }
        else if (lVar7 == 0x2731e1ecceab56b4) {
          *(int *)(lVar5 + 0x18) = iVar4;
        }
        else if (lVar7 == -0x36027dfb6975bef8) {
          *(int *)(lVar5 + 0x1c) = iVar4;
        }
      }
      else if (lVar7 == 0x68a3732777251727) {
        *(int *)(lVar5 + 0x20) = iVar4;
      }
      else if (lVar7 == 0x707151e61ea4b74d) {
        *(char *)(lVar5 + 0x14) = (char)iVar4;
      }
    }
    if (1 < *puVar11) {
      puVar12 = puVar11 + 2;
      uVar10 = 1;
      do {
        uVar14 = (ulong)*puVar12;
        lVar7 = uVar14 - (long)*(int *)((long)puVar12 + uVar14);
        uVar3 = *(ushort *)((long)puVar12 + lVar7);
        if (uVar3 < 7) {
          lVar9 = 0;
        }
        else {
          uVar8 = (ulong)*(ushort *)((long)puVar12 + lVar7 + 6);
          lVar9 = 0;
          if (uVar8 != 0) {
            lVar9 = uVar14 + uVar8;
            lVar9 = (long)puVar12 + lVar9 + (ulong)*(uint *)((long)puVar12 + lVar9);
          }
        }
        iVar4 = atoi((char *)(lVar9 + 4));
        if ((4 < uVar3) && (uVar8 = (ulong)*(ushort *)((long)puVar12 + lVar7 + 4), uVar8 != 0)) {
          lVar7 = *(long *)((long)puVar12 + uVar14 + uVar8);
          if (lVar7 < -0x36027dfb6975bef8) {
            if (lVar7 == -0x4aed51323ed38e9d) {
              *(undefined4 *)(lVar5 + 0x30) = 1;
              *piVar6 = iVar4;
              *(int **)(lVar5 + 0x28) = piVar6;
            }
            else if (lVar7 == -0x5505376a78379747) {
              *(char *)(lVar5 + 0x4c) = (char)iVar4;
            }
            else if (lVar7 == -0x46d1a670bc32d187) {
              *(bool *)(lVar5 + 0x44) = iVar4 == 1;
            }
          }
          else if (lVar7 < 0x68a3732777251727) {
            if (lVar7 == 0x16009bd33e533606) {
              *(int *)(lVar5 + 0x48) = iVar4;
            }
            else if (lVar7 == 0x2731e1ecceab56b4) {
              *(int *)(lVar5 + 0x18) = iVar4;
            }
            else if (lVar7 == -0x36027dfb6975bef8) {
              *(int *)(lVar5 + 0x1c) = iVar4;
            }
          }
          else if (lVar7 == 0x68a3732777251727) {
            *(int *)(lVar5 + 0x20) = iVar4;
          }
          else if (lVar7 == 0x707151e61ea4b74d) {
            *(char *)(lVar5 + 0x14) = (char)iVar4;
          }
        }
        uVar10 = uVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar10 < *puVar11);
    }
  }
  return;
}


