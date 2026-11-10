/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027b8d0; name: FUN_0027b8d0
 */


/* WARNING: Removing unreachable block (ram,0x0027b9cc) */
/* WARNING: Removing unreachable block (ram,0x0027ba58) */

long FUN_0027b8d0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  uint uVar13;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (0 < iVar2) {
    lVar11 = *(long *)(param_1 + 0x30);
    iVar6 = 0;
    iVar7 = *(int *)(param_1 + 0x28);
    do {
      pcVar12 = (char *)(lVar11 + (long)iVar7 * 0x90 + 0x84);
      if (*pcVar12 == '\0') {
        lVar10 = lVar11 + (long)iVar7 * 0x90;
        uVar13 = (uint)*(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x14);
        lVar4 = (**(code **)(*(long *)(param_2 + 0x828) + 0x10))
                          (param_2 + 0x828,(ulong)uVar13 << 6,0x80);
        plVar5 = (long *)(lVar10 + 0x50);
        *plVar5 = lVar4;
        if (lVar4 == 0) {
          FUN_00271760(param_2,0x4000);
          pcVar12 = "Buffer for stripe history is not enough\n";
          goto LAB_0027b94c;
        }
        uVar3 = uVar13 - 1;
        if (uVar3 == 0) goto LAB_0027baa8;
        if (uVar3 == 1) {
          lVar8 = 0;
          goto LAB_0027ba28;
        }
        lVar9 = 0;
        lVar8 = 0;
        do {
          *(long *)(lVar4 + lVar9 + 0x30) = lVar4 + lVar9 + 0x40;
          lVar4 = *plVar5 + lVar9;
          lVar9 = lVar9 + 0x80;
          *(long *)(lVar4 + 0x70) = lVar4 + 0x80;
          lVar4 = *plVar5;
          lVar8 = lVar8 + 2;
        } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar8);
        if ((uVar3 & 1) != 0) {
LAB_0027ba28:
          lVar4 = lVar4 + lVar8 * 0x40;
          *(long *)(lVar4 + 0x30) = lVar4 + 0x40;
          lVar4 = *plVar5;
        }
        if (1 < uVar13) {
          if (uVar13 == 2) {
            lVar9 = 1;
          }
          else {
            lVar8 = 0;
            lVar9 = 1;
            do {
              *(long *)(lVar4 + lVar8 + 0x78) = lVar4 + lVar8;
              lVar4 = *plVar5 + lVar8;
              lVar8 = lVar8 + 0x80;
              *(long *)(lVar4 + 0xb8) = lVar4 + 0x40;
              lVar4 = *plVar5;
              lVar9 = lVar9 + 2;
            } while ((ulong)uVar13 - ((ulong)(uVar13 - 1) & 1) != lVar9);
            if ((uVar13 - 1 & 1) == 0) goto LAB_0027baa8;
          }
          lVar4 = lVar4 + lVar9 * 0x40;
          *(long *)(lVar4 + 0x38) = lVar4 + -0x40;
          lVar4 = *plVar5;
        }
LAB_0027baa8:
        *(long *)(lVar4 + (ulong)uVar3 * 0x40 + 0x30) = lVar4;
        *(ulong *)(*plVar5 + 0x38) = *plVar5 + (ulong)uVar3 * 0x40;
        lVar11 = lVar11 + (long)iVar7 * 0x90;
        lVar4 = *plVar5;
        *(long *)(lVar11 + 0x58) = lVar4;
        *(long *)(lVar11 + 0x60) = lVar4;
        *pcVar12 = '\x01';
        *(undefined4 *)(lVar11 + 0x70) = 0;
        *(undefined8 *)(lVar11 + 0x78) = 0;
        *(undefined8 *)(lVar11 + 0x68) = 0;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        return lVar10;
      }
      iVar6 = iVar6 + 1;
      iVar1 = 0;
      if (iVar7 + 1 < iVar2) {
        iVar1 = iVar7 + 1;
      }
      *(int *)(param_1 + 0x28) = iVar1;
      iVar7 = iVar1;
    } while (iVar6 < iVar2);
  }
  FUN_00271760(param_2,0x2000);
  pcVar12 = "There is no available Stripe instance.\n";
LAB_0027b94c:
  FUN_00271770(pcVar12);
  return 0;
}


