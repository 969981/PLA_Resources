/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011f11e0; name: FUN_011f11e0
 */


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_011f11e0(long param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  
  if (param_2 == 1) {
    piVar8 = *(int **)(param_1 + 0x58);
    if (*(ushort *)((long)piVar8 - (long)*piVar8) < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = ((ushort *)((long)piVar8 - (long)*piVar8))[2];
    puVar1 = (uint *)((long)piVar8 + (ulong)uVar3);
    uVar11 = (ulong)*puVar1;
    puVar1 = (uint *)((long)puVar1 + uVar11);
    puVar2 = (uint *)0x0;
    if (uVar3 != 0) {
      puVar2 = puVar1;
    }
    if (puVar2 != puVar1 + *puVar1) {
      lVar7 = 0;
      do {
        uVar10 = (ulong)*(uint *)((long)puVar2 + lVar7 + 4);
        lVar5 = lVar7 + (uVar10 - (long)*(int *)((long)puVar2 + lVar7 + uVar10 + 4));
        uVar4 = *(ushort *)((long)puVar2 + lVar5 + 4);
        if (((4 < uVar4) && (uVar12 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 8), uVar12 != 0)) &&
           (*(int *)((long)puVar2 + lVar7 + uVar10 + uVar12 + 4) == -1)) {
          if (uVar4 < 7) {
            return 0;
          }
          uVar11 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 10);
          if (uVar11 == 0) {
            return 0;
          }
          return *(undefined4 *)((long)puVar2 + lVar7 + uVar11 + uVar10 + 4);
        }
        lVar7 = lVar7 + 4;
      } while ((long)piVar8 + (((ulong)uVar3 + (ulong)*puVar1 * 4 + uVar11) - (long)puVar2) != lVar7
              );
    }
  }
  else if (param_2 == 0) {
    piVar8 = *(int **)(param_1 + 0x58);
    if (*(ushort *)((long)piVar8 - (long)*piVar8) < 5) {
      halt_baddata();
    }
    uVar3 = ((ushort *)((long)piVar8 - (long)*piVar8))[2];
    puVar1 = (uint *)((long)piVar8 + (ulong)uVar3);
    uVar11 = (ulong)*puVar1;
    puVar1 = (uint *)((long)puVar1 + uVar11);
    puVar2 = (uint *)0x0;
    if (uVar3 != 0) {
      puVar2 = puVar1;
    }
    if (puVar2 != puVar1 + *puVar1) {
      lVar7 = 0;
      uVar6 = 0;
      uVar10 = 0xff;
      do {
        uVar12 = (ulong)*(uint *)((long)puVar2 + lVar7 + 4);
        lVar5 = lVar7 + (uVar12 - (long)*(int *)((long)puVar2 + lVar7 + uVar12 + 4));
        uVar4 = *(ushort *)((long)puVar2 + lVar5 + 4);
        if (((4 < uVar4) && (uVar14 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 8), uVar14 != 0)) &&
           (*(int *)((long)puVar2 + lVar7 + uVar12 + uVar14 + 4) == -1)) goto LAB_011f1318;
        iVar9 = (int)uVar10;
        if (iVar9 == 0xff) {
LAB_011f1378:
          if ((uVar4 < 7) || (uVar10 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 10), uVar10 == 0))
          {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)((long)puVar2 + lVar7 + uVar12 + uVar10 + 4);
          }
          if (uVar4 < 5) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 8);
            if (uVar10 != 0) {
              uVar10 = (ulong)*(uint *)((long)puVar2 + lVar7 + uVar12 + uVar10 + 4);
            }
          }
        }
        else if (uVar4 < 5) {
          if (iVar9 < 0) goto LAB_011f1378;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 8);
          uVar13 = 0;
          if (((uVar14 == 0) ||
              (uVar13 = *(uint *)((long)puVar2 + lVar7 + uVar12 + uVar14 + 4), uVar13 <= param_3))
             && (iVar9 < (int)uVar13)) goto LAB_011f1378;
        }
LAB_011f1318:
        lVar7 = lVar7 + 4;
        if ((long)piVar8 + (((ulong)uVar3 + (ulong)*puVar1 * 4 + uVar11) - (long)puVar2) == lVar7) {
          return uVar6;
        }
      } while( true );
    }
  }
  return 0;
}


